/*
 * XREFs of ?QueryInterface@DWMHardwareCursor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020AC0
 * Callers:
 *     ?QueryInterface@DWMHardwareCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800227C0 (-QueryInterface@DWMHardwareCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMHardwareCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800227E0 (-QueryInterface@DWMHardwareCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMHardwareCursor::QueryInterface(DWMHardwareCursor *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char v6; // al
  int v7; // r9d

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(DWMHardwareCursor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 16;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2a41cba8_e142_47c3_a686_aafebe68f8a9.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_2a41cba8_e142_47c3_a686_aafebe68f8a9.Data4 )
    {
      (*(void (__fastcall **)(DWMHardwareCursor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else
    {
      v6 = 2;
      v3 = -2147467262;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 152;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v6 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 136;
LABEL_12:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
    }
  }
  return v3;
}
