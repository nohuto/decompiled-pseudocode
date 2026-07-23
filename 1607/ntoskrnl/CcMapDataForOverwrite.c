/*
 * XREFs of CcMapDataForOverwrite @ 0x14006CF94
 * Callers:
 *     CcPreparePinWrite @ 0x140457144 (CcPreparePinWrite.c)
 * Callees:
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcMapDataCommon @ 0x140457310 (CcMapDataCommon.c)
 */

__int64 __fastcall CcMapDataForOverwrite(__int64 a1, _DWORD *a2, unsigned int a3, _QWORD *a4, unsigned __int64 *a5)
{
  int v6; // r12d
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rbx
  unsigned int v10; // r14d
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // rdi
  unsigned int v13; // ebx
  int v14; // eax
  __int64 result; // rax
  KIRQL v16; // al
  unsigned int v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+98h] [rbp+10h] BYREF
  char v19; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v20; // [rsp+A8h] [rbp+20h]

  v20 = a4;
  v6 = (int)a2;
  v7 = a1;
  v17 = (a3 + 4095LL + (unsigned __int64)(*a2 & 0xFFF)) >> 12;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( (*(_DWORD *)(v9 + 152) & 0x20000) == 0 )
  {
    v16 = KeAcquireQueuedSpinLock(5uLL);
    *(_DWORD *)(v9 + 152) |= 0x20000u;
    KeReleaseQueuedSpinLock(5uLL, v16);
  }
  v10 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v11 = a5;
  CcMapDataCommon(v7, v6, a3, 1, (__int64)&v18, (__int64)a5);
  v12 = *v11;
  v13 = v17;
  while ( v13 )
  {
    v19 = 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( --v13 > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      v14 = v13;
      if ( v13 > 0xF )
        v14 = 15;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v14;
    }
    MmCheckCachedPageStates(v12, 1LL, 5, &v19);
    if ( !v19 )
      MmCheckCachedPageStates(v12, 1LL, 4, 0LL);
    v12 += 4096LL;
  }
  BYTE4(CurrentThread[1].Queue) = v10 & 3;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v10 >> 2;
  __addgsdword(0x5E50u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  result = v18;
  *v20 = v18;
  return result;
}
