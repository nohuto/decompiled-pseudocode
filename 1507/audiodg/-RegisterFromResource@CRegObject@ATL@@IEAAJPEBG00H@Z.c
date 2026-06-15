/*
 * XREFs of ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x140038448
 * Callers:
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x140039144 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ??$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z @ 0x140034BEC (--$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140034C1C (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?AllocateHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z @ 0x1400369CC (-AllocateHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x140036AF0 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?FreeHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ @ 0x140037884 (-FreeHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400382B8 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegObject::RegisterFromResource(
        ATL::CRegObject *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        int a5)
{
  HMODULE Library; // rax
  HMODULE v8; // rsi
  unsigned int Error; // ebx
  HRSRC Resource; // rax
  HRSRC v11; // rdi
  signed int v12; // eax
  const CHAR *v13; // r14
  DWORD cchWideChar; // edi
  size_t v15; // rax
  int v16; // eax
  _QWORD *v18; // [rsp+38h] [rbp-470h] BYREF
  HMODULE v19; // [rsp+40h] [rbp-468h]
  const CHAR *v20; // [rsp+48h] [rbp-460h]
  _QWORD v21[4]; // [rsp+50h] [rbp-458h] BYREF
  LPWSTR lpWideCharStr; // [rsp+70h] [rbp-438h] BYREF
  _BYTE v23[1032]; // [rsp+78h] [rbp-430h] BYREF

  v21[2] = -2LL;
  v18 = 0LL;
  v21[1] = this;
  v21[0] = 0LL;
  lpWideCharStr = 0LL;
  Library = LoadLibraryExW(a2, 0LL, 2u);
  v8 = Library;
  v19 = Library;
  if ( !Library )
  {
    Error = ATL::AtlHresultFromLastError();
    goto LABEL_19;
  }
  Resource = FindResourceExW(Library, a4, a3, 0);
  v11 = Resource;
  if ( !Resource )
    goto LABEL_4;
  v13 = (const CHAR *)LoadResource(v8, Resource);
  v20 = v13;
  if ( !v13 )
    goto LABEL_4;
  cchWideChar = SizeofResource(v8, v11);
  if ( cchWideChar + 1 >= cchWideChar )
  {
    try
    {
      v15 = ATL::AtlMultiplyThrow<unsigned __int64>(cchWideChar + 1, 2uLL);
      if ( v15 <= 0x400 )
        lpWideCharStr = (LPWSTR)v23;
      else
        ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpWideCharStr, v15);
    }
    catch ( ... )
    {
      v8 = v19;
      v13 = v20;
    }
    if ( !lpWideCharStr )
    {
      Error = -2147024882;
LABEL_18:
      FreeLibrary(v8);
LABEL_19:
      if ( lpWideCharStr != (LPWSTR)v23 )
        ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap((void **)&lpWideCharStr);
      goto LABEL_21;
    }
    v16 = MultiByteToWideChar(3u, 0, v13, cchWideChar, lpWideCharStr, cchWideChar);
    if ( v16 )
    {
      lpWideCharStr[v16] = 0;
      v12 = ATL::CRegParser::RegisterBuffer((ATL::CRegParser *)v21, lpWideCharStr, a5);
      goto LABEL_17;
    }
LABEL_4:
    v12 = ATL::AtlHresultFromLastError();
LABEL_17:
    Error = v12;
    goto LABEL_18;
  }
  if ( lpWideCharStr != (LPWSTR)v23 )
    ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap((void **)&lpWideCharStr);
  Error = -2147024882;
LABEL_21:
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v18);
  return Error;
}
