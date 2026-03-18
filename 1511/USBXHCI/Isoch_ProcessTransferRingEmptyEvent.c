/*
 * XREFs of Isoch_ProcessTransferRingEmptyEvent @ 0x1C002BB14
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002B838 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0002CD8 (Controller_GetFrameNumber.c)
 *     Isoch_MapTransfers @ 0x1C0002DF8 (Isoch_MapTransfers.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     TR_AttemptStateChange @ 0x1C002846C (TR_AttemptStateChange.c)
 *     WPP_RECORDER_SF_DDDL @ 0x1C002C7C0 (WPP_RECORDER_SF_DDDL.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall Isoch_ProcessTransferRingEmptyEvent(__int64 a1, __int64 a2)
{
  char v4; // r14
  int FrameNumber; // ebp
  KIRQL v6; // al
  int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 result; // rax
  int v11; // [rsp+40h] [rbp-18h]

  v4 = 0;
  FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1);
  v11 = *(unsigned __int8 *)(a2 + 11);
  WPP_RECORDER_SF_DDDL(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    v11,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL));
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  ++*(_DWORD *)(a1 + 260);
  v7 = *(_DWORD *)(a1 + 328);
  *(_BYTE *)(a1 + 96) = v6;
  v8 = *(_DWORD *)(a1 + 280) & 0xFFFFFFEF;
  *(_DWORD *)(a1 + 280) = v8;
  if ( !v7 )
    *(_DWORD *)(a1 + 280) = v8 & 0xFFFFFFDF;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x40000000000LL) != 0
    && v7
    && (*(_DWORD *)(a1 + 280) & 0x20) != 0
    && FrameNumber - *(_DWORD *)(a1 + 316) >= 0 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xDu,
      0x27u,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      FrameNumber,
      v11);
    v4 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  if ( v4 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    _m_prefetchw((const void *)(v9 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v9 + 32), 1u);
    if ( (result & 1) == 0 )
      return ESM_AddEvent((PVOID)(v9 + 272));
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 300), 1);
    result = TR_AttemptStateChange(a1, 4, 3);
    if ( (_DWORD)result == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 272),
        0LL);
      return Isoch_MapTransfers(a1);
    }
  }
  return result;
}
