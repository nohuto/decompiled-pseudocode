/*
 * XREFs of ?GetContentType@CCompositionSurfaceBitmap@@UEBA?AW4BufferContentType@@XZ @ 0x180126080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetContentType(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 408);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 188);
  return result;
}
