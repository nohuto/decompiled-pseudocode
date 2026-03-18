/*
 * XREFs of RootHub_HandlePortStatusChangeEvent @ 0x1C0027520
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000A2D0 (Interrupter_WdfEvtInterruptDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     RootHub_DumpPortData @ 0x1C0008A20 (RootHub_DumpPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0026D44 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C002768C (RootHub_HideInvalidDebugPortStatusAndChange.c)
 */

char __fastcall RootHub_HandlePortStatusChangeEvent(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char result; // al
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]

  v2 = *(unsigned __int8 *)(a2 + 3);
  v4 = a1[1];
  LODWORD(v16) = v2;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v4 + 64),
    4u,
    0xAu,
    0xCBu,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
    v16);
  v5 = 16LL * (v2 - 1);
  v6 = v2 - 1;
  RootHub_DumpPortData((unsigned int *)(v5 + a1[5]), a1[1]);
  if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(a1, v2) )
  {
    v8 = a1[1];
    LODWORD(v16) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      4u,
      0xAu,
      0xCCu,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v16);
    v9 = 56 * v6;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(56 * v6 + a1[6] + 16LL));
    v10 = a1[5];
    v12 = a1[1];
    LODWORD(v16) = *(_DWORD *)(v5 + v10);
    v11 = v16;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v12 + 64),
      4u,
      0xAu,
      0xCDu,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v16);
    *(_DWORD *)(v5 + v10) = v11 & 0xE00C200 | 0xFA0000;
    _InterlockedOr(v15, 0);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v9 + a1[6] + 16LL));
    v13 = a1[1];
    LODWORD(v16) = *(_DWORD *)(v5 + v10);
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v13 + 64),
             4u,
             0xAu,
             0xCEu,
             (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
             v16);
  }
  else
  {
    result = RootHub_DetectAndAcknowledgePortResume(a1, v7, 0);
    if ( !result )
      return ((__int64 (__fastcall *)(void *, _QWORD))qword_1C0044750)(WPP_MAIN_CB.Dpc.SystemArgument2, *a1);
  }
  return result;
}
