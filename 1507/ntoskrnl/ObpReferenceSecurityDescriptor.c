/*
 * XREFs of ObpReferenceSecurityDescriptor @ 0x1404CFD70
 * Callers:
 *     ObpGetObjectSecurity @ 0x1404CFBCC (ObpGetObjectSecurity.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1404D05E0 (ObQuerySecurityDescriptorInfo.c)
 *     ObpAdjustCreatorAccessState @ 0x1404D0C60 (ObpAdjustCreatorAccessState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall ObpReferenceSecurityDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v5; // r8
  signed __int64 v6; // rax
  signed __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  bool v10; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdi
  __int64 v16; // r9
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax

  _m_prefetchw((const void *)(a1 + 40));
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v5 - 1, v5);
      if ( v5 == v6 )
        break;
      v5 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  v7 = v5;
  v8 = v5 & 0xF;
  v9 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = (_DWORD)v8 == 1;
  if ( !(_DWORD)v8 )
  {
    if ( v9 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = KeAbPreAcquire(a1 + 16, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 16), v15, a1 + 16, v16);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      v9 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 16), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 16));
      KeAbPostRelease(a1 + 16);
      v17 = KeGetCurrentThread();
      v18 = v17->KernelApcDisable + 1;
      v17->KernelApcDisable = v18;
      if ( !v18
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
        && !v17->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_7;
    }
    v10 = 0;
  }
  if ( !v10 )
    return v9;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 16), 0xFuLL) <= 0 )
    __fastfail(0xEu);
LABEL_7:
  _m_prefetchw((const void *)(a1 + 40));
  v12 = *(_QWORD *)(a1 + 40);
  while ( (v12 & 0xF) == 0 )
  {
    if ( v9 != (v12 & 0xFFFFFFFFFFFFFFF0uLL) )
      break;
    v13 = v12;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v12 + 15, v12);
    if ( v13 == v12 )
      return v9;
  }
  ObDereferenceSecurityDescriptor(v9, 0xFu, v8, a4);
  return v9;
}
