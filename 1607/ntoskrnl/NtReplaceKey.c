/*
 * XREFs of NtReplaceKey @ 0x1405FA3C0
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpNameFromAttributes @ 0x1404A4444 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1404A4760 (CmCheckNoTxContext.c)
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 */

NTSTATUS __stdcall NtReplaceKey(
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE Key,
        POBJECT_ATTRIBUTES ReplacedObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // r8
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *v21; // rax
  PVOID v22; // rsi
  unsigned int v23; // eax
  _SLIST_ENTRY v25; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING v26; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING v27; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v28[6]; // [rsp+68h] [rbp+7h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v10 = CmCheckNoTxContext();
    if ( v10 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection(&CmpShutdownRundown);
        v10 = -1073741727;
        goto LABEL_24;
      }
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      v10 = CmpNameFromAttributes(ObjectAttributes, PreviousMode, &v26);
      if ( v10 >= 0 )
      {
        v10 = CmpNameFromAttributes(ReplacedObjectAttributes, PreviousMode, &v27);
        if ( v10 >= 0 )
        {
          v10 = CmObReferenceObjectByHandle(Key, 0, v16, PreviousMode, &Object, 0LL);
          if ( v10 >= 0 )
          {
            v17 = Object;
            if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
            {
              memset(v28, 0, sizeof(v28));
              *((_QWORD *)&v25.Next + 1) = &v25;
              v25.Next = &v25;
              v21 = KeGetCurrentThread();
              --v21->KernelApcDisable;
              v22 = Object;
              if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
              {
                v28[0] = v22;
                v28[1] = &v27;
                v28[2] = &v26;
                v10 = CmpCallCallBacks(0x2Du, (__int64)v28, 1, 0x2Eu, 0LL, &v25);
              }
              if ( v10 < 0 )
              {
                if ( v10 == -1073740541 )
                  v10 = 0;
              }
              else
              {
                v23 = CmReplaceKey(*(_QWORD *)(v17[1] + 24LL));
                v10 = CmPostCallbackNotification(46, (__int64)v22, v23, (__int64)v28, &v25);
              }
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
              v17 = Object;
            }
            else
            {
              v10 = -1073741790;
            }
            ObfDereferenceObject(v17);
          }
          ExFreePoolWithTag(v27.Buffer, 0);
        }
        ExFreePoolWithTag(v26.Buffer, 0);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
    }
    ExReleaseRundownProtection(&CmpShutdownRundown);
    goto LABEL_24;
  }
  v10 = -1073741431;
LABEL_24:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v10;
}
