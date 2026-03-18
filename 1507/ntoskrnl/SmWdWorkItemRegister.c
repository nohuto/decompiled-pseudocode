/*
 * XREFs of SmWdWorkItemRegister @ 0x140258878
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140140BD0 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall SmWdWorkItemRegister(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  __int16 v6; // r9
  __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int32 v10; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int32 v12; // [rsp+50h] [rbp+18h]

  if ( *(_BYTE *)(a3 + 9) )
  {
    _m_prefetchw((const void *)(a3 + 8));
    v12 = *(_DWORD *)(a3 + 8);
    v6 = a4 << 8;
    do
    {
      v10 = v12;
      v12 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(a3 + 8),
              ((unsigned __int16)v12 ^ (unsigned __int16)(v6 + (v12 & 0xFF00))) & 0xFF00 ^ v12,
              v12);
      result = v12;
    }
    while ( v12 != v10 );
  }
  else
  {
    v8 = (volatile signed __int32 *)(a1 + 144);
    *(_DWORD *)(a3 + 8) ^= (*(_DWORD *)(a3 + 8) ^ (a2 << 19)) & 0xF80000;
    *(_BYTE *)(a3 + 9) = a4 + 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 144));
    }
    else if ( _interlockedbittestandset64(v8, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 144));
    }
    *(_QWORD *)a3 = *(_DWORD *)a3 & 7 | ((**(_QWORD **)(a1 + 136) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    **(_QWORD **)(a1 + 136) = a3 | **(_DWORD **)(a1 + 136) & 7;
    *(_QWORD *)(a1 + 136) = a3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v8, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
