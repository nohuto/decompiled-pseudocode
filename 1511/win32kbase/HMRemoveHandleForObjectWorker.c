/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x1C0077BDC
 * Callers:
 *     HMDestroyUnlockedObject @ 0x1C0041660 (HMDestroyUnlockedObject.c)
 *     HMRemoveHandleForObject @ 0x1C0077B60 (HMRemoveHandleForObject.c)
 * Callees:
 *     HMCleanupGrantedHandle @ 0x1C00AF9B0 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rdx

  --giheCount;
  if ( (*(_BYTE *)(a1 + 17) & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**(_QWORD **)a1);
    *(_BYTE *)(a1 + 17) &= ~0x20u;
  }
  v2 = *(_WORD *)(a1 + 18) + 1;
  if ( *(_WORD *)(a1 + 18) == 0xFFFE )
    v2 = 1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 18) = v2;
  v3 = (a1 - qword_1C0102D48) / 24;
  if ( (v3 & 1) != 0 )
  {
    *(_QWORD *)a1 = qword_1C0103528;
    qword_1C0103528 = v3;
  }
  else
  {
    *(_QWORD *)a1 = qword_1C0103520;
    qword_1C0103520 = v3;
  }
  return 1LL;
}
