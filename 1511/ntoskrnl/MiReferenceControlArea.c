/*
 * XREFs of MiReferenceControlArea @ 0x14003AD80
 * Callers:
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x140020C90 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     MiBuildWakeList @ 0x14003AAEC (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x14003AB30 (MiRemoveUnusedSegment.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(int a1, struct _FILE_OBJECT *a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 *SectionObjectPointer; // rdi
  KIRQL v9; // al
  __int64 v10; // rbx
  KIRQL v11; // bp
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  ULONG_PTR v17; // r15
  __int64 *v18; // rdi
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+28h] [rbp-40h]
  __int16 v21; // [rsp+30h] [rbp-38h] BYREF
  char v22; // [rsp+32h] [rbp-36h]
  int v23; // [rsp+34h] [rbp-34h]
  _QWORD v24[6]; // [rsp+38h] [rbp-30h] BYREF

  SectionObjectPointer = (__int64 *)a2->SectionObjectPointer;
  if ( (a1 & 0x1000000) != 0 )
    SectionObjectPointer += 2;
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&dword_1402FE280);
    v10 = *SectionObjectPointer;
    v11 = v9;
    if ( !*SectionObjectPointer )
    {
      *SectionObjectPointer = a3;
      v15 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      ExReleaseSpinLockExclusive(&dword_1402FE280, v11);
      *a5 = a3;
      return 1LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v10 + 72) )
      break;
    ExReleaseSpinLockExclusive(&dword_1402FE280, v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
  if ( !(*(_BYTE *)(v10 + 56) & 1 | ((*(_DWORD *)(v10 + 56) & 2) != 0)) )
  {
    v12 = MiBuildWakeList(v10, 4);
    ++*(_QWORD *)(v10 + 24);
    v13 = v12;
    MiRemoveUnusedSegment(v10);
    if ( a4 )
      *(_DWORD *)(v10 + 56) |= 0x8000u;
    else
      ++*(_QWORD *)(v10 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    __writecr8(v11);
    if ( v13 )
    {
      do
      {
        v18 = (__int64 *)*v13;
        KeSignalGate(v13 + 2, 1LL);
        v13 = v18;
      }
      while ( v18 );
    }
    *a5 = v10;
    return 1LL;
  }
  v16 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer);
  v17 = v16;
  if ( v16 )
    KeAbPreWait(v16);
  v21 = 263;
  v24[1] = v24;
  v22 = 6;
  v24[0] = v24;
  v23 = 0;
  v20 = 1;
  v19 = *(_QWORD *)(v10 + 80);
  *(_QWORD *)(v10 + 80) = &v19;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72), v11);
  if ( !a4 )
  {
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    FsRtlReleaseFile(a2);
  }
  KeWaitForGate(&v21, 18LL);
  if ( v17 )
  {
    KeAbPreAcquire((ULONG_PTR)SectionObjectPointer);
    KeAbPostReleaseEx((ULONG_PTR)SectionObjectPointer, v17);
  }
  *a5 = 0LL;
  return 0LL;
}
