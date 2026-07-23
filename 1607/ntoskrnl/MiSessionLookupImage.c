/*
 * XREFs of MiSessionLookupImage @ 0x140087EC4
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiSessionUpdateImageCharges @ 0x14012CF48 (MiSessionUpdateImageCharges.c)
 *     MiSessionRemoveImage @ 0x1401309B0 (MiSessionRemoveImage.c)
 *     MiSessionReferenceImage @ 0x140131DE8 (MiSessionReferenceImage.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140499B6C (MmIsDriverLoadedCurrentSession.c)
 *     MiSessionUnloadAllImages @ 0x1405324A8 (MiSessionUnloadAllImages.c)
 *     MiUnloadApproved @ 0x140544A7C (MiUnloadApproved.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 104);
  while ( v1 )
  {
    if ( a1 > v1[6] )
    {
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      if ( a1 >= (v1[5] & 0xFFFFFFFFFFFFFFFCuLL) )
        return v1;
      v1 = (_QWORD *)*v1;
    }
  }
  return 0LL;
}
