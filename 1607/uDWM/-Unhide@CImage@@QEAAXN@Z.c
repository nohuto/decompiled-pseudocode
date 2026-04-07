/*
 * XREFs of ?Unhide@CImage@@QEAAXN@Z @ 0x18006E904
 * Callers:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180042228 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18008B9F0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CImage::Unhide(CImage *this, double a2)
{
  __int64 v2; // rdx

  v2 = *((_QWORD *)this + 37);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 16) + 280LL))(
      *(_QWORD *)(v2 + 16),
      *(unsigned int *)(v2 + 24));
  else
    CVisual::SendSetOpacity(this, a2);
}
