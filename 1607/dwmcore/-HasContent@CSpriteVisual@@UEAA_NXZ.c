/*
 * XREFs of ?HasContent@CSpriteVisual@@UEAA_NXZ @ 0x180138F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVisual::HasContent(CSpriteVisual *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 38) || *((_QWORD *)this + 69) )
    return 1LL;
  return result;
}
