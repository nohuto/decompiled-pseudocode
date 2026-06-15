/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCStreamGroup@@V?$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamGroup@@@Z @ 0x140004AD4
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140004310 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140004BB0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>::AddHead(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rbx
  struct ATL::CAtlPlex *v5; // r8
  int v6; // edx
  __int64 *i; // r8
  __int64 v8; // rdx
  __int64 *result; // rax

  v2 = (__int64 *)qword_140055478;
  v4 = StreamGroupList;
  if ( !qword_140055478 )
  {
    v5 = ATL::CAtlPlex::Create(&qword_140055470, (unsigned int)dword_140055480, 0x18uLL);
    if ( !v5 )
      ATL::AtlThrowImpl(-2147024882);
    v6 = dword_140055480;
    v2 = (__int64 *)qword_140055478;
    for ( i = (__int64 *)((char *)v5 + 24 * (unsigned int)(dword_140055480 - 1) + 8); --v6 >= 0; i -= 3 )
    {
      *i = (__int64)v2;
      v2 = i;
      qword_140055478 = (__int64)i;
    }
  }
  v8 = *v2;
  if ( v2 )
    v2[2] = *a2;
  qword_140055478 = v8;
  v2[1] = 0LL;
  *v2 = v4;
  ++qword_140055468;
  if ( StreamGroupList )
    *(_QWORD *)(StreamGroupList + 8) = v2;
  else
    qword_140055460 = (__int64)v2;
  result = v2;
  StreamGroupList = (__int64)v2;
  return result;
}
