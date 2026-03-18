/*
 * XREFs of vRestorePathWrap @ 0x1C0100140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct HPATH__ *__fastcall vRestorePathWrap(__int64 *a1)
{
  __int64 v1; // rcx
  struct HPATH__ *result; // rax

  v1 = *a1;
  if ( *(_QWORD *)(v1 + 168) )
  {
    result = (struct HPATH__ *)*(unsigned int *)(v1 + 176);
    if ( ((unsigned __int8)result & 2) == 0 )
    {
      *(_DWORD *)(v1 + 176) &= ~1u;
      return DC::hpath((DC *)v1, 0LL);
    }
  }
  return result;
}
