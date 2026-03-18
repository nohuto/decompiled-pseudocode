/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0008178
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C0008444 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C00084CC (-GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00087A0 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C0008858 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0065214 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        unsigned int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  _DWORD *v9; // rcx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  __int128 v13; // xmm1
  unsigned int *v14; // r12
  unsigned __int64 v15; // r8
  int v16; // edi
  struct tagPOINT v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  unsigned int v24; // eax
  _DWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  _BYTE v30[96]; // [rsp+38h] [rbp-21h] BYREF

  memset(&v30[4], 0, 0x5CuLL);
  if ( !*(_QWORD *)(gptiCurrent + 1112LL) )
  {
    v27 = Win32AllocPoolZInit(128LL, 1347253077LL);
    if ( !v27 )
      goto LABEL_31;
    *(_QWORD *)(gptiCurrent + 1112LL) = v27;
  }
  if ( a5 )
  {
    v9 = *(_DWORD **)(gptiCurrent + 1112LL);
    if ( (*v9 & 0x10) != 0 )
    {
      *v9 &= ~0x10u;
      **(_DWORD **)(gptiCurrent + 1112LL) &= ~4u;
    }
  }
  if ( (unsigned int)IsMiPMouseMessage(*((_DWORD *)a3 + 6)) )
  {
    v11 = dword_1C0323500;
    *(_DWORD *)v30 = 4;
    *(_OWORD *)a1 = *(_OWORD *)a3;
    v12 = v11 + 1;
    *(_DWORD *)&v30[4] = 1;
    v13 = *((_OWORD *)a3 + 1);
    if ( v11 == -1 )
      v12 = 1;
    *(_DWORD *)&v30[8] = v11;
    dword_1C0323500 = v12;
    *(_QWORD *)&v30[16] = ghMouseDevice;
    *((_OWORD *)a1 + 1) = v13;
    *((_OWORD *)a1 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)a3 + 3);
    *((_OWORD *)a1 + 4) = *((_OWORD *)a3 + 4);
    *((_OWORD *)a1 + 5) = *((_OWORD *)a3 + 5);
    *((_OWORD *)a1 + 6) = *((_OWORD *)a3 + 6);
    *(_OWORD *)((char *)a1 + v10 - 16) = *((_OWORD *)a3 + 7);
    *(_OWORD *)((char *)a1 + v10) = *(_OWORD *)((char *)a3 + v10);
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)&v30[24] = a4 ? *(_QWORD *)a4 : 0LL;
    v14 = (unsigned int *)((char *)a1 + 24);
    v15 = *((_QWORD *)a3 + 4);
    *(_DWORD *)&v30[64] = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v30[80] = *((_QWORD *)a3 + 15);
    *(_DWORD *)&v30[68] = 1;
    *(_DWORD *)&v30[12] = GetPointerFlagsFromMouse(
                            (unsigned int *)a1 + 6,
                            a2,
                            v15,
                            (unsigned int *)&v30[76],
                            (enum tagPOINTER_BUTTON_CHANGE_TYPE *)&v30[88]);
    v16 = *(_DWORD *)&v30[12];
    if ( *(_DWORD *)&v30[12] )
    {
      if ( (**(_DWORD **)(gptiCurrent + 1112LL) & 4) == 0 )
      {
        v16 = *(_DWORD *)&v30[12] | 0x2000;
        *(_DWORD *)&v30[12] |= 0x2000u;
      }
      if ( (*((_DWORD *)a3 + 23) & 0x1000) != 0 )
      {
        v16 |= 0x400000u;
        *(_DWORD *)&v30[12] = v16;
      }
      *(_DWORD *)&v30[32] = *((__int16 *)a3 + 20);
      *(_DWORD *)&v30[36] = *((__int16 *)a3 + 21);
      v17 = MiPConvertPoint((const struct tagPOINT *)&v30[32]);
      *(_QWORD *)&v30[48] = *(_QWORD *)&v30[32];
      *(struct tagPOINT *)&v30[40] = v17;
      *(struct tagPOINT *)&v30[56] = v17;
      *((_QWORD *)a1 + 12) = gptiCurrent;
      if ( (v16 & 0x180000) != 0 )
      {
        v28 = (*((unsigned __int16 *)a3 + 17) << 16) | 1LL;
        *(_DWORD *)&v30[72] = *((__int16 *)a3 + 17);
        *((_QWORD *)a1 + 4) = v28;
      }
      else
      {
        *((_QWORD *)a1 + 4) = ((unsigned __int16)(*(_WORD *)&v30[12] & 0xE1F7) << 16) | 1LL;
      }
      v18 = *(_QWORD *)(gptiCurrent + 1112LL);
      v19 = *(_OWORD *)&v30[16];
      *(_OWORD *)(v18 + 24) = *(_OWORD *)v30;
      v20 = *(_OWORD *)&v30[32];
      *(_OWORD *)(v18 + 40) = v19;
      v21 = *(_OWORD *)&v30[48];
      *(_OWORD *)(v18 + 56) = v20;
      v22 = *(_OWORD *)&v30[64];
      *(_OWORD *)(v18 + 72) = v21;
      v23 = *(_OWORD *)&v30[80];
      *(_OWORD *)(v18 + 88) = v22;
      *(_OWORD *)(v18 + 104) = v23;
      **(_DWORD **)(gptiCurrent + 1112LL) |= 1u;
      if ( a5 )
      {
        if ( ((*v14 - 579) & 0xFFFFFFFB) == 0 )
        {
          v26 = *(_DWORD **)(gptiCurrent + 1112LL);
          if ( (*v26 & 4) != 0 )
          {
            *v26 |= 0x10u;
            **(_DWORD **)(gptiCurrent + 1112LL) &= ~2u;
          }
        }
      }
      v24 = *v14;
      if ( *v14 < 0x241 || v24 > 0x242 && v24 - 581 > 1 )
      {
        StopMiPIdleNotificationTimer(a4);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1112LL) + 120LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_31:
  v29 = *(_DWORD **)(gptiCurrent + 1112LL);
  if ( v29 )
    *v29 &= ~1u;
  return 0LL;
}
