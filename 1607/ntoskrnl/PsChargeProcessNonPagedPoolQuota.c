/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x140029750
 * Callers:
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x14010AA80 (MiCreateCloneChain.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiCreateVadEventBitmap @ 0x1404A66FC (MiCreateVadEventBitmap.c)
 *     MiBuildNewCloneDescriptor @ 0x14050A7A4 (MiBuildNewCloneDescriptor.c)
 *     ExEnableHandleTracing @ 0x1406AD4DC (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x14070C14C (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspExpandQuota @ 0x1400C4764 (PspExpandQuota.c)
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
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 i; // [rsp+50h] [rbp+8h] BYREF

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  v4 = *(unsigned __int64 **)(a1 + 1040);
  v5 = PspResourceFlags[0];
  _m_prefetchw(v4);
  v6 = *v4;
  _InterlockedOr(v19, 0);
  v7 = 0;
  while ( 2 )
  {
    v8 = v4[8];
LABEL_4:
    for ( i = v8; ; v8 = i )
    {
      v9 = v6 + a2;
      if ( v6 + a2 < v6 )
        return (unsigned int)dword_1403AA764;
      if ( v9 <= v8 )
        break;
      if ( (v5 & 1) == 0 || !v4[10] )
        return (unsigned int)dword_1403AA764;
      v18 = _InterlockedExchange64((volatile __int64 *)v4 + 9, 0LL);
      if ( v18 )
      {
        v8 = v18 + _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 8, v18);
        goto LABEL_4;
      }
      if ( !(unsigned __int8)PspExpandQuota(0, (_DWORD)v4, v6, a2, (__int64)&i) )
        return (unsigned int)dword_1403AA764;
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v9, v6);
    v10 = v6 == v11;
    v6 = v11;
    if ( !v10 )
      continue;
    break;
  }
  _m_prefetchw(v4 + 1);
  v12 = v4[1];
  if ( v9 > v12 )
  {
    do
    {
      v17 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, v9, v12);
    }
    while ( v12 != v17 && v9 > v12 );
  }
  if ( (v5 & 4) != 0 )
  {
    v13 = a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 784), a2);
    _m_prefetchw((const void *)(a1 + 800));
    v14 = *(_QWORD *)(a1 + 800);
    if ( v13 > v14 )
    {
      do
      {
        v16 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 800), v13, v14);
      }
      while ( v14 != v16 && v13 > v14 );
    }
  }
  return v7;
}
