/*
 * XREFs of ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18000BAD4
 * Callers:
 *     ?GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z @ 0x180009D14 (-GetSelectionScore@SelectionData@StartLayout@@AEAAHAEBU12@@Z.c)
 * Callees:
 *     ?_Xlen@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ @ 0x180008638 (-_Xlen@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180008DF0 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

void **__fastcall std::vector<unsigned short *>::vector<unsigned short *>(void **a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rax
  void *v6; // rax
  size_t v7; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ParsedTaskbarLayout>::_Xlen();
    v5 = std::_Allocate(v4, 8uLL);
    *a1 = v5;
    a1[1] = v5;
    v6 = *a1;
    a1[2] = (char *)*a1 + 8 * v4;
    try
    {
      v7 = (*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFF8uLL;
      a1[1] = (char *)memmove(v6, *(const void **)a2, v7) + v7;
    }
    catch ( ... )
    {
      std::vector<unsigned short *>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
