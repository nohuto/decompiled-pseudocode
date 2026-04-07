/*
 * XREFs of ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180074AA0
 * Callers:
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x1800131F0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180013B64 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009BC60 (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009BE50 (-UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetIconicWidth(CSecondaryWindowRepresentation *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 64);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 112);
  return result;
}
