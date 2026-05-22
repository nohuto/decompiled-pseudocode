/*
 * XREFs of ?QueryInterface@MobileCursorBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025CF0
 * Callers:
 *     ?QueryInterface@MobileCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800269A0 (-QueryInterface@MobileCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MobileCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800269B0 (-QueryInterface@MobileCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MobileCursorBroker@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800269C0 (-QueryInterface@MobileCursorBroker@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::QueryInterface(MobileCursorBroker *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char v6; // al
  int v7; // r9d
  char *v8; // rax

  v3 = 0;
  if ( !a3 )
  {
    v6 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 145;
LABEL_13:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data4 )
  {
    (*(void (__fastcall **)(MobileCursorBroker *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 24;
LABEL_10:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(MobileCursorBroker *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 32;
    goto LABEL_10;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 161;
    goto LABEL_13;
  }
  return v3;
}
