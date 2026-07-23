/*
 * XREFs of ExInitPoolLookasidePointers @ 0x1403D5234
 * Callers:
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 * Callees:
 *     ExInitializeSystemLookasideList @ 0x1403D5368 (ExInitializeSystemLookasideList.c)
 */

__int64 ExInitPoolLookasidePointers()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v1; // edi
  int v2; // ebx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->Number )
  {
    qword_1402FB588 = (__int64)&ExPoolLookasideListHead;
    qword_1402FB568 = (__int64)&ExSystemLookasideListHead;
    ExSystemLookasideListHead = (__int64)&ExSystemLookasideListHead;
    ExPoolLookasideListHead = (__int64)&ExPoolLookasideListHead;
    ExInitializeSystemLookasideList(
      (unsigned int)&ExpScratchBufferLookasideList,
      512,
      1264,
      1717723987,
      32,
      (__int64)&ExSystemLookasideListHead);
  }
  CurrentPrcb->PPLookasideList[8].L = (_GENERAL_LOOKASIDE *)&ExpScratchBufferLookasideList;
  CurrentPrcb->PPLookasideList[8].P = (_GENERAL_LOOKASIDE *)&ExpScratchBufferLookasideList;
  v1 = 16;
  v2 = (_DWORD)CurrentPrcb + 2176;
  do
  {
    ExInitializeSystemLookasideList(v2 + 3072, 0, v1, 1282371408, 256, (__int64)&ExPoolLookasideListHead);
    ExInitializeSystemLookasideList(v2, 512, v1, 1282371408, 256, (__int64)&ExPoolLookasideListHead);
    result = ExInitializeSystemLookasideList(v2 + 6144, 1, v1, 1282371408, 256, (__int64)&ExPoolLookasideListHead);
    v1 += 16;
    v2 += 96;
  }
  while ( v1 < 0x210 );
  return result;
}
