/*
 * XREFs of ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000C2D0
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOProcessNode::IsRightFormatSupported(
        CAPOProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  struct IAudioMediaType *v4; // r10
  bool v5; // zf
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx

  v4 = a4;
  if ( !a4 )
    v4 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
  v5 = *((_DWORD *)this + 6) == 0;
  v6 = *(__int64 **)(*((_QWORD *)this + 4) + 40LL);
  v7 = *v6;
  if ( v5 )
    v8 = (*(__int64 (__fastcall **)(__int64 *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v7 + 64))(
           v6,
           v4,
           a2,
           a3);
  else
    v8 = (*(__int64 (__fastcall **)(__int64 *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v7 + 56))(
           v6,
           v4,
           a2,
           a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_00124d7d191530a40c6a65552c411b8b_Traceguids,
        (unsigned int)v8);
    }
    AudDGTraceLoggingErrorHelper("CAPOProcessNode::IsRightFormatSupported", 0x29Au, v9);
  }
  return v9;
}
