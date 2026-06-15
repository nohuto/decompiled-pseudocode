/*
 * XREFs of ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x18002D270
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18002CE70 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CDacl::CAccessAce::Order(
        const struct ATL::CDacl::CAccessAce *a1,
        const struct ATL::CDacl::CAccessAce *a2)
{
  char v4; // al

  v4 = *((_BYTE *)a1 + 132) & 0x10;
  if ( v4 && (*((_BYTE *)a2 + 132) & 0x10) == 0 )
    return 0xFFFFFFFFLL;
  if ( v4 || (*((_BYTE *)a2 + 132) & 0x10) == 0 )
  {
    if ( *((_BYTE *)a1 + 144) )
    {
      if ( !*((_BYTE *)a2 + 144) )
        return 0xFFFFFFFFLL;
      goto LABEL_6;
    }
    if ( !*((_BYTE *)a2 + 144) )
    {
LABEL_6:
      if ( !(*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a1 + 32LL))(a1)
        || (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a2 + 32LL))(a2) )
      {
        return !(*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a1 + 32LL))(a1)
            && (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a2 + 32LL))(a2);
      }
      return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
