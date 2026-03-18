/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0014734
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNInitUAHMenuItem @ 0x1C001489C (MNInitUAHMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C00148FC (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall xxxSendMenuDrawItemMessage(
        HDC a1,
        unsigned int a2,
        struct tagMENU *a3,
        struct tagITEM *a4,
        int a5,
        int a6,
        struct tagWND *a7)
{
  struct tagWND *v7; // rdi
  int v12; // r15d
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+40h] [rbp-B1h] BYREF
  struct tagWND *v20; // [rsp+48h] [rbp-A9h]
  _QWORD v21[18]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v21, 0, sizeof(v21));
  v12 = 1;
  v13 = MNIsUAHMenu(a3);
  MNInitDrawItemStruct(a1, a2, a3, a4, a5, a6, (struct tagDRAWITEMSTRUCT *)v21);
  v14 = *((_QWORD *)a3 + 9);
  if ( v14 && ((*(_DWORD *)a4 & 0x100) != 0 || *((_QWORD *)a4 + 13) == -1LL) )
  {
    v19 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v19;
    v20 = (struct tagWND *)v14;
    ++*(_DWORD *)(v14 + 8);
    xxxSendMessage(*((_QWORD *)a3 + 9), 43LL, 0LL, v21);
    ThreadUnlock1(v18, v17);
    if ( (unsigned int)MNGetpItemIndex(a3, a4) == -1 )
      v12 = 0;
  }
  if ( v13 )
  {
    if ( a7 || (v7 = (struct tagWND *)*((_QWORD *)a3 + 9)) != 0LL )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        LODWORD(v21[2]) &= ~0x100u;
      v21[8] = *(_QWORD *)a3;
      LODWORD(v21[10]) = *((_DWORD *)a3 + 10);
      v21[9] = a1;
      if ( v12 )
        MNInitUAHMenuItem(a3, a4, &v21[11]);
      v19 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v19;
      v20 = v7;
      ++*((_DWORD *)v7 + 2);
      xxxSendMessage(v7, 146LL, 0LL, v21);
      ThreadUnlock1(v16, v15);
    }
  }
}
