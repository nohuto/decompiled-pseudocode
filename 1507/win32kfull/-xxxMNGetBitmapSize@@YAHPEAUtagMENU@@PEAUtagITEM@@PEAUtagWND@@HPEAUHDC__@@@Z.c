/*
 * XREFs of ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0055CD8
 * Callers:
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0053F14 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 * Callees:
 *     MNInitUAHMenuItem @ 0x1C0051AFC (MNInitUAHMenuItem.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C005E724 (MNIsUAHMenu.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     GetDPIServerInfoForDpi @ 0x1C0100128 (GetDPIServerInfoForDpi.c)
 *     MNUpdateUAHMaxPopupWidths @ 0x1C0107E24 (MNUpdateUAHMaxPopupWidths.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall xxxMNGetBitmapSize(
        struct tagMENU *a1,
        struct tagITEM *a2,
        struct tagWND *a3,
        unsigned int a4,
        HDC a5)
{
  __int64 result; // rax
  __int64 DPIServerInfoForDpi; // rax
  bool v11; // zf
  int v12; // ecx
  __int64 v13; // rcx
  __int128 v14; // xmm1
  int v15; // ecx
  int v16; // eax
  _QWORD v17[14]; // [rsp+20h] [rbp-51h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( *((_DWORD *)a2 + 28) != -1 )
    return 0LL;
  v17[1] = *((unsigned int *)a2 + 2);
  v17[0] = 1LL;
  DPIServerInfoForDpi = GetDPIServerInfoForDpi(a4);
  v11 = (*(_DWORD *)a2 & 0x100) == 0;
  v12 = *(_DWORD *)(DPIServerInfoForDpi + 40);
  v17[3] = *((_QWORD *)a2 + 8);
  LODWORD(v17[2]) = v12;
  if ( !v11 || *((_QWORD *)a2 + 13) == -1LL )
  {
    xxxSendMessage(a3, 44LL, 0LL);
    if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1 )
      return 0LL;
  }
  if ( !(unsigned int)MNIsUAHMenu(a1) )
    goto LABEL_10;
  v17[4] = a1 ? *(_QWORD *)a1 : 0LL;
  v17[5] = a5;
  LODWORD(v17[6]) = *((_DWORD *)a1 + 10);
  MNInitUAHMenuItem(v13, (__int64)a2, (__int64)&v17[7]);
  xxxSendMessage(a3, 148LL, 0LL);
  if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a2) == -1 )
    return 0LL;
  v14 = *(_OWORD *)((char *)&v17[9] + 4);
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)((char *)&v17[7] + 4);
  *(_OWORD *)((char *)a2 + 136) = v14;
  if ( (*((_DWORD *)a1 + 10) & 1) != 0 )
  {
    v16 = MNUpdateUAHMaxPopupWidths(a1, a2);
    v15 = v16 + HIDWORD(v17[1]);
    goto LABEL_11;
  }
LABEL_10:
  v15 = HIDWORD(v17[1]);
LABEL_11:
  *((_DWORD *)a2 + 28) = v15;
  result = 1LL;
  *((_DWORD *)a2 + 29) = v17[2];
  return result;
}
