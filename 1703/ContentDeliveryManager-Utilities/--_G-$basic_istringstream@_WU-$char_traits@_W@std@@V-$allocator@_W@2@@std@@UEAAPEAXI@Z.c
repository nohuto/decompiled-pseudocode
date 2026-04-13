/*
 * XREFs of ??_G?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x18002D400
 * Callers:
 *     ??_E?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x180037F20 (--_E-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18002C518 (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18006B43C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

__int64 __fastcall std::wistringstream::`scalar deleting destructor'(__int64 a1, char a2)
{
  __int64 v3; // rdi

  v3 = a1 - 144;
  std::wistringstream::~wistringstream(a1);
  *(_QWORD *)(v3 + 144) = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)(v3 + 144));
  if ( (a2 & 1) != 0 )
    operator delete((void *)v3);
  return v3;
}
