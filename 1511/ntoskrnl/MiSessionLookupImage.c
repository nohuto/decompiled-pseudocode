/*
 * XREFs of MiSessionLookupImage @ 0x140120308
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     MiSessionRemoveImage @ 0x14011F8FC (MiSessionRemoveImage.c)
 *     MiSessionReferenceImage @ 0x14011FF1C (MiSessionReferenceImage.c)
 *     MiSessionUpdateImageCharges @ 0x14011FF3C (MiSessionUpdateImageCharges.c)
 *     MiUnloadApproved @ 0x1403CC00C (MiUnloadApproved.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MiSessionUnloadAllImages @ 0x1404F3B90 (MiSessionUnloadAllImages.c)
 *     MmEnumerateSystemImages @ 0x140500E94 (MmEnumerateSystemImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140501064 (MmIsDriverLoadedCurrentSession.c)
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
