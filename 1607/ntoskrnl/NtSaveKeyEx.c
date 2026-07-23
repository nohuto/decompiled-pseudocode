/*
 * XREFs of NtSaveKeyEx @ 0x1405FAAF0
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSaveKeyEx @ 0x14015CFF0 (ZwSaveKeyEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmConvertHandleToKernelHandle @ 0x1404A43A8 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1404A4760 (CmCheckNoTxContext.c)
 *     CmDumpKey @ 0x14060C16C (CmDumpKey.c)
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406235F8 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  void *v12; // rdx
  void *v13; // r8
  unsigned int v14; // r14d
  ULONG v15; // r8d
  HANDLE v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rax
  PVOID v21; // rsi
  unsigned int v22; // eax
  HANDLE FileHandlea; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  _SLIST_ENTRY v26; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v27[6]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandlea; // [rsp+C8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v10 = CmCheckNoTxContext();
    if ( v10 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection(&CmpShutdownRundown);
        v10 = -1073741727;
        goto LABEL_31;
      }
      if ( ((Flags - 1) & 0xFFFFFFFC) != 0 || (v14 = 3, Flags == 3) )
      {
        ExReleaseRundownProtection(&CmpShutdownRundown);
        v10 = -1073741811;
        goto LABEL_31;
      }
      if ( PreviousMode == 1 )
      {
        KeyHandlea = 0LL;
        FileHandlea = 0LL;
        v10 = CmConvertHandleToKernelHandle(KeyHandle, v12, 1, 0, &KeyHandlea);
        if ( v10 >= 0 )
        {
          v10 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
          if ( v10 >= 0 )
          {
            v15 = Flags;
            v16 = FileHandlea;
            v10 = ZwSaveKeyEx(KeyHandlea, FileHandlea, v15);
            if ( v16 )
              ZwClose(v16);
          }
          if ( KeyHandlea )
            ZwClose(KeyHandlea);
        }
      }
      else
      {
        v10 = CmObReferenceObjectByHandle(KeyHandle, 0, v13, PreviousMode, &Object, 0LL);
        if ( v10 >= 0 )
        {
          memset(v27, 0, sizeof(v27));
          *((_QWORD *)&v26.Next + 1) = &v26;
          v26.Next = &v26;
          v20 = KeGetCurrentThread();
          --v20->KernelApcDisable;
          v21 = Object;
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
          {
            v27[0] = v21;
            v27[1] = FileHandle;
            LODWORD(v27[2]) = Flags;
            v10 = CmpCallCallBacks(0x2Bu, (__int64)v27, 1, 0x2Cu, 0LL, &v26);
          }
          if ( v10 < 0 )
          {
            if ( v10 == -1073740541 )
              v10 = 0;
          }
          else
          {
            if ( Flags == 4 )
            {
              v22 = CmDumpKey(v21, FileHandle);
            }
            else
            {
              if ( Flags == 2 )
                v14 = 5;
              v22 = CmSaveKey(v21, FileHandle, v14);
            }
            v10 = CmPostCallbackNotification(44, (__int64)v21, v22, (__int64)v27, &v26);
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
          ObfDereferenceObject(Object);
        }
      }
    }
    ExReleaseRundownProtection(&CmpShutdownRundown);
  }
  else
  {
    v10 = -1073741431;
  }
LABEL_31:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v10;
}
