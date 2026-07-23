/*
 * XREFs of SepBlockAccessForLogonSession @ 0x140533FF8
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140533FD0 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SepBlockAccessForLogonSession(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v5; // rbp
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = (unsigned int)(1529154084 * *a1) >> 28;
  v3 = SepLogonSessions + 8 * v2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = &SepRmDbLock + (v2 & 3);
  ExAcquireResourceExclusiveLite(v5, 1u);
  v6 = 0;
  do
  {
    v3 = *(_QWORD *)v3;
    if ( !v3 )
    {
      v6 = -1073741729;
      goto LABEL_8;
    }
  }
  while ( *(_QWORD *)(v3 + 160) != PsGetCurrentServerSilo()
       || *a1 != *(_DWORD *)(v3 + 8)
       || a1[1] != *(_DWORD *)(v3 + 12) );
  *(_DWORD *)(v3 + 32) |= 0x20u;
LABEL_8:
  ExReleaseResourceLite(v5);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v6;
}
