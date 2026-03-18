/*
 * XREFs of xxxDefWindowProc @ 0x1C007CE70
 * Callers:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00851A0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxEventWndProc @ 0x1C00A9CF0 (xxxEventWndProc.c)
 *     xxxGetControlColor @ 0x1C00B389C (xxxGetControlColor.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C011F2F0 (xxxTooltipWndProc.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014F0AC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxSwitchWndProc @ 0x1C01F9680 (xxxSwitchWndProc.c)
 *     xxxGetWindowText @ 0x1C01FB880 (xxxGetWindowText.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     xxxLoadUserApiHook @ 0x1C006F6E0 (xxxLoadUserApiHook.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     SfnDWORD @ 0x1C0084FB0 (SfnDWORD.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v9; // eax
  __int64 v10; // rax

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
    return SfnDWORD((_DWORD)a1, a2, a3, a4, 0LL, v10);
  }
  if ( v9 >= 0x400 )
  {
    v10 = *(_QWORD *)(gpsi + 736LL);
    return SfnDWORD((_DWORD)a1, a2, a3, a4, 0LL, v10);
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
