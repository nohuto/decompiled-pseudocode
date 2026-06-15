/*
 * XREFs of ?SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z @ 0x14002EF60
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicy(CVirtualProtectedOutput *this, unsigned int a2)
{
  int v4; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, CVirtualProtectedOutput *, _QWORD))(**((_QWORD **)this + 1) + 48LL))(
         *((_QWORD *)this + 1),
         this,
         a2);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_e09cbeeacf3d335096edd029b90af36d_Traceguids, v4);
    }
    AudDGTraceLoggingErrorHelper("CVirtualProtectedOutput::SetPolicy", 350, v4);
  }
  else
  {
    *((_DWORD *)this + 5) = a2;
  }
  return (unsigned int)v4;
}
