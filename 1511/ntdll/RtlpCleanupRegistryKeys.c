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
  wchar_t *Heap; // r14
  __int64 v1; // rdx
  __int64 v2; // r8
  int SystemDefaultUILanguage; // ebx
  PLCID v4; // rdi
  __int64 v5; // rcx
  const WCHAR *v6; // rax
  ULONG v7; // r12d
  __int64 v8; // rdi
  _QWORD *v9; // rsi
  unsigned int v10; // r13d
  unsigned __int64 v11; // rcx
  _WORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  HANDLE v18; // rcx
  LANGID DefaultUILanguageId[4]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  PLCID Lcid; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING String; // [rsp+70h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES v30; // [rsp+B8h] [rbp-50h] BYREF
  char v31; // [rsp+E8h] [rbp-20h] BYREF

  Heap = 0LL;
  LOBYTE(DefaultUILanguageId[0]) = 0;
  KeyHandle = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Lcid, v1, v2);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  v4 = Lcid;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId[2], Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  String.Buffer = (unsigned __int16 *)&v31;
  *(_DWORD *)&String.Length = 11272192;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId[2], &String) || !v4 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_52;
  }
  LODWORD(v22) = 0;
  v23 = 0LL;
  v5 = 0x7FFFLL;
  v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  if ( !v5 )
  {
    SystemDefaultUILanguage = -1073741811;
    goto LABEL_52;
  }
  v23 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  LOWORD(v22) = 2 * (0x7FFF - v5);
  ObjectAttributes.RootDirectory = 0LL;
  WORD1(v22) = v22 + 2;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SystemDefaultUILanguage = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( SystemDefaultUILanguage >= 0 )
  {
    Handle = 0LL;
    v7 = 0;
    LODWORD(v8) = 0;
    v9 = 0LL;
    v10 = 0;
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
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
          SystemDefaultUILanguage = NtEnumerateKey(KeyHandle, v7, KeyBasicInformation, Heap, 0x200u, &ResultLength);
          if ( SystemDefaultUILanguage < 0 )
          {
LABEL_33:
            if ( Handle )
              NtClose(Handle);
            if ( SystemDefaultUILanguage == -2147483622 )
              SystemDefaultUILanguage = 0;
            if ( v9 )
            {
              while ( (_DWORD)v8 )
              {
                v8 = (unsigned int)(v8 - 1);
                v18 = (HANDLE)v9[v8];
                Handle = v18;
                if ( v18 )
                {
                  if ( SystemDefaultUILanguage >= 0 )
                  {
                    LOBYTE(DefaultUILanguageId[0]) = 1;
                    NtDeleteKey(v18);
                    v18 = Handle;
                  }
                  NtClose(v18);
                }
              }
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
            }
            if ( SystemDefaultUILanguage >= 0 && LOBYTE(DefaultUILanguageId[0]) )
            {
              ZwGetMUIRegistryInfo(2u, 0LL, 0LL);
              RtlCleanUpTEBLangLists();
              RtlpInitMuiCriticalSection();
              RtlEnterCriticalSection(&RegistryInfoCritSect);
              SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo((__int64)g_RegInfo, 0xFFFu);
              if ( SystemDefaultUILanguage >= 0 )
              {
                if ( g_RegInfo )
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                g_RegInfo = 0LL;
              }
              RtlLeaveCriticalSection(&RegistryInfoCritSect);
            }
LABEL_52:
            if ( KeyHandle )
              NtClose(KeyHandle);
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
            return (unsigned int)SystemDefaultUILanguage;
          }
          v11 = *((unsigned int *)Heap + 3);
          ++v7;
          if ( v11 + 24 <= 0x200 )
          {
            Heap[(v11 >> 1) + 8] = 0;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)Lcid, Heap + 8, 0, &v25) < 0 )
            {
              if ( wcsicmp(Heap + 8, String.Buffer) )
                break;
            }
          }
        }
        LODWORD(v22) = 0;
        v23 = 0LL;
        if ( Heap != (wchar_t *)-16LL )
          break;
LABEL_24:
        v30.RootDirectory = KeyHandle;
        Handle = 0LL;
        v30.ObjectName = (PUNICODE_STRING)&v22;
        v30.Length = 48;
        v30.Attributes = 64;
        *(_OWORD *)&v30.SecurityDescriptor = 0LL;
        if ( NtOpenKey(&Handle, 0xF003Fu, &v30) >= 0 )
        {
          if ( v9 )
          {
            if ( (unsigned int)v8 >= v10 )
            {
              v15 = (_QWORD *)MuiRegAllocArray_0(v14, v10 + 10);
              v16 = v15;
              if ( !v15 )
              {
LABEL_32:
                SystemDefaultUILanguage = -1073741801;
                goto LABEL_33;
              }
              memmove(v15, v9, v10);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
              v10 += 10;
              v9 = v16;
            }
          }
          else
          {
            v10 = 10;
            v9 = (_QWORD *)MuiRegAllocArray_0(v14, 10LL);
            if ( !v9 )
              goto LABEL_32;
          }
          v17 = (unsigned int)v8;
          LODWORD(v8) = v8 + 1;
          v9[v17] = Handle;
          Handle = 0LL;
        }
      }
      v12 = Heap + 8;
      v13 = 0x7FFFLL;
      do
      {
        if ( !*v12 )
          break;
        ++v12;
        --v13;
      }
      while ( v13 );
      if ( v13 )
      {
        v23 = Heap + 8;
        LOWORD(v22) = 2 * (0x7FFF - v13);
        WORD1(v22) = v22 + 2;
        goto LABEL_24;
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
