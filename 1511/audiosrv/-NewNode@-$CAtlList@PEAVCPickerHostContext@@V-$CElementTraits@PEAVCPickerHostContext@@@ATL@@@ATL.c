/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x180039108
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001D080 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180031518 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  struct ATL::CAtlPlex *v7; // r8
  int v8; // edx
  __int64 *i; // rcx
  __int64 v10; // rdx

  result = (__int64 *)qword_1800E55D0;
  if ( !qword_1800E55D0 )
  {
    v7 = ATL::CAtlPlex::Create(&qword_1800E55C8, (unsigned int)dword_1800E55D8, 0x18uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = dword_1800E55D8;
    result = (__int64 *)qword_1800E55D0;
    for ( i = (__int64 *)((char *)v7
                        + 16 * (unsigned int)(dword_1800E55D8 - 1)
                        + 8 * (unsigned int)(dword_1800E55D8 - 1)
                        + 8); --v8 >= 0; i -= 3 )
    {
      *i = (__int64)result;
      result = i;
      qword_1800E55D0 = (__int64)i;
    }
  }
  v10 = *result;
  if ( result )
    result[2] = *a2;
  qword_1800E55D0 = v10;
  result[1] = 0LL;
  *result = a4;
  ++qword_1800E55C0;
  return result;
}
