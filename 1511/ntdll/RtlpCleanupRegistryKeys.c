/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800DD3A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001B8EC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18003D4E4 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18003D640 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003EB40 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlCleanUpTEBLangLists @ 0x18007A9E0 (RtlCleanUpTEBLangLists.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A5700 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x1800A6970 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A6DB0 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1800A6F50 (NtIsUILanguageComitted.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800DF954 (_MuiRegAllocArray_0.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned __int64 Heap; // r14
  __int64 v1; // rdx
  __int64 v2; // r8
  int SystemDefaultUILanguage; // ebx
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  const WCHAR *v7; // rax
  int v8; // r12d
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  unsigned int v11; // r13d
  unsigned __int64 v12; // rcx
  _WORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  HANDLE v19; // rcx
  char v21; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v22; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v25; // [rsp+50h] [rbp-B8h]
  HANDLE v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *String2; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  __int64 *v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h]
  __int128 v35; // [rsp+A8h] [rbp-60h]
  int v36; // [rsp+B8h] [rbp-50h]
  HANDLE v37; // [rsp+C0h] [rbp-48h]
  __int64 *v38; // [rsp+C8h] [rbp-40h]
  int v39; // [rsp+D0h] [rbp-38h]
  __int128 v40; // [rsp+D8h] [rbp-30h]
  char v41; // [rsp+E8h] [rbp-20h] BYREF

  Heap = 0LL;
  v21 = 0;
  v26 = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v28, v1, v2);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  v5 = v28;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(&v22, v28, v4);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  String2 = (wchar_t *)&v41;
  LODWORD(v29) = 11272192;
  if ( !RtlLCIDToCultureName(v22, (__int64)&v29) || !v5 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_52;
  }
  LODWORD(v24) = 0;
  v25 = 0LL;
  v6 = 0x7FFFLL;
  v7 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  if ( !v6 )
  {
    SystemDefaultUILanguage = -1073741811;
    goto LABEL_52;
  }
  v25 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  v26 = 0LL;
  v31 = 48;
  LOWORD(v24) = 2 * (0x7FFF - v6);
  v32 = 0LL;
  WORD1(v24) = v24 + 2;
  v34 = 64;
  v33 = &v24;
  v35 = 0LL;
  SystemDefaultUILanguage = NtOpenKey();
  if ( SystemDefaultUILanguage >= 0 )
  {
    Handle = 0LL;
    v8 = 0;
    LODWORD(v9) = 0;
    v10 = 0LL;
    v11 = 0;
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
            if ( v10 )
            {
              while ( (_DWORD)v9 )
              {
                v9 = (unsigned int)(v9 - 1);
                v19 = (HANDLE)v10[v9];
                Handle = v19;
                if ( v19 )
                {
                  if ( SystemDefaultUILanguage >= 0 )
                  {
                    v21 = 1;
                    NtDeleteKey();
                    v19 = Handle;
                  }
                  NtClose(v19);
                }
              }
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
            }
            if ( SystemDefaultUILanguage >= 0 && v21 )
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
            if ( v26 )
              NtClose(v26);
            if ( Heap )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
            return (unsigned int)SystemDefaultUILanguage;
          }
          v12 = *(unsigned int *)(Heap + 12);
          ++v8;
          if ( v12 + 24 <= 0x200 )
          {
            *(_WORD *)(Heap + 2 * (v12 >> 1) + 16) = 0;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v28, (const WCHAR *)(Heap + 16), 0, &v27) < 0 )
            {
              if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                break;
            }
          }
        }
        LODWORD(v24) = 0;
        v25 = 0LL;
        if ( Heap != -16LL )
          break;
LABEL_24:
        v37 = v26;
        Handle = 0LL;
        v38 = &v24;
        v36 = 48;
        v39 = 64;
        v40 = 0LL;
        if ( (int)NtOpenKey() >= 0 )
        {
          if ( v10 )
          {
            if ( (unsigned int)v9 >= v11 )
            {
              v16 = (_QWORD *)MuiRegAllocArray_0(v15, v11 + 10);
              v17 = v16;
              if ( !v16 )
              {
LABEL_32:
                SystemDefaultUILanguage = -1073741801;
                goto LABEL_33;
              }
              memmove(v16, v10, v11);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
              v11 += 10;
              v10 = v17;
            }
          }
          else
          {
            v11 = 10;
            v10 = (_QWORD *)MuiRegAllocArray_0(v15, 10LL);
            if ( !v10 )
              goto LABEL_32;
          }
          v18 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v10[v18] = Handle;
          Handle = 0LL;
        }
      }
      v13 = (_WORD *)(Heap + 16);
      v14 = 0x7FFFLL;
      do
      {
        if ( !*v13 )
          break;
        ++v13;
        --v14;
      }
      while ( v14 );
      if ( v14 )
      {
        v25 = (const WCHAR *)(Heap + 16);
        LOWORD(v24) = 2 * (0x7FFF - v14);
        WORD1(v24) = v24 + 2;
        goto LABEL_24;
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
