/*
 * XREFs of HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C002AE08
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002C71C (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001EAFC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0027848 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0027CD0 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0027CF4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v8; // r14d
  char v9; // r13
  __int64 v10; // r15
  unsigned int v11; // r12d
  bool v12; // cf
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int *v15; // rax
  __int64 v16; // r8
  int v17; // eax
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+10h]
  unsigned int *v23; // [rsp+A0h] [rbp+18h]

  v23 = a3;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v21 = 0;
    v5 = &v21;
  }
  v8 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v9 = 1;
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v8;
  v12 = *a1 < 0x12u;
  v22 = v11;
  if ( v12 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 230LL);
    if ( v11 < 0x12 )
    {
      *v5 = 1;
      WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x88u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v8, *a1, 18);
      goto LABEL_25;
    }
    v15 = v23;
    *v5 = 2;
    *v15 = 18;
    WPP_RECORDER_SF_DDDD(v10, v13, v14, 0x87u, v19);
  }
  if ( *a1 > 0x12u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    WPP_RECORDER_SF_DDD(v10, 2u, v16, 0x89u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v8, *a1, 18);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 229LL);
  }
  if ( *v23 <= v22 )
  {
    if ( a1[3] || (v17 = *((_DWORD *)a1 + 1), (v17 & 0x81) != 0) || (v17 & 0xFFFF8000) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      WPP_RECORDER_SF_DDDD(v10, *((_DWORD *)a1 + 1) >> 15, *((_DWORD *)a1 + 1) & 1, 0x8Bu, v19);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 232LL);
    }
    if ( (a1[4] & 0x20) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a2 + 80) + 41LL) = 1;
      WPP_RECORDER_SF_(v10, 4u, 5u, 0x8Cu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    }
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v5 = 2;
    LODWORD(v20) = v8;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x8Au, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v20);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 231LL);
  }
LABEL_25:
  if ( *v5 )
  {
    v9 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x8Du, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
  }
  return v9;
}
