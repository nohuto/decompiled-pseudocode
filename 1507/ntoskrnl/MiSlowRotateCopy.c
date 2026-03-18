/*
 * XREFs of MiSlowRotateCopy @ 0x140219888
 * Callers:
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 * Callees:
 *     KeCopyPage @ 0x140186CC0 (KeCopyPage.c)
 *     MiInitializeSlowPte @ 0x14021957C (MiInitializeSlowPte.c)
 *     MiGetPteMappingPair @ 0x140231378 (MiGetPteMappingPair.c)
 *     MiReturnPteMappingPair @ 0x1402314D0 (MiReturnPteMappingPair.c)
 */

char __fastcall MiSlowRotateCopy(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r15
  unsigned __int64 v4; // rbp
  char result; // al
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  result = ((*(_DWORD *)(a3 + 48) >> 6) & 3) == 3;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = a1 - a2;
    do
    {
      MiGetPteMappingPair(1LL, v10, v6);
      v8 = v11;
      v9 = v11 + 8;
      MiInitializeSlowPte(v11, *v3);
      MiInitializeSlowPte(v9, *(unsigned __int64 *)((char *)v3 + v7));
      KeCopyPage(v9 << 25 >> 16, v8 << 25 >> 16);
      result = MiReturnPteMappingPair(v10);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
