/*
 * XREFs of ??_G?$basic_iostream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x18003792C
 * Callers:
 *     ??_E?$basic_iostream@GU?$char_traits@G@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x18003A150 (--_E-$basic_iostream@GU-$char_traits@G@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800548DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

_QWORD *__fastcall std::basic_iostream<unsigned short>::`scalar deleting destructor'(__int64 a1, char a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 - 32);
  *(_QWORD *)((char *)v2 + *(int *)(*(_QWORD *)(a1 - 32) + 4LL)) = &std::basic_iostream<unsigned short>::`vftable';
  v4 = *(int *)(*(_QWORD *)(a1 - 32) + 4LL);
  *(_DWORD *)((char *)v2 + v4 - 4) = v4 - 32;
  *(_QWORD *)((char *)v2 + *(int *)(v2[2] + 4LL) + 16) = &std::basic_ostream<unsigned short>::`vftable';
  v5 = *(int *)(v2[2] + 4LL);
  *(_DWORD *)((char *)v2 + v5 + 12) = v5 - 16;
  *(_QWORD *)((char *)v2 + *(int *)(*v2 + 4LL)) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)((char *)v2 + *(int *)(*v2 + 4LL) - 4) = *(_DWORD *)(*v2 + 4LL) - 24;
  v2[4] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)(v2 + 4));
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
