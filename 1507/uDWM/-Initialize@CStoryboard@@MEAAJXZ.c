/*
 * XREFs of ?Initialize@CStoryboard@@MEAAJXZ @ 0x18000FB00
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000F1D4 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000F320 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CStoryboard::Initialize(CStoryboard *this, __int64 a2)
{
  CStoryboard::_LogStoryboardEvent((unsigned __int64)this, a2);
  *((_DWORD *)this + 18) = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  CStoryboard::_EnsurePriority(this);
  return 0LL;
}
