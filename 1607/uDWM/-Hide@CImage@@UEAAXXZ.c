/*
 * XREFs of ?Hide@CImage@@UEAAXXZ @ 0x18006E940
 * Callers:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180042228 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18008B9F0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CImage::Hide(CImage *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 37);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 16) + 280LL))(
      *(_QWORD *)(v1 + 16),
      *(unsigned int *)(v1 + 24));
  else
    CVisual::SendSetOpacity(this, 0.0);
}
