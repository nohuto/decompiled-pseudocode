/*
 * XREFs of ?Initialize@CStoryboard@@MEAAJXZ @ 0x180007540
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x180006A44 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180006C18 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CStoryboard::Initialize(CStoryboard *this, __int64 a2)
{
  CStoryboard::_LogStoryboardEvent((unsigned __int64)this, a2);
  *((_DWORD *)this + 18) = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  CStoryboard::_EnsurePriority(this);
  return 0LL;
}
