/*
 * XREFs of ?QueryInterface@OneCoreUAPInputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800046B0
 * Callers:
 *     ?QueryInterface@OneCoreUAPInputHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005570 (-QueryInterface@OneCoreUAPInputHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800055B0 (-QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::QueryInterface(OneCoreUAPInputHost *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
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
      v7 = 165;
LABEL_16:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 16;
LABEL_13:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data4 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
    *a3 = this;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 8;
    goto LABEL_13;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 188;
    goto LABEL_16;
  }
  return v3;
}
