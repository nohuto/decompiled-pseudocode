/*
 * XREFs of ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z @ 0x1C0259318
 * Callers:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C02591C8 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C02592A0 (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(
        CPhysicalMonitorHandle *this,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  __int64 result; // rax
  int v12; // ebx
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-18h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  if ( (int)result >= 0 )
  {
    v12 = CallMonitor(*((_QWORD *)this + 2), a2, a4, a5, a6, a7);
    if ( v12 < 0 )
    {
      ReleaseUserCriticalSection();
    }
    else
    {
      ReleaseUserCriticalSection();
      if ( a3.QuadPart < 0 )
      {
        Interval = a3;
        return (unsigned int)KeDelayExecutionThread(0, NOT_ALERTABLE, &Interval);
      }
    }
    return (unsigned int)v12;
  }
  return result;
}
