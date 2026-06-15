/*
 * XREFs of ?_Reallocate@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@IEAAX_K@Z @ 0x180004DE8
 * Callers:
 *     ?_Reserve@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@IEAAX_K@Z @ 0x180004E88 (-_Reserve@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@@std@@IEAAX_K@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180028674 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

char *__fastcall std::vector<CVADServer *>::_Reallocate(__int64 a1, unsigned __int64 a2, bool a3)
{
  char *v5; // rax
  char *v6; // rsi
  __int64 v7; // rdi
  char *result; // rax
  char *v9; // [rsp+50h] [rbp+8h]

  v5 = (char *)std::_Allocate(a2, 8uLL, a3);
  v6 = v5;
  v9 = v5;
  try
  {
    memmove(v5, *(const void **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  catch ( ... )
  {
    std::_Deallocate(v9, a2, 8uLL);
    throw;
  }
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( *(_QWORD *)a1 )
    std::_Deallocate(*(void **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3, 8uLL);
  *(_QWORD *)(a1 + 16) = &v6[8 * a2];
  result = &v6[8 * v7];
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = v6;
  return result;
}
