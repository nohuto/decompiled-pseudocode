/*
 * XREFs of BitBltSysBmp @ 0x1C00F4978
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00F4884 (-DrawCaptionButtons@@YAXHHH@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01194CC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02323CC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0232E48 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C023EF28 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     IS_UI_LANGID @ 0x1C00F4B1C (IS_UI_LANGID.c)
 *     FixHDCBITSBmp @ 0x1C00F4B48 (FixHDCBITSBmp.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v8; // r15
  int *v9; // r15
  unsigned int v10; // edi
  __int64 v12; // rcx
  int v13; // ecx
  _QWORD *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  _DWORD *v23; // rcx
  unsigned __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD *v30; // rbp
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  _DWORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  _DWORD *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  _DWORD *v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // ecx
  _DWORD *v52; // r8

  v4 = a4;
  if ( gpdaHDCBITSCreation == -1 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v13 = 0)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !v13) )
    {
      v14 = (_QWORD *)gpsi;
    }
    else
    {
      v14 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 7286LL) != 96 )
      {
        v15 = gpsi + 5748LL;
        goto LABEL_15;
      }
    }
    v15 = *v14 + 4260LL;
LABEL_15:
    v9 = (int *)(v15 + 16 * v4);
    goto LABEL_5;
  }
  if ( gpdaHDCBITSCreation == 2 )
    v8 = gpsi + 4260LL;
  else
    v8 = gpsi + 5748LL;
  v9 = (int *)(16LL * a4 + v8);
LABEL_5:
  FixHDCBITSBmp();
  v10 = NtGdiBitBltInternal(a1, a2, a3, v9[2], v9[3], *(HDC *)(gpDispInfo + 32LL), *v9, v9[1], 0xCC0020u, 0, 0);
  if ( ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7300LL) == 1037)
    && (GreGetLayout(a1) & 1) != 0
    && (unsigned int)(v4 - 11) <= 2 )
  {
    if ( (_DWORD)v4 != 12 )
      goto LABEL_43;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0 )
      {
        goto LABEL_26;
      }
    }
    else if ( !IsDPIDWMSysMet(v16)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v22 = 0)
             : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v22) )
    {
LABEL_26:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v19 = 0)
          : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v19) )
      {
        v23 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v23 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_42;
    }
    v23 = (_DWORD *)(gpsi + 2448LL);
LABEL_42:
    a2 += *v23;
LABEL_43:
    v25 = IsDPIAbsoluteSysMet(0x2DuLL);
    if ( v25 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0 )
      {
        goto LABEL_46;
      }
    }
    else if ( !IsDPIDWMSysMet(v24)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v27 = 0LL)
             : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !(_DWORD)v27) )
    {
LABEL_46:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v27 = 0LL)
          : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            (_DWORD)v27) )
      {
        v30 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v30 = (_DWORD *)(gpsi + 2060LL);
      }
LABEL_62:
      if ( v25 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) == 0 )
        {
LABEL_73:
          v35 = (_DWORD *)(gpsi + 2448LL);
          goto LABEL_82;
        }
      }
      else if ( IsDPIDWMSysMet(0x2DuLL)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) == 0 )
      {
        v32 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1;
        if ( (_DWORD)v32 )
          goto LABEL_73;
      }
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v32 = 0LL)
          : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            (_DWORD)v32) )
      {
        v35 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v35 = (_DWORD *)(gpsi + 2060LL);
      }
LABEL_82:
      if ( v25 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) != 0 )
        {
          goto LABEL_85;
        }
      }
      else if ( !IsDPIDWMSysMet(0x2DuLL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v37 = 0LL)
               : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !(_DWORD)v37) )
      {
LABEL_85:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v37 = 0LL)
            : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              (_DWORD)v37) )
        {
          v40 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v40 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_101:
        if ( v25 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0 )
          {
            goto LABEL_104;
          }
        }
        else if ( !IsDPIDWMSysMet(0x2DuLL)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v42 = 0LL)
                 : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !(_DWORD)v42) )
        {
LABEL_104:
          if ( IsDPIDWMSysMet(0x2DuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v42 = 0LL)
              : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                (_DWORD)v42) )
          {
            v45 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v45 = (_DWORD *)(gpsi + 2060LL);
          }
LABEL_120:
          if ( v25 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) != 0 )
            {
              goto LABEL_123;
            }
          }
          else if ( !IsDPIDWMSysMet(0x2DuLL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v51 = 0)
                   : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v51) )
          {
LABEL_123:
            if ( IsDPIDWMSysMet(0x2DuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v48 = 0)
                : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v48) )
            {
              v52 = (_DWORD *)(gpsi + 2836LL);
            }
            else
            {
              v52 = (_DWORD *)(gpsi + 2060LL);
            }
            return (unsigned int)NtGdiBitBltInternal(
                                   a1,
                                   a2,
                                   *v52 + a3,
                                   v9[2] - 2 * *v45,
                                   v9[3] - 2 * *v40,
                                   *(HDC *)(gpDispInfo + 32LL),
                                   *v9 + *v35,
                                   *v30 + v9[1],
                                   0x80CC0020,
                                   0,
                                   0);
          }
          v52 = (_DWORD *)(gpsi + 2448LL);
          return (unsigned int)NtGdiBitBltInternal(
                                 a1,
                                 a2,
                                 *v52 + a3,
                                 v9[2] - 2 * *v45,
                                 v9[3] - 2 * *v40,
                                 *(HDC *)(gpDispInfo + 32LL),
                                 *v9 + *v35,
                                 *v30 + v9[1],
                                 0x80CC0020,
                                 0,
                                 0);
        }
        v45 = (_DWORD *)(gpsi + 2448LL);
        goto LABEL_120;
      }
      v40 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_101;
    }
    v30 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_62;
  }
  return v10;
}
