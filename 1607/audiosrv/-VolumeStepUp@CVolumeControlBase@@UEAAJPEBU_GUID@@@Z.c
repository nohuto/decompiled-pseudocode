/*
 * XREFs of ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@@Z @ 0x180058D60
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     floorf @ 0x180036D00 (floorf.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

__int64 __fastcall CVolumeControlBase::VolumeStepUp(CVolumeControlBase *this, const struct _GUID *a2)
{
  int v4; // ebx
  float v5; // xmm6_4
  __int64 v6; // rdx
  float v8; // [rsp+50h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_2804faa4bc893de444441e4f62789fd8_Traceguids);
  }
  v4 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v8);
  if ( v4 < 0 )
    goto LABEL_9;
  v5 = (float)(*((_DWORD *)this + 14) - 1);
  v8 = floorf((float)((float)(v5 * v8) + 0.5) + 1.0) / v5;
  if ( v8 >= 1.0 )
    v8 = FLOAT_1_0;
  v4 = (*(__int64 (__fastcall **)(CVolumeControlBase *, __int64, const struct _GUID *))(*(_QWORD *)this + 96LL))(
         this,
         v6,
         a2);
  if ( v4 < 0 )
LABEL_9:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::VolumeStepUp", 279, v4);
  return (unsigned int)v4;
}
