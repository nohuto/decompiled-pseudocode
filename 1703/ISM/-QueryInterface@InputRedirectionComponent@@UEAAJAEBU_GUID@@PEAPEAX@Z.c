/*
 * XREFs of ?QueryInterface@InputRedirectionComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082A40
 * Callers:
 *     ?QueryInterface@InputRedirectionComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180083320 (-QueryInterface@InputRedirectionComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionComponent@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180083330 (-QueryInterface@InputRedirectionComponent@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionComponent@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180083340 (-QueryInterface@InputRedirectionComponent@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionComponent::QueryInterface(
        InputRedirectionComponent *this,
        const struct _GUID *a2,
        void **a3)
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
      v7 = 123;
LABEL_16:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionComponent *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 8;
LABEL_13:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionComponent *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 16;
    goto LABEL_13;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionComponent *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 24;
    goto LABEL_13;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 146;
    goto LABEL_16;
  }
  return v3;
}
