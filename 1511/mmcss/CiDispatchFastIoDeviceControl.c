/*
 * XREFs of CiDispatchFastIoDeviceControl @ 0x1C000A3D0
 * Callers:
 *     <none>
 * Callees:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 *     CiSchedulerTaskIndexYield @ 0x1C00013B0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerSetTaskIndexMode @ 0x1C00015C0 (CiSchedulerSetTaskIndexMode.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00019E0 (CiSchedulerCancelTaskIndexYield.c)
 *     memmove @ 0x1C0002B80 (memmove.c)
 *     WPP_SF_dd @ 0x1C000408C (WPP_SF_dd.c)
 *     CiThreadSetRelativePriority @ 0x1C000A650 (CiThreadSetRelativePriority.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000AF20 (CiCreateTaskIndexClientFromThread.c)
 */

char __fastcall CiDispatchFastIoDeviceControl(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        _DWORD *Address,
        unsigned int Length,
        unsigned int a7,
        __int64 a8)
{
  size_t v8; // r14
  ULONG v11; // ebx
  int TaskIndexClientFromThread; // r15d
  __int64 v13; // rdi
  _DWORD *v14; // rsi
  __int64 v15; // r8
  unsigned int v17; // edx
  __int64 v18; // r8
  ULONG v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]

  v8 = a4;
  v11 = 0;
  v19 = 0;
  TaskIndexClientFromThread = -1073741811;
  KeEnterCriticalRegion();
  v13 = (a7 >> 2) & 0x7FF;
  if ( (unsigned int)v13 < 8 && (a7 & 0xFFFFE003) == 0x222003 )
  {
    v20 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v20 == CiApiTypeTable[v13]
      && (_DWORD)v8 == CiApiBufferSizeTable[2 * v13]
      && Length == dword_1C00066B4[2 * v13] )
    {
      if ( ExGetPreviousMode() )
      {
        if ( (_DWORD)v8 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v8] > MmUserProbeAddress || &a3[v8] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(&v19, a3, (unsigned int)v8);
          v11 = v19;
        }
        v14 = Address;
        if ( Length )
          ProbeForWrite(Address, Length, 4u);
      }
      else
      {
        if ( (_DWORD)v8 )
        {
          memmove(&v19, a3, v8);
          v11 = v19;
        }
        v14 = Address;
      }
      if ( (_DWORD)v13 == 5 )
      {
        TaskIndexClientFromThread = 0;
        CiSchedulerTaskIndexYield(v20, v11);
      }
      else
      {
        if ( (_DWORD)v13 == 7 )
        {
          if ( v11 )
          {
            if ( v11 != 1 )
              goto LABEL_18;
            v17 = 1;
          }
          else
          {
            v17 = 0;
          }
          TaskIndexClientFromThread = 0;
          CiSchedulerSetTaskIndexMode(v20, v17);
          goto LABEL_18;
        }
        switch ( (int)v13 )
        {
          case 0:
            TaskIndexClientFromThread = CiThreadSetRelativePriority(v20, (unsigned __int8)v11);
            break;
          case 1:
            TaskIndexClientFromThread = 0;
            *v14 = CiSystemResponsiveness;
            break;
          case 2:
            if ( *(_QWORD *)(v20 + 80) == PsGetCurrentProcess() )
              TaskIndexClientFromThread = CiProcessSuspend(v20, v11 != 0, v18);
            break;
          case 3:
            TaskIndexClientFromThread = CiCreateTaskIndexClientFromThread(v20, v14);
            break;
          case 4:
            TaskIndexClientFromThread = 0;
            v19 = 0;
            *v14 = *(_DWORD *)(v20 + 104);
            break;
          case 6:
            TaskIndexClientFromThread = 0;
            CiSchedulerCancelTaskIndexYield(v20);
            break;
          default:
            TaskIndexClientFromThread = -1073741808;
            break;
        }
      }
    }
  }
LABEL_18:
  KeLeaveCriticalRegion();
  if ( TaskIndexClientFromThread < 0
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0x12u, v15, v13, TaskIndexClientFromThread);
  }
  *(_DWORD *)a8 = TaskIndexClientFromThread;
  *(_QWORD *)(a8 + 8) = 0LL;
  return 1;
}
