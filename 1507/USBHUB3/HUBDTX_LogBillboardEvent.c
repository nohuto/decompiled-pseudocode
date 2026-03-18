/*
 * XREFs of HUBDTX_LogBillboardEvent @ 0x1C0021CB4
 * Callers:
 *     HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried @ 0x1C0018E90 (HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C0019460 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     Template_pcchz @ 0x1C001E944 (Template_pcchz.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

NTSTATUS __fastcall HUBDTX_LogBillboardEvent(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-148h]
  int v9; // [rsp+28h] [rbp-140h]
  __int64 v10; // [rsp+28h] [rbp-140h]
  int v11; // [rsp+30h] [rbp-138h]
  __int64 v12; // [rsp+30h] [rbp-138h]
  _BYTE v13[256]; // [rsp+40h] [rbp-128h] BYREF

  v4 = **(_QWORD **)(a1 + 2616);
  if ( a2 )
  {
    v5 = (unsigned __int8)(*a2 - 2);
    memset(v13, 0, v5 + 2);
    memmove(v13, a2 + 2, (unsigned int)v5);
  }
  v11 = *(unsigned __int8 *)(v4 + 5);
  v9 = *(unsigned __int8 *)(v4 + 4);
  result = WPP_RECORDER_SF_dD(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             4u,
             5u,
             0x53u,
             (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
             v9,
             v11);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x80000) != 0 )
  {
    LOWORD(v12) = *(_WORD *)(v4 + 6);
    LOBYTE(v10) = *(_BYTE *)(v4 + 5);
    LOBYTE(v8) = *(_BYTE *)(v4 + 4);
    return Template_pcchz(
             (__int64)v13,
             v7,
             (const GUID *)(a1 + 1500),
             *(_QWORD *)(a1 + 24),
             v8,
             v10,
             v12,
             (unsigned __int64)v13 & -(__int64)(a2 != 0LL));
  }
  return result;
}
