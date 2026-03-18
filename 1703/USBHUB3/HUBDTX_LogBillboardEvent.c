/*
 * XREFs of HUBDTX_LogBillboardEvent @ 0x1C0024C20
 * Callers:
 *     HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried @ 0x1C001B4E0 (HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001BB10 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     Template_pcchz @ 0x1C0021740 (Template_pcchz.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

NTSTATUS __fastcall HUBDTX_LogBillboardEvent(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-148h]
  __int64 v9; // [rsp+28h] [rbp-140h]
  __int64 v10; // [rsp+30h] [rbp-138h]
  _BYTE v11[256]; // [rsp+40h] [rbp-128h] BYREF

  v4 = **(_QWORD **)(a1 + 2616);
  if ( a2 )
  {
    v5 = (unsigned __int8)(*a2 - 2);
    memset(v11, 0, v5 + 2);
    memmove(v11, a2 + 2, (unsigned int)v5);
  }
  result = WPP_RECORDER_SF_dD(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             4u,
             5u,
             0x53u,
             (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
             *(unsigned __int8 *)(v4 + 4),
             *(unsigned __int8 *)(v4 + 5));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
  {
    LOWORD(v10) = *(_WORD *)(v4 + 6);
    LOBYTE(v9) = *(_BYTE *)(v4 + 5);
    LOBYTE(v8) = *(_BYTE *)(v4 + 4);
    return Template_pcchz(
             (__int64)v11,
             v7,
             (const GUID *)(a1 + 1500),
             *(_QWORD *)(a1 + 24),
             v8,
             v9,
             v10,
             (unsigned __int64)v11 & -(__int64)(a2 != 0LL));
  }
  return result;
}
