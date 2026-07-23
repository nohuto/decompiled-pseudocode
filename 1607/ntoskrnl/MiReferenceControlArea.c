/*
 * XREFs of MiReferenceControlArea @ 0x140025BE4
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400268F0 (MiBuildWakeList.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1400C62F0 (KeAbPreWait.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(int a1, struct _FILE_OBJECT *a2, __int64 a3, int a4, _QWORD *a5)
{
  _QWORD *p_DataSectionObject; // rdi
  KIRQL v9; // al
  __int64 v10; // rbx
  KIRQL v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+28h] [rbp-28h]
  __int16 v20; // [rsp+30h] [rbp-20h] BYREF
  char v21; // [rsp+32h] [rbp-1Eh]
  int v22; // [rsp+34h] [rbp-1Ch]
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF

  p_DataSectionObject = &a2->SectionObjectPointer->DataSectionObject;
  if ( (a1 & 0x1000000) != 0 )
    p_DataSectionObject += 2;
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&dword_140326580);
    v10 = *p_DataSectionObject;
    v11 = v9;
    if ( !*p_DataSectionObject )
    {
      *p_DataSectionObject = a3;
      v15 = KeAbPreAcquire((ULONG_PTR)p_DataSectionObject);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      ExReleaseSpinLockExclusive(&dword_140326580, v11);
      *a5 = a3;
      return 1LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v10 + 72) )
      break;
    ExReleaseSpinLockExclusive(&dword_140326580, v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
  if ( !(*(_BYTE *)(v10 + 56) & 1 | ((*(_DWORD *)(v10 + 56) & 2) != 0)) )
  {
    v12 = MiBuildWakeList(v10, 4LL);
    ++*(_QWORD *)(v10 + 24);
    v13 = v12;
    MiRemoveUnusedSegment(v10);
    if ( a4 )
      *(_DWORD *)(v10 + 56) |= 0x8000u;
    else
      ++*(_QWORD *)(v10 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    __writecr8(v11);
    MiReleaseControlAreaWaiters(v13);
    *a5 = v10;
    return 1LL;
  }
  v16 = KeAbPreAcquire((ULONG_PTR)p_DataSectionObject);
  v17 = v16;
  if ( v16 )
    KeAbPreWait(v16);
  v22 = 0;
  v23[1] = v23;
  v20 = 263;
  v23[0] = v23;
  v21 = 6;
  v19 = 1;
  v18 = *(_QWORD *)(v10 + 80);
  *(_QWORD *)(v10 + 80) = &v18;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72), v11);
  if ( !a4 )
  {
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    FsRtlReleaseFile(a2);
  }
  KeWaitForGate(&v20, 18LL);
  if ( v17 )
  {
    KeAbPreAcquire((ULONG_PTR)p_DataSectionObject);
    KeAbPostReleaseEx((ULONG_PTR)p_DataSectionObject);
  }
  *a5 = 0LL;
  return 0LL;
}
