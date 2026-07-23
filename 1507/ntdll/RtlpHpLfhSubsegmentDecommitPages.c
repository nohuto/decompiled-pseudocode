/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x18002752C
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x180008944 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x18000922C (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800F3228 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1800279BC (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180037080 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800645A4 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(_RTL_SRWLOCK *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  int v5; // esi
  unsigned int v6; // r15d
  unsigned int v7; // ebx
  BOOL v9; // ebp
  BOOL v11; // r13d
  unsigned int EmptyUnits; // eax
  unsigned int v13; // r14d
  char v14; // cl
  unsigned int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-58h]
  void (__fastcall *v19)(unsigned __int64, __int64, _QWORD); // [rsp+38h] [rbp-40h]
  unsigned int v20; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v5 = 0;
  v6 = a4;
  v7 = a3;
  v9 = a3 < 0;
  v11 = a3 == -2;
  if ( a3 >= 0 )
  {
    if ( !a3 )
      return;
  }
  else
  {
    v7 = 1;
  }
  if ( v7 >= *(unsigned __int8 *)(a2 + 45) )
    return;
  do
  {
    EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v7, &v20);
    v7 = EmptyUnits;
    if ( EmptyUnits == -1 )
      break;
    v13 = v20;
    if ( v20 < v6 )
    {
      if ( !v9 )
        break;
    }
    else
    {
      if ( !v5 )
      {
        if ( (a5 & 1) == 0 )
          RtlAcquireSRWLockShared(a1 + 6);
        v5 = 2;
        if ( !v11 )
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
        continue;
      }
      v14 = *(_BYTE *)(a2 + 44);
      v15 = v20 << v14;
      v16 = EmptyUnits << v14;
      v18 = v16;
      v17 = a2 + v16;
      v19 = (void (__fastcall *)(unsigned __int64, __int64, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[4].Value);
      if ( (char *)v19 == (char *)RtlpHpSegLfhVsDecommit )
        RtlpHpSegLfhVsDecommit(a1->Value, v17, v15);
      else
        v19(a1->Value, v17, v15);
      RtlpHpLfhSubsegmentDecBlockCounts(a2, v18, v15);
      if ( !v9 )
        break;
      v6 = v21;
    }
    v7 += v13;
  }
  while ( v7 < *(unsigned __int8 *)(a2 + 45) );
  if ( v5 )
  {
    if ( !v11 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    if ( (a5 & 1) == 0 )
      RtlReleaseSRWLockShared(a1 + 6);
  }
}
