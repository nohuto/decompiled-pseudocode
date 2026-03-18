/*
 * XREFs of ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C00DC5C0
 * Callers:
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C00DC684 (DetermineInputTargetPrecedenceTransform.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     TransformVector @ 0x1C02235C0 (TransformVector.c)
 */

void __fastcall UpdateMouseButtonTarget(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        __int64 *a5)
{
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  struct tagKE *v10; // rcx
  int v11; // ecx
  unsigned int MonitorFlagsFromWindow; // eax
  struct tagKE *v13; // [rsp+30h] [rbp-18h] BYREF
  struct tagPOINT v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( (unsigned int)DetermineInputTargetPrecedenceTransform(a1, &v13) )
    {
      v10 = v13;
      *a4 = v14;
      if ( v10 )
      {
        if ( (unsigned int)NlsNullProc(v10, v8, v9) )
          TransformVector(v11, (_DWORD)a4, (_DWORD)a4 + 4, 0, 1);
      }
    }
    else if ( ((*((_BYTE *)a2 + 352) ^ *((_BYTE *)a1 + 352)) & 0xF) != 0 )
    {
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a1);
      PhysicalToLogicalDPIPoint(a4, &v14, MonitorFlagsFromWindow);
    }
    *a5 = LOWORD(a4->x) | (LOWORD(a4->y) << 16);
  }
}
