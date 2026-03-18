/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C0134E24
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C01357A4 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C01357CC (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C01357F4 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C013581C (-CalculateMouseTable@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01ED628 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF1CC (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxUpdatePerUserAccessPackSettings(__int64 a1)
{
  int v2; // ebx
  int v3; // esi
  unsigned int *v4; // rdx
  int v5; // r10d
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int *v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // r8d
  int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  int v22; // r8d
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v27; // ecx
  int v28; // [rsp+40h] [rbp-C0h]
  unsigned int v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+40h] [rbp-C0h]
  unsigned int v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+40h] [rbp-C0h]
  unsigned int v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  char v35[256]; // [rsp+60h] [rbp-A0h] BYREF

  v34 = 0LL;
  GetProcessLuid(0LL, &v34);
  if ( (_DWORD)v34 != luidSystem[0] || (v2 = 1, HIDWORD(v34) != luidSystem[1]) )
    v2 = 0;
  FastGetProfileIntW(a1, 15LL, L"Flags");
  v3 = v28 & 1;
  FastGetProfileIntW(a1, 14LL, L"Flags");
  FastGetProfileIntW(a1, 16LL, L"Flags");
  FastGetProfileIntW(a1, 17LL, L"Flags");
  FastGetProfileIntW(a1, 27LL, L"On");
  FastGetProfileIntW(a1, 28LL, L"On");
  FastGetProfileIntW(a1, 18LL, L"Flags");
  FastGetProfileIntW(a1, 29LL, L"Flags");
  v4 = (unsigned int *)gdwPUDFlags;
  v5 = v3;
  if ( v2 )
  {
    if ( v3 )
    {
      gdwPUDFlags |= 1u;
      LODWORD(xmmword_1C0323934) = xmmword_1C0323934 | 1;
    }
    else
    {
      gdwPUDFlags &= ~1u;
      LODWORD(xmmword_1C0323934) = xmmword_1C0323934 & 0xFFFFFFFE;
    }
    if ( (dword_1C032392C & 1) != 0 && !v3 )
    {
      xxxTurnOffStickyKeys();
      v4 = (unsigned int *)gdwPUDFlags;
      v5 = v28 & 1;
    }
    if ( v3 )
    {
      *v4 |= 2u;
      dword_1C032392C |= 1u;
    }
    else
    {
      *v4 &= ~2u;
      dword_1C032392C &= ~1u;
    }
    if ( v3 )
    {
      *v4 |= 4u;
      LODWORD(xmmword_1C0323904) = xmmword_1C0323904 | 1;
    }
    else
    {
      *v4 &= ~4u;
      LODWORD(xmmword_1C0323904) = xmmword_1C0323904 & 0xFFFFFFFE;
    }
    if ( (v28 & 1) != 0 )
    {
      *v4 |= 8u;
      dword_1C0323924 |= 1u;
    }
    else
    {
      *v4 &= ~8u;
      dword_1C0323924 &= ~1u;
    }
    if ( (v28 & 1) != 0 )
    {
      *v4 |= 0x10u;
      LODWORD(qword_1C03238F4) = qword_1C03238F4 | 1;
    }
    else
    {
      *v4 &= ~0x10u;
      LODWORD(qword_1C03238F4) = qword_1C03238F4 & 0xFFFFFFFE;
    }
    if ( v28 )
    {
      *v4 |= 0x20020u;
      *gpsi |= 0x80u;
    }
    else
    {
      *v4 &= 0xFFFDFFDF;
      *gpsi &= ~0x80u;
    }
    if ( v28 )
      *v4 |= 0x40040u;
    else
      *v4 &= 0xFFFBFFBF;
    if ( v5 )
    {
      *v4 |= 0x80u;
      gHighContrast[1] |= 1u;
    }
    else
    {
      *v4 &= ~0x80u;
      gHighContrast[1] &= ~1u;
    }
    goto LABEL_21;
  }
  if ( (xmmword_1C0323934 & 1) == (gdwPUDFlags & 1) )
  {
    if ( v3 )
      LODWORD(xmmword_1C0323934) = xmmword_1C0323934 | 1;
    else
      LODWORD(xmmword_1C0323934) = xmmword_1C0323934 & 0xFFFFFFFE;
  }
  v16 = dword_1C032392C;
  if ( ((dword_1C032392C & 1) != 0) == ((gdwPUDFlags >> 1) & 1) )
  {
    if ( (dword_1C032392C & 1) != 0 )
    {
      if ( v3 )
        goto LABEL_95;
      xxxTurnOffStickyKeys();
      v4 = (unsigned int *)gdwPUDFlags;
      v16 = dword_1C032392C;
      v5 = v28 & 1;
    }
    if ( !v3 )
    {
      v17 = v16 & 0xFFFFFFFE;
LABEL_57:
      dword_1C032392C = v17;
      goto LABEL_58;
    }
LABEL_95:
    v17 = v16 | 1;
    goto LABEL_57;
  }
LABEL_58:
  if ( (xmmword_1C0323904 & 1) == ((*(unsigned __int8 *)v4 >> 2) & 1) )
  {
    if ( v3 )
      LODWORD(xmmword_1C0323904) = xmmword_1C0323904 | 1;
    else
      LODWORD(xmmword_1C0323904) = xmmword_1C0323904 & 0xFFFFFFFE;
  }
  if ( (dword_1C0323924 & 1) == ((*(unsigned __int8 *)v4 >> 3) & 1) )
  {
    if ( (v28 & 1) != 0 )
      dword_1C0323924 |= 1u;
    else
      dword_1C0323924 &= ~1u;
  }
  if ( (qword_1C03238F4 & 1) == ((*(unsigned __int8 *)v4 >> 4) & 1) )
  {
    if ( (v28 & 1) != 0 )
      LODWORD(qword_1C03238F4) = qword_1C03238F4 | 1;
    else
      LODWORD(qword_1C03238F4) = qword_1C03238F4 & 0xFFFFFFFE;
  }
  v18 = *v4;
  if ( ((*v4 >> 17) & 1) == (((unsigned __int8)*v4 >> 5) & 1) )
  {
    if ( v28 )
      v19 = v18 | 0x20000;
    else
      v19 = v18 & 0xFFFDFFFF;
    *v4 = v19;
  }
  v20 = *v4;
  if ( ((*v4 >> 18) & 1) == (((unsigned __int8)*v4 >> 6) & 1) )
  {
    if ( v28 )
      v21 = v20 | 0x40000;
    else
      v21 = v20 & 0xFFFBFFFF;
    *v4 = v21;
  }
  v22 = gHighContrast[1];
  if ( (v22 & 1) == *(unsigned __int8 *)v4 >> 7 )
  {
    if ( v5 )
      v23 = v22 | 1;
    else
      v23 = v22 & 0xFFFFFFFE;
    gHighContrast[1] = v23;
  }
LABEL_21:
  FastGetProfileIntW(a1, 15LL, L"Flags");
  if ( (xmmword_1C0323934 & 1) != 0 )
    v6 = v28 | 1;
  else
    v6 = v28 & 0xFFFFFFFE;
  v29 = v6;
  LODWORD(xmmword_1C0323934) = v6;
  FastGetProfileIntW(a1, 15LL, L"DelayBeforeAcceptance");
  FastGetProfileIntW(a1, 15LL, L"AutoRepeatRate");
  FastGetProfileIntW(a1, 15LL, L"AutoRepeatDelay");
  FastGetProfileIntW(a1, 15LL, L"BounceTime");
  FastGetProfileIntW(a1, 19LL, L"Flags");
  FastGetProfileIntW(a1, 19LL, L"FSTextEffect");
  FastGetProfileIntW(a1, 19LL, L"WindowsEffect");
  FastGetProfileIntW(a1, 20LL, L"On");
  if ( v29 )
    gdwPUDFlags |= 0x8000u;
  else
    gdwPUDFlags &= ~0x8000u;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x46uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) == 0 )
    {
LABEL_111:
      v10 = (int *)(gpsi + 2548LL);
      goto LABEL_29;
    }
  }
  else if ( IsDPIDWMSysMet(v7)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_111;
  }
  if ( IsDPIDWMSysMet(0x46uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v27 = 0)
      : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v27) )
  {
    v10 = (int *)(gpsi + 2936LL);
  }
  else
  {
    v10 = (int *)(gpsi + 2160LL);
  }
LABEL_29:
  *v10 = (gdwPUDFlags >> 15) & 1;
  FastGetProfileIntW(a1, 14LL, L"Flags");
  if ( (dword_1C032392C & 1) != 0 )
    v11 = v29 | 1;
  else
    v11 = v29 & 0xFFFFFFFE;
  v30 = v11;
  dword_1C032392C = v11;
  FastGetProfileIntW(a1, 16LL, L"Flags");
  if ( (xmmword_1C0323904 & 1) != 0 )
    v12 = v30 | 1;
  else
    v12 = v30 & 0xFFFFFFFE;
  v31 = v12;
  LODWORD(xmmword_1C0323904) = v12;
  FastGetProfileIntW(a1, 16LL, L"MaximumSpeed");
  FastGetProfileIntW(a1, 16LL, L"TimeToMaximumSpeed");
  if ( (unsigned int)(DWORD1(xmmword_1C0323904) - 10) > 0x15E )
    DWORD1(xmmword_1C0323904) = 40;
  if ( (unsigned int)(DWORD2(xmmword_1C0323904) - 1000) > 0xFA0 )
    DWORD2(xmmword_1C0323904) = 3000;
  CalculateMouseTable();
  gbMKMouseMode = (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)(unsigned __int8)gNumLockVk >> 2]) != 0) ^ ((unsigned __int8)xmmword_1C0323904 >> 7);
  if ( (xmmword_1C0323904 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW(a1, 17LL, L"Flags");
  if ( (dword_1C0323924 & 1) != 0 )
    v13 = v31 | 1;
  else
    v13 = v31 & 0xFFFFFFFE;
  v32 = v13;
  dword_1C0323924 = v13;
  FastGetProfileIntW(a1, 18LL, L"Flags");
  if ( (qword_1C03238F4 & 1) != 0 )
    v14 = v32 | 1;
  else
    v14 = v32 & 0xFFFFFFFE;
  v33 = v14;
  LODWORD(qword_1C03238F4) = v14;
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
  FastGetProfileIntW(a1, 18LL, L"TimeToWait");
  FastGetProfileIntW(a1, 29LL, L"Flags");
  if ( (gHighContrast[1] & 1) != 0 )
    v15 = v33 | 1;
  else
    v15 = v33 & 0xFFFFFFFE;
  gHighContrast[1] = v15;
  if ( (unsigned int)FastGetProfileStringW(a1, 29LL, L"High Contrast Scheme", 0LL, v35, 128, 0) )
    RtlStringCchCopyW((char *)gHighContrastDefaultScheme, 128LL, v35);
  gAudioDescription = 12;
  FastGetProfileIntW(a1, 48LL, L"On");
  FastGetProfileIntW(a1, 48LL, L"Locale");
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
