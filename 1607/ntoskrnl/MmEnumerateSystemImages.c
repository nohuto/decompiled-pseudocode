/*
 * XREFs of MmEnumerateSystemImages @ 0x140499990
 * Callers:
 *     EtwpSysModuleRunDown @ 0x140499864 (EtwpSysModuleRunDown.c)
 *     ExpCovQueryInformation @ 0x1406B72F0 (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1406B7B6C (ExpCovResetInformation.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400137C0 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsIsSystemProcess @ 0x140071EA8 (PsIsSystemProcess.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiSessionLookupImage @ 0x140087EC4 (MiSessionLookupImage.c)
 *     MmGetNextSession @ 0x140087F10 (MmGetNextSession.c)
 *     MiAcquireResourceSharedLite @ 0x1400883F0 (MiAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v4; // ebp
  _KPROCESS *Process; // rbx
  unsigned __int64 v6; // r14
  struct _KTHREAD *Lock; // rsi
  PVOID *v8; // rdi
  unsigned __int64 v9; // r15
  void *v10; // rbx
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  _BYTE v14[48]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( PsIsSystemProcess(Process) )
    v6 = 0LL;
  else
    v6 = Process[1].ActiveProcessors.Bitmap[2];
  Lock = MmAcquireLoadLock();
  MiAcquireResourceSharedLite((__int64)Lock);
  v8 = (PVOID *)PsLoadedModuleList;
  do
  {
    v9 = (unsigned __int64)v8[6];
    v10 = 0LL;
    if ( MmIsSessionAddress(v9) && (!v6 || !MiSessionLookupImage(v9)) )
    {
      for ( i = 0LL; ; i = v10 )
      {
        NextSession = MmGetNextSession(i);
        v10 = (void *)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, (__int64)v14);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v4 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v14);
      ObfDereferenceObject(v10);
    }
    if ( v4 < 0 )
      break;
LABEL_8:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  MiReleaseResourceLite((__int64)Lock);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v4;
}
