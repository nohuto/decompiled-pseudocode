/*
 * XREFs of ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x1800671B0
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180068624 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x18000CA94 (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180012CA0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
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
