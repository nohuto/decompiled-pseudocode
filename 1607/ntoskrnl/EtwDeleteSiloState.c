/*
 * XREFs of EtwDeleteSiloState @ 0x1406A3248
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x14067E868 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140007A98 (ExFreeCacheAwareRundownProtection.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 */

void __fastcall EtwDeleteSiloState(char *a1)
{
  unsigned int v2; // ecx
  _QWORD *v3; // rax
  __int64 v4; // rbp
  unsigned int v5; // r14d
  unsigned __int64 *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rsi
  signed int i; // ecx
  PEX_RUNDOWN_REF_CACHE_AWARE *v10; // rbx

  if ( !a1 )
    KeBugCheck(0x11Du);
  v2 = 0;
  v3 = a1 + 912;
  v4 = 64LL;
  do
  {
    if ( *v3 != 1LL )
      KeBugCheck(0x11Du);
    ++v2;
    ++v3;
  }
  while ( v2 < 0x40 );
  v5 = 0;
  v6 = (unsigned __int64 *)(a1 + 1472);
  do
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, v8, (ULONG_PTR)v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    for ( i = 0; (unsigned int)i < 3; ++i )
    {
      if ( (unsigned __int64 *)v6[2 * i - 6] != &v6[2 * i - 6] )
        KeBugCheck(0x11Du);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveCriticalRegion();
    ++v5;
    v6 += 7;
  }
  while ( v5 < 0x40 );
  v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 400);
  do
  {
    if ( *v10 )
      ExFreeCacheAwareRundownProtection(*v10);
    ++v10;
    --v4;
  }
  while ( v4 );
  ExFreePoolWithTag(a1, 0x61777445u);
}
