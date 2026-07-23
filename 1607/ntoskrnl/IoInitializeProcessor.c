/*
 * XREFs of IoInitializeProcessor @ 0x140552F84
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1403D5368 (ExInitializeSystemLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x140580EDC (IopQueryProcessorInitValues.c)
 */

__int64 __fastcall IoInitializeProcessor(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rsi
  char *PoolWithTag; // rbx
  _BYTE v6[32]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a2;
  if ( !a2 )
  {
    IopQueryProcessorInitValues(v6);
    v2 = v6;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x280uLL, 0x6F49u);
  if ( IopIrpCreditsEnabled > 0 )
    *(_DWORD *)(a1 + 11548) = *((_DWORD *)v2 + 7);
  else
    *(_DWORD *)(a1 + 11548) = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 2040) = &IopCompletionLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      56,
      1349542729,
      *((_WORD *)v2 + 3),
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2032) = PoolWithTag;
    PoolWithTag += 128;
  }
  else
  {
    *(_QWORD *)(a1 + 2032) = &IopCompletionLookasideList;
  }
  *(_QWORD *)(a1 + 1960) = &IopLargeIrpLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v2 + 5),
      1282437705,
      *((_WORD *)v2 + 2),
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 1952) = PoolWithTag;
    PoolWithTag += 128;
  }
  else
  {
    *(_QWORD *)(a1 + 1952) = &IopLargeIrpLookasideList;
  }
  *(_QWORD *)(a1 + 1944) = &IopMediumIrpLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v2 + 4),
      1299214921,
      *((_WORD *)v2 + 1),
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 1936) = PoolWithTag;
    PoolWithTag += 128;
  }
  else
  {
    *(_QWORD *)(a1 + 1936) = &IopMediumIrpLookasideList;
  }
  *(_QWORD *)(a1 + 1928) = &IopSmallIrpLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v2 + 3),
      1399878217,
      *(_WORD *)v2,
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 1920) = PoolWithTag;
    PoolWithTag += 128;
  }
  else
  {
    *(_QWORD *)(a1 + 1920) = &IopSmallIrpLookasideList;
  }
  *(_QWORD *)(a1 + 1976) = &IopMdlLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v2 + 6),
      1349280845,
      *((_WORD *)v2 + 4),
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 1968) = PoolWithTag;
  }
  else
  {
    *(_QWORD *)(a1 + 1968) = &IopMdlLookasideList;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    memset((void *)(a1 + 25856), 0, 0x50uLL);
    *(_DWORD *)(a1 + 25936) = 0;
    memset((void *)(a1 + 25940), 0, 0x50uLL);
    *(_DWORD *)(a1 + 26020) = 0;
  }
  return 0LL;
}
