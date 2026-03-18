/*
 * XREFs of ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C0101F88
 * Callers:
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 * Callees:
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C010205C (DetermineInputTargetPrecedenceTransform.c)
 *     TransformVector @ 0x1C022D854 (TransformVector.c)
 */

void __fastcall UpdateMouseButtonTarget(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        __int64 *a5)
{
  __int64 v8; // rcx
  unsigned int MonitorFlags; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  struct tagPOINT v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( (unsigned int)DetermineInputTargetPrecedenceTransform(a1, v10) )
    {
      v8 = v10[0];
      *a4 = v11;
      if ( v8 )
        TransformVector(v8, (_DWORD)a4, (_DWORD)a4 + 4, 0, 1);
    }
    else if ( !(unsigned int)SameCoordinateSpace(
                               *(_QWORD *)(*((_QWORD *)a2 + 2) + 376LL),
                               *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL)) )
    {
      MonitorFlags = GetMonitorFlags(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL));
      PhysicalToLogicalDPIPoint(a4, &v11, MonitorFlags, 0LL);
    }
    *a5 = LOWORD(a4->x) | (LOWORD(a4->y) << 16);
  }
}
