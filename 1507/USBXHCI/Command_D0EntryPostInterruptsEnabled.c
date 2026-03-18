/*
 * XREFs of Command_D0EntryPostInterruptsEnabled @ 0x1C0004DB8
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0003DA0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0032898 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Command_D0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int16 v4; // ax
  POOL_TYPE v6; // ecx
  _QWORD *PoolWithTag; // rdi
  __int16 v8; // cx
  unsigned int v9; // eax
  unsigned int v10; // eax
  void *v11; // rcx
  __int64 (__fastcall *v12)(); // rax
  unsigned int v13; // eax

  if ( a2 == 5 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_WORD *)(v3 + 152);
    if ( v4 == 4147 || v4 == 6418 || v4 == 6945 || !_stricmp((const char *)(v3 + 200), "NVDA") )
    {
      v6 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) = -1LL;
      PoolWithTag = ExAllocatePoolWithTag(v6, 0x70uLL, 0x49434858u);
      if ( !PoolWithTag )
      {
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 3u, 6u, 0x1Au, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
        return 0LL;
      }
      v8 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 152LL);
      if ( v8 == 4147 || v8 == 6418 )
      {
        memset(PoolWithTag, 0, 0x70uLL);
        *PoolWithTag = a1;
        KeInitializeEvent((PRKEVENT)(PoolWithTag + 11), SynchronizationEvent, 0);
        v12 = Command_RenesasGetFirmwareVersionCommandCompletion;
      }
      else
      {
        if ( v8 == 6945 )
        {
          memset(PoolWithTag, 0, 0x70uLL);
          *PoolWithTag = a1;
          KeInitializeEvent((PRKEVENT)(PoolWithTag + 11), SynchronizationEvent, 0);
          PoolWithTag[8] = PoolWithTag;
          PoolWithTag[7] = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
          v9 = *((_DWORD *)PoolWithTag + 11) & 0xFFFFD3FF;
          *((_WORD *)PoolWithTag + 39) = 3;
          *((_DWORD *)PoolWithTag + 11) = v9 | 0xD000;
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
          v10 = *((_DWORD *)PoolWithTag + 11) & 0xFFFFCFFF;
          *((_WORD *)PoolWithTag + 39) = 3;
          *((_DWORD *)PoolWithTag + 11) = v10 | 0xCC00;
          Command_SendCommand(a1, PoolWithTag + 1);
          v11 = PoolWithTag + 11;
LABEL_17:
          KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) != -1LL )
            Etw_ControllerFirmareVersionUpdate();
          goto LABEL_19;
        }
        memset(PoolWithTag, 0, 0x70uLL);
        *PoolWithTag = a1;
        KeInitializeEvent((PRKEVENT)(PoolWithTag + 11), SynchronizationEvent, 0);
        v12 = Command_NvidiaGetFirmwareVersionCommandCompletion;
      }
      PoolWithTag[7] = v12;
      v13 = *((_DWORD *)PoolWithTag + 11) & 0xFFFFC7FF;
      PoolWithTag[8] = PoolWithTag;
      *((_WORD *)PoolWithTag + 39) = 3;
      *((_DWORD *)PoolWithTag + 11) = v13 | 0xC400;
      Command_SendCommand(a1, PoolWithTag + 1);
      v11 = PoolWithTag + 11;
      goto LABEL_17;
    }
  }
  return 0LL;
}
