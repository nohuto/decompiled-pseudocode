/*
 * XREFs of ?Release@CVisualTree@@UEAAKXZ @ 0x180038B80
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x18003A788 (--1CAnimation@@UEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18006BF80 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x18014ED34 (--1CDropShadow@@UEAA@XZ.c)
 *     ?EnsureCviInitialized@CDropShadow@@AEAAJXZ @ 0x18014F690 (-EnsureCviInitialized@CDropShadow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CVisualTree::Release(CVisualTree *this)
{
  return CMILRefCountBase::Release(this);
}
