/*
 * XREFs of CcUnpinDataForThread @ 0x14064FCC4
 * Callers:
 *     <none>
 * Callees:
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceForThreadLite @ 0x140125CC4 (ExReleaseResourceForThreadLite.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x140511420 (CcUnpinData.c)
 */

void __stdcall CcUnpinDataForThread(PVOID Bcb, ERESOURCE_THREAD ResourceThreadId)
{
  __int64 v2; // r9
  void *v3; // rbx
  PVOID *i; // rdi

  v3 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v3 = (void *)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_9:
    CcUnpinFileDataEx((__int64)v3, 1, 0, v2);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    ExReleaseResourceForThreadLite((PERESOURCE)((char *)Bcb + 72), ResourceThreadId);
    goto LABEL_9;
  }
  for ( i = (PVOID *)((char *)Bcb + 16); *i; ++i )
    CcUnpinData(*i);
  ExFreePoolWithTag(v3, 0);
}
