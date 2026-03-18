/*
 * XREFs of ?GetDrvType@QueryFontRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1C015DD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryFontRequest::GetDrvType(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL);
}
