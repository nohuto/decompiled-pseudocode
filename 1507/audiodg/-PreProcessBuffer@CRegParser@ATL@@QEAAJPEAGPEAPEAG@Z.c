/*
 * XREFs of ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140037C14
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400382B8 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140029F28 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140034C1C (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ??0CParseBuffer@CRegParser@ATL@@QEAA@H@Z @ 0x1400356D0 (--0CParseBuffer@CRegParser@ATL@@QEAA@H@Z.c)
 *     ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x140036A00 (-Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x140038FE0 (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
 *     ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z @ 0x14003902C (-StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegParser::PreProcessBuffer(
        ATL::CRegParser *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdx
  LPWSTR v9; // rax
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // r14
  __int64 v12; // rcx
  errno_t v13; // eax
  const unsigned __int16 *v14; // rax
  __int64 v15; // r8
  int v16; // ebx
  LPWSTR v17; // rax
  LPWSTR v18; // rax
  unsigned __int16 *v19; // rcx
  __int64 v21; // [rsp+28h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-31h]
  _QWORD *v23[2]; // [rsp+38h] [rbp-29h] BYREF
  wchar_t Destination[32]; // [rsp+48h] [rbp-19h] BYREF

  v23[1] = (_QWORD *)-2LL;
  v6 = 0;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  ATL::CRegParser::CParseBuffer::CParseBuffer((ATL::CRegParser::CParseBuffer *)&v21, 2 * v7);
  if ( !pv )
  {
LABEL_6:
    v6 = -2147024882;
    goto LABEL_26;
  }
  *(_QWORD *)this = a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      v8 = *(const unsigned __int16 **)this;
      if ( **(_WORD **)this != 37 )
        goto LABEL_20;
      v9 = CharNextW(*(LPCWSTR *)this);
      *(_QWORD *)this = v9;
      if ( *v9 == 37 )
        break;
      v10 = ATL::CRegParser::StrChrW(v9, 0x25u);
      v11 = v10;
      if ( !v10 )
        goto LABEL_24;
      v12 = ((__int64)v10 - *(_QWORD *)this) >> 1;
      if ( v12 > 31 )
      {
        v6 = -2147467259;
        goto LABEL_26;
      }
      v13 = wcsncpy_s(Destination, 0x20uLL, *(const wchar_t **)this, (int)v12);
      ATL::AtlCrtErrorCheck(v13);
      v14 = ATL::CRegObject::StrFromMap(*((ATL::CRegObject **)this + 1), Destination);
      if ( !v14 )
      {
LABEL_24:
        v6 = -2147352567;
        goto LABEL_26;
      }
      v23[0] = 0LL;
      v15 = -1LL;
      do
        ++v15;
      while ( v14[v15] );
      v16 = ATL::CRegParser::CParseBuffer::Append((ATL::CRegParser::CParseBuffer *)&v21, v14, v15);
      ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(v23);
      if ( !v16 )
        goto LABEL_6;
      if ( *(unsigned __int16 **)this != v11 )
      {
        do
        {
          v17 = CharNextW(*(LPCWSTR *)this);
          *(_QWORD *)this = v17;
        }
        while ( v17 != v11 );
      }
LABEL_21:
      v18 = CharNextW(*(LPCWSTR *)this);
      *(_QWORD *)this = v18;
      if ( !*v18 )
        goto LABEL_25;
    }
    v8 = v9;
LABEL_20:
    if ( !(unsigned int)ATL::CRegParser::CParseBuffer::Append((ATL::CRegParser::CParseBuffer *)&v21, v8, 1) )
      goto LABEL_6;
    goto LABEL_21;
  }
LABEL_25:
  v19 = (unsigned __int16 *)pv;
  pv = 0LL;
  v21 = 0LL;
  *a3 = v19;
LABEL_26:
  CoTaskMemFree(pv);
  return v6;
}
