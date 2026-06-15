/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18000D408
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18000BE18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180083C18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180083FE4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180017928 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(CAudioEndpointId *this, const unsigned __int16 *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  char *v8; // rcx
  rsize_t v9; // r9
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+60h] [rbp+8h]

  v4 = 0;
  try
  {
    if ( !a2 )
      goto LABEL_16;
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    if ( (_DWORD)v5 )
    {
      v6 = *(unsigned int *)(*(_QWORD *)this - 16LL);
      v7 = ((__int64)a2 - *(_QWORD *)this) >> 1;
      if ( ((1 - *(_DWORD *)(*(_QWORD *)this - 8LL)) | (*(_DWORD *)(*(_QWORD *)this - 12LL) - (int)v5)) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(this, (unsigned int)v5);
      v8 = *(char **)this;
      v9 = 2LL * (int)v5;
      if ( v7 <= v6 )
        memmove_s(v8, v9, &v8[2 * v7], v9);
      else
        memcpy_s(v8, v9, a2, v9);
      if ( (int)v5 < 0 || (int)v5 > *(_DWORD *)(*(_QWORD *)this - 12LL) )
        ATL::AtlThrowImpl(-2147024809);
      *(_DWORD *)(*(_QWORD *)this - 16LL) = v5;
      *(_WORD *)(2LL * (int)v5 + *(_QWORD *)this) = 0;
    }
    else
    {
LABEL_16:
      ATL::CSimpleStringT<unsigned short,0>::Empty(this);
    }
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _resetstkoflw();
    v13 = *(_DWORD *)v11;
    v4 = *(_DWORD *)v11;
    if ( v13 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        10LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v13);
    }
  }
  return v4;
}
