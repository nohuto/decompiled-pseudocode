/*
 * XREFs of HUBDESC_InternalValidateConfigurationSummaryDescriptor @ 0x1C002F1C0
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0030304 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0021908 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002B31C (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateConfigurationSummaryDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v7; // rdi
  int v8; // ebp
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 result; // rax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v7 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v16 = 0;
    v7 = &v16;
  }
  v8 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 72) - v8;
  if ( v9 < 0xB )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 254LL);
    *v7 = 1;
    result = WPP_RECORDER_SF_DDD(
               a5,
               2u,
               v10,
               0xA5u,
               (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids,
               v9,
               v8,
               11);
    goto LABEL_14;
  }
  v12 = a1[7] + 2 * (a1[7] + 4);
  v13 = *a1;
  *a3 = v13;
  if ( v13 >= v12 )
  {
    if ( v13 <= v9 )
    {
      result = *(_QWORD *)(a2 + 88);
      if ( a1[5] < *(_BYTE *)(result + 17) )
        goto LABEL_14;
      *v7 = 2;
      WPP_RECORDER_SF_ddd(a5, (__int64)a1, (__int64)a3, 0xA8u, v15);
      v14 = 257LL;
    }
    else
    {
      *a3 = v9;
      *v7 = 2;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xA7u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v8);
      v14 = 256LL;
    }
  }
  else
  {
    WPP_RECORDER_SF_DDD(
      a5,
      2u,
      (__int64)a3,
      0xA6u,
      (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids,
      v8,
      v13,
      v12);
    v14 = 255LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v14);
LABEL_14:
  if ( *v7 )
    return WPP_RECORDER_SF_(a5, 2u, 5u, 0xA9u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
  return result;
}
