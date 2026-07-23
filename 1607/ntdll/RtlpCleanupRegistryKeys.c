/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800E6690
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x180013B84 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003F6B0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x1800448A0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlCleanUpTEBLangLists @ 0x1800705B0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180070EA0 (RtlpMuiRegFreeRegistryInfo.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A6A60 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x1800A7D10 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A8150 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1800A82F0 (NtIsUILanguageComitted.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800E8C3C (_MuiRegAllocArray_0.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  wchar_t *Heap; // r14
  int SystemDefaultUILanguage; // ebx
  PLCID v2; // rdi
  __int64 v3; // rcx
  const WCHAR *v4; // rax
  ULONG v5; // r12d
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
  LANGID DefaultUILanguageId[4]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v21; // [rsp+50h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  PLCID Lcid; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING String; // [rsp+70h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES v28; // [rsp+B8h] [rbp-50h] BYREF
  char v29; // [rsp+E8h] [rbp-20h] BYREF

  Heap = 0LL;
  LOBYTE(DefaultUILanguageId[0]) = 0;
  KeyHandle = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  v2 = Lcid;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId[2], Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  String.Buffer = (wchar_t *)&v29;
  *(_DWORD *)&String.Length = 11272192;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId[2], &String) || !v2 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_52;
  }
  LODWORD(v20) = 0;
  v21 = 0LL;
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
  v21 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  LOWORD(v20) = 2 * (0x7FFF - v3);
  ObjectAttributes.RootDirectory = 0LL;
  WORD1(v20) = v20 + 2;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SystemDefaultUILanguage = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( SystemDefaultUILanguage >= 0 )
  {
    Handle = 0LL;
    v5 = 0;
    LODWORD(v6) = 0;
    v7 = 0LL;
    v8 = 0;
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
          SystemDefaultUILanguage = NtEnumerateKey(KeyHandle, v5, KeyBasicInformation, Heap, 0x200u, &ResultLength);
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
                    LOBYTE(DefaultUILanguageId[0]) = 1;
                    NtDeleteKey(v16);
                    v16 = Handle;
                  }
                  NtClose(v16);
                }
              }
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
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
          v9 = *((unsigned int *)Heap + 3);
          ++v5;
          if ( v9 + 24 <= 0x200 )
          {
            Heap[(v9 >> 1) + 8] = 0;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)Lcid, Heap + 8, 0, &v23) < 0 )
            {
              if ( wcsicmp(Heap + 8, String.Buffer) )
                break;
            }
          }
        }
        LODWORD(v20) = 0;
        v21 = 0LL;
        if ( Heap != (wchar_t *)-16LL )
          break;
LABEL_24:
        v28.RootDirectory = KeyHandle;
        Handle = 0LL;
        v28.ObjectName = (PUNICODE_STRING)&v20;
        v28.Length = 48;
        v28.Attributes = 64;
        *(_OWORD *)&v28.SecurityDescriptor = 0LL;
        if ( NtOpenKey(&Handle, 0xF003Fu, &v28) >= 0 )
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
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
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
      v10 = Heap + 8;
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
        v21 = Heap + 8;
        LOWORD(v20) = 2 * (0x7FFF - v11);
        WORD1(v20) = v20 + 2;
        goto LABEL_24;
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
