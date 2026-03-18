/*
 * XREFs of xxxDefWindowProc @ 0x1C006F890
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059200 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxEventWndProc @ 0x1C0080730 (xxxEventWndProc.c)
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 *     xxxGetControlColor @ 0x1C00E7BB4 (xxxGetControlColor.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0145088 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxSwitchWndProc @ 0x1C0202370 (xxxSwitchWndProc.c)
 *     xxxGetWindowText @ 0x1C0204530 (xxxGetWindowText.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     SfnDWORD @ 0x1C005CF50 (SfnDWORD.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxLoadUserApiHook @ 0x1C0070720 (xxxLoadUserApiHook.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v9; // eax
  unsigned __int64 v10; // rax

  if ( a2 == 397 || a2 == 325 )
    return 0LL;
  if ( gihmodUserApiHook < 0
    || *((char *)a1 + 43) < 0 && (a2 != 130 || (*((_BYTE *)a1 + 42) & 4) == 0 || *((__int16 *)a1 + 33) < 0)
    || (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0
    || !(unsigned int)xxxLoadUserApiHook() )
  {
    return xxxRealDefWindowProc(a1);
  }
  v9 = a2 & 0x1FFFF;
  if ( (*((_BYTE *)a1 + 42) & 8) != 0 )
  {
    if ( v9 < 0x400 )
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
               a1,
               a2,
               a3,
               a4,
               0LL,
               *(_QWORD *)(gpsi + 552LL),
               1,
               0LL);
    v10 = *(_QWORD *)(gpsi + 552LL);
    return SfnDWORD((__int64 *)a1, a2, a3, a4, 0LL, v10);
  }
  if ( v9 >= 0x400 )
  {
    v10 = *(_QWORD *)(gpsi + 736LL);
    return SfnDWORD((__int64 *)a1, a2, a3, a4, 0LL, v10);
  }
  return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
           a1,
           a2,
           a3,
           a4,
           0LL,
           *(_QWORD *)(gpsi + 736LL),
           0,
           0LL);
}
