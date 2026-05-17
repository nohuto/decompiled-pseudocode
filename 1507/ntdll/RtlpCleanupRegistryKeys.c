/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800D5480
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x18001CD58 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001DD60 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001E1D8 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18001ECA0 (RtlLCIDToCultureName.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18001F930 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlCleanUpTEBLangLists @ 0x1800475E0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800491B0 (RtlpMuiRegFreeRegistryInfo.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x180093C20 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x180094550 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180094770 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x180094830 (NtIsUILanguageComitted.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800D7B44 (_MuiRegAllocArray_0.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned __int64 Heap; // r14
  int SystemDefaultUILanguage; // ebx
  __int64 v2; // rdi
  __int64 v3; // rcx
  const WCHAR *v4; // rax
  int v5; // r12d
  __int64 v6; // rdi
  _QWORD *v7; // rsi
  unsigned int v8; // r13d
  unsigned __int64 v9; // rcx
  _WORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  HANDLE v16; // rcx
  char v18; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v19; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h]
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v22; // [rsp+50h] [rbp-B8h]
  HANDLE v23; // [rsp+58h] [rbp-B0h]
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *String2; // [rsp+78h] [rbp-90h]
  int v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  __int64 *v30; // [rsp+98h] [rbp-70h]
  int v31; // [rsp+A0h] [rbp-68h]
  __int128 v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+B8h] [rbp-50h]
  HANDLE v34; // [rsp+C0h] [rbp-48h]
  __int64 *v35; // [rsp+C8h] [rbp-40h]
  int v36; // [rsp+D0h] [rbp-38h]
  __int128 v37; // [rsp+D8h] [rbp-30h]
  char v38; // [rsp+E8h] [rbp-20h] BYREF

  Heap = 0LL;
  v18 = 0;
  v23 = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v25);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  v2 = v25;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(&v19, v25);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  String2 = (wchar_t *)&v38;
  LODWORD(v26) = 11272192;
  if ( !RtlLCIDToCultureName(v19, (__int64)&v26) || !v2 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_52;
  }
  LODWORD(v21) = 0;
  v22 = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
  {
    SystemDefaultUILanguage = -1073741811;
    goto LABEL_52;
  }
  v22 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  v23 = 0LL;
  v28 = 48;
  LOWORD(v21) = 2 * (0x7FFF - v3);
  v29 = 0LL;
  WORD1(v21) = v21 + 2;
  v31 = 64;
  v30 = &v21;
  v32 = 0LL;
  SystemDefaultUILanguage = NtOpenKey();
  if ( SystemDefaultUILanguage >= 0 )
  {
    Handle = 0LL;
    v5 = 0;
    LODWORD(v6) = 0;
    v7 = 0LL;
    v8 = 0;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 512LL);
    if ( !Heap )
    {
      SystemDefaultUILanguage = -1073741801;
      goto LABEL_52;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          SystemDefaultUILanguage = NtEnumerateKey();
          if ( SystemDefaultUILanguage < 0 )
          {
LABEL_33:
            if ( Handle )
              NtClose(Handle);
            if ( SystemDefaultUILanguage == -2147483622 )
              SystemDefaultUILanguage = 0;
            if ( v7 )
            {
              while ( (_DWORD)v6 )
              {
                v6 = (unsigned int)(v6 - 1);
                v16 = (HANDLE)v7[v6];
                Handle = v16;
                if ( v16 )
                {
                  if ( SystemDefaultUILanguage >= 0 )
                  {
                    v18 = 1;
                    NtDeleteKey();
                    v16 = Handle;
                  }
                  NtClose(v16);
                }
              }
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
            }
            if ( SystemDefaultUILanguage >= 0 && v18 )
            {
              ZwGetMUIRegistryInfo();
              RtlCleanUpTEBLangLists();
              RtlpInitMuiCriticalSection();
              RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
              SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo(g_RegInfo, 0xFFFu);
              if ( SystemDefaultUILanguage >= 0 )
              {
                if ( g_RegInfo )
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                g_RegInfo = 0LL;
              }
              RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
            }
LABEL_52:
            if ( v23 )
              NtClose(v23);
            if ( Heap )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
            return (unsigned int)SystemDefaultUILanguage;
          }
          v9 = *(unsigned int *)(Heap + 12);
          ++v5;
          if ( v9 + 24 <= 0x200 )
          {
            *(_WORD *)(Heap + 2 * (v9 >> 1) + 16) = 0;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v25, (const WCHAR *)(Heap + 16), 0, &v24) < 0 )
            {
              if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                break;
            }
          }
        }
        LODWORD(v21) = 0;
        v22 = 0LL;
        if ( Heap != -16LL )
          break;
LABEL_24:
        v34 = v23;
        Handle = 0LL;
        v35 = &v21;
        v33 = 48;
        v36 = 64;
        v37 = 0LL;
        if ( (int)NtOpenKey() >= 0 )
        {
          if ( v7 )
          {
            if ( (unsigned int)v6 >= v8 )
            {
              v13 = (_QWORD *)MuiRegAllocArray_0(v12, v8 + 10);
              v14 = v13;
              if ( !v13 )
              {
LABEL_32:
                SystemDefaultUILanguage = -1073741801;
                goto LABEL_33;
              }
              memmove(v13, v7, v8);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
              v8 += 10;
              v7 = v14;
            }
          }
          else
          {
            v8 = 10;
            v7 = (_QWORD *)MuiRegAllocArray_0(v12, 10LL);
            if ( !v7 )
              goto LABEL_32;
          }
          v15 = (unsigned int)v6;
          LODWORD(v6) = v6 + 1;
          v7[v15] = Handle;
          Handle = 0LL;
        }
      }
      v10 = (_WORD *)(Heap + 16);
      v11 = 0x7FFFLL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v11;
      }
      while ( v11 );
      if ( v11 )
      {
        v22 = (const WCHAR *)(Heap + 16);
        LOWORD(v21) = 2 * (0x7FFF - v11);
        WORD1(v21) = v21 + 2;
        goto LABEL_24;
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
