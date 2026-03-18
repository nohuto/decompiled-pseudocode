/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x1C007B26C
 * Callers:
 *     HMDestroyUnlockedObject @ 0x1C003A710 (HMDestroyUnlockedObject.c)
 *     HMRemoveHandleForObject @ 0x1C007B1F0 (HMRemoveHandleForObject.c)
 * Callees:
 *     HMCleanupGrantedHandle @ 0x1C00B96B0 (HMCleanupGrantedHandle.c)
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
  v3 = (a1 - qword_1C011A128) / 24;
  if ( (v3 & 1) != 0 )
  {
    *(_QWORD *)a1 = qword_1C011A940;
    qword_1C011A940 = v3;
  }
  else
  {
    *(_QWORD *)a1 = qword_1C011A938;
    qword_1C011A938 = v3;
  }
  return 1LL;
}
