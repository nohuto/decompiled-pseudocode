/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVADServer@@PEAV312@1@Z @ 0x18000D518
 * Callers:
 *     ?AddHead@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCVADServer@@@Z @ 0x18000D628 (-AddHead@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAPEAU__POSI.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18002C6C0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  __int64 v7; // rdx
  struct ATL::CAtlPlex *v8; // r8
  int v9; // edx
  __int64 *i; // rcx

  result = (__int64 *)qword_1800CA550;
  if ( !qword_1800CA550 )
  {
    v8 = ATL::CAtlPlex::Create(&qword_1800CA548, (unsigned int)dword_1800CA558, 0x18uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = dword_1800CA558;
    result = (__int64 *)qword_1800CA550;
    for ( i = (__int64 *)((char *)v8
                        + 16 * (unsigned int)(dword_1800CA558 - 1)
                        + 8 * (unsigned int)(dword_1800CA558 - 1)
                        + 8); --v9 >= 0; i -= 3 )
    {
      *i = (__int64)result;
      result = i;
      qword_1800CA550 = (__int64)i;
    }
  }
  v7 = *result;
  if ( result )
    result[2] = *a2;
  qword_1800CA550 = v7;
  result[1] = 0LL;
  *result = a4;
  ++qword_1800CA540;
  return result;
}
