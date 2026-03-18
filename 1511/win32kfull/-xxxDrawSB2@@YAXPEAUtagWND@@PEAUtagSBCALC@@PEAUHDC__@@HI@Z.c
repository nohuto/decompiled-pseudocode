/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0144AAC
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0144A20 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     BitBltSysBmp @ 0x1C00FB8D4 (BitBltSysBmp.c)
 *     DrawThumb2 @ 0x1C0144F0C (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0145088 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C01450AC (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C01450F4 (GreGetBkColor.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v6; // eax
  int v8; // r12d
  int v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  int *v12; // rcx
  int v13; // ebx
  LONG *v14; // rcx
  LONG *v15; // rdx
  int v16; // ebx
  __int64 v17; // r13
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  unsigned int v24; // edi
  LONG v25; // edx
  unsigned int v26; // r9d
  int v27; // r8d
  __int64 v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  _DWORD *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v56; // ecx
  unsigned int v57; // r9d
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v61; // rcx
  int v62; // ecx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v66; // rcx
  int v67; // ecx
  RECT v68; // [rsp+30h] [rbp-50h] BYREF
  int v69; // [rsp+40h] [rbp-40h]
  int v70; // [rsp+44h] [rbp-3Ch]
  int BkColor; // [rsp+48h] [rbp-38h]
  int TextColor; // [rsp+4Ch] [rbp-34h]
  struct tagWND *v73; // [rsp+50h] [rbp-30h]
  HBRUSH ColorObjects; // [rsp+58h] [rbp-28h]
  struct tagSBCALC *v75; // [rsp+60h] [rbp-20h]
  LONG v76; // [rsp+68h] [rbp-18h] BYREF
  LONG v77; // [rsp+6Ch] [rbp-14h] BYREF
  LONG v78; // [rsp+70h] [rbp-10h]
  LONG v79; // [rsp+74h] [rbp-Ch]

  v6 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v75 = a2;
  v73 = a1;
  v69 = a4;
  v8 = v6 / 2;
  v9 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v70 = v9;
  if ( v8 > 0 && v9 > 0 )
  {
    if ( a4 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x14uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) == 0 )
        {
LABEL_7:
          v12 = (int *)(gpsi + 2348LL);
          goto LABEL_8;
        }
      }
      else if ( IsDPIDWMSysMet(v10)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_7;
      }
      if ( IsDPIDWMSysMet(0x14uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v43 = 0)
          : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v43) )
      {
        v12 = (int *)(gpsi + 2736LL);
      }
      else
      {
        v12 = (int *)(gpsi + 1960LL);
      }
LABEL_8:
      v13 = *v12;
      BkColor = GreGetBkColor(a3);
      TextColor = GreGetTextColor(a3);
      ColorObjects = xxxGetColorObjects(v73, a3);
      v14 = &v76;
      if ( v8 > v13 )
        v8 = v13;
      v15 = &v77;
      v16 = v69;
      if ( !v69 )
      {
        v14 = &v77;
        v15 = &v76;
      }
      *v14 = *((_DWORD *)a2 + 6);
      *v15 = *((_DWORD *)a2 + 4);
      v14[2] = *((_DWORD *)a2 + 7);
      v15[2] = *((_DWORD *)a2 + 5);
      v17 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 3840LL));
      if ( v16 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x14uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) == 0 )
          {
LABEL_16:
            v20 = (_DWORD *)(gpsi + 2348LL);
            goto LABEL_17;
          }
        }
        else if ( IsDPIDWMSysMet(v18)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1 )
        {
          goto LABEL_16;
        }
        if ( IsDPIDWMSysMet(0x14uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v52 = 0)
            : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v52) )
        {
          v20 = (_DWORD *)(gpsi + 2736LL);
        }
        else
        {
          v20 = (_DWORD *)(gpsi + 1960LL);
        }
LABEL_17:
        if ( v8 != *v20 )
        {
LABEL_105:
          v24 = a5;
          v68.left = v76;
          v68.right = v78;
          v68.top = v77;
          v68.bottom = v77 + v8;
          DrawFrameControl(a3, &v68, 3, (a5 & 1) << 8);
          v68.bottom = v79;
          v57 = ((a5 & 2) << 7) | 1;
          v68.top = v79 - v8;
LABEL_137:
          DrawFrameControl(a3, &v68, 3, v57);
          goto LABEL_25;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) == 0 )
          {
LABEL_21:
            v23 = (_DWORD *)(gpsi + 2276LL);
            goto LABEL_22;
          }
        }
        else if ( IsDPIDWMSysMet(v21)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1 )
        {
          goto LABEL_21;
        }
        if ( IsDPIDWMSysMet(2uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v56 = 0)
            : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v56) )
        {
          v23 = (_DWORD *)(gpsi + 2664LL);
        }
        else
        {
          v23 = (_DWORD *)(gpsi + 1888LL);
        }
LABEL_22:
        if ( v70 == *v23 )
        {
          v24 = a5;
          BitBltSysBmp(a3, v76, v77, (a5 & 1) != 0 ? 49 : 46);
          v25 = v76;
          v26 = (a5 & 2) != 0 ? 53 : 50;
          v27 = v79 - v8;
LABEL_24:
          BitBltSysBmp(a3, v25, v27, v26);
LABEL_25:
          v28 = GreSelectBrush(a3, v17);
          DrawThumb2(v73, v75, a3, ColorObjects, v69, v24);
          GreSelectBrush(a3, v28);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, TextColor);
          return;
        }
        goto LABEL_105;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) == 0 )
        {
LABEL_40:
          v36 = (_DWORD *)(gpsi + 2352LL);
          goto LABEL_41;
        }
      }
      else if ( IsDPIDWMSysMet(v34)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_40;
      }
      if ( IsDPIDWMSysMet(0x15uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v62 = 0)
          : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v62) )
      {
        v36 = (_DWORD *)(gpsi + 2740LL);
      }
      else
      {
        v36 = (_DWORD *)(gpsi + 1964LL);
      }
LABEL_41:
      if ( v8 != *v36 )
      {
LABEL_136:
        v24 = a5;
        v68.top = v77;
        v68.bottom = v79;
        v68.left = v76;
        v68.right = v76 + v8;
        DrawFrameControl(a3, &v68, 3, ((a5 & 1) << 8) | 2);
        v68.right = v78;
        v57 = ((a5 & 2) << 7) | 3;
        v68.left = v78 - v8;
        goto LABEL_137;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) == 0 )
        {
LABEL_45:
          v39 = (_DWORD *)(gpsi + 2280LL);
          goto LABEL_46;
        }
      }
      else if ( IsDPIDWMSysMet(v37)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_45;
      }
      if ( IsDPIDWMSysMet(3uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v67 = 0)
          : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v67) )
      {
        v39 = (_DWORD *)(gpsi + 2668LL);
      }
      else
      {
        v39 = (_DWORD *)(gpsi + 1892LL);
      }
LABEL_46:
      if ( v70 == *v39 )
      {
        v24 = a5;
        BitBltSysBmp(a3, v76, v77, (a5 & 1) != 0 ? 61 : 58);
        v27 = v77;
        v26 = (a5 & 2) != 0 ? 57 : 54;
        v25 = v78 - v8;
        goto LABEL_24;
      }
      goto LABEL_136;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) == 0 )
      {
LABEL_32:
        v12 = (int *)(gpsi + 2352LL);
        goto LABEL_8;
      }
    }
    else if ( IsDPIDWMSysMet(v30)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_32;
    }
    if ( IsDPIDWMSysMet(0x15uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v48 = 0)
        : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v48) )
    {
      v12 = (int *)(gpsi + 2740LL);
    }
    else
    {
      v12 = (int *)(gpsi + 1964LL);
    }
    goto LABEL_8;
  }
}
