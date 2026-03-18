/*
 * XREFs of UpdateWindowSpriteDPI @ 0x1C0062C8C
 * Callers:
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     UpdateWindowMonitor @ 0x1C0072260 (UpdateWindowMonitor.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01DD334 (xxxEnableNonClientDpiScaling.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0062D14 (GreDwmNotifySpriteDPIChange.c)
 */

void __fastcall UpdateWindowSpriteDPI(__int64 a1, __int64 a2)
{
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 50) & 8) != 0 )
    {
      v8[0] = *(_DWORD *)(a1 + 352) & 0xF;
      v8[1] = *(unsigned __int16 *)(a2 + 154);
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
      v9 = OriginFromMonFlags(MonitorFlagsFromWindow, a2);
      v5 = OriginFromMonFlags(32LL, a2);
      v6 = *(_QWORD *)a1;
      v10 = v5;
      v11 = (2 * *(_DWORD *)(a1 + 288)) >> 31;
      ((void (__fastcall *)(__int64, __int64, _QWORD, _DWORD *))GreDwmNotifySpriteDPIChange)(v7, v6, 0LL, v8);
    }
  }
}
