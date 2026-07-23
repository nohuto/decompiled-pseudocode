/*
 * XREFs of RtlSparseBitmapCtxCleanup @ 0x180100380
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpSparseBitmapRangeArrayCleanup @ 0x1801013F4 (RtlpSparseBitmapRangeArrayCleanup.c)
 */

void __fastcall RtlSparseBitmapCtxCleanup(__int64 a1)
{
  __int64 i; // rdi

  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 52); i = (unsigned int)(i + 1) )
    {
      if ( RtlpSparseBitmapCheckRangeArrayPage(a1, i) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i) )
          (*(void (**)(void))(a1 + 40))();
      }
      else
      {
        LODWORD(i) = i + 511;
      }
    }
    RtlpSparseBitmapRangeArrayCleanup(a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 24));
  }
}
