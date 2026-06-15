/*
 * XREFs of ?NewNode@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@AEAAPEAVCNode@12@KPEAV312@0@Z @ 0x18009F410
 * Callers:
 *     ?AddHead@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z @ 0x18009F024 (-AddHead@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180007234 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::NewNode(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  struct ATL::CAtlPlex *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v11; // rcx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v7 + 16 * (v8 - 1) + 8 * (unsigned int)(v8 - 1) + 8); --v8 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v11 = *result;
  if ( result )
    *((_DWORD *)result + 4) = a2;
  *(_QWORD *)(a1 + 32) = v11;
  result[1] = 0LL;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
