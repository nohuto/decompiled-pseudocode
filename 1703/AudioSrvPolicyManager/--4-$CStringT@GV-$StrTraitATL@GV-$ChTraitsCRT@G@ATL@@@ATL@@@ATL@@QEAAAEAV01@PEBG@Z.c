/*
 * XREFs of ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x180009264
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800067B0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180006E94 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000FB80 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180009E8C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18002164E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180021B58 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        _QWORD *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  char *v9; // rcx
  __int64 v10; // rsi
  int *v11; // rax
  volatile signed __int32 *v12; // rdx
  __int64 v13; // rbx

  v5 = a2;
  if ( a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&a2[2 * v6] );
    if ( (_DWORD)v6 )
    {
      v7 = (__int64)&a2[-*a1] >> 1;
      v8 = *(unsigned int *)(*a1 - 16LL);
      if ( (int)((*(_DWORD *)(*a1 - 12LL) - v6) | (1 - *(_DWORD *)(*a1 - 8LL))) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v6);
      v9 = (char *)*a1;
      if ( v7 > v8 )
      {
        v10 = 2LL * (int)v6;
        if ( !v10 )
          goto LABEL_16;
        if ( v9 )
        {
          memcpy_0(v9, v5, 2LL * (int)v6);
LABEL_16:
          if ( (int)v6 < 0 || (int)v6 > *(_DWORD *)(*a1 - 12LL) )
            ATL::AtlThrowImpl(-2147024809);
          *(_DWORD *)(*a1 - 16LL) = v6;
          *(_WORD *)(v10 + *a1) = 0;
          return a1;
        }
      }
      else
      {
        a2 = &v9[2 * v7];
        v10 = 2LL * (int)v6;
        if ( !v10 )
          goto LABEL_16;
        if ( v9 && a2 )
        {
          memmove(v9, a2, 2LL * (int)v6);
          goto LABEL_16;
        }
      }
      *(_DWORD *)_o__errno(v9, a2, a3, a4) = 22;
      invalid_parameter_noinfo();
      goto LABEL_16;
    }
  }
  v11 = (int *)*a1;
  v12 = (volatile signed __int32 *)(*a1 - 24LL);
  v13 = *(_QWORD *)v12;
  if ( *((_DWORD *)v12 + 2) )
  {
    if ( *((int *)v12 + 4) >= 0 )
    {
      if ( _InterlockedDecrement(v12 + 4) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12);
      *a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13) + 24;
    }
    else
    {
      if ( *(v11 - 3) < 0 )
        ATL::AtlThrowImpl(-2147024809);
      *(v11 - 4) = 0;
      *(_WORD *)*a1 = 0;
    }
  }
  return a1;
}
