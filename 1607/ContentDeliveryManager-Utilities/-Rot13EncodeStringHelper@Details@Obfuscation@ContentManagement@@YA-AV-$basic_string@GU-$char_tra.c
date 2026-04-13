/*
 * XREFs of ?Rot13EncodeStringHelper@Details@Obfuscation@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180048B5C
 * Callers:
 *     ?Rot13DecodeString@Obfuscation@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180048CA8 (-Rot13DecodeString@Obfuscation@ContentManagement@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 * Callees:
 *     ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1800375B4 (-str@-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800375DC (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1800376BC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180053618 (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800548DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::Obfuscation::Details::Rot13EncodeStringHelper(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v15[136]; // [rsp+40h] [rbp-108h] BYREF
  _QWORD v16[13]; // [rsp+C8h] [rbp-80h] BYREF

  v4 = 0LL;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v14);
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  if ( v5 )
  {
    do
    {
      v6 = *(unsigned __int16 *)(a2 + 2 * v4);
      if ( (unsigned __int16)(v6 - 97) > 0x19u )
      {
        if ( (unsigned __int16)(v6 - 65) > 0x19u )
        {
          if ( (unsigned __int16)(v6 - 48) <= 9u )
          {
            v11 = (unsigned __int16)v6 - 48;
            v12 = (unsigned __int16)v6 - 53;
            v6 = v11 + 5;
            if ( v11 >= 5 )
              v6 = v12;
            LOWORD(v6) = v6 + 48;
          }
        }
        else
        {
          v9 = (unsigned __int16)v6 - 65;
          v10 = (unsigned __int16)v6 - 78;
          v6 = v9 + 13;
          if ( v9 >= 0xD )
            v6 = v10;
          LOWORD(v6) = v6 + 65;
        }
      }
      else
      {
        v7 = (unsigned __int16)v6 - 97;
        v8 = (unsigned __int16)v6 - 110;
        v6 = v7 + 13;
        if ( v7 >= 0xD )
          v6 = v8;
        LOWORD(v6) = v6 + 97;
      }
      std::basic_ostream<unsigned short>::operator<<(v15, v6);
      ++v4;
    }
    while ( v4 < v5 );
  }
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(
    (__int64)v14,
    a1);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v16);
  v16[0] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)v16);
  return a1;
}
