/*
 * XREFs of ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x18009EB18
 * Callers:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x180007F40 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004560 (_TlgWrite.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x180047A48 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

int __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  struct ScalingCompatTelemetry::CScalingCompatTelemetry *v5; // rax
  const struct _TlgProvider_t *v6; // rcx
  int v8; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+70h] [rbp+1Fh]
  int *v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  int *v14; // [rsp+88h] [rbp+37h]
  __int64 v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+C8h] [rbp+77h] BYREF
  int v17; // [rsp+D0h] [rbp+7Fh] BYREF

  v17 = a4;
  v16 = a3;
  v5 = ScalingCompatTelemetry::CScalingCompatTelemetry::Instance();
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)v5 + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = a2;
    v10 = &v8;
    v12 = &v16;
    v14 = &v17;
    v11 = 4LL;
    v13 = 4LL;
    v15 = 4LL;
    LODWORD(v5) = TlgWrite(v6, &unk_1800A7BD5, 0LL, 0LL, 5u, &pData);
  }
  return (int)v5;
}
