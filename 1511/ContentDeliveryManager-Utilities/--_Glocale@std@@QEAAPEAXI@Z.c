/*
 * XREFs of ??_Glocale@std@@QEAAPEAXI@Z @ 0x180014870
 * Callers:
 *     ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180012218 (--1-$basic_streambuf@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18001412C (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x180014820 (--_E-$basic_streambuf@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800233DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

std::locale *__fastcall std::locale::`scalar deleting destructor'(std::locale *this, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rax

  if ( *(_QWORD *)this )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    if ( v4 )
      (**v4)(v4, 1LL);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
