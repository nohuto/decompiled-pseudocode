/*
 * XREFs of ?GetDrvType@DestroyFontRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1C015DD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DestroyFontRequest::GetDrvType(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 8LL);
}
