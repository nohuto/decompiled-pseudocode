/*
 * XREFs of ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x1800767BC
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::SetBorderMode(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 188) & 0x40) == 0 || *((_DWORD *)a1 + 49) )
  {
    *((_DWORD *)a1 + 47) |= 0x40u;
    v1 = *a1;
    *((_DWORD *)a1 + 49) = 0;
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(v1 + 24))(a1, 64LL);
  }
  return result;
}
