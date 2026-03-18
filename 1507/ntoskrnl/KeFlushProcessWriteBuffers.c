/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x14003FE30
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400F0A40 (KeQueryTotalCycleTimeThread.c)
 *     NtFlushProcessWriteBuffers @ 0x14012B938 (NtFlushProcessWriteBuffers.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140234100 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140235870 (PpmSetExitLatencySamplingPercentage.c)
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140511240 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1400427F0 (KiIpiSendRequest.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(char a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // esi
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // r8
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rcx
  int v10; // r9d
  unsigned __int64 *v11; // r10
  __int64 v12; // r11
  unsigned __int64 v13; // rdx
  _WORD *v14; // r8
  __int64 result; // rax
  __int128 v16; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-E8h]
  __int64 (__fastcall *v18)(); // [rsp+48h] [rbp-E0h]
  _WORD v19[2]; // [rsp+50h] [rbp-D8h] BYREF
  int v20; // [rsp+54h] [rbp-D4h]
  _QWORD v21[21]; // [rsp+58h] [rbp-D0h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( a1 )
  {
    v3 = 1;
    v10 = KeNumberProcessors_0 - 1;
    LODWORD(v14) = 0;
  }
  else
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    v20 = 0;
    Process = CurrentThread->ApcState.Process;
    Count = Process->ActiveProcessors.Count;
    LOWORD(CurrentThread) = Process->ActiveProcessors.Size;
    v19[0] = Count;
    v19[1] = (_WORD)CurrentThread;
    if ( Count )
    {
      memmove(v21, Process->ActiveProcessors.Bitmap, 8LL * Count);
      Count = v19[0];
    }
    v7 = (unsigned int)KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] >> 6;
    if ( Count > (unsigned int)v7 )
    {
      v8 = &v21[v7];
      v9 = *v8;
      _bittestandreset64(&v9, KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F);
      *v8 = v9;
      Count = v19[0];
    }
    v10 = 0;
    if ( Count )
    {
      v11 = v21;
      v12 = Count;
      do
      {
        v13 = *v11++;
        v10 += (unsigned int)((0x101010101010101LL
                             * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        --v12;
      }
      while ( v12 );
    }
    v14 = v19;
  }
  if ( v10 )
  {
    v18 = PopPoCoalescinCallback;
    v17 = 0LL;
    v16 = 0LL;
    KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), v3, (_DWORD)v14, (unsigned int)&v16, 0, 5LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
