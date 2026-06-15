/*
 * XREFs of ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180056C00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     floorf @ 0x180036D00 (floorf.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_g @ 0x180058F9C (WPP_SF_g.c)
 *     WPP_SF_dD @ 0x18007067C (WPP_SF_dD.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeStepInfo(CVolumeControlBase *this, unsigned int *a2, unsigned int *a3)
{
  int v5; // ebx
  int v7; // esi
  unsigned int v8; // eax
  float v9; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    v5 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeStepInfo", 245, v5);
    return (unsigned int)v5;
  }
  *a2 = 0;
  *a3 = *((_DWORD *)this + 14);
  v5 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v9);
  if ( v5 < 0 )
    goto LABEL_3;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids);
  }
  v7 = *((_DWORD *)this + 14) - 1;
  v8 = (int)floorf((float)((float)v7 * v9) + 0.5);
  if ( v8 < v7 )
    v7 = v8;
  *a2 = v7;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids);
  }
  return (unsigned int)v5;
}
