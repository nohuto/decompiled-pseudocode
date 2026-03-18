/*
 * XREFs of ??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ @ 0x1C013CD10
 * Callers:
 *     EngStrokePath @ 0x1C013CBC0 (EngStrokePath.c)
 *     EngStrokeAndFillPath @ 0x1C027D410 (EngStrokeAndFillPath.c)
 * Callees:
 *     <none>
 */

void __fastcall BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE(BOUNDCLIPRGNTOSURFACE *this)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 19);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v1);
}
