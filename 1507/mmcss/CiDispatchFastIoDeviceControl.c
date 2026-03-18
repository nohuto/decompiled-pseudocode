/*
 * XREFs of CiDispatchFastIoDeviceControl @ 0x1C000A540
 * Callers:
 *     <none>
 * Callees:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 *     CiSchedulerSetTaskIndexMode @ 0x1C0001E30 (CiSchedulerSetTaskIndexMode.c)
 *     CiSchedulerTaskIndexYield @ 0x1C0001FA0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00024B0 (CiSchedulerCancelTaskIndexYield.c)
 *     memmove @ 0x1C0002C40 (memmove.c)
 *     WPP_SF_dd @ 0x1C0003FAC (WPP_SF_dd.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000A2A0 (CiCreateTaskIndexClientFromThread.c)
 *     CiThreadSetRelativePriority @ 0x1C000A7C0 (CiThreadSetRelativePriority.c)
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
  unsigned int v15; // edx
  __int64 v17; // r8
  ULONG v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h]

  v8 = a4;
  v11 = 0;
  v18 = 0;
  TaskIndexClientFromThread = -1073741811;
  KeEnterCriticalRegion();
  v13 = (a7 >> 2) & 0x7FF;
  if ( (unsigned int)v13 < 8 && (a7 & 0xFFFFE003) == 0x222003 )
  {
    v19 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v19 == CiApiTypeTable[v13]
      && (_DWORD)v8 == CiApiBufferSizeTable[2 * v13]
      && Length == dword_1C0006924[2 * v13] )
    {
      if ( ExGetPreviousMode() )
      {
        if ( (_DWORD)v8 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v8] > MmUserProbeAddress || &a3[v8] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(&v18, a3, (unsigned int)v8);
          v11 = v18;
        }
        v14 = Address;
        if ( Length )
          ProbeForWrite(Address, Length, 4u);
      }
      else
      {
        if ( (_DWORD)v8 )
        {
          memmove(&v18, a3, v8);
          v11 = v18;
        }
        v14 = Address;
      }
      if ( (_DWORD)v13 == 7 )
      {
        if ( !v11 )
        {
          v15 = 0;
          goto LABEL_23;
        }
        if ( v11 == 1 )
        {
          v15 = 1;
LABEL_23:
          TaskIndexClientFromThread = 0;
          CiSchedulerSetTaskIndexMode(v19, v15);
        }
      }
      else if ( (_DWORD)v13 == 5 )
      {
        TaskIndexClientFromThread = 0;
        CiSchedulerTaskIndexYield(v19, v11);
      }
      else
      {
        switch ( (int)v13 )
        {
          case 0:
            TaskIndexClientFromThread = CiThreadSetRelativePriority(v19, (unsigned __int8)v11);
            break;
          case 1:
            TaskIndexClientFromThread = 0;
            *v14 = CiSystemResponsiveness;
            break;
          case 2:
            if ( *(_QWORD *)(v19 + 80) == PsGetCurrentProcess() )
              TaskIndexClientFromThread = CiProcessSuspend(v19, v11 != 0, v17);
            break;
          case 3:
            TaskIndexClientFromThread = CiCreateTaskIndexClientFromThread(v19, v14);
            break;
          case 4:
            TaskIndexClientFromThread = 0;
            v18 = 0;
            *v14 = *(_DWORD *)(v19 + 104);
            break;
          case 6:
            TaskIndexClientFromThread = 0;
            CiSchedulerCancelTaskIndexYield(v19);
            break;
          default:
            TaskIndexClientFromThread = -1073741808;
            break;
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  if ( TaskIndexClientFromThread < 0
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x12u,
      (__int64)&WPP_3ae21bf15ad5db9e83e4442bc8a22929_Traceguids,
      v13,
      TaskIndexClientFromThread);
  }
  *(_DWORD *)a8 = TaskIndexClientFromThread;
  *(_QWORD *)(a8 + 8) = 0LL;
  return 1;
}
