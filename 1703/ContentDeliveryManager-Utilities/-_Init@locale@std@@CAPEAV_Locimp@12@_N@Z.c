/*
 * XREFs of ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x18006B188
 * Callers:
 *     ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x18002ED80 (--0-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@std.c)
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x18002FFB0 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x1800615F8 (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x18006AFB4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x18006B038 (--1_Lockit@std@@QEAA@XZ.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18006B070 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z @ 0x18006B350 (-_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z.c)
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x18006B3C0 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct std::locale::_Locimp *__fastcall std::locale::_Init(char a1)
{
  struct std::locale::_Locimp *v2; // rbx
  char v4; // [rsp+40h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v4, 0);
  v2 = (struct std::locale::_Locimp *)qword_1800F3BC0;
  if ( !qword_1800F3BC0 )
  {
    v2 = std::locale::_Locimp::_New_Locimp(0);
    std::locale::_Setgloballocale(v2);
    *((_DWORD *)v2 + 8) = 63;
    std::_Yarn<char>::operator=((void **)v2 + 5, "C");
    std::locale::_Locimp::_Clocptr = v2;
    (*(void (__fastcall **)(struct std::locale::_Locimp *))(*(_QWORD *)v2 + 8LL))(v2);
    qword_1800F3C00 = (__int64)std::locale::_Locimp::_Clocptr;
  }
  if ( a1 )
    (*(void (__fastcall **)(struct std::locale::_Locimp *))(*(_QWORD *)v2 + 8LL))(v2);
  std::_Lockit::~_Lockit((std::_Lockit *)&v4);
  return v2;
}
