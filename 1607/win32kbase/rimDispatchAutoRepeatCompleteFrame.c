/*
 * XREFs of rimDispatchAutoRepeatCompleteFrame @ 0x1C00D81F4
 * Callers:
 *     RIMOnTimerNotification @ 0x1C00CFE90 (RIMOnTimerNotification.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimStackAttachAndProcessInput @ 0x1C000FEEC (rimStackAttachAndProcessInput.c)
 *     rimSignalReadComplete @ 0x1C00104A4 (rimSignalReadComplete.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0081960 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C00D9998 (RIMFixUpAutoRepeatCompleteFrameTimeStamps.c)
 */

void __fastcall rimDispatchAutoRepeatCompleteFrame(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v5; // rdi
  unsigned __int64 v6; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v8; // rdx
  LONGLONG v9; // rcx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 712) )
  {
    if ( *(_QWORD *)(a1 + 680) == a1 + 680 )
    {
      v5 = *(unsigned int **)(a2 + 408);
      if ( v5 && (int)RawInputManagerDeviceObjectResolveHandle(*((void **)v5 + 4), 3u, v5[12] == 0, &Object) >= 0 )
      {
        if ( *(PVOID *)(a2 + 32) == Object )
        {
          v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v9 = PerformanceCounter.QuadPart - *((_QWORD *)v5 + 8);
          if ( v9 >= *(_QWORD *)(a1 + 496) )
          {
            v5[15] = v6;
            *((LARGE_INTEGER *)v5 + 8) = PerformanceCounter;
            *(_BYTE *)(a1 + 712) = 0;
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMFixUpAutoRepeatCompleteFrameTimeStamps)(
              v9,
              (LARGE_INTEGER)v8.QuadPart,
              v5);
            v10[0] = 0LL;
            v10[1] = *v5;
            rimStackAttachAndProcessInput(a1, a2, (__int64)v5, (__int64)v10, 1);
            rimSignalReadComplete(a1, a2);
          }
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames(a1, a2, a3);
    }
  }
}
