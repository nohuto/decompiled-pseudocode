/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x18003AB60
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x180082AD0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     LdrpGetFromMUIMemCache @ 0x18003195C (LdrpGetFromMUIMemCache.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18003C2DC (LdrpVerifyAlternateResourceModule.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18003C78C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x18003CD20 (LdrpMapResourceFile.c)
 *     LdrpQuerySxSMUIFile @ 0x18003CFD0 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetDataModulePath @ 0x18003D1CC (LdrpGetDataModulePath.c)
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084CF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     ResCIncrementCMFMissCount @ 0x18008670C (ResCIncrementCMFMissCount.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800959E0 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x18009B430 (wcsrchr.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800D3D74 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
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
  void *v11; // rax
  ULONG v12; // eax
  unsigned __int64 v14; // rsi
  int DataModulePath; // eax
  int ModuleInfoFromVirtualMemory; // edi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 *Heap; // rax
  int v20; // edi
  int v21; // r8d
  char v22; // di
  __int64 v23; // rcx
  __int64 v24; // rax
  LANGID v25; // r14
  __int64 MUIFromCMFSegment; // rax
  unsigned __int16 *Buffer; // r14
  PVOID v28; // r13
  char v29; // al
  bool v30; // cf
  char v32; // [rsp+52h] [rbp-7E6h]
  NTSTATUS v33; // [rsp+54h] [rbp-7E4h]
  __int16 v34; // [rsp+58h] [rbp-7E0h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-7DCh] BYREF
  ULONG v36; // [rsp+60h] [rbp-7D8h]
  unsigned int v37; // [rsp+64h] [rbp-7D4h]
  __int64 v38; // [rsp+68h] [rbp-7D0h] BYREF
  ULONG_PTR v39; // [rsp+70h] [rbp-7C8h] BYREF
  _UNICODE_STRING v40; // [rsp+78h] [rbp-7C0h] BYREF
  wchar_t *Str; // [rsp+88h] [rbp-7B0h] BYREF
  unsigned __int64 v42; // [rsp+90h] [rbp-7A8h] BYREF
  int v43; // [rsp+98h] [rbp-7A0h]
  HANDLE Handle; // [rsp+A0h] [rbp-798h] BYREF
  PVOID v45; // [rsp+A8h] [rbp-790h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp-788h] BYREF
  PVOID v47; // [rsp+B8h] [rbp-780h]
  PVOID BaseOfImage; // [rsp+C0h] [rbp-778h]
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
  BaseOfImage = DllHandle;
  v36 = Flags;
  BaseAddress = 0LL;
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
  LODWORD(v38) = -1;
  v47 = 0LL;
  v45 = 0LL;
  v10 = 0LL;
  v49 = 0LL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v11 = (void *)LdrpGetFromMUIMemCache((unsigned __int64)DllHandle, LanguageId, &v39, 4);
  if ( v11 == (void *)-1LL )
  {
    v12 = v36;
    if ( (v36 & 0x400000) == 0 )
    {
      *ResourceDllBase = 0LL;
      return -1073020922;
    }
LABEL_12:
    v14 = 0LL;
    v42 = 0LL;
    v43 = v12 & 0x400000;
    if ( (v12 & 0x400000) != 0 )
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
                                      BaseOfImage,
                                      Source,
                                      (__int64)&v45,
                                      (__int64)&v35,
                                      (__int64)&v34);
      v33 = ModuleInfoFromVirtualMemory;
      if ( ModuleInfoFromVirtualMemory < 0 )
      {
LABEL_59:
        v25 = LanguageId;
        goto LABEL_60;
      }
      v8 = (const wchar_t *)v45;
      Str = (wchar_t *)v45;
    }
    v17 = (unsigned __int64)v37 >> 1;
    if ( v17 >= 351 )
      _report_rangecheckfailure();
    Source[v17] = 0;
    if ( wcsrchr(v8, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Source, v8) >= 0 )
    {
      v8 = (const wchar_t *)v47;
      Str = (wchar_t *)v47;
      v18 = -1LL;
      do
        ++v18;
      while ( *((_WORD *)v47 + v18) );
      v35 = 2 * v18;
    }
    v55 = v65;
    v54 = 46006272;
    v57 = 0LL;
    v56 = 0;
    if ( (unsigned __int64)v35 + 12 <= 0x3C )
    {
      Destination.Buffer = (unsigned __int16 *)&v62;
      Destination.MaximumLength = 60;
    }
    else
    {
      Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v35 + 10);
      v9 = Heap;
      v52 = Heap;
      v14 = v42;
      if ( !Heap )
      {
        ModuleInfoFromVirtualMemory = -1073741801;
LABEL_27:
        v33 = ModuleInfoFromVirtualMemory;
        goto LABEL_59;
      }
      Destination.Buffer = Heap;
      Destination.MaximumLength = 2 * (v35 + 5);
      v8 = Str;
      v10 = v49;
    }
    Destination.Length = 0;
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v8);
    v33 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_59;
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, L".mui");
    v33 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_59;
    if ( v10 )
      RtlActivateActivationContextUnsafeFast((__int64)&v59, v10);
    v20 = LdrpQuerySxSMUIFile(&Destination, &v51);
    if ( v10 )
      RtlDeactivateActivationContextUnsafeFast((__int64)&v59);
    if ( v20 < 0 )
    {
      v22 = 0;
    }
    else
    {
      v22 = 1;
      v32 = 1;
      v40.Buffer = v51->Buffer;
      v40.Length = v51->Length;
      v40.MaximumLength = v51->MaximumLength;
    }
    if ( v22
      || ResRuntimeView == (PVOID)-1LL
      || ResRuntimeView
      && ((v23 = *((_QWORD *)ResRuntimeView + 2)) == 0
       || (v24 = *(_QWORD *)(v23 + 24)) == 0
       || (*(_DWORD *)(v24 + 48) & 0x100000) != 0) )
    {
      v25 = LanguageId;
    }
    else
    {
      v25 = LanguageId;
      MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(BaseOfImage, (__int64)&v38, 0LL);
      BaseAddress = (PVOID)MUIFromCMFSegment;
      if ( MUIFromCMFSegment )
      {
        v14 = MUIFromCMFSegment | 1;
        ModuleInfoFromVirtualMemory = 0;
        v33 = 0;
LABEL_60:
        if ( !v14 )
          v14 = -1LL;
        v42 = v14;
        if ( ModuleInfoFromVirtualMemory == -1073741523
          || ModuleInfoFromVirtualMemory == -1073741659
          || ModuleInfoFromVirtualMemory == -1073741801 )
        {
          v29 = 0;
        }
        else
        {
          v29 = HIBYTE(v34);
        }
        if ( v29 )
        {
          v30 = v43 != 0;
          v43 = -v43;
          LdrpSetAlternateResourceModuleHandle(
            (_DWORD)BaseOfImage,
            (unsigned int)&v42,
            (unsigned int)&Handle,
            0,
            v38,
            v25,
            (v30 ? 0x20 : 0) | 1,
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
          if ( (_DWORD)v38 == -1 )
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
        if ( v45 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v45);
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
    }
    if ( v22 )
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
      if ( RtlLcidToLocaleName(v25, &LocaleName, 2u, 0) < 0 )
      {
        ModuleInfoFromVirtualMemory = -1073741811;
        v33 = -1073741811;
        goto LABEL_60;
      }
      RtlAppendUnicodeStringToString(&v40, &LocaleName);
      RtlAppendUnicodeToString(&v40, L"\\");
      RtlAppendUnicodeToString(&v40, Destination.Buffer);
      Buffer = LocaleName.Buffer;
    }
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v40, MEMORY[0x7FFE0384]);
    LOBYTE(v21) = v34;
    v28 = BaseOfImage;
    ModuleInfoFromVirtualMemory = LdrpMapResourceFile(
                                    (_DWORD)BaseOfImage,
                                    (unsigned int)&v40,
                                    v21,
                                    (unsigned int)&Handle,
                                    (__int64)&BaseAddress,
                                    (__int64)&v39);
    v33 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_59;
    v14 = (unsigned __int64)BaseAddress | 1;
    if ( v32 || (unsigned __int8)LdrpVerifyAlternateResourceModule(v28, (unsigned __int64)BaseAddress | 1, Buffer, v36) )
      goto LABEL_59;
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    NtClose(Handle);
    Handle = 0LL;
    v39 = 0LL;
    v14 = 0LL;
    ModuleInfoFromVirtualMemory = -1073020926;
    goto LABEL_27;
  }
  if ( !v11 )
  {
    v12 = v36;
    goto LABEL_12;
  }
  *ResourceDllBase = v11;
  if ( ResourceOffset )
    *ResourceOffset = v39;
  return 0;
}
