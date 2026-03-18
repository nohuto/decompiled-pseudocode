/*
 * XREFs of rimDispatchAutoRepeatCompleteFrame @ 0x1C00C7C44
 * Callers:
 *     RIMOnTimerNotification @ 0x1C00C2650 (RIMOnTimerNotification.c)
 * Callees:
 *     rimSignalReadComplete @ 0x1C006EEB4 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C006F030 (rimStackAttachAndProcessInput.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00854E4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C00C8BF0 (rimFixUpAutoRepeatCompleteFrameTimeStamps.c)
 */

void __fastcall rimDispatchAutoRepeatCompleteFrame(__int64 a1, __int64 a2)
{
  unsigned int *v4; // rdi
  __int64 v5; // rdx
  PVOID v6; // rcx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 728) )
  {
    if ( *(_QWORD *)(a1 + 696) == a1 + 696 )
    {
      v4 = *(unsigned int **)(a1 + 472);
      if ( v4 && (int)RawInputManagerDeviceObjectResolveHandle(*((void **)v4 + 4), 3u, v4[12] == 0, &Object) >= 0 )
      {
        v6 = Object;
        if ( *(PVOID *)(a2 + 32) == Object )
        {
          *(_BYTE *)(a1 + 728) = 0;
          rimFixUpAutoRepeatCompleteFrameTimeStamps(v6, v5, v4);
          v7[0] = 0LL;
          v7[1] = *v4;
          v4[15] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *((LARGE_INTEGER *)v4 + 8) = KeQueryPerformanceCounter(0LL);
          rimStackAttachAndProcessInput(a1, a2, (__int64)v4, (__int64)v7, 1);
          rimSignalReadComplete(a1, a2);
          v6 = Object;
        }
        ObfDereferenceObject(v6);
      }
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames(a1);
    }
  }
}
