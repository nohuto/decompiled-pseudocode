/*
 * XREFs of ?GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1801326CC
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18003366C (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?GetSize@CRenderTargetBitmap@@UEBAXPEAI0@Z @ 0x180132700 (-GetSize@CRenderTargetBitmap@@UEBAXPEAI0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::GetRenderBounds(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 128);
  result = 0LL;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
  a2[1] = 0LL;
  *a2 = 0LL;
  return result;
}
