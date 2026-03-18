/*
 * XREFs of ?Initialize@EDID_PARSER@MonDescParser@@QEAA_NPEAEI@Z @ 0x1C0009FE0
 * Callers:
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0009EBC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 * Callees:
 *     ?IsValidCheckSum@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0009FA4 (-IsValidCheckSum@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 */

char __fastcall MonDescParser::EDID_PARSER::Initialize(MonDescParser::EDID_PARSER *this, unsigned __int8 *a2)
{
  unsigned int i; // r9d
  __int64 v3; // r8
  char v4; // r10

  for ( i = 0; i < 0x80; i += 128 )
  {
    v3 = i;
    *((_QWORD *)this + (*((_QWORD *)this + 10))++) = &a2[v3];
  }
  if ( **(_QWORD **)this != 0xFFFFFFFFFFFF00LL
    || !MonDescParser::EDID_PARSER::IsValidCheckSum((union _EDID_V1_BLOCK **)this, 0) )
  {
    return 0;
  }
  return v4;
}
