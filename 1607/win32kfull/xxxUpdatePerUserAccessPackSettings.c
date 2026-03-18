/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C0092870
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00931E4 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C009320C (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0093234 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C0093250 (-CalculateMouseTable@@YAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01E41B8 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01E542C (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxUpdatePerUserAccessPackSettings(__int64 a1)
{
  int v2; // ebx
  int v3; // esi
  int v4; // r14d
  int v5; // r15d
  int v6; // r12d
  int v7; // r13d
  unsigned int *v8; // rdx
  int v9; // r10d
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int *v23; // rcx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // r8d
  int v30; // r8d
  unsigned int v31; // r8d
  unsigned int v32; // r8d
  unsigned int v33; // r8d
  unsigned int v34; // r8d
  int v35; // r8d
  unsigned int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // ecx
  unsigned int v51; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+44h] [rbp-BCh]
  BOOL v53; // [rsp+48h] [rbp-B8h]
  BOOL v54; // [rsp+4Ch] [rbp-B4h]
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v56[128]; // [rsp+60h] [rbp-A0h] BYREF

  v55 = 0LL;
  GetProcessLuid(0LL, &v55);
  if ( (_DWORD)v55 != luidSystem[0] || (v2 = 1, HIDWORD(v55) != luidSystem[1]) )
    v2 = 0;
  FastGetProfileIntW(a1, 15LL, L"Flags", 0LL, &v51, 0);
  v3 = v51 & 1;
  FastGetProfileIntW(a1, 14LL, L"Flags", 0LL, &v51, 0);
  v4 = v51 & 1;
  FastGetProfileIntW(a1, 16LL, L"Flags", 0LL, &v51, 0);
  v5 = v51 & 1;
  FastGetProfileIntW(a1, 17LL, L"Flags", 0LL, &v51, 0);
  v6 = v51 & 1;
  FastGetProfileIntW(a1, 27LL, L"On", 0LL, &v51, 0);
  v53 = v51 != 0;
  FastGetProfileIntW(a1, 28LL, L"On", 0LL, &v51, 0);
  v54 = v51 != 0;
  FastGetProfileIntW(a1, 18LL, L"Flags", 0LL, &v51, 0);
  v7 = v51 & 1;
  FastGetProfileIntW(a1, 29LL, L"Flags", 0LL, &v51, 0);
  v8 = (unsigned int *)gdwPUDFlags;
  v9 = v51 & 1;
  v52 = v9;
  if ( v2 )
  {
    if ( v3 )
    {
      gdwPUDFlags |= 1u;
      LODWORD(xmmword_1C0326F34) = xmmword_1C0326F34 | 1;
    }
    else
    {
      gdwPUDFlags &= ~1u;
      LODWORD(xmmword_1C0326F34) = xmmword_1C0326F34 & 0xFFFFFFFE;
    }
    if ( (dword_1C0326F2C & 1) != 0 && !v3 )
    {
      xxxTurnOffStickyKeys();
      v8 = (unsigned int *)gdwPUDFlags;
      v9 = v52;
    }
    if ( v4 )
    {
      *v8 |= 2u;
      dword_1C0326F2C |= 1u;
    }
    else
    {
      *v8 &= ~2u;
      dword_1C0326F2C &= ~1u;
    }
    if ( v5 )
    {
      *v8 |= 4u;
      LODWORD(xmmword_1C0326F04) = xmmword_1C0326F04 | 1;
    }
    else
    {
      *v8 &= ~4u;
      LODWORD(xmmword_1C0326F04) = xmmword_1C0326F04 & 0xFFFFFFFE;
    }
    if ( v6 )
    {
      *v8 |= 8u;
      dword_1C0326F24 |= 1u;
    }
    else
    {
      *v8 &= ~8u;
      dword_1C0326F24 &= ~1u;
    }
    if ( v7 )
    {
      *v8 |= 0x10u;
      LODWORD(qword_1C0326EF4) = qword_1C0326EF4 | 1;
    }
    else
    {
      *v8 &= ~0x10u;
      LODWORD(qword_1C0326EF4) = qword_1C0326EF4 & 0xFFFFFFFE;
    }
    if ( v53 )
    {
      *v8 |= 0x20020u;
      *gpsi |= 0x80u;
    }
    else
    {
      *v8 &= 0xFFFDFFDF;
      *gpsi &= ~0x80u;
    }
    if ( v54 )
      *v8 |= 0x40040u;
    else
      *v8 &= 0xFFFBFFBF;
    if ( v9 )
    {
      *v8 |= 0x80u;
      gHighContrast[1] |= 1u;
    }
    else
    {
      *v8 &= ~0x80u;
      gHighContrast[1] &= ~1u;
    }
    goto LABEL_21;
  }
  if ( (xmmword_1C0326F34 & 1) == (gdwPUDFlags & 1) )
  {
    if ( v3 )
      LODWORD(xmmword_1C0326F34) = xmmword_1C0326F34 | 1;
    else
      LODWORD(xmmword_1C0326F34) = xmmword_1C0326F34 & 0xFFFFFFFE;
  }
  v29 = dword_1C0326F2C;
  if ( ((dword_1C0326F2C & 1) != 0) == ((gdwPUDFlags >> 1) & 1) )
  {
    if ( (dword_1C0326F2C & 1) != 0 )
    {
      if ( v4 )
        goto LABEL_95;
      xxxTurnOffStickyKeys();
      v8 = (unsigned int *)gdwPUDFlags;
      v29 = dword_1C0326F2C;
      v9 = v52;
    }
    if ( !v4 )
    {
      v30 = v29 & 0xFFFFFFFE;
LABEL_57:
      dword_1C0326F2C = v30;
      goto LABEL_58;
    }
LABEL_95:
    v30 = v29 | 1;
    goto LABEL_57;
  }
LABEL_58:
  if ( (xmmword_1C0326F04 & 1) == ((*(unsigned __int8 *)v8 >> 2) & 1) )
  {
    if ( v5 )
      LODWORD(xmmword_1C0326F04) = xmmword_1C0326F04 | 1;
    else
      LODWORD(xmmword_1C0326F04) = xmmword_1C0326F04 & 0xFFFFFFFE;
  }
  if ( (dword_1C0326F24 & 1) == ((*(unsigned __int8 *)v8 >> 3) & 1) )
  {
    if ( v6 )
      dword_1C0326F24 |= 1u;
    else
      dword_1C0326F24 &= ~1u;
  }
  if ( (qword_1C0326EF4 & 1) == ((*(unsigned __int8 *)v8 >> 4) & 1) )
  {
    if ( v7 )
      LODWORD(qword_1C0326EF4) = qword_1C0326EF4 | 1;
    else
      LODWORD(qword_1C0326EF4) = qword_1C0326EF4 & 0xFFFFFFFE;
  }
  v31 = *v8;
  if ( ((*v8 >> 17) & 1) == (((unsigned __int8)*v8 >> 5) & 1) )
  {
    if ( v53 )
      v32 = v31 | 0x20000;
    else
      v32 = v31 & 0xFFFDFFFF;
    *v8 = v32;
  }
  v33 = *v8;
  if ( ((*v8 >> 18) & 1) == (((unsigned __int8)*v8 >> 6) & 1) )
  {
    if ( v54 )
      v34 = v33 | 0x40000;
    else
      v34 = v33 & 0xFFFBFFFF;
    *v8 = v34;
  }
  v35 = gHighContrast[1];
  if ( (v35 & 1) == *(unsigned __int8 *)v8 >> 7 )
  {
    if ( v9 )
      v36 = v35 | 1;
    else
      v36 = v35 & 0xFFFFFFFE;
    gHighContrast[1] = v36;
  }
LABEL_21:
  FastGetProfileIntW(a1, 15LL, L"Flags", 82LL, &v51, 0);
  if ( (xmmword_1C0326F34 & 1) != 0 )
    v10 = v51 | 1;
  else
    v10 = v51 & 0xFFFFFFFE;
  v51 = v10;
  LODWORD(xmmword_1C0326F34) = v10;
  FastGetProfileIntW(a1, 15LL, L"DelayBeforeAcceptance", 1000LL, (char *)&xmmword_1C0326F34 + 4, 0);
  FastGetProfileIntW(a1, 15LL, L"AutoRepeatRate", 500LL, (char *)&xmmword_1C0326F34 + 12, 0);
  FastGetProfileIntW(a1, 15LL, L"AutoRepeatDelay", 1000LL, (char *)&xmmword_1C0326F34 + 8, 0);
  FastGetProfileIntW(a1, 15LL, L"BounceTime", 0LL, &dword_1C0326F44, 0);
  FastGetProfileIntW(a1, 19LL, L"Flags", 2LL, &xmmword_1C032BBAC, 0);
  FastGetProfileIntW(a1, 19LL, L"FSTextEffect", 0LL, (char *)&xmmword_1C032BBAC + 4, 0);
  FastGetProfileIntW(a1, 19LL, L"WindowsEffect", 0LL, (char *)&xmmword_1C032BBBC + 12, 0);
  FastGetProfileIntW(a1, 20LL, L"On", 0LL, &v51, 0);
  if ( v51 )
    gdwPUDFlags |= 0x8000u;
  else
    gdwPUDFlags &= ~0x8000u;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x46uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) == 0 )
    {
LABEL_109:
      v23 = (int *)(gpsi + 2548LL);
      goto LABEL_29;
    }
  }
  else if ( IsDPIDWMSysMet(v12)
         && (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_109;
  }
  if ( IsDPIDWMSysMet(0x46uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 408)
      ? (v50 = 0)
      : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v50) )
  {
    v23 = (int *)(gpsi + 2936LL);
  }
  else
  {
    v23 = (int *)(gpsi + 2160LL);
  }
LABEL_29:
  *v23 = (gdwPUDFlags >> 15) & 1;
  FastGetProfileIntW(a1, 14LL, L"Flags", 466LL, &v51, 0);
  if ( (dword_1C0326F2C & 1) != 0 )
    v24 = v51 | 1;
  else
    v24 = v51 & 0xFFFFFFFE;
  v51 = v24;
  dword_1C0326F2C = v24;
  FastGetProfileIntW(a1, 16LL, L"Flags", 18LL, &v51, 0);
  if ( (xmmword_1C0326F04 & 1) != 0 )
    v25 = v51 | 1;
  else
    v25 = v51 & 0xFFFFFFFE;
  v51 = v25;
  LODWORD(xmmword_1C0326F04) = v25;
  FastGetProfileIntW(a1, 16LL, L"MaximumSpeed", 40LL, (char *)&xmmword_1C0326F04 + 4, 0);
  FastGetProfileIntW(a1, 16LL, L"TimeToMaximumSpeed", 3000LL, (char *)&xmmword_1C0326F04 + 8, 0);
  if ( (unsigned int)(DWORD1(xmmword_1C0326F04) - 10) > 0x15E )
    DWORD1(xmmword_1C0326F04) = 40;
  if ( (unsigned int)(DWORD2(xmmword_1C0326F04) - 1000) > 0xFA0 )
    DWORD2(xmmword_1C0326F04) = 3000;
  CalculateMouseTable();
  gbMKMouseMode = (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)(unsigned __int8)gNumLockVk >> 2]) != 0) ^ ((unsigned __int8)xmmword_1C0326F04 >> 7);
  if ( (xmmword_1C0326F04 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW(a1, 17LL, L"Flags", 18LL, &v51, 0);
  if ( (dword_1C0326F24 & 1) != 0 )
    v26 = v51 | 1;
  else
    v26 = v51 & 0xFFFFFFFE;
  v51 = v26;
  dword_1C0326F24 = v26;
  FastGetProfileIntW(a1, 18LL, L"Flags", 2LL, &v51, 0);
  if ( (qword_1C0326EF4 & 1) != 0 )
    v27 = v51 | 1;
  else
    v27 = v51 & 0xFFFFFFFE;
  v51 = v27;
  LODWORD(qword_1C0326EF4) = v27;
  if ( gpKbdNlsTbl )
  {
    if ( *(_DWORD *)(gpKbdNlsTbl + 16) == 16 && *(_QWORD *)(gpKbdNlsTbl + 24) )
      gpusMouseVKey = *(_QWORD *)(gpKbdNlsTbl + 24);
    if ( (*(_BYTE *)(gpKbdNlsTbl + 2) & 2) != 0 )
    {
      gNumLockVk = 36;
      gOemScrollVk = 21;
    }
  }
  FastGetProfileIntW(a1, 18LL, L"TimeToWait", 300000LL, (char *)&qword_1C0326EF4 + 4, 0);
  FastGetProfileIntW(a1, 29LL, L"Flags", 82LL, &v51, 0);
  if ( (gHighContrast[1] & 1) != 0 )
    v28 = v51 | 1;
  else
    v28 = v51 & 0xFFFFFFFE;
  v51 = v28;
  gHighContrast[1] = v28;
  if ( (unsigned int)FastGetProfileStringW(a1, 29LL, L"High Contrast Scheme", 0LL, v56, 128, 0) )
    RtlStringCchCopyW(gHighContrastDefaultScheme, 0x80uLL, v56);
  gAudioDescription = 12;
  FastGetProfileIntW(a1, 48LL, L"On", 0LL, &qword_1C0326EE4, 0);
  FastGetProfileIntW(a1, 48LL, L"Locale", 0LL, (char *)&qword_1C0326EE4 + 4, 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
