/*
 * XREFs of ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180050078
 * Callers:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18004FDEC (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x180064340 (--_E-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::stringbuf::~stringbuf(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax

  *(_QWORD *)a1 = &std::stringbuf::`vftable';
  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::streambuf::pptr(a1) )
      v2 = std::streambuf::epptr(a1);
    else
      v2 = std::streambuf::egptr(a1);
    v3 = v2 - std::streambuf::eback(a1);
    v4 = (_QWORD *)std::streambuf::eback(a1);
    std::_Deallocate(v4, v3, 1uLL);
  }
  std::streambuf::setg(a1, 0LL, 0LL, 0LL);
  std::streambuf::setp(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
