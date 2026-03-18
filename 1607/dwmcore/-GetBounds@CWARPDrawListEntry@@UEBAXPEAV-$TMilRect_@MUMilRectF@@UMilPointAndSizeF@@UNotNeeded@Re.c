/*
 * XREFs of ?GetBounds@CWARPDrawListEntry@@UEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C0230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPDrawListEntry::GetBounds(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = a1[8];
  a2[1] = a1[9];
  a2[2] = a1[10];
  result = (unsigned int)a1[11];
  a2[3] = result;
  return result;
}
