/*
 * XREFs of ??_G?$basic_iostream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x18003CD98
 * Callers:
 *     ??_E?$basic_iostream@GU?$char_traits@G@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x18003F870 (--_E-$basic_iostream@GU-$char_traits@G@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18006B43C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

char *__fastcall std::basic_iostream<unsigned short>::`scalar deleting destructor'(struct std::ios_base *this, char a2)
{
  char *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v3 = (char *)this - 32;
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this - 4) + 4LL) - 32) = &std::basic_iostream<unsigned short>::`vftable';
  v5 = *(int *)(*((_QWORD *)this - 4) + 4LL);
  *(_DWORD *)((char *)this + v5 - 36) = v5 - 32;
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this - 2) + 4LL) - 16) = &std::basic_ostream<unsigned short>::`vftable';
  v6 = *(int *)(*((_QWORD *)this - 2) + 4LL);
  *(_DWORD *)((char *)this + v6 - 20) = v6 - 16;
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this - 4) + 4LL) - 32) = &std::basic_istream<unsigned short>::`vftable';
  v7 = *(int *)(*((_QWORD *)this - 4) + 4LL);
  *(_DWORD *)((char *)this + v7 - 36) = v7 - 24;
  *(_QWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}
