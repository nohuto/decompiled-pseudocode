/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x1400612C0
 * Callers:
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x14009ABD0 (MiCreateCloneChain.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     MiBuildNewCloneDescriptor @ 0x140460EE0 (MiBuildNewCloneDescriptor.c)
 *     MiCreateVadEventBitmap @ 0x1404831E8 (MiCreateVadEventBitmap.c)
 *     ExEnableHandleTracing @ 0x14066C82C (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x1406C00C4 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspExpandQuota @ 0x140012E80 (PspExpandQuota.c)
 *     PspInterlockedMaxQuota @ 0x1400613E0 (PspInterlockedMaxQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v4; // rdi
  char v5; // r15
  unsigned __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned __int64 v13; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 i; // [rsp+50h] [rbp+8h] BYREF

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  v4 = *(unsigned __int64 **)(a1 + 1040);
  v5 = PspResourceFlags;
  _m_prefetchw(v4);
  v6 = *v4;
  _InterlockedOr(v14, 0);
  v7 = 0;
  while ( 2 )
  {
    v8 = v4[8];
LABEL_4:
    for ( i = v8; ; v8 = i )
    {
      v9 = v6 + a2;
      if ( v6 + a2 < v6 )
        return (unsigned int)dword_14038270C;
      if ( v9 <= v8 )
        break;
      if ( (v5 & 1) == 0 || !v4[10] )
        return (unsigned int)dword_14038270C;
      v13 = _InterlockedExchange64((volatile __int64 *)v4 + 9, 0LL);
      if ( v13 )
      {
        v8 = v13 + _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 8, v13);
        goto LABEL_4;
      }
      if ( !PspExpandQuota(0, (__int64)v4, v6, a2, &i) )
        return (unsigned int)dword_14038270C;
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v9, v6);
    v10 = v6 == v11;
    v6 = v11;
    if ( !v10 )
      continue;
    break;
  }
  PspInterlockedMaxQuota(v4 + 1);
  if ( (v5 & 4) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 784), a2);
    PspInterlockedMaxQuota(a1 + 800);
  }
  return v7;
}
