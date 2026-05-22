/*
 * XREFs of ?QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180013370
 * Callers:
 *     ?QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800199C0 (-QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800199E0 (-QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019A50 (-QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019A70 (-QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019AF0 (-QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019B00 (-QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019B60 (-QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019B80 (-QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084340 (-QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::QueryInterface(DWMInputRouter *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // esi
  DWMInputRouter *v5; // rbx
  char v6; // al
  int v7; // r9d
  void *v8; // rax

  v3 = 0;
  v5 = this;
  if ( !a3 )
  {
    v6 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 490;
LABEL_30:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)v5 + 16;
LABEL_27:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)v5 + 24;
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)v5 + 32;
    goto LABEL_27;
  }
  this = *(DWMInputRouter **)GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data4;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data4 )
  {
    goto LABEL_20;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = (char *)v5 + 64;
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data4 )
  {
LABEL_20:
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = (char *)v5 + 8;
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = (char *)v5 + 56;
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fb9e888a_e52b_424f_8fab_f05676d1b357.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_fb9e888a_e52b_424f_8fab_f05676d1b357.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = (char *)v5 + 48;
    goto LABEL_27;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 543;
    goto LABEL_30;
  }
  return v3;
}
