/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180012AA0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010818 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModule @ 0x1800857A0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpMapResourceFile @ 0x18000E960 (LdrpMapResourceFile.c)
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016360 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     LdrpGetDataModulePath @ 0x18002C930 (LdrpGetDataModulePath.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18003BA84 (LdrpVerifyAlternateResourceModule.c)
 *     LdrpGetFromMUIMemCache @ 0x180040A30 (LdrpGetFromMUIMemCache.c)
 *     RtlLcidToLocaleName @ 0x180042E70 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726B0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpQuerySxSMUIFile @ 0x18007C1EC (LdrpQuerySxSMUIFile.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800896A8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     ResCIncrementCMFMissCount @ 0x18008A3E4 (ResCIncrementCMFMissCount.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180096DD0 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x18009C7C0 (wcsrchr.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC0DC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  const wchar_t *v8; // rdi
  wchar_t *v9; // r15
  __int64 v10; // r14
  void *v11; // rax
  ULONG v13; // eax
  unsigned __int64 v14; // rsi
  int DataModulePath; // eax
  unsigned __int64 v16; // rax
  NTSTATUS ModuleInfoFromVirtualMemory; // edi
  int v18; // edi
  char v19; // di
  LANGID v20; // r14
  wchar_t *Buffer; // r14
  PVOID v22; // r13
  char v23; // al
  bool v24; // cf
  __int64 MUIFromCMFSegment; // rax
  wchar_t *Heap; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  char v31; // [rsp+52h] [rbp-7E6h]
  NTSTATUS v32; // [rsp+54h] [rbp-7E4h]
  __int16 v33; // [rsp+58h] [rbp-7E0h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-7DCh] BYREF
  ULONG v35; // [rsp+60h] [rbp-7D8h]
  unsigned int v36; // [rsp+64h] [rbp-7D4h]
  __int64 v37; // [rsp+68h] [rbp-7D0h] BYREF
  ULONG_PTR v38; // [rsp+70h] [rbp-7C8h] BYREF
  _UNICODE_STRING v39; // [rsp+78h] [rbp-7C0h] BYREF
  int v40; // [rsp+88h] [rbp-7B0h]
  wchar_t *Str; // [rsp+90h] [rbp-7A8h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-7A0h] BYREF
  PVOID v43; // [rsp+A0h] [rbp-798h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-790h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-788h] BYREF
  PVOID BaseOfImage; // [rsp+B8h] [rbp-780h]
  PVOID BaseAddress; // [rsp+C0h] [rbp-778h] BYREF
  PVOID v48; // [rsp+C8h] [rbp-770h]
  _UNICODE_STRING Destination; // [rsp+D0h] [rbp-768h] BYREF
  PUNICODE_STRING v50; // [rsp+E0h] [rbp-758h] BYREF
  wchar_t *v51; // [rsp+E8h] [rbp-750h]
  _UNICODE_STRING LocaleName; // [rsp+F0h] [rbp-748h] BYREF
  ULONG_PTR *v53; // [rsp+100h] [rbp-738h]
  int v54; // [rsp+108h] [rbp-730h]
  __int64 v55; // [rsp+110h] [rbp-728h]
  int v56; // [rsp+118h] [rbp-720h]
  _BYTE *v57; // [rsp+120h] [rbp-718h]
  __int64 v58; // [rsp+130h] [rbp-708h] BYREF
  int v59; // [rsp+138h] [rbp-700h]
  _BYTE v60[56]; // [rsp+140h] [rbp-6F8h] BYREF
  char v61; // [rsp+180h] [rbp-6B8h] BYREF
  WCHAR Source[352]; // [rsp+1C0h] [rbp-678h] BYREF
  char v63; // [rsp+480h] [rbp-3B8h] BYREF
  _BYTE v64[704]; // [rsp+530h] [rbp-308h] BYREF

  v53 = ResourceOffset;
  BaseOfImage = DllHandle;
  v35 = Flags;
  v43 = 0LL;
  Handle = 0LL;
  v36 = 0;
  v8 = 0LL;
  Str = 0LL;
  v34 = 0;
  v9 = 0LL;
  v51 = 0LL;
  v38 = 0LL;
  v50 = 0LL;
  v31 = 0;
  v58 = 72LL;
  v59 = 1;
  memset(v60, 0, sizeof(v60));
  v33 = 256;
  LODWORD(v37) = -1;
  v48 = 0LL;
  BaseAddress = 0LL;
  v10 = 0LL;
  v44 = 0LL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v11 = (void *)LdrpGetFromMUIMemCache(DllHandle);
  if ( v11 == (void *)-1LL )
  {
    v13 = v35;
    if ( (v35 & 0x400000) == 0 )
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
        *ResourceOffset = v38;
      return 0;
    }
    v13 = v35;
  }
  v14 = 0LL;
  v42 = 0LL;
  v40 = v13 & 0x400000;
  if ( (v13 & 0x400000) != 0 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(DllHandle, Source, (__int64)&Str, (__int64)&v34, (__int64)&v44);
    v8 = Str;
    v10 = v44;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(
                                    BaseOfImage,
                                    Source,
                                    (__int64)&BaseAddress,
                                    (__int64)&v34,
                                    (__int64)&v33);
    v32 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_36;
    v8 = (const wchar_t *)BaseAddress;
    Str = (wchar_t *)BaseAddress;
  }
  v16 = (unsigned __int64)v36 >> 1;
  if ( v16 >= 351 )
    _report_rangecheckfailure();
  Source[v16] = 0;
  if ( wcsrchr(v8, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Source, v8) >= 0 )
  {
    v8 = (const wchar_t *)v48;
    Str = (wchar_t *)v48;
    v27 = -1LL;
    do
      ++v27;
    while ( *((_WORD *)v48 + v27) );
    v34 = 2 * v27;
  }
  v57 = v64;
  v56 = 46006272;
  v55 = 0LL;
  v54 = 0;
  if ( (unsigned __int64)v34 + 12 > 0x3C )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v34 + 10);
    v9 = Heap;
    v51 = Heap;
    v14 = v42;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_81:
      v32 = ModuleInfoFromVirtualMemory;
      goto LABEL_36;
    }
    Destination.Buffer = Heap;
    Destination.MaximumLength = 2 * (v34 + 5);
    v8 = Str;
    v10 = v44;
  }
  else
  {
    Destination.Buffer = (wchar_t *)&v61;
    Destination.MaximumLength = 60;
  }
  Destination.Length = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v8);
  v32 = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory >= 0 )
  {
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, L".mui");
    v32 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      if ( v10 )
        RtlActivateActivationContextUnsafeFast(&v58, v10);
      v18 = LdrpQuerySxSMUIFile(&Destination, &v50);
      if ( v10 )
        RtlDeactivateActivationContextUnsafeFast(&v58);
      if ( v18 >= 0 )
      {
        v19 = 1;
        v31 = 1;
        v39.Buffer = v50->Buffer;
        v39.Length = v50->Length;
        v39.MaximumLength = v50->MaximumLength;
      }
      else
      {
        v19 = 0;
      }
      if ( v19
        || ResRuntimeView == (PVOID)-1LL
        || ResRuntimeView
        && ((v28 = *((_QWORD *)ResRuntimeView + 2)) == 0
         || (v29 = *(_QWORD *)(v28 + 24)) == 0
         || (*(_DWORD *)(v29 + 48) & 0x100000) != 0) )
      {
        v20 = LanguageId;
      }
      else
      {
        v20 = LanguageId;
        MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(BaseOfImage, (__int64)&v37, 0LL);
        v43 = (PVOID)MUIFromCMFSegment;
        if ( MUIFromCMFSegment )
        {
          v14 = MUIFromCMFSegment | 1;
          ModuleInfoFromVirtualMemory = 0;
          v32 = 0;
          goto LABEL_37;
        }
      }
      if ( v19 )
      {
        Buffer = 0LL;
      }
      else
      {
        v39.Buffer = (wchar_t *)v64;
        *(_DWORD *)&v39.Length = 46006272;
        RtlAppendUnicodeToString(&v39, Source);
        LocaleName.Buffer = (wchar_t *)&v63;
        LocaleName.MaximumLength = 170;
        if ( RtlLcidToLocaleName(v20, &LocaleName, 2u, 0) < 0 )
        {
          ModuleInfoFromVirtualMemory = -1073741811;
          v32 = -1073741811;
          goto LABEL_37;
        }
        RtlAppendUnicodeStringToString(&v39, &LocaleName);
        RtlAppendUnicodeToString(&v39, L"\\");
        RtlAppendUnicodeToString(&v39, Destination.Buffer);
        Buffer = LocaleName.Buffer;
      }
      if ( (MEMORY[0x7FFE0385] & 1) != 0 )
        LdrpTraceLoadMUIDll(&v39, MEMORY[0x7FFE0384]);
      v22 = BaseOfImage;
      ModuleInfoFromVirtualMemory = LdrpMapResourceFile((__int64)BaseOfImage, &v39, v33, &Handle, &v43, &v38);
      v32 = ModuleInfoFromVirtualMemory;
      if ( ModuleInfoFromVirtualMemory >= 0 )
      {
        v14 = (unsigned __int64)v43 | 1;
        if ( !v31 && !(unsigned __int8)LdrpVerifyAlternateResourceModule(v22, (unsigned __int64)v43 | 1, Buffer, v35) )
        {
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v43);
          NtClose(Handle);
          Handle = 0LL;
          v38 = 0LL;
          v14 = 0LL;
          ModuleInfoFromVirtualMemory = -1073020926;
          goto LABEL_81;
        }
      }
    }
  }
LABEL_36:
  v20 = LanguageId;
LABEL_37:
  if ( !v14 )
    v14 = -1LL;
  v42 = v14;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v23 = 0;
  }
  else
  {
    v23 = HIBYTE(v33);
  }
  if ( v23 )
  {
    v24 = v40 != 0;
    v40 = -v40;
    LdrpSetAlternateResourceModuleHandle(
      (_DWORD)BaseOfImage,
      (unsigned int)&v42,
      (unsigned int)&Handle,
      0,
      v37,
      v20,
      (v24 ? 0x20 : 0) | 1,
      ModuleInfoFromVirtualMemory,
      v38);
    v14 = v42;
  }
  if ( v14 == -1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    if ( (_DWORD)v37 == -1 )
    {
      if ( (MEMORY[0x7FFE0385] & 1) != 0 )
        LdrpTraceLoadMUIDll(&v39, MEMORY[0x7FFE0384]);
      if ( ResRuntimeView != (PVOID)-1LL )
        ResCIncrementCMFMissCount();
    }
    *ResourceDllBase = (PVOID)v14;
    if ( v53 )
      *v53 = v38;
    ModuleInfoFromVirtualMemory = 0;
    v32 = 0;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    ModuleInfoFromVirtualMemory = v32;
  }
  if ( v48 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v48);
    ModuleInfoFromVirtualMemory = v32;
  }
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return v32;
  }
  return ModuleInfoFromVirtualMemory;
}
