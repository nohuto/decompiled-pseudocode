/*
 * XREFs of MiSessionLookupImage @ 0x1400865D4
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140086098 (MiMakeDriverPagesPrivate.c)
 *     MiSessionUpdateImageCharges @ 0x14012C9D8 (MiSessionUpdateImageCharges.c)
 *     MiSessionRemoveImage @ 0x140130440 (MiSessionRemoveImage.c)
 *     MiSessionReferenceImage @ 0x140131878 (MiSessionReferenceImage.c)
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     MmEnumerateSystemImages @ 0x140498F00 (MmEnumerateSystemImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1404990DC (MmIsDriverLoadedCurrentSession.c)
 *     MiSessionUnloadAllImages @ 0x140531F68 (MiSessionUnloadAllImages.c)
 *     MiUnloadApproved @ 0x14054453C (MiUnloadApproved.c)
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
