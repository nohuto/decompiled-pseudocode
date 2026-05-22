/*
 * XREFs of ?QueryInterface@WGIRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180060DA0
 * Callers:
 *     ?QueryInterface@WGIRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180061CE0 (-QueryInterface@WGIRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180061CF0 (-QueryInterface@WGIRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall WGIRawInputProvider::QueryInterface(WGIRawInputProvider *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char v5; // al
  int v6; // r9d
  unsigned __int64 v7; // rcx

  v3 = 0;
  if ( !a3 )
  {
    v5 = 3;
    v3 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 111;
LABEL_16:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v6, v5);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v7 = (unsigned __int64)this + 16;
LABEL_13:
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    *a3 = this;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v7 = (unsigned __int64)this + 8;
    goto LABEL_13;
  }
  *a3 = 0LL;
  v5 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 131;
    goto LABEL_16;
  }
  return v3;
}
