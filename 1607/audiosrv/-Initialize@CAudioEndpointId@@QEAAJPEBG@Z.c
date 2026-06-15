/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180005F40
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18000C060 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800502E8 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800661D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800664A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180012CA0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(CAudioEndpointId *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rdi
  unsigned int v4; // r15d
  __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  char *v8; // rcx
  __int64 v9; // rsi
  int *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+50h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  try
  {
    if ( !a2 )
      goto LABEL_22;
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    if ( !(_DWORD)v5 )
    {
LABEL_22:
      ATL::CSimpleStringT<unsigned short,0>::Empty(this);
      return v4;
    }
    v6 = *(unsigned int *)(*(_QWORD *)this - 16LL);
    v7 = ((__int64)a2 - *(_QWORD *)this) >> 1;
    if ( ((1 - *(_DWORD *)(*(_QWORD *)this - 8LL)) | (*(_DWORD *)(*(_QWORD *)this - 12LL) - (int)v5)) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(this, (unsigned int)v5);
    v8 = *(char **)this;
    if ( v7 <= v6 )
    {
      a2 = (const unsigned __int16 *)&v8[2 * v7];
      v9 = 2LL * (int)v5;
      if ( !v9 )
        goto LABEL_12;
      if ( v8 && a2 )
      {
        memmove(v8, a2, 2LL * (int)v5);
        goto LABEL_12;
      }
    }
    else
    {
      v9 = 2LL * (int)v5;
      if ( !v9 )
        goto LABEL_12;
      if ( v8 )
      {
        memcpy_0(v8, v2, 2LL * (int)v5);
        goto LABEL_12;
      }
    }
    *(_DWORD *)_o__errno(v8, a2) = 22;
    invalid_parameter_noinfo();
LABEL_12:
    if ( (int)v5 < 0 || (int)v5 > *(_DWORD *)(*(_QWORD *)this - 12LL) )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(*(_QWORD *)this - 16LL) = v5;
    *(_WORD *)(v9 + *(_QWORD *)this) = 0;
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = (int *)v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v13 = *v11;
    v4 = *v11;
    if ( v13 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Initialize", 0x8Cu, v13);
  }
  return v4;
}
