/*
 * XREFs of Controller_DisableController @ 0x1C0014C50
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C001515C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C0015AC0 (Controller_SetControllerGone.c)
 */

void __fastcall Controller_DisableController(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  Controller_SetControllerGone(a1, 0LL);
  if ( *(_DWORD *)(a1 + 148) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 184);
    v3 = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, int))(a1 + 192))(v2, 0LL, &v3, 4LL, 2);
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0xA7u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
  }
  KeFlushQueuedDpcs();
}
