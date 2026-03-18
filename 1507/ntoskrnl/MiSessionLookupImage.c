/*
 * XREFs of MiSessionLookupImage @ 0x1400FEA40
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiSessionUpdateImageCharges @ 0x140155F24 (MiSessionUpdateImageCharges.c)
 *     MiSessionRemoveImage @ 0x1401596A0 (MiSessionRemoveImage.c)
 *     MiSessionReferenceImage @ 0x14015A40C (MiSessionReferenceImage.c)
 *     MiUnloadApproved @ 0x140453114 (MiUnloadApproved.c)
 *     MmEnumerateSystemImages @ 0x14051C530 (MmEnumerateSystemImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14051C764 (MmIsDriverLoadedCurrentSession.c)
 *     MiSessionUnloadAllImages @ 0x140567E70 (MiSessionUnloadAllImages.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     MiSessionImageCompare @ 0x14001F3C0 (MiSessionImageCompare.c)
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  int v3; // eax

  v2 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 104);
  if ( !v2 )
    return 0LL;
  do
  {
    v3 = MiSessionImageCompare(a1, (__int64)v2);
    if ( v3 < 0 )
    {
      v2 = (_QWORD *)*v2;
    }
    else
    {
      if ( v3 <= 0 )
        break;
      v2 = (_QWORD *)v2[1];
    }
  }
  while ( v2 );
  if ( v2 )
    return v2;
  else
    return 0LL;
}
