/*
 * XREFs of CcUnpinDataForThread @ 0x1405F90A4
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceForThreadLite @ 0x1400A6780 (ExReleaseResourceForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
 */

void __stdcall CcUnpinDataForThread(PVOID Bcb, ERESOURCE_THREAD ResourceThreadId)
{
  void *v2; // rbx
  PVOID *i; // rdi

  v2 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v2 = (void *)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_9:
    CcUnpinFileDataEx((__int64)v2, 1, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    ExReleaseResourceForThreadLite((PERESOURCE)((char *)Bcb + 72), ResourceThreadId);
    goto LABEL_9;
  }
  for ( i = (PVOID *)((char *)Bcb + 16); *i; ++i )
    CcUnpinData(*i);
  ExFreePoolWithTag(v2, 0);
}
