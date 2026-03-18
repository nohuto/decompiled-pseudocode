/*
 * XREFs of AnFwDisplayFade @ 0x1406DA060
 * Callers:
 *     BgDisplayFade @ 0x1406D97F4 (BgDisplayFade.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     BgpGetBitsPerPixel @ 0x14011C4EC (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangle @ 0x14011CB14 (BgpGxConvertRectangle.c)
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     BgpGxRectangleSize @ 0x14011E5FC (BgpGxRectangleSize.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     BgpClearScreen @ 0x14021EDD0 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1406D9834 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1406D984C (AnFwpDisableProgressTimer.c)
 *     BgpGxParseBitmap @ 0x1406D9990 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1406D9D10 (BgpGxReadRectangle.c)
 *     BgpGxFindSubRectangle @ 0x1406D9EBC (BgpGxFindSubRectangle.c)
 *     LogFwStat @ 0x1406DB3E0 (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x1406DB7A4 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1406DB7C0 (BgpGxRectangleCreate.c)
 *     BgpTxtGetRegionContext @ 0x1406DB860 (BgpTxtGetRegionContext.c)
 */

__int64 __fastcall AnFwDisplayFade(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r13
  int *v3; // r15
  unsigned int *v4; // r12
  __int64 v5; // rdi
  int SubRectangle; // r14d
  __int64 RegionContext; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  _BOOL8 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  int v13; // eax
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  unsigned int v20; // r11d
  unsigned int v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // r11d
  unsigned int v24; // eax
  int Rectangle; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdi
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  _QWORD *v32; // rdi
  __int64 v33; // rsi
  unsigned int v35; // ecx
  char v36; // [rsp+38h] [rbp-39h]
  char v37; // [rsp+39h] [rbp-38h]
  char v38; // [rsp+3Ah] [rbp-37h]
  _BYTE v39[5]; // [rsp+3Bh] [rbp-36h] BYREF
  int *v40; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-29h]
  unsigned int BitsPerPixel; // [rsp+4Ch] [rbp-25h]
  unsigned int v43; // [rsp+50h] [rbp-21h]
  _QWORD v44[2]; // [rsp+58h] [rbp-19h] BYREF
  int *v45; // [rsp+68h] [rbp-9h] BYREF
  __int64 v46; // [rsp+70h] [rbp-1h] BYREF
  __int64 v47; // [rsp+78h] [rbp+7h] BYREF
  __int64 v48; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v49[4]; // [rsp+88h] [rbp+17h] BYREF

  v2 = 0LL;
  v48 = 0LL;
  v3 = 0LL;
  v47 = 0LL;
  v4 = 0LL;
  v41 = 0;
  v5 = 0LL;
  SubRectangle = 0;
  v44[0] = 0LL;
  v40 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( (dword_1402D4BB0 & 0x2000) != 0 )
    goto LABEL_36;
  if ( (dword_1402D4BB0 & 0x200000) != 0 )
  {
LABEL_69:
    AnFwpDisableProgressTimer(a1, a2);
    AnFwDisableBackgroundUpdateTimer();
    SubRectangle = BgpClearScreen(-16777216);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    if ( v48 )
      BgpGxRectangleDestroy(v48);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    if ( v47 )
      BgpGxRectangleDestroy(v47);
    if ( v4 )
      BgpGxRectangleDestroy(v4);
    if ( v5 )
      BgpGxRectangleDestroy(v5);
    return (unsigned int)SubRectangle;
  }
  RegionContext = BgpTxtGetRegionContext(qword_1402D4C40);
  v8 = BgpTxtGetRegionContext(qword_1402D4C48);
  v9 = v8;
  if ( !RegionContext || !v8 )
  {
    SubRectangle = -1073741670;
    goto LABEL_36;
  }
  xmmword_1402CF690 = *(_OWORD *)RegionContext;
  qword_1402CF6A0 = *(_QWORD *)(RegionContext + 16);
  dword_1402CF6A8 = *(_DWORD *)(RegionContext + 24);
  xmmword_1402CF6C8 = *(_OWORD *)v8;
  qword_1402CF6D8 = *(_QWORD *)(v8 + 16);
  dword_1402CF6E0 = *(_DWORD *)(v8 + 24);
  BgpFwFreeMemory(RegionContext);
  BgpFwFreeMemory(v9);
  AnFwpDisableProgressTimer(v11, v10);
  AnFwDisableBackgroundUpdateTimer();
  v36 = 0;
  v37 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  v12 = BitsPerPixel;
  LogFwStat(1LL, 5LL, 0LL);
  if ( !qword_1402D4BF8 )
  {
    v38 = 1;
    v21 = 0;
    goto LABEL_13;
  }
  v38 = 0;
  v13 = BgpGxParseBitmap((__int64)qword_1402D4BF8, &v40);
  v3 = v40;
  SubRectangle = v13;
  if ( v13 < 0 )
    goto LABEL_36;
  v14 = v40[2];
  if ( v12 == v14 )
  {
    v16 = 0;
  }
  else
  {
    v15 = BgpGxRectangleSize(*v40, v40[1], v14);
    v40 = 0LL;
    v16 = ((v15 + 15) & 0xFFFFFFF0) + 32;
    SubRectangle = BgpGxConvertRectangle((__int64)v3, BitsPerPixel, &v40, 0);
    if ( SubRectangle < 0 )
      goto LABEL_36;
    v49[0] = v3;
    v3 = v40;
    v41 = 1;
  }
  v17 = BgpGxRectangleSize(*v3, v3[1], BitsPerPixel);
  a2 = (unsigned int)qword_1402D4C0C;
  v18 = qword_1402D4C0C + dword_1402D4C14;
  v19 = HIDWORD(qword_1402D4C0C) + dword_1402D4C18;
  v20 = xmmword_1402CF690 + DWORD2(xmmword_1402CF690);
  LODWORD(v40) = qword_1402D4C0C;
  v21 = v16 + ((v17 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v17 + 15) & 0xFFFFFFF0) + 32);
  a1 = DWORD1(xmmword_1402CF690);
  v22 = DWORD1(xmmword_1402CF690) + HIDWORD(xmmword_1402CF690);
  v43 = v21;
  if ( (unsigned int)xmmword_1402CF690 <= (int)qword_1402D4C0C + dword_1402D4C14
    && (unsigned int)xmmword_1402CF690 >= (unsigned int)qword_1402D4C0C
    && DWORD1(xmmword_1402CF690) >= HIDWORD(qword_1402D4C0C)
    && DWORD1(xmmword_1402CF690) <= v19 )
  {
    if ( v20 < (unsigned int)qword_1402D4C0C || v20 > v18 || v22 < HIDWORD(qword_1402D4C0C) || v22 > v19 )
      goto LABEL_52;
    v36 = 1;
  }
  a2 = (unsigned int)xmmword_1402CF6C8;
  v23 = xmmword_1402CF6C8 + DWORD2(xmmword_1402CF6C8);
  a1 = DWORD1(xmmword_1402CF6C8);
  v24 = DWORD1(xmmword_1402CF6C8) + HIDWORD(xmmword_1402CF6C8);
  if ( (unsigned int)xmmword_1402CF6C8 >= (unsigned int)v40
    && (unsigned int)xmmword_1402CF6C8 <= v18
    && DWORD1(xmmword_1402CF6C8) >= HIDWORD(qword_1402D4C0C)
    && DWORD1(xmmword_1402CF6C8) <= v19 )
  {
    if ( v23 >= (unsigned int)v40 && v23 <= v18 && v24 >= HIDWORD(qword_1402D4C0C) && v24 <= v19 )
    {
      v37 = 1;
      goto LABEL_12;
    }
LABEL_52:
    SubRectangle = -1073741823;
    goto LABEL_36;
  }
LABEL_12:
  if ( !v36 )
  {
LABEL_13:
    Rectangle = BgpGxReadRectangle(v44, (__int64)&xmmword_1402CF690);
    v2 = (unsigned int *)v44[0];
    SubRectangle = Rectangle;
    if ( Rectangle < 0 )
      goto LABEL_36;
    v26 = BgpGxRectangleSize(*(_DWORD *)v44[0], *(_DWORD *)(v44[0] + 4LL), BitsPerPixel);
    v21 += ((v26 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v26 + 15) & 0xFFFFFFF0) + 32);
    v43 = v21;
  }
  if ( !v37 )
  {
    v27 = BgpGxReadRectangle(&v45, (__int64)&xmmword_1402CF6C8);
    v4 = (unsigned int *)v45;
    SubRectangle = v27;
    if ( v27 < 0 )
      goto LABEL_36;
    v28 = BgpGxRectangleSize(*v45, v45[1], BitsPerPixel);
    v43 = v21 + ((v28 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v28 + 15) & 0xFFFFFFF0) + 32);
  }
  v29 = qword_1402D4C0C;
  v45 = (int *)qword_1402D4C0C;
  if ( !v38 )
  {
    SubRectangle = BgpGxFindSubRectangle((unsigned int *)v3, -16777216, (__int64)v44, (unsigned int *)&v40, v39);
    if ( SubRectangle >= 0 )
    {
      v30 = v41;
      v49[v41] = v3;
      v41 = v30 + 1;
      if ( v39[0] )
      {
        v38 = 1;
        v3 = 0LL;
      }
      else
      {
        LODWORD(v45) = (_DWORD)v40 + (_DWORD)v45;
        HIDWORD(v45) += HIDWORD(v40);
        v29 = (__int64)v45;
        v3 = (int *)v44[0];
      }
    }
  }
  if ( !v36 )
  {
    SubRectangle = BgpGxFindSubRectangle(v2, -16777216, (__int64)v44, (unsigned int *)&v40, v39);
    if ( SubRectangle >= 0 )
    {
      v35 = v41;
      v49[v41] = v2;
      v41 = v35 + 1;
      if ( v39[0] )
      {
        v36 = 1;
        v2 = 0LL;
      }
      else
      {
        LODWORD(xmmword_1402CF690) = (_DWORD)v40 + xmmword_1402CF690;
        DWORD1(xmmword_1402CF690) += HIDWORD(v40);
        v2 = (unsigned int *)v44[0];
      }
    }
  }
  if ( !v37 )
  {
    SubRectangle = BgpGxFindSubRectangle(v4, -16777216, (__int64)v44, (unsigned int *)&v40, v39);
    if ( SubRectangle >= 0 )
    {
      v31 = v41;
      v49[v41] = v4;
      v41 = v31 + 1;
      if ( v39[0] )
      {
        v37 = 1;
        v4 = 0LL;
      }
      else
      {
        LODWORD(xmmword_1402CF6C8) = (_DWORD)v40 + xmmword_1402CF6C8;
        DWORD1(xmmword_1402CF6C8) += HIDWORD(v40);
        v4 = (unsigned int *)v44[0];
      }
    }
  }
  if ( !v38 )
  {
    LODWORD(v44[0]) = v3[1];
    HIDWORD(v44[0]) = *v3;
    SubRectangle = BgpGxRectangleCreate(v44, BitsPerPixel, &v47);
    if ( SubRectangle < 0 )
      goto LABEL_36;
    memset(*(void **)(v47 + 24), 0, *(unsigned int *)(v47 + 12));
  }
  if ( !v36 )
  {
    LODWORD(v44[0]) = v2[1];
    HIDWORD(v44[0]) = *v2;
    SubRectangle = BgpGxRectangleCreate(v44, BitsPerPixel, &v48);
    if ( SubRectangle < 0 )
      goto LABEL_36;
    memset(*(void **)(v48 + 24), 0, *(unsigned int *)(v48 + 12));
  }
  if ( v37 )
    goto LABEL_35;
  LODWORD(v44[0]) = v4[1];
  HIDWORD(v44[0]) = *v4;
  SubRectangle = BgpGxRectangleCreate(v44, BitsPerPixel, &v46);
  if ( SubRectangle >= 0 )
  {
    memset(*(void **)(v46 + 24), 0, *(unsigned int *)(v46 + 12));
LABEL_35:
    LogFwStat(0LL, 5LL, 0LL);
    dword_1402CF674 = 0;
    byte_1402CF680 = v36;
    byte_1402CF681 = v37;
    byte_1402CF682 = v38;
    qword_1402CF6B0 = v48;
    qword_1402CF6C0 = v47;
    qword_1402CF6F0 = v46;
    dword_1402CF670 = 100;
    qword_1402CF678 = v29;
    qword_1402CF688 = (__int64)v2;
    qword_1402CF6B8 = (__int64)v3;
    qword_1402CF6E8 = (__int64)v4;
    KeResetEvent(&stru_14031C380);
    KeInitializeTimerEx(&stru_14031C3A0, NotificationTimer);
    KeInitializeDpc(&stru_14031C3E0, AnFwpFadeAnimationTimer, 0LL);
    byte_1403069E6 = 1;
    LogFwStat(1LL, 7LL, 0LL);
    KeSetCoalescableTimer(&stru_14031C3A0, 0LL, 0x1Eu, 0, &stru_14031C3E0);
    dword_1402D4BB0 |= 0x2000u;
    dword_1402D4BCC = v43;
  }
LABEL_36:
  if ( v41 )
  {
    v32 = v49;
    v33 = v41;
    do
    {
      BgpGxRectangleDestroy(*v32++);
      --v33;
    }
    while ( v33 );
  }
  if ( SubRectangle < 0 )
  {
    v5 = v46;
    goto LABEL_69;
  }
  return (unsigned int)SubRectangle;
}
