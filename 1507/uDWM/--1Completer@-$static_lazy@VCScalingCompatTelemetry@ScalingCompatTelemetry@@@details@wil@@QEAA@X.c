/*
 * XREFs of ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180047AD0
 * Callers:
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x180047A48 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 * Callees:
 *     ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x180047B40 (-Instance@ScalingCompatLogging@@KAPEAV1@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

BOOL __fastcall wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(
        __int64 a1)
{
  LPINIT_ONCE v2; // rdi
  union _RTL_RUN_ONCE v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3.Ptr = *(PVOID *)((char *)ScalingCompatLogging::Instance() + 8);
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = v3.Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete_0(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
