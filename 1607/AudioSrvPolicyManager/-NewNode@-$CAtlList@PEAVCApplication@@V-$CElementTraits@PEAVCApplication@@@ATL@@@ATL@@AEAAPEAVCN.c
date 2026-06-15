/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x180009EDC
 * Callers:
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x180008DD4 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E7FC (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001356C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001C924 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  int v11; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v14; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v8 = *(unsigned int *)(a1 + 40);
    if ( v8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x18 )
        goto LABEL_8;
      v8 *= 24LL;
    }
    if ( -1LL - v8 >= 8 )
    {
      v9 = malloc(v8 + 8);
      v10 = v9;
      if ( !v9 )
        goto LABEL_16;
      *v9 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v9;
LABEL_9:
      if ( v10 )
      {
        v11 = *(_DWORD *)(a1 + 40);
        for ( i = &v10[2 * (v11 - 1) + 1 + (unsigned int)(v11 - 1)]; --v11 >= 0; i -= 3 )
        {
          *i = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 32) = i;
        }
        goto LABEL_13;
      }
LABEL_16:
      ATL::AtlThrowImpl(-2147024882);
    }
LABEL_8:
    v10 = 0LL;
    goto LABEL_9;
  }
LABEL_13:
  result = *(__int64 **)(a1 + 32);
  v14 = *result;
  if ( result )
    result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v14;
  result[1] = a3;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
