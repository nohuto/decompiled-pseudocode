/*
 * XREFs of ?IsValidCheckSum@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0009FA4
 * Callers:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAA_NPEAEI@Z @ 0x1C0009FE0 (-Initialize@EDID_PARSER@MonDescParser@@QEAA_NPEAEI@Z.c)
 * Callees:
 *     ?IsValidCheckSum@EDID_PARSER@MonDescParser@@AEBA_NPEAT_EDID_V1_BLOCK@@@Z @ 0x1C000A03C (-IsValidCheckSum@EDID_PARSER@MonDescParser@@AEBA_NPEAT_EDID_V1_BLOCK@@@Z.c)
 */

bool __fastcall MonDescParser::EDID_PARSER::IsValidCheckSum(union _EDID_V1_BLOCK **this, int a2)
{
  union _EDID_V1_BLOCK **v2; // r8
  union _EDID_V1_BLOCK *v3; // rax
  MonDescParser::EDID_PARSER *v4; // rcx
  union _EDID_V1_BLOCK **v5; // r9
  __int64 v7; // r8
  union _EDID_V1_BLOCK **v8; // r9

  v2 = this;
  if ( a2 < 0 )
  {
    if ( this == &this[(_QWORD)this[10]] )
    {
      return 1;
    }
    else
    {
      while ( MonDescParser::EDID_PARSER::IsValidCheckSum((MonDescParser::EDID_PARSER *)this, *v2) )
      {
        v2 = (union _EDID_V1_BLOCK **)(v7 + 8);
        if ( v2 == v8 )
          return 1;
      }
      return 0;
    }
  }
  else
  {
    v3 = this[10];
    v4 = 0LL;
    v5 = &v2[(_QWORD)v3];
    while ( v2 != v5 )
    {
      if ( (_DWORD)v4 == a2 )
        return MonDescParser::EDID_PARSER::IsValidCheckSum(v4, *v2);
      v4 = (MonDescParser::EDID_PARSER *)(unsigned int)((_DWORD)v4 + 1);
      ++v2;
    }
    v2 = 0LL;
    return MonDescParser::EDID_PARSER::IsValidCheckSum(v4, *v2);
  }
}
