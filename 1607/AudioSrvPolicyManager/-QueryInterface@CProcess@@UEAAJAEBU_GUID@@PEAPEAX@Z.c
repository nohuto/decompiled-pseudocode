/*
 * XREFs of ?QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E090
 * Callers:
 *     ?QueryInterface@CProcess@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180010B00 (-QueryInterface@CProcess@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CProcess@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180010B10 (-QueryInterface@CProcess@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::QueryInterface(CProcess *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char *v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f49d99ca_6ff4_4f80_89cf_8d8b5187336e.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f49d99ca_6ff4_4f80_89cf_8d8b5187336e.Data4 )
  {
    v4 = (char *)this + 16;
  }
  else
  {
    if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data1
      || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4 )
    {
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        *a3 = this;
        (*(void (__fastcall **)(CProcess *))(*(_QWORD *)this + 8LL))(this);
      }
      else
      {
        *a3 = 0LL;
        return (unsigned int)-2147467262;
      }
      return v3;
    }
    v4 = (char *)this + 24;
  }
  if ( !this )
    v4 = 0LL;
  *a3 = v4;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return v3;
}
