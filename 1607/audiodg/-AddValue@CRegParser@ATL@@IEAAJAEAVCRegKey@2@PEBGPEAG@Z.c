/*
 * XREFs of ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140035890
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140037764 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     _alloca_probe @ 0x140019640 (_alloca_probe.c)
 *     ??$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z @ 0x140032764 (--$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140032794 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ??1?$CTempBuffer@E$0BAA@VCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x140034FD4 (--1-$CTempBuffer@E$0BAA@VCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AllocateHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z @ 0x140035D54 (-AllocateHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x140035E9C (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?FreeHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ @ 0x140036B00 (-FreeHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140036CBC (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?SetMultiStringValue@CRegKey@ATL@@QEAAJPEBG0@Z @ 0x140037DF4 (-SetMultiStringValue@CRegKey@ATL@@QEAAJPEBG0@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140037EEC (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 *     ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x140038330 (-VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ATL::CRegParser::AddValue(
        ATL::CRegParser *this,
        HKEY *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  HKEY *v5; // r13
  ATL::CRegParser *v6; // r12
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // edi
  unsigned __int64 v11; // rax
  BYTE *v12; // rdi
  WCHAR *v13; // r14
  const WCHAR *v14; // rax
  LSTATUS v15; // edi
  __int64 v16; // rdi
  signed int cbData; // r14d
  unsigned __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // r9
  WCHAR v21; // dx
  char v22; // dl
  __int64 v23; // rdi
  int Token; // eax
  ULONG pulOut; // [rsp+30h] [rbp-21A8h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-21A0h] BYREF
  LPCWSTR lpValueName; // [rsp+40h] [rbp-2198h]
  const WCHAR *v28; // [rsp+50h] [rbp-2188h] BYREF
  ATL::CRegParser *v29; // [rsp+60h] [rbp-2178h]
  struct ATL::CRegKey *v30; // [rsp+68h] [rbp-2170h]
  unsigned __int16 *v31; // [rsp+70h] [rbp-2168h]
  __int64 v32; // [rsp+78h] [rbp-2160h]
  BYTE *lpData; // [rsp+80h] [rbp-2158h] BYREF
  _BYTE v34[264]; // [rsp+88h] [rbp-2150h] BYREF
  OLECHAR sz[4096]; // [rsp+190h] [rbp-2048h] BYREF

  v32 = -2LL;
  lpValueName = a3;
  v5 = a2;
  v6 = this;
  v29 = this;
  v30 = (struct ATL::CRegKey *)a2;
  v28 = a3;
  v31 = a4;
  v7 = 0;
  LOWORD(pulOut) = 0;
  result = ATL::CRegParser::NextToken(this, sz);
  if ( (int)result >= 0 )
  {
    if ( !(unsigned int)ATL::CRegParser::VTFromRegType(sz, (unsigned __int16 *)&pulOut) )
      return 2147614729LL;
    ATL::CRegParser::SkipWhiteSpace(v6);
    result = ATL::CRegParser::NextToken(v6, sz);
    if ( (int)result >= 0 )
    {
      if ( (unsigned __int16)pulOut == 8 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( sz[v23] );
        v15 = RegSetValueExW(*v5, a3, 0, 1u, (const BYTE *)sz, 2 * v23 + 2);
        goto LABEL_52;
      }
      if ( (unsigned __int16)pulOut != 17 )
      {
        if ( (unsigned __int16)pulOut == 19 )
        {
          v28 = 0LL;
          VarUI4FromStr(sz, 0, 0, &pulOut);
          *(_DWORD *)Data = pulOut;
          v15 = RegSetValueExW(*v5, a3, 0, 4u, Data, 4u);
          ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>((_QWORD **)&v28);
        }
        else
        {
          if ( (unsigned __int16)pulOut != 16392 )
          {
LABEL_54:
            Token = ATL::CRegParser::NextToken(v6, v31);
            if ( Token < 0 )
              return (unsigned int)Token;
            return v7;
          }
          v9 = -1LL;
          do
            ++v9;
          while ( sz[v9] );
          v10 = v9 + 2;
          lpData = 0LL;
          try
          {
            v11 = ATL::AtlMultiplyThrow<unsigned __int64>(v10, 2uLL);
            if ( v11 <= 0x100 )
              lpData = v34;
            else
              ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpData, v11);
          }
          catch ( ... )
          {
            v7 = 0;
            v6 = v29;
            v5 = (HKEY *)v30;
            lpValueName = v28;
          }
          v12 = lpData;
          if ( lpData )
          {
            v13 = sz;
            while ( *v13 )
            {
              v14 = CharNextW(v13);
              if ( *v13 == 92 && *v14 == 48 )
              {
                *(_WORD *)v12 = 0;
                v12 += 2;
                v13 = CharNextW(v14);
              }
              else
              {
                *(_WORD *)v12 = *v13;
                v12 += 2;
                ++v13;
              }
            }
            *(_WORD *)v12 = 0;
            *((_WORD *)v12 + 1) = 0;
            v15 = ATL::CRegKey::SetMultiStringValue((ATL::CRegKey *)v5, lpValueName, (const unsigned __int16 *)lpData);
          }
          else
          {
            v15 = 14;
          }
          if ( lpData != v34 )
            ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap(&lpData);
        }
LABEL_52:
        if ( v15 )
          return ATL::AtlHresultFromWin32(v15);
        goto LABEL_54;
      }
      v16 = -1LL;
      do
        ++v16;
      while ( sz[v16] );
      *(_DWORD *)Data = v16;
      if ( (v16 & 1) != 0 )
        return 2147500037LL;
      cbData = (int)v16 / 2;
      pulOut = (int)v16 / 2;
      lpData = 0LL;
      try
      {
        v18 = ATL::AtlMultiplyThrow<unsigned __int64>((int)v16 / 2, 1uLL);
        if ( v18 <= 0x100 )
          lpData = v34;
        else
          ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpData, v18);
      }
      catch ( ... )
      {
        v7 = 0;
        LODWORD(v16) = *(_DWORD *)Data;
        cbData = pulOut;
        v6 = v29;
        v5 = (HKEY *)v30;
        lpValueName = v28;
      }
      if ( !lpData )
      {
        ATL::CTempBuffer<unsigned char,256,ATL::CCRTAllocator>::~CTempBuffer<unsigned char,256,ATL::CCRTAllocator>(&lpData);
        return 2147500037LL;
      }
      memset_0(lpData, 0, cbData);
      v19 = 0;
      v20 = 0LL;
      if ( (int)v16 <= 0 )
      {
LABEL_48:
        v15 = RegSetValueExW(*v5, lpValueName, 0, 3u, lpData, cbData);
        ATL::CTempBuffer<unsigned char,256,ATL::CCRTAllocator>::~CTempBuffer<unsigned char,256,ATL::CCRTAllocator>(&lpData);
        goto LABEL_52;
      }
      while ( 1 )
      {
        v21 = sz[v20];
        if ( v21 < 0x30u )
          break;
        if ( sz[v20] <= 0x39u )
        {
          v22 = v21 - 48;
        }
        else
        {
          if ( sz[v20] <= 0x40u )
            break;
          if ( sz[v20] <= 0x46u )
          {
            v22 = v21 - 55;
          }
          else
          {
            if ( (unsigned int)sz[v20] - 97 > 5 )
              break;
            v22 = v21 - 87;
          }
        }
LABEL_47:
        lpData[v19 / 2] |= v22 << (4 - 4 * (v19 & 1));
        ++v19;
        if ( ++v20 >= (int)v16 )
          goto LABEL_48;
      }
      v22 = 0;
      goto LABEL_47;
    }
  }
  return result;
}
