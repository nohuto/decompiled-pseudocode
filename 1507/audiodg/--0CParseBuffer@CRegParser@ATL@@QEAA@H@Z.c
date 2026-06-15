/*
 * XREFs of ??0CParseBuffer@CRegParser@ATL@@QEAA@H@Z @ 0x1400356D0
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140037C14 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x1400349F8 (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

ATL::CRegParser::CParseBuffer *__fastcall ATL::CRegParser::CParseBuffer::CParseBuffer(
        ATL::CRegParser::CParseBuffer *this,
        signed int a2)
{
  _WORD *v3; // rax
  SIZE_T cb; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 < 100 )
    a2 = 1000;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = a2;
  LODWORD(cb) = 0;
  if ( (int)ATL::AtlMultiply<unsigned long>(&cb, a2, 2u) >= 0 )
    v3 = CoTaskMemAlloc((unsigned int)cb);
  else
    v3 = 0LL;
  *((_QWORD *)this + 1) = v3;
  if ( v3 )
    *v3 = 0;
  return this;
}
