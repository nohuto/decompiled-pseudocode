/*
 * XREFs of SmWdWorkItemRegister @ 0x1402096E8
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall SmWdWorkItemRegister(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  __int16 v6; // r9
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // al
  signed __int32 v9; // [rsp+20h] [rbp-18h]
  signed __int32 v10; // [rsp+50h] [rbp+18h]

  if ( *(_BYTE *)(a3 + 9) )
  {
    _m_prefetchw((const void *)(a3 + 8));
    v10 = *(_DWORD *)(a3 + 8);
    v6 = a4 << 8;
    do
    {
      v9 = v10;
      v10 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(a3 + 8),
              ((unsigned __int16)v10 ^ (unsigned __int16)(v6 + (v10 & 0xFF00))) & 0xFF00 ^ v10,
              v10);
    }
    while ( v10 != v9 );
  }
  else
  {
    v7 = (KSPIN_LOCK *)(a1 + 144);
    *(_DWORD *)(a3 + 8) ^= (*(_DWORD *)(a3 + 8) ^ (a2 << 19)) & 0xF80000;
    *(_BYTE *)(a3 + 9) = a4 + 1;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
    *(_QWORD *)a3 = *(_DWORD *)a3 & 7 | ((**(_QWORD **)(a1 + 136) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    **(_QWORD **)(a1 + 136) = a3 | **(_DWORD **)(a1 + 136) & 7;
    *(_QWORD *)(a1 + 136) = a3;
    KeReleaseSpinLock(v7, v8);
  }
}
