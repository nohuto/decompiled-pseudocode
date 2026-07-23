/*
 * XREFs of KiSelectProcessorToPreempt @ 0x1401D804C
 * Callers:
 *     KiHeteroChooseTargetProcessor @ 0x1401D7D70 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall KiSelectProcessorToPreempt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int8 *v8; // rdx
  __int64 v9; // rdi
  int v10; // ebx
  char *v11; // r14
  char v12; // r10
  unsigned int v13; // r9d
  int v14; // edx
  unsigned int v15; // ecx
  char *v16; // r8
  _BYTE v18[64]; // [rsp+20h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a2 + 24896) & a3;
  if ( ((v5 - 1) & v5) == 0 )
    return a2;
  v8 = *(unsigned __int8 **)(a2 + 24904);
  v9 = v8[593];
  v10 = v8[592];
  v11 = &v18[v9];
  memmove(&v18[v9], v8 + 528, v8[592]);
  v12 = *(_BYTE *)(a1 + 195);
  v13 = v9 + v10;
  v14 = -1;
  if ( a4 )
  {
    v15 = v9;
    if ( (unsigned int)v9 >= v13 )
      goto LABEL_16;
    v16 = &v18[v9];
    do
    {
      if ( ((1LL << v15) & a4) != 0 && *v16 < v12 )
      {
        v12 = *v16;
        v14 = v15;
      }
      ++v15;
      ++v16;
    }
    while ( v15 < v13 );
    if ( v14 >= 0 )
      return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 1616) + v14]];
  }
  while ( (unsigned int)v9 < v13 )
  {
    if ( ((1LL << v9) & v5) != 0 && *v11 < v12 )
    {
      v12 = *v11;
      v14 = v9;
    }
    LODWORD(v9) = v9 + 1;
    ++v11;
  }
LABEL_16:
  if ( v14 >= 0 )
    return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 1616) + v14]];
  return a2;
}
