/*
 * XREFs of HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C00213AC
 * Callers:
 *     HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat @ 0x1C001ACF0 (HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0027038 (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetDeviceInterfaceUsingControlTransfer(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+28h] [rbp-30h]
  char v9; // [rsp+40h] [rbp-18h]

  if ( a1[8] )
  {
    *((_BYTE *)a1 + 384) = a1[48] & 0x1C | 1;
    v4 = *(_QWORD *)(a1[8] + 32);
    *((_BYTE *)a1 + 385) = 11;
    *((_WORD *)a1 + 193) = *(unsigned __int8 *)(v4 + 3);
    *((_WORD *)a1 + 194) = *(unsigned __int8 *)(v4 + 2);
    *((_WORD *)a1 + 195) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1[8] + 28), 0xFFFFFFFD);
    v5 = a1[3];
    v6 = *a1;
    v9 = *((_BYTE *)a1 + 1496);
    a1[8] = 0LL;
    v7 = HUBMISC_ControlTransfer(
           v6,
           v5,
           (_DWORD)a1,
           (int)a1 + 232,
           (__int64)HUBDTX_ControlTransferComplete,
           0LL,
           0,
           0,
           v9);
    if ( v7 >= 0 )
      return;
    LODWORD(v8) = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x41u,
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids,
      v8);
    v2 = (__int64)(a1 + 61);
    v3 = 4004;
  }
  else
  {
    v2 = (__int64)(a1 + 61);
    v3 = 4012;
  }
  HUBSM_AddEvent(v2, v3);
}
