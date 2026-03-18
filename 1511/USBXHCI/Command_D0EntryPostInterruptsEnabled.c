/*
 * XREFs of Command_D0EntryPostInterruptsEnabled @ 0x1C0007DD8
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0007410 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0033698 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Command_D0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int16 v4; // ax
  _QWORD *PoolWithTag; // rdi
  __int16 v7; // cx
  unsigned int v8; // eax
  unsigned int v9; // eax
  void *v10; // rcx
  __int64 (__fastcall *v11)(); // rax
  unsigned int v12; // eax

  if ( a2 == 5 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_WORD *)(v3 + 152);
    if ( v4 == 4147 || v4 == 6418 || v4 == 6945 || !_stricmp((const char *)(v3 + 200), "NVDA") )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) = -1LL;
      PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 0x70uLL, 0x49434858u);
      if ( !PoolWithTag )
      {
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 3u, 6u, 0x1Au, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
        return 0LL;
      }
      v7 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 152LL);
      if ( v7 == 4147 || v7 == 6418 )
      {
        memset(PoolWithTag, 0, 0x70uLL);
        *PoolWithTag = a1;
        KeInitializeEvent((PRKEVENT)(PoolWithTag + 11), SynchronizationEvent, 0);
        v11 = Command_RenesasGetFirmwareVersionCommandCompletion;
      }
      else
      {
        if ( v7 == 6945 )
        {
          memset(PoolWithTag, 0, 0x70uLL);
          *PoolWithTag = a1;
          KeInitializeEvent((PRKEVENT)(PoolWithTag + 11), SynchronizationEvent, 0);
          PoolWithTag[8] = PoolWithTag;
          PoolWithTag[7] = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
          v8 = *((_DWORD *)PoolWithTag + 11) & 0xFFFFD3FF;
          *((_WORD *)PoolWithTag + 39) = 3;
          *((_DWORD *)PoolWithTag + 11) = v8 | 0xD000;
          Command_SendCommand(a1, PoolWithTag + 1);
          KeWaitForSingleObject(PoolWithTag + 11, Executive, 0, 0, 0LL);
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) == -1LL )
          {
LABEL_19:
            ExFreePoolWithTag(PoolWithTag, 0x49434858u);
            return 0LL;
          }
          memset(PoolWithTag, 0, 0x70uLL);
          *PoolWithTag = a1;
          KeInitializeEvent((PRKEVENT)(PoolWithTag + 11), SynchronizationEvent, 0);
          PoolWithTag[8] = PoolWithTag;
          PoolWithTag[7] = Command_ASMediaGetFirmwareVersionHighCommandCompletion;
          v9 = *((_DWORD *)PoolWithTag + 11) & 0xFFFFCFFF;
          *((_WORD *)PoolWithTag + 39) = 3;
          *((_DWORD *)PoolWithTag + 11) = v9 | 0xCC00;
          Command_SendCommand(a1, PoolWithTag + 1);
          v10 = PoolWithTag + 11;
LABEL_17:
          KeWaitForSingleObject(v10, Executive, 0, 0, 0LL);
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) != -1LL )
            Etw_ControllerFirmareVersionUpdate();
          goto LABEL_19;
        }
        memset(PoolWithTag, 0, 0x70uLL);
        *PoolWithTag = a1;
        KeInitializeEvent((PRKEVENT)(PoolWithTag + 11), SynchronizationEvent, 0);
        v11 = Command_NvidiaGetFirmwareVersionCommandCompletion;
      }
      PoolWithTag[7] = v11;
      v12 = *((_DWORD *)PoolWithTag + 11) & 0xFFFFC7FF;
      PoolWithTag[8] = PoolWithTag;
      *((_WORD *)PoolWithTag + 39) = 3;
      *((_DWORD *)PoolWithTag + 11) = v12 | 0xC400;
      Command_SendCommand(a1, PoolWithTag + 1);
      v10 = PoolWithTag + 11;
      goto LABEL_17;
    }
  }
  return 0LL;
}
