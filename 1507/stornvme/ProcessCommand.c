/*
 * XREFs of ProcessCommand @ 0x1C000C470
 * Callers:
 *     NVMeHwStartIo @ 0x1C00020E0 (NVMeHwStartIo.c)
 *     IoQueuesCreation @ 0x1C00039EC (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0003C44 (IoQueuesDeletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0007190 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C00084B0 (NVMeSplitIoCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0009C90 (QueryTemperatureInfoHealthLogCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C000A670 (ProtocolCommandCompletion.c)
 *     NVMeControllerIdentify @ 0x1C000AFA0 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000B104 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000B448 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000B6F8 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000B874 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000B974 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000BAD8 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000BC64 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000BDA4 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000BE78 (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000BF40 (NVMeConfigAsyncEvent.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C170 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000C3E0 (NVMeIssueAsyncEventCommand.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C00023B8 (NVMeRequestComplete.c)
 *     SrbAssignCommandId @ 0x1C000AA68 (SrbAssignCommandId.c)
 */

__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned __int16 v5; // ax
  __int64 v6; // r14
  __int16 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  _OWORD *v11; // rdx
  unsigned int v12; // edx
  int v13; // eax
  __int64 result; // rax
  signed __int32 v15[8]; // [rsp+0h] [rbp-50h] BYREF
  int *v16; // [rsp+20h] [rbp-30h]
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+48h] [rbp-8h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  v2 = a2;
  v3 = a1;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v18 = 0LL;
  v17 = 1;
  v19 = 0LL;
  v20 = 0LL;
  v5 = *(_WORD *)(v4 + 4160);
  if ( v5 )
  {
    v7 = *(_WORD *)(a1 + 222);
    v6 = *(_QWORD *)(a1 + 536) + 136LL * (v5 - 1);
  }
  else
  {
    v6 = a1 + 232;
    v7 = *(_WORD *)(a1 + 220);
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 228), 1u);
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
LABEL_25:
    result = NVMeRequestComplete(a1, a2);
    goto LABEL_26;
  }
  v16 = &v17;
  StorPortNotification(4099LL, a1, 1LL, v6 + 56);
  if ( !SrbAssignCommandId(v3, v4, *(_WORD *)(v6 + 40)) )
  {
    StorPortNotification(4100LL, v3, &v17, v8);
    a2 = v2;
    *(_BYTE *)(v2 + 3) = 5;
    a1 = v3;
    goto LABEL_25;
  }
  v9 = *(unsigned __int16 *)(v4 + 4162);
  *(_WORD *)(v4 + 4098) = v9;
  v10 = *(_QWORD *)(v6 + 32);
  v21 = 0LL;
  *(_QWORD *)(v10 + 16 * v9) = v2;
  *(_WORD *)(*(_QWORD *)(v6 + 32) + 16LL * *(unsigned __int16 *)(v4 + 4162) + 8) = *(_WORD *)(v4 + 4164);
  v11 = *(_OWORD **)(*(_QWORD *)(v6 + 24) + 16LL * *(unsigned __int16 *)(v4 + 4164));
  *v11 = *(_OWORD *)(v4 + 4096);
  v11[1] = *(_OWORD *)(v4 + 4112);
  v11[2] = *(_OWORD *)(v4 + 4128);
  v11[3] = *(_OWORD *)(v4 + 4144);
  *(_WORD *)(*(_QWORD *)(v6 + 24) + 16LL * *(unsigned __int16 *)(v4 + 4164) + 8) = *(_WORD *)(v4 + 4162);
  if ( (*(_BYTE *)(v3 + 17) || (*(_DWORD *)(v3 + 88) & 2) != 0) && v2 != v3 + 560 )
  {
    v12 = 0;
    while ( v2 != 104LL * v12 + v3 + 664 )
    {
      if ( ++v12 >= 4 )
      {
        StorPortExtendedFunction(47LL, v3, 0LL, &v21);
        *(_QWORD *)(v4 + 4176) = v21;
        break;
      }
    }
  }
  _InterlockedAdd16((volatile signed __int16 *)(v6 + 128), 1u);
  v13 = (unsigned __int16)(*(_WORD *)(v4 + 4164) + 1);
  if ( (_WORD)v13 == v7 )
    v13 = 0;
  **(_DWORD **)(v6 + 16) = v13;
  _InterlockedOr(v15, 0);
  if ( *(_QWORD *)(v4 + 4176) )
  {
    StorPortExtendedFunction(47LL, v3, 0LL, &v21);
    *(_QWORD *)(v4 + 4232) = v21;
  }
  result = StorPortNotification(4100LL, v3, &v17, v8);
LABEL_26:
  if ( !*(_WORD *)(v6 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(v3 + 228));
  return result;
}
