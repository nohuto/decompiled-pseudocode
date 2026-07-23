/*
 * XREFs of AnFwDisplayFade @ 0x14072664C
 * Callers:
 *     BgDisplayFade @ 0x140725814 (BgDisplayFade.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     BgpGetBitsPerPixel @ 0x140127D00 (BgpGetBitsPerPixel.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     BgpGxRectangleSize @ 0x140129D34 (BgpGxRectangleSize.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     BgpClearScreen @ 0x1402392C4 (BgpClearScreen.c)
 *     BgpGxConvertRectangleEx @ 0x1402394C4 (BgpGxConvertRectangleEx.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140725854 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x14072586C (AnFwpDisableProgressTimer.c)
 *     BgpGxParseBitmap @ 0x140725B84 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x140725CE0 (BgpGxReadRectangle.c)
 *     LogFwStat @ 0x140727310 (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1407276DC (BgpGxRectangleCreate.c)
 *     BgpGxFindSubRectangle @ 0x140727760 (BgpGxFindSubRectangle.c)
 *     BgpTxtGetRegionContext @ 0x140727920 (BgpTxtGetRegionContext.c)
 */

__int64 AnFwDisplayFade()
{
  _DWORD *v0; // r13
  __int64 v1; // rsi
  int *v2; // r15
  int *v3; // r12
  __int64 v4; // rdi
  int SubRectangle; // r14d
  __int64 RegionContext; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  unsigned int v17; // edx
  unsigned int v18; // edi
  unsigned int v19; // r11d
  unsigned int v20; // r11d
  unsigned int v21; // eax
  int Rectangle; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rsi
  int v27; // edi
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // edi
  __int64 v31; // rdi
  _QWORD *v32; // rdi
  __int64 v33; // rsi
  unsigned int v35; // ecx
  char v36; // [rsp+38h] [rbp-39h]
  char v37; // [rsp+39h] [rbp-38h]
  char v38; // [rsp+3Ah] [rbp-37h] BYREF
  char v39; // [rsp+3Bh] [rbp-36h]
  unsigned int v40; // [rsp+3Ch] [rbp-35h]
  int *v41; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-29h]
  _QWORD v43[2]; // [rsp+50h] [rbp-21h] BYREF
  unsigned int BitsPerPixel; // [rsp+60h] [rbp-11h]
  int *v45; // [rsp+68h] [rbp-9h] BYREF
  __int64 v46; // [rsp+70h] [rbp-1h] BYREF
  __int64 v47; // [rsp+78h] [rbp+7h] BYREF
  __int64 v48; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v49[4]; // [rsp+88h] [rbp+17h] BYREF

  v0 = 0LL;
  v48 = 0LL;
  v1 = 0LL;
  v40 = 0;
  v2 = 0LL;
  v3 = 0LL;
  v43[0] = 0LL;
  v4 = 0LL;
  v41 = 0LL;
  SubRectangle = 0;
  v47 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( (dword_1402F9F90 & 0x2000) != 0 )
    goto LABEL_37;
  if ( (dword_1402F9F90 & 0x200000) != 0 )
  {
LABEL_70:
    AnFwpDisableProgressTimer();
    AnFwDisableBackgroundUpdateTimer();
    SubRectangle = BgpClearScreen(-16777216);
    if ( v0 )
      BgpGxRectangleDestroy(v0);
    if ( v48 )
      BgpGxRectangleDestroy(v48);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    if ( v1 )
      BgpGxRectangleDestroy(v1);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    if ( v4 )
      BgpGxRectangleDestroy(v4);
    return (unsigned int)SubRectangle;
  }
  RegionContext = BgpTxtGetRegionContext(qword_1402FA040);
  v7 = BgpTxtGetRegionContext(qword_1402FA048);
  v8 = v7;
  if ( !RegionContext || !v7 )
  {
    SubRectangle = -1073741670;
    goto LABEL_37;
  }
  xmmword_1402F4E90 = *(_OWORD *)RegionContext;
  qword_1402F4EA0 = *(_QWORD *)(RegionContext + 16);
  dword_1402F4EA8 = *(_DWORD *)(RegionContext + 24);
  xmmword_1402F4EC8 = *(_OWORD *)v7;
  qword_1402F4ED8 = *(_QWORD *)(v7 + 16);
  dword_1402F4EE0 = *(_DWORD *)(v7 + 24);
  BgpFwFreeMemory(RegionContext);
  BgpFwFreeMemory(v8);
  AnFwpDisableProgressTimer();
  AnFwDisableBackgroundUpdateTimer();
  v36 = 0;
  v37 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  v9 = BitsPerPixel;
  LogFwStat(1LL, 5LL, 0LL);
  if ( !Src )
  {
    v39 = 1;
    v18 = 0;
    goto LABEL_13;
  }
  v39 = 0;
  v10 = BgpGxParseBitmap((__int64)Src, &v41);
  v2 = v41;
  SubRectangle = v10;
  if ( v10 < 0 )
    goto LABEL_37;
  v11 = v41[2];
  if ( v9 == v11 )
  {
    v13 = 0;
  }
  else
  {
    v12 = BgpGxRectangleSize(*v41, v41[1], v11);
    v41 = 0LL;
    v13 = ((v12 + 15) & 0xFFFFFFF0) + 32;
    SubRectangle = BgpGxConvertRectangleEx((__int64)v2, v9, &v41, 0);
    if ( SubRectangle < 0 )
      goto LABEL_37;
    v49[0] = v2;
    v2 = v41;
    v40 = 1;
  }
  v14 = BgpGxRectangleSize(*v2, v2[1], v9);
  v15 = qword_1402F9FEC + dword_1402F9FF4;
  v16 = HIDWORD(qword_1402F9FEC) + dword_1402F9FF8;
  v17 = xmmword_1402F4E90 + DWORD2(xmmword_1402F4E90);
  v18 = v13 + ((v14 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v14 + 15) & 0xFFFFFFF0) + 32);
  v19 = DWORD1(xmmword_1402F4E90) + HIDWORD(xmmword_1402F4E90);
  v42 = v18;
  if ( (unsigned int)xmmword_1402F4E90 <= (int)qword_1402F9FEC + dword_1402F9FF4
    && (unsigned int)xmmword_1402F4E90 >= (unsigned int)qword_1402F9FEC
    && DWORD1(xmmword_1402F4E90) >= HIDWORD(qword_1402F9FEC)
    && DWORD1(xmmword_1402F4E90) <= v16 )
  {
    if ( v17 < (unsigned int)qword_1402F9FEC || v17 > v15 || v19 < HIDWORD(qword_1402F9FEC) || v19 > v16 )
      goto LABEL_52;
    v36 = 1;
  }
  v20 = xmmword_1402F4EC8 + DWORD2(xmmword_1402F4EC8);
  v21 = DWORD1(xmmword_1402F4EC8) + HIDWORD(xmmword_1402F4EC8);
  if ( (unsigned int)xmmword_1402F4EC8 >= (unsigned int)qword_1402F9FEC
    && (unsigned int)xmmword_1402F4EC8 <= v15
    && DWORD1(xmmword_1402F4EC8) >= HIDWORD(qword_1402F9FEC)
    && DWORD1(xmmword_1402F4EC8) <= v16 )
  {
    if ( v20 >= (unsigned int)qword_1402F9FEC && v20 <= v15 && v21 >= HIDWORD(qword_1402F9FEC) && v21 <= v16 )
    {
      v37 = 1;
      goto LABEL_12;
    }
LABEL_52:
    SubRectangle = -1073741823;
    goto LABEL_37;
  }
LABEL_12:
  v9 = BitsPerPixel;
  if ( !v36 )
  {
LABEL_13:
    Rectangle = BgpGxReadRectangle(v43, (__int64)&xmmword_1402F4E90);
    v0 = (_DWORD *)v43[0];
    SubRectangle = Rectangle;
    if ( Rectangle < 0 )
      goto LABEL_37;
    v23 = BgpGxRectangleSize(*(_DWORD *)v43[0], *(_DWORD *)(v43[0] + 4LL), v9);
    v18 += ((v23 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v23 + 15) & 0xFFFFFFF0) + 32);
    v42 = v18;
  }
  if ( !v37 )
  {
    v24 = BgpGxReadRectangle(&v45, (__int64)&xmmword_1402F4EC8);
    v3 = v45;
    SubRectangle = v24;
    if ( v24 < 0 )
      goto LABEL_37;
    v25 = BgpGxRectangleSize(*v45, v45[1], v9);
    v42 = v18 + ((v25 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v25 + 15) & 0xFFFFFFF0) + 32);
  }
  v26 = qword_1402F9FEC;
  v27 = HIDWORD(qword_1402FA0EC);
  v45 = (int *)qword_1402F9FEC;
  if ( !v39 )
  {
    SubRectangle = BgpGxFindSubRectangle(
                     (_DWORD)v2,
                     HIDWORD(qword_1402FA0EC),
                     (unsigned int)v43,
                     (unsigned int)&v41,
                     (__int64)&v38);
    if ( SubRectangle >= 0 )
    {
      v28 = v40;
      v49[v40] = v2;
      v40 = v28 + 1;
      if ( v38 )
      {
        v39 = 1;
        v2 = 0LL;
      }
      else
      {
        LODWORD(v45) = (_DWORD)v41 + (_DWORD)v45;
        HIDWORD(v45) += HIDWORD(v41);
        v26 = (__int64)v45;
        v2 = (int *)v43[0];
      }
    }
  }
  if ( !v36 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v0, v27, (unsigned int)v43, (unsigned int)&v41, (__int64)&v38);
    if ( SubRectangle >= 0 )
    {
      v35 = v40;
      v49[v40] = v0;
      v40 = v35 + 1;
      if ( v38 )
      {
        v36 = 1;
        v0 = 0LL;
      }
      else
      {
        LODWORD(xmmword_1402F4E90) = (_DWORD)v41 + xmmword_1402F4E90;
        DWORD1(xmmword_1402F4E90) += HIDWORD(v41);
        v0 = (_DWORD *)v43[0];
      }
    }
  }
  if ( !v37 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v3, v27, (unsigned int)v43, (unsigned int)&v41, (__int64)&v38);
    if ( SubRectangle >= 0 )
    {
      v29 = v40;
      v49[v40] = v3;
      v40 = v29 + 1;
      if ( v38 )
      {
        v37 = 1;
        v3 = 0LL;
      }
      else
      {
        LODWORD(xmmword_1402F4EC8) = (_DWORD)v41 + xmmword_1402F4EC8;
        DWORD1(xmmword_1402F4EC8) += HIDWORD(v41);
        v3 = (int *)v43[0];
      }
    }
  }
  v30 = BitsPerPixel;
  if ( !v39 )
  {
    LODWORD(v43[0]) = v2[1];
    HIDWORD(v43[0]) = *v2;
    SubRectangle = BgpGxRectangleCreate(v43, BitsPerPixel, &v47);
    if ( SubRectangle < 0 )
      goto LABEL_37;
    memset(*(void **)(v47 + 24), 0, *(unsigned int *)(v47 + 12));
  }
  if ( !v36 )
  {
    LODWORD(v43[0]) = v0[1];
    HIDWORD(v43[0]) = *v0;
    SubRectangle = BgpGxRectangleCreate(v43, v30, &v48);
    if ( SubRectangle < 0 )
      goto LABEL_37;
    memset(*(void **)(v48 + 24), 0, *(unsigned int *)(v48 + 12));
  }
  if ( v37 )
  {
    v31 = v46;
LABEL_36:
    LogFwStat(0LL, 5LL, 0LL);
    dword_1402F4E74 = 0;
    byte_1402F4E80 = v36;
    byte_1402F4E81 = v37;
    byte_1402F4E82 = v39;
    qword_1402F4EB0 = v48;
    qword_1402F4EC0 = v47;
    dword_1402F4E70 = 100;
    qword_1402F4E78 = v26;
    qword_1402F4E88 = (__int64)v0;
    qword_1402F4EB8 = (__int64)v2;
    qword_1402F4EE8 = (__int64)v3;
    qword_1402F4EF0 = v31;
    KeResetEvent(&stru_1403404E0);
    KeInitializeTimerEx(&stru_1403404A0, NotificationTimer);
    KeInitializeDpc(&stru_140340420, AnFwpFadeAnimationTimer, 0LL);
    byte_140328C51 = 1;
    LogFwStat(1LL, 7LL, 0LL);
    KeSetCoalescableTimer(&stru_1403404A0, 0LL, 0x1Eu, 0, &stru_140340420);
    dword_1402F9F90 |= 0x2000u;
    dword_1402F9FAC = v42;
    goto LABEL_37;
  }
  LODWORD(v43[0]) = v3[1];
  HIDWORD(v43[0]) = *v3;
  SubRectangle = BgpGxRectangleCreate(v43, v30, &v46);
  if ( SubRectangle >= 0 )
  {
    v31 = v46;
    memset(*(void **)(v46 + 24), 0, *(unsigned int *)(v46 + 12));
    goto LABEL_36;
  }
LABEL_37:
  if ( v40 )
  {
    v32 = v49;
    v33 = v40;
    do
    {
      BgpGxRectangleDestroy(*v32++);
      --v33;
    }
    while ( v33 );
  }
  if ( SubRectangle < 0 )
  {
    v4 = v46;
    v1 = v47;
    goto LABEL_70;
  }
  return (unsigned int)SubRectangle;
}
