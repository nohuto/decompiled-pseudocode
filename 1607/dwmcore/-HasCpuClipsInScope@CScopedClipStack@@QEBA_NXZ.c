/*
 * XREFs of ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18009842C
 * Callers:
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180111FC8 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScopedClipStack::HasCpuClipsInScope(CScopedClipStack *this)
{
  int v1; // eax
  char v2; // r9

  v1 = *((_DWORD *)this + 6);
  v2 = 0;
  if ( v1 )
    return *(_DWORD *)(*(_QWORD *)this + 80LL * (unsigned int)(v1 - 1) + 8) != 0;
  return v2;
}
