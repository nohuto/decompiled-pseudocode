/*
 * XREFs of ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_GERERIC_HAPTICS_OUTPUT@@@Z @ 0x1C023E030
 * Callers:
 *     ?OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z @ 0x1C023B8C4 (-OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_OUTPUT@@@Z @ 0x1C023BAB0 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_OUTPUT@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023DA94 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDevice::SendHapticFeedbackOutput(
        InteractiveControlDevice *this,
        const struct _GERERIC_HAPTICS_OUTPUT *a2)
{
  NTSTATUS v3; // edi
  _BYTE *v5; // rax
  void *v6; // rcx
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+28h] [rbp-30h]
  ULONG Report; // [rsp+30h] [rbp-28h]
  union _LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  if ( *((_DWORD *)InteractiveControlManager::Instance() + 25) )
  {
    if ( *((_WORD *)this + 152) )
    {
      v5 = (_BYTE *)*((_QWORD *)this + 37);
      if ( v5 )
      {
        if ( *((_QWORD *)this + 10) )
        {
          *v5 = 1;
          if ( HidP_SetUsageValue(
                 HidP_Output,
                 0xEu,
                 0,
                 0x21u,
                 *(_DWORD *)a2,
                 *((PHIDP_PREPARSED_DATA *)this + 36),
                 *((PCHAR *)this + 37),
                 *((unsigned __int16 *)this + 152)) >= 0 )
          {
            HidP_SetUsageValue(
              HidP_Output,
              0xEu,
              0,
              0x24u,
              *((_DWORD *)a2 + 1),
              *((PHIDP_PREPARSED_DATA *)this + 36),
              *((PCHAR *)this + 37),
              *((unsigned __int16 *)this + 152));
            HidP_SetUsageValue(
              HidP_Output,
              0xEu,
              0,
              0x25u,
              *((_DWORD *)a2 + 2),
              *((PHIDP_PREPARSED_DATA *)this + 36),
              *((PCHAR *)this + 37),
              *((unsigned __int16 *)this + 152));
            HidP_SetUsageValue(
              HidP_Output,
              0xEu,
              0,
              0x23u,
              *((_DWORD *)a2 + 3),
              *((PHIDP_PREPARSED_DATA *)this + 36),
              *((PCHAR *)this + 37),
              *((unsigned __int16 *)this + 152));
            v6 = (void *)*((_QWORD *)this + 10);
            Report = *((unsigned __int16 *)this + 152);
            PreparsedData = (PHIDP_PREPARSED_DATA)*((_QWORD *)this + 37);
            ByteOffset.QuadPart = 0LL;
            v3 = ZwWriteFile(v6, 0LL, 0LL, 0LL, (PIO_STATUS_BLOCK)this + 4, PreparsedData, Report, &ByteOffset, 0LL);
            if ( v3 >= 0 )
            {
              *((_QWORD *)this + 8) = 0LL;
              *((_QWORD *)this + 9) = 0LL;
              return (unsigned int)ZwFlushBuffersFile(*((HANDLE *)this + 10), (PIO_STATUS_BLOCK)this + 4);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
