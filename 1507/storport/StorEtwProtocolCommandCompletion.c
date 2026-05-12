/*
 * XREFs of StorEtwProtocolCommandCompletion @ 0x1C0035D40
 * Callers:
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0022EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0033BB4 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     Template_pqtqcccqqqqt @ 0x1C003605C (Template_pqtqcccqqqqt.c)
 */

__int64 __fastcall StorEtwProtocolCommandCompletion(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // r13
  char v7; // bp
  char v8; // r14
  char v9; // r15
  __int64 result; // rax
  _BYTE *v11; // rcx
  int v12; // [rsp+80h] [rbp-48h] BYREF
  __int64 v13; // [rsp+84h] [rbp-44h]
  int v14; // [rsp+8Ch] [rbp-3Ch]

  v3 = *(_DWORD **)(a2 + 24);
  v12 = 0;
  v13 = 0LL;
  v14 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  IoGetActivityIdIrp(a2, &v12);
  result = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)result == 1 )
  {
    v11 = *(_BYTE **)(a1 + 64);
    result = *(_QWORD *)(result + 24);
    v7 = v11[88];
    v8 = v11[89];
    v9 = v11[90];
  }
  else
  {
    v11 = 0LL;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
    return Template_pqtqcccqqqqt(
             (_DWORD)v11,
             *(_DWORD *)(result + 56),
             (unsigned int)&v12,
             a2,
             *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL),
             v11 == 0LL,
             *(_DWORD *)(result + 56),
             v7,
             v8,
             v9,
             v3[2],
             v3[20],
             v3[4],
             v3[5],
             a3);
  return result;
}
