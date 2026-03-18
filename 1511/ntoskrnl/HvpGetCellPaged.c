/*
 * XREFs of HvpGetCellPaged @ 0x140406480
 * Callers:
 *     <none>
 * Callees:
 *     HvpFaultCellWithClustering @ 0x140040C60 (HvpFaultCellWithClustering.c)
 *     HvpMapEntryGetBlockAddress @ 0x140040CA0 (HvpMapEntryGetBlockAddress.c)
 */

__int64 __fastcall HvpGetCellPaged(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v5; // r10
  __int64 result; // rax
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN v8; // [rsp+58h] [rbp+20h] BYREF

  if ( HvShutdownComplete == 1 )
    return 0LL;
  HvpMapEntryGetBlockAddress(
    5LL * ((a2 >> 12) & 0x1FF),
    (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(632 * ((unsigned __int64)a2 >> 31) + a1 + 1408)
                                         + 8LL * ((a2 >> 21) & 0x3FF))
                             + 40LL * ((a2 >> 12) & 0x1FF)),
    &v8,
    v7);
  HvpFaultCellWithClustering();
  result = v5 + 4;
  *a3 = a2 ^ ((unsigned __int8)a2 ^ v8) & 1;
  return result;
}
