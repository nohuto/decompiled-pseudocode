/*
 * XREFs of ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18014E6CC
 * Callers:
 *     _lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_::_lambda_invoker_cdecl_ @ 0x18011BAB0 (_lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800241F0 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?LogShaderStats@CTelemetryTracking@@QEAAXPEBGIIIMMM@Z @ 0x180118BD4 (-LogShaderStats@CTelemetryTracking@@QEAAXPEBGIIIMMM@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rax
  int v7; // r9d
  unsigned int v8; // ecx
  int v9; // eax
  __int64 v10; // r10
  __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rsi
  struct _TP_WORK *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __m128 v18; // xmm2
  unsigned __int8 *v19; // rdx
  __int64 v20; // xmm1_8
  __int64 v21; // rax
  int v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-28h] BYREF
  __int64 v25; // [rsp+48h] [rbp-20h]
  _QWORD v26[2]; // [rsp+50h] [rbp-18h]

  v2 = 0;
  v3 = *(_DWORD *)(*((_QWORD *)this + 17) + 48LL) - 2;
  if ( v3 )
  {
    if ( v3 == 1 && (unsigned __int8)CNotificationResource::ShouldNotify(this) )
    {
      v6 = *((_QWORD *)this + 14);
      v7 = *(_DWORD *)(v4 + 72);
      if ( v6 )
        v8 = *(_DWORD *)(v6 + 52);
      else
        v8 = 0;
      v24 = v8;
      v25 = *((unsigned int *)this + 30);
      v9 = CoreUICallSend(v5, &v24, 2LL, 3LL, 1, &unk_1801AD3AA, v7);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8Au);
    }
  }
  else
  {
    if ( (unsigned __int8)CNotificationResource::ShouldNotify(this) )
    {
      v11 = *((_QWORD *)this + 14);
      if ( v11 )
        v12 = *(_DWORD *)(v11 + 52);
      else
        v12 = 0;
      v24 = v12;
      v25 = *((unsigned int *)this + 30);
      v13 = CoreUICallSend(v10, &v24, 2LL, 3LL, 0, &unk_1801AD3A8, v23);
      v2 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x6Du);
        return v2;
      }
      v14 = *((_QWORD *)this + 17);
      v15 = *(struct _TP_WORK **)(v14 + 40);
      if ( v15 )
      {
        WaitForThreadpoolWorkCallbacks(v15, 0);
        CloseThreadpoolWork(*(PTP_WORK *)(v14 + 40));
        *(_QWORD *)(v14 + 40) = 0LL;
      }
      v16 = *(_QWORD *)(v14 + 56);
      if ( v16 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16);
        v18 = *(__m128 *)v17;
        v19 = *(unsigned __int8 **)(*((_QWORD *)this + 14) + 40LL);
        v20 = *(_QWORD *)(v17 + 16);
        v21 = *((_QWORD *)this + 2);
        v26[0] = v20;
        CTelemetryTracking::LogShaderStats(
          (CTelemetryTracking *)(*(_QWORD *)(v21 + 512) + 24760LL),
          v19,
          _mm_cvtsi128_si32((__m128i)v18),
          v18.m128_u32[1],
          _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 8)),
          _mm_shuffle_ps(v18, v18, 255).m128_f32[0],
          *(float *)&v20,
          *((float *)&v20 + 1));
      }
    }
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  return v2;
}
