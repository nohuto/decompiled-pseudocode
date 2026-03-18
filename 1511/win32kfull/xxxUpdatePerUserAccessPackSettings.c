/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C00F4860
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00F51E0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C00F5208 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C00F5230 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C00F5258 (-CalculateMouseTable@@YAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01EDB48 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF6EC (-xxxTurnOffStickyKeys@@YAXXZ.c)
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
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int *v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // r8d
  int v21; // r8d
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  int v26; // r8d
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v31; // ecx
  unsigned int v32; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v33; // [rsp+44h] [rbp-BCh]
  BOOL v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+4Ch] [rbp-B4h]
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v37[128]; // [rsp+60h] [rbp-A0h] BYREF

  v36 = 0LL;
  GetProcessLuid(0LL, &v36);
  if ( (_DWORD)v36 != luidSystem[0] || (v2 = 1, HIDWORD(v36) != luidSystem[1]) )
    v2 = 0;
  FastGetProfileIntW(a1, 15LL, L"Flags", 0LL, &v32, 0);
  v3 = v32 & 1;
  FastGetProfileIntW(a1, 14LL, L"Flags", 0LL, &v32, 0);
  v4 = v32 & 1;
  FastGetProfileIntW(a1, 16LL, L"Flags", 0LL, &v32, 0);
  v5 = v32 & 1;
  FastGetProfileIntW(a1, 17LL, L"Flags", 0LL, &v32, 0);
  v6 = v32 & 1;
  FastGetProfileIntW(a1, 27LL, L"On", 0LL, &v32, 0);
  v33 = v32 != 0;
  FastGetProfileIntW(a1, 28LL, L"On", 0LL, &v32, 0);
  v34 = v32 != 0;
  FastGetProfileIntW(a1, 18LL, L"Flags", 0LL, &v32, 0);
  v7 = v32 & 1;
  FastGetProfileIntW(a1, 29LL, L"Flags", 0LL, &v32, 0);
  v8 = (unsigned int *)gdwPUDFlags;
  v9 = v32 & 1;
  v35 = v9;
  if ( v2 )
  {
    if ( v3 )
    {
      gdwPUDFlags |= 1u;
      LODWORD(xmmword_1C03222CC) = xmmword_1C03222CC | 1;
    }
    else
    {
      gdwPUDFlags &= ~1u;
      LODWORD(xmmword_1C03222CC) = xmmword_1C03222CC & 0xFFFFFFFE;
    }
    if ( (dword_1C03222C4 & 1) != 0 && !v3 )
    {
      xxxTurnOffStickyKeys();
      v8 = (unsigned int *)gdwPUDFlags;
      v9 = v35;
    }
    if ( v4 )
    {
      *v8 |= 2u;
      dword_1C03222C4 |= 1u;
    }
    else
    {
      *v8 &= ~2u;
      dword_1C03222C4 &= ~1u;
    }
    if ( v5 )
    {
      *v8 |= 4u;
      LODWORD(xmmword_1C032229C) = xmmword_1C032229C | 1;
    }
    else
    {
      *v8 &= ~4u;
      LODWORD(xmmword_1C032229C) = xmmword_1C032229C & 0xFFFFFFFE;
    }
    if ( v6 )
    {
      *v8 |= 8u;
      dword_1C03222BC |= 1u;
    }
    else
    {
      *v8 &= ~8u;
      dword_1C03222BC &= ~1u;
    }
    if ( v7 )
    {
      *v8 |= 0x10u;
      LODWORD(qword_1C032228C) = qword_1C032228C | 1;
    }
    else
    {
      *v8 &= ~0x10u;
      LODWORD(qword_1C032228C) = qword_1C032228C & 0xFFFFFFFE;
    }
    if ( v33 )
    {
      *v8 |= 0x20020u;
      *gpsi |= 0x80u;
    }
    else
    {
      *v8 &= 0xFFFDFFDF;
      *gpsi &= ~0x80u;
    }
    if ( v34 )
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
  if ( (xmmword_1C03222CC & 1) == (gdwPUDFlags & 1) )
  {
    if ( v3 )
      LODWORD(xmmword_1C03222CC) = xmmword_1C03222CC | 1;
    else
      LODWORD(xmmword_1C03222CC) = xmmword_1C03222CC & 0xFFFFFFFE;
  }
  v20 = dword_1C03222C4;
  if ( ((dword_1C03222C4 & 1) != 0) == ((gdwPUDFlags >> 1) & 1) )
  {
    if ( (dword_1C03222C4 & 1) != 0 )
    {
      if ( v4 )
        goto LABEL_95;
      xxxTurnOffStickyKeys();
      v8 = (unsigned int *)gdwPUDFlags;
      v20 = dword_1C03222C4;
      v9 = v35;
    }
    if ( !v4 )
    {
      v21 = v20 & 0xFFFFFFFE;
LABEL_57:
      dword_1C03222C4 = v21;
      goto LABEL_58;
    }
LABEL_95:
    v21 = v20 | 1;
    goto LABEL_57;
  }
LABEL_58:
  if ( (xmmword_1C032229C & 1) == ((*(unsigned __int8 *)v8 >> 2) & 1) )
  {
    if ( v5 )
      LODWORD(xmmword_1C032229C) = xmmword_1C032229C | 1;
    else
      LODWORD(xmmword_1C032229C) = xmmword_1C032229C & 0xFFFFFFFE;
  }
  if ( (dword_1C03222BC & 1) == ((*(unsigned __int8 *)v8 >> 3) & 1) )
  {
    if ( v6 )
      dword_1C03222BC |= 1u;
    else
      dword_1C03222BC &= ~1u;
  }
  if ( (qword_1C032228C & 1) == ((*(unsigned __int8 *)v8 >> 4) & 1) )
  {
    if ( v7 )
      LODWORD(qword_1C032228C) = qword_1C032228C | 1;
    else
      LODWORD(qword_1C032228C) = qword_1C032228C & 0xFFFFFFFE;
  }
  v22 = *v8;
  if ( ((*v8 >> 17) & 1) == (((unsigned __int8)*v8 >> 5) & 1) )
  {
    if ( v33 )
      v23 = v22 | 0x20000;
    else
      v23 = v22 & 0xFFFDFFFF;
    *v8 = v23;
  }
  v24 = *v8;
  if ( ((*v8 >> 18) & 1) == (((unsigned __int8)*v8 >> 6) & 1) )
  {
    if ( v34 )
      v25 = v24 | 0x40000;
    else
      v25 = v24 & 0xFFFBFFFF;
    *v8 = v25;
  }
  v26 = gHighContrast[1];
  if ( (v26 & 1) == *(unsigned __int8 *)v8 >> 7 )
  {
    if ( v9 )
      v27 = v26 | 1;
    else
      v27 = v26 & 0xFFFFFFFE;
    gHighContrast[1] = v27;
  }
LABEL_21:
  FastGetProfileIntW(a1, 15LL, L"Flags", 82LL, &v32, 0);
  if ( (xmmword_1C03222CC & 1) != 0 )
    v10 = v32 | 1;
  else
    v10 = v32 & 0xFFFFFFFE;
  v32 = v10;
  LODWORD(xmmword_1C03222CC) = v10;
  FastGetProfileIntW(a1, 15LL, L"DelayBeforeAcceptance", 1000LL, (char *)&xmmword_1C03222CC + 4, 0);
  FastGetProfileIntW(a1, 15LL, L"AutoRepeatRate", 500LL, (char *)&xmmword_1C03222CC + 12, 0);
  FastGetProfileIntW(a1, 15LL, L"AutoRepeatDelay", 1000LL, (char *)&xmmword_1C03222CC + 8, 0);
  FastGetProfileIntW(a1, 15LL, L"BounceTime", 0LL, &dword_1C03222DC, 0);
  FastGetProfileIntW(a1, 19LL, L"Flags", 2LL, &xmmword_1C0322254, 0);
  FastGetProfileIntW(a1, 19LL, L"FSTextEffect", 0LL, (char *)&xmmword_1C0322254 + 4, 0);
  FastGetProfileIntW(a1, 19LL, L"WindowsEffect", 0LL, &dword_1C0322270, 0);
  FastGetProfileIntW(a1, 20LL, L"On", 0LL, &v32, 0);
  if ( v32 )
    gdwPUDFlags |= 0x8000u;
  else
    gdwPUDFlags &= ~0x8000u;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x46uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) == 0 )
    {
LABEL_111:
      v14 = (int *)(gpsi + 2548LL);
      goto LABEL_29;
    }
  }
  else if ( IsDPIDWMSysMet(v11)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_111;
  }
  if ( IsDPIDWMSysMet(0x46uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v31 = 0)
      : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v31) )
  {
    v14 = (int *)(gpsi + 2936LL);
  }
  else
  {
    v14 = (int *)(gpsi + 2160LL);
  }
LABEL_29:
  *v14 = (gdwPUDFlags >> 15) & 1;
  FastGetProfileIntW(a1, 14LL, L"Flags", 466LL, &v32, 0);
  if ( (dword_1C03222C4 & 1) != 0 )
    v15 = v32 | 1;
  else
    v15 = v32 & 0xFFFFFFFE;
  v32 = v15;
  dword_1C03222C4 = v15;
  FastGetProfileIntW(a1, 16LL, L"Flags", 18LL, &v32, 0);
  if ( (xmmword_1C032229C & 1) != 0 )
    v16 = v32 | 1;
  else
    v16 = v32 & 0xFFFFFFFE;
  v32 = v16;
  LODWORD(xmmword_1C032229C) = v16;
  FastGetProfileIntW(a1, 16LL, L"MaximumSpeed", 40LL, (char *)&xmmword_1C032229C + 4, 0);
  FastGetProfileIntW(a1, 16LL, L"TimeToMaximumSpeed", 3000LL, (char *)&xmmword_1C032229C + 8, 0);
  if ( (unsigned int)(DWORD1(xmmword_1C032229C) - 10) > 0x15E )
    DWORD1(xmmword_1C032229C) = 40;
  if ( (unsigned int)(DWORD2(xmmword_1C032229C) - 1000) > 0xFA0 )
    DWORD2(xmmword_1C032229C) = 3000;
  CalculateMouseTable();
  gbMKMouseMode = (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)(unsigned __int8)gNumLockVk >> 2]) != 0) ^ ((unsigned __int8)xmmword_1C032229C >> 7);
  if ( (xmmword_1C032229C & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW(a1, 17LL, L"Flags", 18LL, &v32, 0);
  if ( (dword_1C03222BC & 1) != 0 )
    v17 = v32 | 1;
  else
    v17 = v32 & 0xFFFFFFFE;
  v32 = v17;
  dword_1C03222BC = v17;
  FastGetProfileIntW(a1, 18LL, L"Flags", 2LL, &v32, 0);
  if ( (qword_1C032228C & 1) != 0 )
    v18 = v32 | 1;
  else
    v18 = v32 & 0xFFFFFFFE;
  v32 = v18;
  LODWORD(qword_1C032228C) = v18;
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
  FastGetProfileIntW(a1, 18LL, L"TimeToWait", 300000LL, (char *)&qword_1C032228C + 4, 0);
  FastGetProfileIntW(a1, 29LL, L"Flags", 82LL, &v32, 0);
  if ( (gHighContrast[1] & 1) != 0 )
    v19 = v32 | 1;
  else
    v19 = v32 & 0xFFFFFFFE;
  v32 = v19;
  gHighContrast[1] = v19;
  if ( (unsigned int)FastGetProfileStringW(a1, 29LL, L"High Contrast Scheme", 0LL, v37, 128, 0) )
    RtlStringCchCopyW(gHighContrastDefaultScheme, 0x80uLL, v37);
  gAudioDescription = 12;
  FastGetProfileIntW(a1, 48LL, L"On", 0LL, &qword_1C0322244, 0);
  FastGetProfileIntW(a1, 48LL, L"Locale", 0LL, (char *)&qword_1C0322244 + 4, 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
