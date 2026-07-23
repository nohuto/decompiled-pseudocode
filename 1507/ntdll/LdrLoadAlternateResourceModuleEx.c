/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x18001C5F0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B314 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x180066760 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpGetMUIFromCMFSegment @ 0x18000EF20 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpGetFromMUIMemCache @ 0x180017204 (LdrpGetFromMUIMemCache.c)
 *     RtlLcidToLocaleName @ 0x18001F420 (RtlLcidToLocaleName.c)
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     LdrpMapResourceFile @ 0x180054440 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModule @ 0x180056D78 (LdrpVerifyAlternateResourceModule.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180057378 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetDataModulePath @ 0x180069C68 (LdrpGetDataModulePath.c)
 *     LdrpQuerySxSMUIFile @ 0x18006E354 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180080CB0 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180084230 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180089C80 (wcsrchr.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     memset @ 0x180098540 (memset.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800CB40C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 *     ResCIncrementCMFMissCount @ 0x1800F70EC (ResCIncrementCMFMissCount.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  const wchar_t *v8; // rdi
  unsigned __int16 *v9; // r15
  __int64 v10; // r14
  _DWORD *v11; // rax
  ULONG v13; // eax
  unsigned __int64 v14; // rsi
  int DataModulePath; // eax
  unsigned __int64 v16; // rax
  int ModuleInfoFromVirtualMemory; // edi
  int v18; // edi
  int v19; // r8d
  char v20; // di
  LANGID v21; // r14
  unsigned __int16 *Buffer; // r14
  PVOID v23; // r13
  char v24; // al
  bool v25; // cf
  __int64 MUIFromCMFSegment; // rax
  unsigned __int16 *Heap; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  char v32; // [rsp+52h] [rbp-7E6h]
  NTSTATUS v33; // [rsp+54h] [rbp-7E4h]
  __int16 v34; // [rsp+58h] [rbp-7E0h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-7DCh] BYREF
  ULONG v36; // [rsp+60h] [rbp-7D8h]
  unsigned int v37; // [rsp+64h] [rbp-7D4h]
  int v38; // [rsp+68h] [rbp-7D0h] BYREF
  ULONG_PTR v39; // [rsp+70h] [rbp-7C8h] BYREF
  _UNICODE_STRING v40; // [rsp+78h] [rbp-7C0h] BYREF
  wchar_t *Str; // [rsp+88h] [rbp-7B0h] BYREF
  unsigned __int64 v42; // [rsp+90h] [rbp-7A8h] BYREF
  int v43; // [rsp+98h] [rbp-7A0h]
  HANDLE Handle; // [rsp+A0h] [rbp-798h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp-790h] BYREF
  PVOID v46; // [rsp+B0h] [rbp-788h] BYREF
  PVOID v47; // [rsp+B8h] [rbp-780h]
  PVOID v48; // [rsp+C0h] [rbp-778h]
  __int64 v49; // [rsp+C8h] [rbp-770h] BYREF
  _UNICODE_STRING Destination; // [rsp+D0h] [rbp-768h] BYREF
  PUNICODE_STRING v51; // [rsp+E0h] [rbp-758h] BYREF
  unsigned __int16 *v52; // [rsp+E8h] [rbp-750h]
  _UNICODE_STRING LocaleName; // [rsp+F0h] [rbp-748h] BYREF
  int v54; // [rsp+100h] [rbp-738h]
  _BYTE *v55; // [rsp+108h] [rbp-730h]
  int v56; // [rsp+110h] [rbp-728h]
  __int64 v57; // [rsp+118h] [rbp-720h]
  ULONG_PTR *v58; // [rsp+120h] [rbp-718h]
  __int64 v59; // [rsp+130h] [rbp-708h] BYREF
  int v60; // [rsp+138h] [rbp-700h]
  _BYTE v61[56]; // [rsp+140h] [rbp-6F8h] BYREF
  char v62; // [rsp+180h] [rbp-6B8h] BYREF
  WCHAR Source[352]; // [rsp+1C0h] [rbp-678h] BYREF
  char v64; // [rsp+480h] [rbp-3B8h] BYREF
  _BYTE v65[704]; // [rsp+530h] [rbp-308h] BYREF

  v58 = ResourceOffset;
  v48 = DllHandle;
  v36 = Flags;
  v46 = 0LL;
  Handle = 0LL;
  v37 = 0;
  v8 = 0LL;
  Str = 0LL;
  v35 = 0;
  v9 = 0LL;
  v52 = 0LL;
  v39 = 0LL;
  v51 = 0LL;
  v32 = 0;
  v59 = 72LL;
  v60 = 1;
  memset(v61, 0, sizeof(v61));
  v34 = 256;
  v38 = -1;
  v47 = 0LL;
  BaseAddress = 0LL;
  v10 = 0LL;
  v49 = 0LL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v11 = LdrpGetFromMUIMemCache((unsigned __int64)DllHandle, LanguageId, &v39, 4);
  if ( v11 == (_DWORD *)-1LL )
  {
    v13 = v36;
    if ( (v36 & 0x400000) == 0 )
    {
      *ResourceDllBase = 0LL;
      return -1073020922;
    }
  }
  else
  {
    if ( v11 )
    {
      *ResourceDllBase = v11;
      if ( ResourceOffset )
        *ResourceOffset = v39;
      return 0;
    }
    v13 = v36;
  }
  v14 = 0LL;
  v42 = 0LL;
  v43 = v13 & 0x400000;
  if ( (v13 & 0x400000) != 0 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(DllHandle, Source, (__int64)&Str, (__int64)&v35, (__int64)&v49);
    v8 = Str;
    v10 = v49;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(
                                    v48,
                                    Source,
                                    (__int64)&BaseAddress,
                                    (__int64)&v35,
                                    (__int64)&v34);
    v33 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_36;
    v8 = (const wchar_t *)BaseAddress;
    Str = (wchar_t *)BaseAddress;
  }
  v16 = (unsigned __int64)v37 >> 1;
  if ( v16 >= 351 )
    _report_rangecheckfailure();
  Source[v16] = 0;
  if ( wcsrchr(v8, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Source, v8) >= 0 )
  {
    v8 = (const wchar_t *)v47;
    Str = (wchar_t *)v47;
    v28 = -1LL;
    do
      ++v28;
    while ( *((_WORD *)v47 + v28) );
    v35 = 2 * v28;
  }
  v55 = v65;
  v54 = 46006272;
  v57 = 0LL;
  v56 = 0;
  if ( (unsigned __int64)v35 + 12 > 0x3C )
  {
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v35 + 10);
    v9 = Heap;
    v52 = Heap;
    v14 = v42;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_81:
      v33 = ModuleInfoFromVirtualMemory;
      goto LABEL_36;
    }
    Destination.Buffer = Heap;
    Destination.MaximumLength = 2 * (v35 + 5);
    v8 = Str;
    v10 = v49;
  }
  else
  {
    Destination.Buffer = (unsigned __int16 *)&v62;
    Destination.MaximumLength = 60;
  }
  Destination.Length = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v8);
  v33 = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory >= 0 )
  {
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, L".mui");
    v33 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      if ( v10 )
        RtlActivateActivationContextUnsafeFast(&v59, v10);
      v18 = LdrpQuerySxSMUIFile(&Destination, &v51);
      if ( v10 )
        RtlDeactivateActivationContextUnsafeFast(&v59);
      if ( v18 >= 0 )
      {
        v20 = 1;
        v32 = 1;
        v40.Buffer = v51->Buffer;
        v40.Length = v51->Length;
        v40.MaximumLength = v51->MaximumLength;
      }
      else
      {
        v20 = 0;
      }
      if ( v20
        || ResRuntimeView == (PVOID)-1LL
        || ResRuntimeView
        && ((v29 = *((_QWORD *)ResRuntimeView + 2)) == 0
         || (v30 = *(_QWORD *)(v29 + 24)) == 0
         || (*(_DWORD *)(v30 + 48) & 0x100000) != 0) )
      {
        v21 = LanguageId;
      }
      else
      {
        v21 = LanguageId;
        MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v48, LanguageId, 0, v36, &v38, 0LL);
        v46 = (PVOID)MUIFromCMFSegment;
        if ( MUIFromCMFSegment )
        {
          v14 = MUIFromCMFSegment | 1;
          ModuleInfoFromVirtualMemory = 0;
          v33 = 0;
          goto LABEL_37;
        }
      }
      if ( v20 )
      {
        Buffer = 0LL;
      }
      else
      {
        v40.Buffer = (unsigned __int16 *)v65;
        *(_DWORD *)&v40.Length = 46006272;
        RtlAppendUnicodeToString(&v40, Source);
        LocaleName.Buffer = (unsigned __int16 *)&v64;
        LocaleName.MaximumLength = 170;
        if ( RtlLcidToLocaleName(v21, &LocaleName, 2u, 0) < 0 )
        {
          ModuleInfoFromVirtualMemory = -1073741811;
          v33 = -1073741811;
          goto LABEL_37;
        }
        RtlAppendUnicodeStringToString(&v40, &LocaleName);
        RtlAppendUnicodeToString(&v40, L"\\");
        RtlAppendUnicodeToString(&v40, Destination.Buffer);
        Buffer = LocaleName.Buffer;
      }
      if ( (MEMORY[0x7FFE0385] & 1) != 0 )
        LdrpTraceLoadMUIDll(&v40, MEMORY[0x7FFE0384]);
      LOBYTE(v19) = v34;
      v23 = v48;
      ModuleInfoFromVirtualMemory = LdrpMapResourceFile(
                                      (_DWORD)v48,
                                      (unsigned int)&v40,
                                      v19,
                                      (unsigned int)&Handle,
                                      (__int64)&v46,
                                      (__int64)&v39);
      v33 = ModuleInfoFromVirtualMemory;
      if ( ModuleInfoFromVirtualMemory >= 0 )
      {
        v14 = (unsigned __int64)v46 | 1;
        if ( !v32 && !(unsigned __int8)LdrpVerifyAlternateResourceModule(v23, (unsigned __int64)v46 | 1, Buffer, v36) )
        {
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v46);
          NtClose(Handle);
          Handle = 0LL;
          v39 = 0LL;
          v14 = 0LL;
          ModuleInfoFromVirtualMemory = -1073020926;
          goto LABEL_81;
        }
      }
    }
  }
LABEL_36:
  v21 = LanguageId;
LABEL_37:
  if ( !v14 )
    v14 = -1LL;
  v42 = v14;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v24 = 0;
  }
  else
  {
    v24 = HIBYTE(v34);
  }
  if ( v24 )
  {
    v25 = v43 != 0;
    v43 = -v43;
    LdrpSetAlternateResourceModuleHandle(
      (_DWORD)v48,
      (unsigned int)&v42,
      (unsigned int)&Handle,
      0,
      v38,
      v21,
      (v25 ? 0x20 : 0) | 1,
      ModuleInfoFromVirtualMemory,
      v39);
    v14 = v42;
  }
  if ( v14 == -1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    if ( v38 == -1 )
    {
      if ( (MEMORY[0x7FFE0385] & 1) != 0 )
        LdrpTraceLoadMUIDll(&v40, MEMORY[0x7FFE0384]);
      if ( ResRuntimeView != (PVOID)-1LL )
        ResCIncrementCMFMissCount();
    }
    *ResourceDllBase = (PVOID)v14;
    if ( v58 )
      *v58 = v39;
    ModuleInfoFromVirtualMemory = 0;
    v33 = 0;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    ModuleInfoFromVirtualMemory = v33;
  }
  if ( v47 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v47);
    ModuleInfoFromVirtualMemory = v33;
  }
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return v33;
  }
  return ModuleInfoFromVirtualMemory;
}
