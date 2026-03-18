/*
 * XREFs of PhysicalToLogicalDPIMonitorPoint @ 0x1C00AAEA0
 * Callers:
 *     <none>
 * Callees:
 *     Is_MonitorFromPointSupported_0 @ 0x1C00024E0 (Is_MonitorFromPointSupported_0.c)
 *     _MonitorFromPoint_0 @ 0x1C00024E8 (_MonitorFromPoint_0.c)
 *     OriginFromMonFlags @ 0x1C00480F0 (OriginFromMonFlags.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C00488F0 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ?LogicalDpiFromMonFlags@@YAGK@Z @ 0x1C00AACEC (-LogicalDpiFromMonFlags@@YAGK@Z.c)
 *     ScaleDPIPt @ 0x1C00AAF78 (ScaleDPIPt.c)
 */

__int64 __fastcall PhysicalToLogicalDPIMonitorPoint(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rdi
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  if ( (unsigned int)ValidateMonFlags(&v11) && (int)Is_MonitorFromPointSupported_0() >= 0 )
  {
    if ( a4 )
      v7 = *a4;
    else
      v7 = 0LL;
    if ( !v7 )
      v7 = MonitorFromPoint_0();
    if ( a4 )
      *a4 = v7;
    OriginFromMonFlags(0x20u, v7);
    OriginFromMonFlags(v11, v7);
    v8 = LogicalDpiFromMonFlags(v11);
    ScaleDPIPt((_DWORD)a1, (_DWORD)a2, v8, *(unsigned __int16 *)(v7 + 152), v9);
    return 1LL;
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
