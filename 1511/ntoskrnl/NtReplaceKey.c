/*
 * XREFs of NtReplaceKey @ 0x1405DC458
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpNameFromAttributes @ 0x1403DBE88 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1403DC18C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 */

NTSTATUS __stdcall NtReplaceKey(
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE Key,
        POBJECT_ATTRIBUTES ReplacedObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  struct _KTHREAD *v9; // rax
  void *v10; // r8
  _QWORD *v11; // rdi
  struct _KTHREAD *v12; // rax
  PVOID v13; // rsi
  unsigned int v14; // eax
  _QWORD v16[2]; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING v17; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING v18; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v19[6]; // [rsp+68h] [rbp+7h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v7 = CmCheckNoTxContext();
    if ( v7 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        v7 = -1073741727;
        goto LABEL_24;
      }
      v9 = KeGetCurrentThread();
      --v9->KernelApcDisable;
      v7 = CmpNameFromAttributes(ObjectAttributes, PreviousMode, &v17);
      if ( v7 >= 0 )
      {
        v7 = CmpNameFromAttributes(ReplacedObjectAttributes, PreviousMode, &v18);
        if ( v7 >= 0 )
        {
          v7 = CmObReferenceObjectByHandle(Key, 0, v10, PreviousMode, &Object, 0LL);
          if ( v7 >= 0 )
          {
            v11 = Object;
            if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
            {
              memset(v19, 0, sizeof(v19));
              v16[1] = v16;
              v16[0] = v16;
              v12 = KeGetCurrentThread();
              --v12->KernelApcDisable;
              v13 = Object;
              if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
              {
                v19[0] = v13;
                v19[1] = &v18;
                v19[2] = &v17;
                v7 = CmpCallCallBacks(0x2Du, (__int64)v19, 1, 0x2Eu, 0LL, (__int64)v16);
              }
              if ( v7 < 0 )
              {
                if ( v7 == -1073740541 )
                  v7 = 0;
              }
              else
              {
                v14 = CmReplaceKey(*(_QWORD *)(v11[1] + 32LL));
                v7 = CmPostCallbackNotification(0x2Eu, (__int64)v13, v14, (__int64)v19, v16);
              }
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v11 = Object;
            }
            else
            {
              v7 = -1073741790;
            }
            ObfDereferenceObject(v11);
          }
          ExFreePoolWithTag(v18.Buffer, 0);
        }
        ExFreePoolWithTag(v17.Buffer, 0);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    goto LABEL_24;
  }
  v7 = -1073741431;
LABEL_24:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
