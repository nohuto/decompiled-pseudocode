/*
 * XREFs of ObpReferenceSecurityDescriptor @ 0x140405D70
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x140402F10 (ObpAdjustCreatorAccessState.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1404030FC (ObQuerySecurityDescriptorInfo.c)
 *     ObpGetObjectSecurity @ 0x140405BA0 (ObpGetObjectSecurity.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall ObpReferenceSecurityDescriptor(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rdi
  int v5; // r8d
  unsigned __int64 v6; // rdi
  bool v7; // zf
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdi

  _m_prefetchw((const void *)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 40);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = v5 == 1;
  if ( !v5 )
  {
    if ( v6 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = KeAbPreAcquire(a1 + 16, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 16), v12, a1 + 16);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      v6 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 16), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 16));
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegion();
      goto LABEL_7;
    }
    v7 = 0;
  }
  if ( !v7 )
    return v6;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 16), 0xFuLL) <= 0 )
    __fastfail(0xEu);
LABEL_7:
  _m_prefetchw((const void *)(a1 + 40));
  v9 = *(_QWORD *)(a1 + 40);
  while ( (v9 & 0xF) == 0 )
  {
    if ( v6 != (v9 & 0xFFFFFFFFFFFFFFF0uLL) )
      break;
    v10 = v9;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v9 + 15, v9);
    if ( v10 == v9 )
      return v6;
  }
  ObDereferenceSecurityDescriptor(v6, 15LL);
  return v6;
}
