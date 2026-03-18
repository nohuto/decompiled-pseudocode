/*
 * XREFs of UpdateWindowSpriteDPI @ 0x1C007BDC4
 * Callers:
 *     UpdateWindowMonitor @ 0x1C006CF60 (UpdateWindowMonitor.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     ComposeWindow @ 0x1C0080214 (ComposeWindow.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C007BE54 (GetMonitorFlagsFromWindow.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C007BE74 (GreDwmNotifySpriteDPIChange.c)
 */

void __fastcall UpdateWindowSpriteDPI(__int64 *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]

  if ( a2 )
  {
    v3 = 0;
    if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
    {
      v10[0] = *((_DWORD *)a1 + 86);
      v10[1] = *(unsigned __int16 *)(a2 + 152);
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1, a2, a3);
      v11 = OriginFromMonFlags(MonitorFlagsFromWindow, a2);
      v7 = OriginFromMonFlags(32LL, a2);
      v8 = *a1;
      LOBYTE(v3) = *((_DWORD *)a1 + 91) == 1;
      v12 = v7;
      v13 = v3;
      ((void (__fastcall *)(__int64, __int64, _QWORD, _DWORD *))GreDwmNotifySpriteDPIChange)(v9, v8, 0LL, v10);
    }
  }
}
