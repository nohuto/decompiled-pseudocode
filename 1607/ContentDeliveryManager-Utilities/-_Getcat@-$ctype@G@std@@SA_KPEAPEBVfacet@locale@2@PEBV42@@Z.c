/*
 * XREFs of ?_Getcat@?$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18001BBA8
 * Callers:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180029768 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18001B8A8 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18001B944 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800538BC (--2@YAPEAX_K@Z.c)
 *     _Getctype @ 0x180054EE0 (_Getctype.c)
 *     _Getcvt @ 0x180054FA8 (_Getcvt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::ctype<unsigned short>::_Getcat(_QWORD *a1, __int64 *a2)
{
  char v4; // si
  char *v5; // rbx
  __int64 v6; // rax
  const char *v7; // rdx
  _Cvtvec *v8; // rax
  _Ctypevec v10; // [rsp+28h] [rbp-C0h] BYREF
  _Cvtvec v11; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v12[104]; // [rsp+78h] [rbp-70h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = (char *)operator new(0x60uLL);
    if ( v5 )
    {
      v6 = *a2;
      if ( *a2 )
      {
        v7 = *(const char **)(v6 + 40);
        if ( !v7 )
          v7 = (const char *)(v6 + 48);
      }
      else
      {
        v7 = (const char *)&word_1800717D0;
      }
      std::_Locinfo::_Locinfo((std::_Locinfo *)v12, v7);
      v4 = 1;
      *((_DWORD *)v5 + 2) = 0;
      *(_QWORD *)v5 = &std::ctype<unsigned short>::`vftable';
      *(_Ctypevec *)(v5 + 16) = *Getctype(&v10);
      v8 = Getcvt(&v11);
      *((_OWORD *)v5 + 3) = *(_OWORD *)&v8->_Page;
      *((_OWORD *)v5 + 4) = *(_OWORD *)&v8->_Isleadbyte[4];
      *((_OWORD *)v5 + 5) = *(_OWORD *)&v8->_Isleadbyte[20];
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v12);
  }
  return 2LL;
}
