/*
 * XREFs of rimDispatchAutoRepeatCompleteFrame @ 0x1C00C8B40
 * Callers:
 *     RIMOnTimerNotification @ 0x1C00C3300 (RIMOnTimerNotification.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C007DF30 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C0086B48 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C0086D80 (rimStackAttachAndProcessInput.c)
 *     rimFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C00C9AF0 (rimFixUpAutoRepeatCompleteFrameTimeStamps.c)
 */

void __fastcall rimDispatchAutoRepeatCompleteFrame(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v5; // rsi
  __int64 v6; // rdx
  PVOID v7; // rcx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 760) )
  {
    if ( *(_QWORD *)(a1 + 728) == a1 + 728 )
    {
      v5 = *(unsigned int **)(a2 + 392);
      if ( v5 && (int)RawInputManagerDeviceObjectResolveHandle(*((void **)v5 + 4), 3u, v5[12] == 0, &Object) >= 0 )
      {
        v7 = Object;
        if ( *(PVOID *)(a2 + 32) == Object )
        {
          *(_BYTE *)(a1 + 760) = 0;
          rimFixUpAutoRepeatCompleteFrameTimeStamps(v7, v6, v5);
          v8 = *v5;
          v9 = 0;
          v10 = v8;
          v5[15] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *((LARGE_INTEGER *)v5 + 8) = KeQueryPerformanceCounter(0LL);
          rimStackAttachAndProcessInput(a1, a2, (__int64)v5, (__int64)&v9, 1);
          rimSignalReadComplete(a1, a2);
          v7 = Object;
        }
        ObfDereferenceObject(v7);
      }
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames(a1, a2, a3);
    }
  }
}
