/*
 * XREFs of EngCreateRectRgn @ 0x1C0057710
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRegionOwner @ 0x1C00578B0 (GreSetRegionOwner.c)
 *     GreCreateRectRgn @ 0x1C0057900 (GreCreateRectRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

HANDLE __stdcall EngCreateRectRgn(INT left, INT top, INT right, INT bottom)
{
  __int64 RectRgn; // rax
  void *v9; // rdx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v11);
  RectRgn = GreCreateRectRgn((unsigned int)left, (unsigned int)top, (unsigned int)right, (unsigned int)bottom);
  if ( RectRgn )
    GreSetRegionOwner(RectRgn, 0LL);
  EngModeState::~EngModeState((EngModeState *)v11);
  return v9;
}
