/*
 * XREFs of ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180066200
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002DE40 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x180019238 (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 */

ATL::CSid *__fastcall ATL::CSid::operator=(ATL::CSid *this, struct _SID *a2)
{
  if ( !*((_BYTE *)this + 76) || (struct _SID *)((char *)this + 8) != a2 )
  {
    *((_DWORD *)this + 20) = 7;
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this + 11);
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this + 12);
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this + 13);
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this + 14);
    *((_BYTE *)this + 76) = 0;
    ATL::CSid::Copy(this, a2);
    *((_DWORD *)this + 20) = 8;
  }
  return this;
}
