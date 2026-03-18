/*
 * XREFs of CcMapDataForOverwrite @ 0x1400E3728
 * Callers:
 *     CcPreparePinWrite @ 0x1404A8D18 (CcPreparePinWrite.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcMapDataCommon @ 0x1404A8EE4 (CcMapDataCommon.c)
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
  unsigned int v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  struct _KTHREAD *v19; // [rsp+88h] [rbp+10h]
  unsigned int v20; // [rsp+90h] [rbp+18h]
  _QWORD *v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v6 = (int)a2;
  v7 = a1;
  v17 = (a3 + 4095LL + (unsigned __int64)(*a2 & 0xFFF)) >> 12;
  CurrentThread = KeGetCurrentThread();
  v19 = CurrentThread;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( (*(_DWORD *)(v9 + 152) & 0x20000) == 0 )
  {
    v16 = KeAcquireQueuedSpinLock(5uLL);
    *(_DWORD *)(v9 + 152) |= 0x20000u;
    KeReleaseQueuedSpinLock(5uLL, v16);
  }
  v10 = LOBYTE(CurrentThread[1].Teb) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v20 = v10;
  v11 = a5;
  CcMapDataCommon(v7, v6, a3, 1, (__int64)&v18, (__int64)a5);
  v12 = *v11;
  v13 = v17;
  while ( v13 )
  {
    LOBYTE(CurrentThread[1].Teb) = 1;
    if ( --v13 > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      v14 = v13;
      if ( v13 > 0xF )
        v14 = 15;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v14;
    }
    if ( !(unsigned int)MmCheckCachedPageStates(v12, 1LL, 5, 0LL) )
      MmCheckCachedPageStates(v12, 1LL, 4, 0LL);
    v12 += 4096LL;
  }
  LOBYTE(CurrentThread[1].Teb) = v10 & 3;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v10 >> 2;
  __addgsdword(0x5E50u, (unsigned int)KeGetCurrentThread()[1].Timer.TimerListEntry.Flink);
  result = v18;
  *v21 = v18;
  return result;
}
