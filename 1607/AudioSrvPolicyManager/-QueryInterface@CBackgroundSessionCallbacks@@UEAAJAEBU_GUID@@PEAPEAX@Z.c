/*
 * XREFs of ?QueryInterface@CBackgroundSessionCallbacks@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800101E0
 * Callers:
 *     ?QueryInterface@CBackgroundSessionCallbacks@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180010AF0 (-QueryInterface@CBackgroundSessionCallbacks@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBackgroundSessionCallbacks::QueryInterface(
        CBackgroundSessionCallbacks *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  char *v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c26fe81d_0fd3_45f2_8f0f_ba660f256851.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_c26fe81d_0fd3_45f2_8f0f_ba660f256851.Data4 )
    {
      v4 = (char *)this + 16;
      if ( !this )
        v4 = 0LL;
      *a3 = v4;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        *a3 = 0LL;
        return (unsigned int)-2147467262;
      }
      *a3 = this;
    }
    (*(void (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
