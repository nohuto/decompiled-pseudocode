/*
 * XREFs of ??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ @ 0x1C000F734
 * Callers:
 *     EngStrokePath @ 0x1C000F530 (EngStrokePath.c)
 *     EngStrokeAndFillPath @ 0x1C027B650 (EngStrokeAndFillPath.c)
 * Callees:
 *     <none>
 */

void __fastcall BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE(BOUNDCLIPRGNTOSURFACE *this)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 19);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v1);
}
