/*
 * XREFs of ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140038774
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400383D8 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140038774 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140019B90 (_alloca_probe.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14002A5C4 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x1400366B0 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x140036CE4 (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z @ 0x140036CFC (-CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z.c)
 *     ?Close@CRegKey@ATL@@QEAAJXZ @ 0x140036E24 (-Close@CRegKey@ATL@@QEAAJXZ.c)
 *     ?Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z @ 0x140036E50 (-Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z.c)
 *     ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x140037974 (-DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z @ 0x140037A90 (-HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140037BEC (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x140037D60 (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x1400382E8 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140038774 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140038F98 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x140039060 (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ATL::CRegParser::RegisterSubkeys(
        ATL::CRegParser *this,
        unsigned __int16 *a2,
        HKEY a3,
        int a4,
        unsigned int a5)
{
  unsigned __int16 *v5; // rdi
  ATL::CRegParser *v6; // rsi
  int Token; // eax
  int v8; // ebx
  BOOL v9; // ebx
  ATL::CRegParser *v10; // rcx
  int v11; // eax
  HKEY v12; // rbx
  unsigned __int16 *v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  errno_t v17; // eax
  __int64 v18; // rax
  ATL::CRegParser *v19; // rcx
  __int64 v20; // rax
  unsigned int v22; // [rsp+20h] [rbp-E0h]
  BOOL v23; // [rsp+40h] [rbp-C0h]
  int v24; // [rsp+40h] [rbp-C0h]
  int HasSubKeys; // [rsp+40h] [rbp-C0h]
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+64h] [rbp-9Ch]
  HKEY v31; // [rsp+68h] [rbp-98h]
  HKEY v32[3]; // [rsp+70h] [rbp-90h] BYREF
  ATL::CRegParser *v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  wchar_t Destination[264]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR ValueName[4096]; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int v37; // [rsp+2310h] [rbp+2210h]

  v34 = -2LL;
  v29 = a4;
  v31 = a3;
  v5 = a2;
  v6 = this;
  memset(v32, 0, sizeof(v32));
  LODWORD(v33) = a5;
  while ( 1 )
  {
    Token = ATL::CRegParser::NextToken(this, a2);
LABEL_3:
    v8 = Token;
    if ( Token < 0 )
      break;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *v5 == 125 )
          goto LABEL_82;
        v30 = 1;
        v9 = lstrcmpiW(v5, L"Delete") == 0;
        v23 = v9;
        if ( !lstrcmpiW(v5, L"ForceRemove") || v9 )
        {
          v8 = ATL::CRegParser::NextToken(v6, v5);
          if ( v8 < 0 )
            goto LABEL_82;
          if ( v29 )
          {
            hKey = 0LL;
            v27 = 0LL;
            v28 = 0LL;
            if ( ATL::CRegParser::StrChrW(v5, 0x5Cu) )
            {
              ATL::CRegKey::Close(&hKey);
LABEL_81:
              v8 = -2147352567;
              goto LABEL_82;
            }
            if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v10, v5) )
            {
              hKey = v31;
              ATL::CRegKey::RecurseDeleteKey(&hKey, v5);
              hKey = 0LL;
            }
            if ( v23 )
            {
              v8 = ATL::CRegParser::NextToken(v6, v5);
              if ( v8 < 0 )
                goto LABEL_79;
              v8 = ATL::CRegParser::SkipAssignment(v6, v5);
LABEL_15:
              ATL::CRegKey::Close(&hKey);
              if ( v8 < 0 )
                goto LABEL_82;
              goto LABEL_69;
            }
            ATL::CRegKey::Close(&hKey);
          }
        }
        if ( !lstrcmpiW(v5, L"NoRemove") )
        {
          v30 = 0;
          v8 = ATL::CRegParser::NextToken(v6, v5);
          if ( v8 < 0 )
            goto LABEL_82;
        }
        if ( !lstrcmpiW(v5, L"Val") )
        {
          v8 = ATL::CRegParser::NextToken(v6, ValueName);
          if ( v8 < 0 )
            goto LABEL_82;
          v8 = ATL::CRegParser::NextToken(v6, v5);
          if ( v8 < 0 )
            goto LABEL_82;
          if ( *v5 != 61 )
            goto LABEL_81;
          if ( !v29 )
          {
            if ( a5 || !v30 )
              goto LABEL_31;
            hKey = 0LL;
            v27 = 0LL;
            v28 = 0LL;
            v11 = ATL::CRegKey::Open(&hKey, v31, 0LL, 0x20006u);
            if ( !v11 )
            {
              v11 = RegDeleteValueW(hKey, ValueName);
              if ( (v11 & 0xFFFFFFFD) == 0 )
              {
                ATL::CRegKey::Close(&hKey);
LABEL_31:
                Token = ATL::CRegParser::SkipAssignment(v6, v5);
                goto LABEL_3;
              }
            }
LABEL_78:
            v8 = ATL::AtlHresultFromWin32(v11);
LABEL_79:
            ATL::CRegKey::Close(&hKey);
            goto LABEL_82;
          }
          v27 = 0LL;
          v28 = 0LL;
          hKey = v31;
          v8 = ATL::CRegParser::AddValue(v6, &hKey, ValueName, v5);
          hKey = 0LL;
          goto LABEL_15;
        }
        if ( ATL::CRegParser::StrChrW(v5, 0x5Cu) )
          goto LABEL_81;
        if ( v29 )
          break;
        v15 = a5;
        if ( a5 )
          v16 = 2;
        else
          v16 = ATL::CRegKey::Open(v32, v31, v5, 0x20019u);
        v24 = v16;
        if ( v16 )
          v15 = 1;
        v37 = v15;
        v17 = wcsncpy_s(Destination, 0x104uLL, v5, 0xFFFFFFFFFFFFFFFFuLL);
        ATL::AtlCrtErrorCheck(v17);
        v8 = ATL::CRegParser::NextToken(v6, v5);
        if ( v8 < 0 )
          goto LABEL_82;
        v8 = ATL::CRegParser::SkipAssignment(v6, v5);
        if ( v8 < 0 )
          goto LABEL_82;
        if ( *v5 == 123 )
        {
          v18 = -1LL;
          do
            ++v18;
          while ( v5[v18] );
          if ( v18 == 1 )
          {
            v8 = ATL::CRegParser::RegisterSubkeys(v6, v5, v32[0], 0, v37);
            if ( v8 < 0 && !v37 )
              goto LABEL_82;
            v8 = ATL::CRegParser::NextToken(v6, v5);
            if ( v8 < 0 )
              goto LABEL_82;
          }
        }
        v19 = (ATL::CRegParser *)(unsigned int)v33;
        a5 = (unsigned int)v33;
        v14 = v24;
        if ( v24 != 2 )
        {
          if ( v24 )
          {
            if ( !(_DWORD)v33 )
              goto LABEL_80;
          }
          else if ( (_DWORD)v33
                 && (unsigned int)ATL::CRegParser::HasSubKeys((ATL::CRegParser *)(unsigned int)v33, v32[0]) )
          {
            if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v19, Destination) && v30 )
              ATL::CRegKey::RecurseDeleteKey(v32, Destination);
          }
          else
          {
            HasSubKeys = ATL::CRegParser::HasSubKeys(v19, v32[0]);
            v14 = ATL::CRegKey::Close(v32);
            if ( v14 )
              goto LABEL_80;
            if ( v30 && !HasSubKeys )
            {
              v27 = 0LL;
              v28 = 0LL;
              hKey = v31;
              v11 = ATL::CRegKey::DeleteSubKey((ATL::CRegKey *)&hKey, Destination);
              hKey = 0LL;
              if ( v11 )
                goto LABEL_78;
              ATL::CRegKey::Close(&hKey);
              goto LABEL_69;
            }
          }
        }
      }
      v12 = v31;
      if ( (unsigned int)ATL::CRegKey::Open(v32, v31, v5, 0x2001Fu) )
      {
        if ( (unsigned int)ATL::CRegKey::Open(v32, v12, v5, 0x20019u) )
        {
          v14 = ATL::CRegKey::Create(v32, v12, v5, v13, v22);
          if ( v14 )
          {
LABEL_80:
            v8 = ATL::AtlHresultFromWin32(v14);
            goto LABEL_82;
          }
        }
      }
      v8 = ATL::CRegParser::NextToken(v6, v5);
      if ( v8 < 0 )
        goto LABEL_82;
      if ( *v5 == 61 )
      {
        v8 = ATL::CRegParser::AddValue(v6, v32, 0LL, v5);
        if ( v8 < 0 )
          goto LABEL_82;
      }
LABEL_69:
      if ( v29 )
      {
        if ( *v5 == 123 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( v5[v20] );
          if ( v20 == 1 )
            break;
        }
      }
    }
    v8 = ATL::CRegParser::RegisterSubkeys(v6, v5, v32[0], v29, 0);
    if ( v8 < 0 )
      break;
    a2 = v5;
    this = v6;
  }
LABEL_82:
  ATL::CRegKey::Close(v32);
  return (unsigned int)v8;
}
