/*
 * XREFs of ?AddHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIAudioSessionInfo@@@Z @ 0x1800303E8
 * Callers:
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x1800028DC (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18001C58C (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002A1F8 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180031518 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::AddHead(
        struct ATL::CAtlPlex **a1,
        _QWORD *a2)
{
  struct ATL::CAtlPlex *v3; // rsi
  struct ATL::CAtlPlex *v5; // r8
  int v6; // edx
  struct ATL::CAtlPlex *i; // rcx
  struct ATL::CAtlPlex *v8; // rcx
  struct ATL::CAtlPlex *v9; // rdx
  struct ATL::CAtlPlex *result; // rax

  v3 = *a1;
  if ( !a1[4] )
  {
    v5 = ATL::CAtlPlex::Create(a1 + 3, *((unsigned int *)a1 + 10), 0x18uLL);
    if ( !v5 )
      ATL::AtlThrowImpl(-2147024882);
    v6 = *((_DWORD *)a1 + 10);
    for ( i = (struct ATL::CAtlPlex *)((char *)v5 + 16 * (v6 - 1) + 8 * (unsigned int)(v6 - 1) + 8);
          --v6 >= 0;
          i = (struct ATL::CAtlPlex *)((char *)i - 24) )
    {
      *(_QWORD *)i = a1[4];
      a1[4] = i;
    }
  }
  v8 = a1[4];
  v9 = *(struct ATL::CAtlPlex **)v8;
  if ( v8 )
    *((_QWORD *)v8 + 2) = *a2;
  a1[4] = v9;
  *((_QWORD *)v8 + 1) = 0LL;
  *(_QWORD *)v8 = v3;
  a1[2] = (struct ATL::CAtlPlex *)((char *)a1[2] + 1);
  if ( *a1 )
    *((_QWORD *)*a1 + 1) = v8;
  else
    a1[1] = v8;
  result = v8;
  *a1 = v8;
  return result;
}
