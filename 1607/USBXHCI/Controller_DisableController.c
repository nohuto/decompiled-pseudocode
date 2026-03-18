/*
 * XREFs of Controller_DisableController @ 0x1C001E700
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C001EAFC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C001F5F0 (Controller_SetControllerGone.c)
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
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0xACu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
  }
  KeFlushQueuedDpcs();
}
