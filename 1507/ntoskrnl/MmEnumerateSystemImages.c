/*
 * XREFs of MmEnumerateSystemImages @ 0x14051C530
 * Callers:
 *     EtwpSysModuleRunDown @ 0x14051CC04 (EtwpSysModuleRunDown.c)
 *     ExpCovQueryInformation @ 0x1406F8EF0 (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1406F9818 (ExpCovResetInformation.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140020228 (PsIsSystemProcess.c)
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MmGetNextSession @ 0x1400FD460 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v4; // ebp
  _KPROCESS *Process; // rbx
  unsigned __int64 v6; // r14
  PVOID *v7; // rsi
  unsigned __int64 v8; // r15
  _KPROCESS *v9; // rdi
  __int16 v10; // ax
  _KPROCESS *i; // rcx
  _KPROCESS *NextSession; // rax
  struct _KTHREAD *Lock; // [rsp+20h] [rbp-78h]
  _BYTE v15[48]; // [rsp+28h] [rbp-70h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = 0LL;
  if ( !PsIsSystemProcess(Process) )
    v6 = Process[1].ActiveProcessors.Bitmap[2];
  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v7 = (PVOID *)PsLoadedModuleList;
  do
  {
    v8 = (unsigned __int64)v7[6];
    v9 = 0LL;
    if ( MmIsSessionAddress(v8) && (!v6 || !MiSessionLookupImage(v8)) )
    {
      for ( i = 0LL; ; i = v9 )
      {
        NextSession = (_KPROCESS *)MmGetNextSession(i);
        v9 = NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)v15) >= 0 )
        {
          if ( MiSessionLookupImage(v8) )
            goto LABEL_5;
          MmDetachSession((__int64)v9, (struct _KTHREAD *)v15);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v4 = a1(v7, a2);
    if ( v9 )
    {
      MmDetachSession((__int64)v9, (struct _KTHREAD *)v15);
      ObfDereferenceObject(v9);
    }
    if ( v4 < 0 )
      break;
LABEL_8:
    v7 = (PVOID *)*v7;
  }
  while ( v7 != &PsLoadedModuleList );
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v10 = Lock->KernelApcDisable + 1;
  Lock->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)Lock->ApcState.ApcListHead[0].Flink != &Lock->152
    && !Lock->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v4;
}
