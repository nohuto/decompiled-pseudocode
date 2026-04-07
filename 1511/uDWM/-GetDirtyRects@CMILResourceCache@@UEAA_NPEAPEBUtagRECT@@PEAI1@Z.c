/*
 * XREFs of ?GetDirtyRects@CMILResourceCache@@UEAA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1800A0380
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

bool __fastcall CMILResourceCache::GetDirtyRects(
        CMILResourceCache *this,
        const struct tagRECT **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  *a2 = (const struct tagRECT *)&unk_1800AD640;
  *a3 = 0;
  (*(void (__fastcall **)(CMILResourceCache *, unsigned int *))(*(_QWORD *)this + 40LL))(this, a4);
  return 0;
}
