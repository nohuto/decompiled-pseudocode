/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180012A64
 * Callers:
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180005E40 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18000C060 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800117D0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001269C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800129B0 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A1D0 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012C68 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180012CA0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(_QWORD *a1, char *a2, unsigned int a3)
{
  __int64 v3; // rbx
  char *v4; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  char *v8; // rcx

  v3 = (int)a3;
  v4 = a2;
  if ( a3 )
  {
    if ( !a2 )
      ATL::AtlThrowImpl(-2147024809);
    v6 = (__int64)&a2[-*a1] >> 1;
    v7 = *(unsigned int *)(*a1 - 16LL);
    if ( (((*(_DWORD *)(*a1 - 12LL) - a3) | (1 - *(_DWORD *)(*a1 - 8LL))) & 0x80000000) != 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, a3);
    v8 = (char *)*a1;
    if ( v6 <= v7 )
    {
      a2 = &v8[2 * v6];
      if ( !(2 * v3) )
        return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v3);
      if ( v8 && a2 )
      {
        memmove(v8, a2, 2 * v3);
        return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v3);
      }
    }
    else
    {
      if ( !(2 * v3) )
        return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v3);
      if ( v8 )
      {
        memcpy_0(v8, v4, 2 * v3);
        return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v3);
      }
    }
    *(_DWORD *)_o__errno(v8, a2) = 22;
    invalid_parameter_noinfo();
    return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v3);
  }
  return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
}
