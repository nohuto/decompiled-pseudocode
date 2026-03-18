/*
 * XREFs of ?GetContentType@CCompositionSurfaceInfo@@QEBA?AW4BufferContentType@@XZ @ 0x18000BD70
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18007BAE0 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceInfo::GetContentType(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 120);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 188);
  return result;
}
