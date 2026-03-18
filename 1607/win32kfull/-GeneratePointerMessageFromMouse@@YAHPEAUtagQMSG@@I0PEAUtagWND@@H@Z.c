/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C000AF9C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C000B26C (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C000B2E4 (-GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B5D8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B694 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C005814C (-IsMiPMouseMessage@@YAHI@Z.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        unsigned int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  _DWORD *v9; // rcx
  __int128 v10; // xmm0
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // r12
  unsigned __int64 v14; // r8
  int v15; // edi
  struct tagPOINT v16; // rax
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v23; // eax
  __int64 v25; // rax
  _DWORD *v26; // rcx
  __int64 v27; // rcx
  _DWORD *v28; // rax
  _OWORD v29[6]; // [rsp+38h] [rbp-21h] BYREF

  memset(v29, 0, sizeof(v29));
  if ( !*(_QWORD *)(gptiCurrent + 1136LL) )
  {
    v25 = Win32AllocPoolZInit(128LL, 1347253077LL);
    if ( !v25 )
      goto LABEL_31;
    *(_QWORD *)(gptiCurrent + 1136LL) = v25;
  }
  if ( a5 )
  {
    v9 = *(_DWORD **)(gptiCurrent + 1136LL);
    if ( (*v9 & 0x10) != 0 )
    {
      *v9 &= ~0x10u;
      **(_DWORD **)(gptiCurrent + 1136LL) &= ~4u;
    }
  }
  if ( (unsigned int)IsMiPMouseMessage(*((_DWORD *)a3 + 6)) )
  {
    v10 = *(_OWORD *)a3;
    *(_QWORD *)&v29[0] = 0x100000004LL;
    *(_OWORD *)a1 = v10;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a1 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)a3 + 3);
    *((_OWORD *)a1 + 4) = *((_OWORD *)a3 + 4);
    *((_OWORD *)a1 + 5) = *((_OWORD *)a3 + 5);
    *((_OWORD *)a1 + 6) = *((_OWORD *)a3 + 6);
    *((_OWORD *)a1 + 7) = *((_OWORD *)a3 + 7);
    *((_OWORD *)a1 + 8) = *((_OWORD *)a3 + 8);
    *((_QWORD *)a1 + 18) = *((_QWORD *)a3 + 18);
    v11 = dword_1C0328B98;
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    v12 = v11 + 1;
    DWORD2(v29[0]) = v11;
    if ( v11 == -1 )
      v12 = 1;
    dword_1C0328B98 = v12;
    *(_QWORD *)&v29[1] = ghMouseDevice;
    *((_QWORD *)&v29[1] + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v13 = (unsigned int *)((char *)a1 + 24);
    v14 = *((_QWORD *)a3 + 4);
    LODWORD(v29[4]) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v29[5] = *((_QWORD *)a3 + 16);
    DWORD1(v29[4]) = 1;
    HIDWORD(v29[0]) = GetPointerFlagsFromMouse(
                        (unsigned int *)a1 + 6,
                        a2,
                        v14,
                        (unsigned int *)&v29[4] + 3,
                        (enum tagPOINTER_BUTTON_CHANGE_TYPE *)((char *)&v29[5] + 8));
    v15 = HIDWORD(v29[0]);
    if ( HIDWORD(v29[0]) )
    {
      if ( (**(_DWORD **)(gptiCurrent + 1136LL) & 4) == 0 )
      {
        v15 = HIDWORD(v29[0]) | 0x2000;
        HIDWORD(v29[0]) |= 0x2000u;
      }
      if ( (*((_DWORD *)a3 + 25) & 0x1000) != 0 )
      {
        v15 |= 0x400000u;
        HIDWORD(v29[0]) = v15;
      }
      LODWORD(v29[2]) = *((__int16 *)a3 + 20);
      DWORD1(v29[2]) = *((__int16 *)a3 + 21);
      v16 = MiPConvertPoint((const struct tagPOINT *)&v29[2]);
      *(_QWORD *)&v29[3] = *(_QWORD *)&v29[2];
      *((struct tagPOINT *)&v29[2] + 1) = v16;
      *((struct tagPOINT *)&v29[3] + 1) = v16;
      *((_QWORD *)a1 + 13) = gptiCurrent;
      if ( (v15 & 0x180000) != 0 )
      {
        v27 = (*((unsigned __int16 *)a3 + 17) << 16) | 1LL;
        DWORD2(v29[4]) = *((__int16 *)a3 + 17);
        *((_QWORD *)a1 + 4) = v27;
      }
      else
      {
        *((_QWORD *)a1 + 4) = ((unsigned __int16)(WORD6(v29[0]) & 0xE1F7) << 16) | 1LL;
      }
      v17 = *(_QWORD *)(gptiCurrent + 1136LL);
      v18 = v29[1];
      *(_OWORD *)(v17 + 24) = v29[0];
      v19 = v29[2];
      *(_OWORD *)(v17 + 40) = v18;
      v20 = v29[3];
      *(_OWORD *)(v17 + 56) = v19;
      v21 = v29[4];
      *(_OWORD *)(v17 + 72) = v20;
      v22 = v29[5];
      *(_OWORD *)(v17 + 88) = v21;
      *(_OWORD *)(v17 + 104) = v22;
      **(_DWORD **)(gptiCurrent + 1136LL) |= 1u;
      if ( a5 )
      {
        if ( ((*v13 - 579) & 0xFFFFFFFB) == 0 )
        {
          v26 = *(_DWORD **)(gptiCurrent + 1136LL);
          if ( (*v26 & 4) != 0 )
          {
            *v26 |= 0x10u;
            **(_DWORD **)(gptiCurrent + 1136LL) &= ~2u;
          }
        }
      }
      v23 = *v13;
      if ( *v13 < 0x241 || v23 > 0x242 && v23 - 581 > 1 )
      {
        StopMiPIdleNotificationTimer(a4);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1136LL) + 120LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_31:
  v28 = *(_DWORD **)(gptiCurrent + 1136LL);
  if ( v28 )
    *v28 &= ~1u;
  return 0LL;
}
