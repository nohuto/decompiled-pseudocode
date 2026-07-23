/*
 * XREFs of ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400022E0
 * Callers:
 *     SmProcessCreateRequest @ 0x1403E517C (SmProcessCreateRequest.c)
 * Callees:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400023E8 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInitialize(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x19B0uLL);
  *(_BYTE *)(a1 + 5860) = 2;
  ST_STORE<SM_TRAITS>::StInitialize(a1);
  *(_QWORD *)(a1 + 5896) = a1 + 5888;
  *(_QWORD *)(a1 + 5888) = 0LL;
  *(_QWORD *)(a1 + 5912) = a1 + 5904;
  *(_QWORD *)(a1 + 5904) = 0LL;
  *(_QWORD *)(a1 + 5928) = a1 + 5920;
  *(_QWORD *)(a1 + 5920) = 0LL;
  *(_QWORD *)(a1 + 5880) = 0LL;
  *(_WORD *)(a1 + 5992) = 0;
  *(_BYTE *)(a1 + 5994) = 6;
  *(_DWORD *)(a1 + 5996) = 0;
  *(_QWORD *)(a1 + 6008) = a1 + 6000;
  *(_QWORD *)(a1 + 6000) = a1 + 6000;
  *(_WORD *)(a1 + 5968) = 0;
  *(_BYTE *)(a1 + 5970) = 6;
  *(_DWORD *)(a1 + 5972) = 0;
  *(_QWORD *)(a1 + 5984) = a1 + 5976;
  *(_QWORD *)(a1 + 5976) = a1 + 5976;
  *(_WORD *)(a1 + 6016) = 1;
  *(_BYTE *)(a1 + 6018) = 6;
  *(_DWORD *)(a1 + 6020) = 0;
  *(_QWORD *)(a1 + 6032) = a1 + 6024;
  *(_QWORD *)(a1 + 6024) = a1 + 6024;
  memset((void *)(a1 + 6448), 0, 0x70uLL);
  result = a1 + 6464;
  *(_WORD *)(a1 + 6456) = 1;
  *(_BYTE *)(a1 + 6458) = 6;
  *(_DWORD *)(a1 + 6460) = 0;
  *(_QWORD *)(a1 + 6472) = a1 + 6464;
  *(_QWORD *)(a1 + 6464) = a1 + 6464;
  return result;
}
