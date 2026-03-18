/*
 * XREFs of HUBDTX_LogAlternateMode @ 0x1C0021DB4
 * Callers:
 *     HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried @ 0x1C0018D90 (HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C00192E0 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     Template_phczc @ 0x1C001EA20 (Template_phczc.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001EAFC (WPP_RECORDER_SF_DDD.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

NTSTATUS __fastcall HUBDTX_LogAlternateMode(__int64 a1, _BYTE *a2)
{
  __int64 *v2; // r12
  __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int8 v7; // si
  __int64 v8; // rbx
  NTSTATUS result; // eax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-158h]
  __int64 v12; // [rsp+28h] [rbp-150h]
  __int64 v13; // [rsp+38h] [rbp-140h]
  _BYTE v14[256]; // [rsp+40h] [rbp-138h] BYREF

  v2 = *(__int64 **)(a1 + 2616);
  v5 = *v2;
  v6 = *((unsigned __int8 *)v2 + 8);
  v7 = (*(_BYTE *)((v6 >> 2) + *v2 + 8) >> (2 * (v2[1] & 3))) & 3;
  if ( a2 )
  {
    v8 = (unsigned __int8)(*a2 - 2);
    memset(v14, 0, v8 + 2);
    memmove(v14, a2 + 2, (unsigned int)v8);
  }
  if ( v7 == 3 )
  {
    *((_BYTE *)v2 + 11) = 1;
    result = WPP_RECORDER_SF_dD(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               4u,
               5u,
               0x54u,
               (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
               *(unsigned __int16 *)(v5 + 4 * v6 + 44),
               *(unsigned __int8 *)(v5 + 4 * v6 + 46));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100000) == 0 )
      return result;
    LOBYTE(v13) = 3;
    v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_ENTERED;
  }
  else
  {
    *((_BYTE *)v2 + 10) = 1;
    result = WPP_RECORDER_SF_DDD(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               4u,
               *(unsigned __int16 *)(v5 + 4 * v6 + 44),
               0x55u,
               (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
               *(unsigned __int16 *)(v5 + 4 * v6 + 44),
               *(unsigned __int8 *)(v5 + 4 * v6 + 46),
               v7);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x80000) == 0 )
      return result;
    LOBYTE(v13) = v7;
    v10 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_FAILED;
  }
  LOBYTE(v12) = *(_BYTE *)(v5 + 4 * v6 + 46);
  LOWORD(v11) = *(_WORD *)(v5 + 4 * v6 + 44);
  return Template_phczc(
           (__int64)v14,
           v10,
           (const GUID *)(a1 + 1500),
           *(_QWORD *)(a1 + 24),
           v11,
           v12,
           (unsigned __int64)v14 & -(__int64)(a2 != 0LL),
           v13);
}
