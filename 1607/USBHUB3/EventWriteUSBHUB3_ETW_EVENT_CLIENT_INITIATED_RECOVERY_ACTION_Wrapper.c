/*
 * XREFs of EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C00158D8
 * Callers:
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0010840 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012AB0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     Template_pqq @ 0x1C000A36C (Template_pqq.c)
 *     Template_pqqhhhq @ 0x1C000FAA4 (Template_pqqhhhq.c)
 */

void __fastcall EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  int v5; // r14d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]

  if ( !a1 )
    return;
  v3 = 0;
  v5 = a2;
  if ( !*(_QWORD *)a1 )
    return;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x80000) != 0 )
    Template_pqq(
      a1,
      &USBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION,
      (const GUID *)(a1 + 1500),
      *(_QWORD *)(*(_QWORD *)a1 + 224LL),
      a2,
      a3);
  if ( v5 == 2228227 )
  {
    if ( a3 != 30 )
    {
      if ( a3 == 48 )
      {
        v3 = 1;
      }
      else
      {
        if ( a3 != 49 )
          return;
        v3 = 2;
      }
    }
    goto LABEL_15;
  }
  v3 = 4;
  if ( v5 == 2228231 )
    goto LABEL_9;
  if ( v5 != 2228255 )
  {
    if ( v5 != 2232243 )
      return;
LABEL_9:
    v3 = 3;
  }
LABEL_15:
  v7 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 4LL * v3 + 2636));
  if ( (_DWORD)v7 == 1 || (_DWORD)v7 == 1001 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40000) != 0 )
    {
      v8 = 1000;
      if ( (_DWORD)v7 == 1 )
        v8 = 1;
      LODWORD(v10) = a3;
      LODWORD(v9) = v5;
      Template_pqqhhhq(
        v7,
        a2,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(*(_QWORD *)a1 + 224LL),
        v9,
        v10,
        *(_WORD *)(a1 + 1980),
        *(_WORD *)(a1 + 1982),
        *(_WORD *)(a1 + 1984),
        v8);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 4LL * v3 + 2636), 1);
  }
}
