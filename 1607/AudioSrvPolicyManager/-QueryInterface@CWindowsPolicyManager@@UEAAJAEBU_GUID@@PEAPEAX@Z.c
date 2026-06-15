/*
 * XREFs of ?QueryInterface@CWindowsPolicyManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180004500
 * Callers:
 *     ?QueryInterface@CWindowsPolicyManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800050E0 (-QueryInterface@CWindowsPolicyManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWindowsPolicyManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005100 (-QueryInterface@CWindowsPolicyManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::QueryInterface(
        CWindowsPolicyManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  char *v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_fbe35a37_add0_45f3_894c_cb72c62d1359.Data1
      || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_fbe35a37_add0_45f3_894c_cb72c62d1359.Data4 )
    {
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4 )
      {
        v4 = (char *)this + 8;
        if ( !this )
          v4 = 0LL;
        *a3 = v4;
        goto LABEL_13;
      }
      this = (CWindowsPolicyManager *)((char *)this + 16);
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        *a3 = 0LL;
        return (unsigned int)-2147467262;
      }
    }
    *a3 = this;
LABEL_13:
    (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  return (unsigned int)-2147467261;
}
