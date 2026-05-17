/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180012AB0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010828 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A78 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModule @ 0x1800857B0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpMapResourceFile @ 0x18000E970 (LdrpMapResourceFile.c)
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180013C90 (RtlAppendUnicodeToString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016370 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018750 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     LdrpGetDataModulePath @ 0x18002C940 (LdrpGetDataModulePath.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18003BA94 (LdrpVerifyAlternateResourceModule.c)
 *     LdrpGetFromMUIMemCache @ 0x180040A40 (LdrpGetFromMUIMemCache.c)
 *     RtlLcidToLocaleName @ 0x180042E80 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1F8 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpQuerySxSMUIFile @ 0x18007C1FC (LdrpQuerySxSMUIFile.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800896B8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     ResCIncrementCMFMissCount @ 0x18008A3F4 (ResCIncrementCMFMissCount.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180096DE0 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x18009C7D0 (wcsrchr.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC01C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(
        __int64 a1,
        unsigned __int16 a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned int a5)
{
  wchar_t *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v14; // eax
  __int64 v15; // rsi
  int DataModulePath; // eax
  unsigned __int64 v17; // rax
  int ModuleInfoFromVirtualMemory; // edi
  int v19; // edi
  char v20; // di
  unsigned __int16 v21; // r14
  char *v22; // r14
  __int64 v23; // r13
  char v24; // al
  bool v25; // cf
  __int64 MUIFromCMFSegment; // rax
  __int64 Heap; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  char v32; // [rsp+52h] [rbp-7E6h]
  unsigned int v33; // [rsp+54h] [rbp-7E4h]
  char v34; // [rsp+58h] [rbp-7E0h] BYREF
  char v35; // [rsp+59h] [rbp-7DFh]
  unsigned int v36; // [rsp+5Ch] [rbp-7DCh] BYREF
  unsigned int v37; // [rsp+60h] [rbp-7D8h]
  unsigned int v38; // [rsp+64h] [rbp-7D4h] BYREF
  int v39; // [rsp+68h] [rbp-7D0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-7C8h] BYREF
  __int128 v41; // [rsp+78h] [rbp-7C0h] BYREF
  int v42; // [rsp+88h] [rbp-7B0h]
  wchar_t *Str; // [rsp+90h] [rbp-7A8h] BYREF
  __int64 v44; // [rsp+98h] [rbp-7A0h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-798h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-790h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-788h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-780h]
  wchar_t *v49; // [rsp+C0h] [rbp-778h] BYREF
  wchar_t *v50; // [rsp+C8h] [rbp-770h]
  __int16 v51; // [rsp+D0h] [rbp-768h] BYREF
  __int16 v52; // [rsp+D2h] [rbp-766h]
  char *v53; // [rsp+D8h] [rbp-760h]
  __int64 v54; // [rsp+E0h] [rbp-758h] BYREF
  __int64 v55; // [rsp+E8h] [rbp-750h]
  __int16 v56[4]; // [rsp+F0h] [rbp-748h] BYREF
  char *v57; // [rsp+F8h] [rbp-740h]
  _QWORD *v58; // [rsp+100h] [rbp-738h]
  int v59; // [rsp+108h] [rbp-730h] BYREF
  __int64 v60; // [rsp+110h] [rbp-728h]
  int v61; // [rsp+118h] [rbp-720h] BYREF
  _BYTE *v62; // [rsp+120h] [rbp-718h]
  __int64 v63; // [rsp+130h] [rbp-708h] BYREF
  int v64; // [rsp+138h] [rbp-700h]
  _BYTE v65[56]; // [rsp+140h] [rbp-6F8h] BYREF
  char v66; // [rsp+180h] [rbp-6B8h] BYREF
  WCHAR SourceString[352]; // [rsp+1C0h] [rbp-678h] BYREF
  char v68; // [rsp+480h] [rbp-3B8h] BYREF
  _BYTE v69[704]; // [rsp+530h] [rbp-308h] BYREF

  v58 = a4;
  v48 = a1;
  v37 = a5;
  v45 = 0LL;
  Handle = 0LL;
  v38 = 0;
  v8 = 0LL;
  Str = 0LL;
  v36 = 0;
  v9 = 0LL;
  v55 = 0LL;
  v40 = 0LL;
  v54 = 0LL;
  v32 = 0;
  v63 = 72LL;
  v64 = 1;
  memset(v65, 0, sizeof(v65));
  v34 = 0;
  v39 = -1;
  v50 = 0LL;
  v49 = 0LL;
  v35 = 1;
  v10 = 0LL;
  v46 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v11 = LdrpGetFromMUIMemCache(a1, a2, &v40, 4LL);
  if ( v11 == -1 )
  {
    v14 = v37;
    if ( (v37 & 0x400000) == 0 )
    {
      *a3 = 0LL;
      return 3221946374LL;
    }
  }
  else
  {
    if ( v11 )
    {
      *a3 = v11;
      if ( a4 )
        *a4 = v40;
      return 0LL;
    }
    v14 = v37;
  }
  v15 = 0LL;
  v44 = 0LL;
  v42 = v14 & 0x400000;
  if ( (v14 & 0x400000) != 0 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(a1, SourceString, v12, &v38, &Str, &v36, &v46);
    v8 = Str;
    v10 = v46;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v48, SourceString, 702LL, &v38, &v49, &v36, &v34);
    v33 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_36;
    v8 = v49;
    Str = v49;
  }
  v17 = (unsigned __int64)v38 >> 1;
  if ( v17 >= 351 )
    _report_rangecheckfailure();
  SourceString[v17] = 0;
  if ( wcsrchr(v8, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(SourceString, v8) >= 0 )
  {
    v8 = v50;
    Str = v50;
    v28 = -1LL;
    do
      ++v28;
    while ( v50[v28] );
    v36 = 2 * v28;
  }
  v62 = v69;
  v61 = 46006272;
  v60 = 0LL;
  v59 = 0;
  if ( (unsigned __int64)v36 + 12 > 0x3C )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 2LL * v36 + 10);
    v9 = Heap;
    v55 = Heap;
    v15 = v44;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_81:
      v33 = ModuleInfoFromVirtualMemory;
      goto LABEL_36;
    }
    v53 = (char *)Heap;
    v52 = 2 * (v36 + 5);
    v8 = Str;
    v10 = v46;
  }
  else
  {
    v53 = &v66;
    v52 = 60;
  }
  v51 = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v51, v8);
  v33 = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory >= 0 )
  {
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v51, L".mui");
    v33 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      if ( v10 )
        RtlActivateActivationContextUnsafeFast(&v63, v10);
      v19 = LdrpQuerySxSMUIFile(&v51, a2, &v61, &v59, &v54);
      if ( v10 )
        RtlDeactivateActivationContextUnsafeFast(&v63);
      if ( v19 >= 0 )
      {
        v20 = 1;
        v32 = 1;
        *((_QWORD *)&v41 + 1) = *(_QWORD *)(v54 + 8);
        LODWORD(v41) = *(_DWORD *)v54;
      }
      else
      {
        v20 = 0;
      }
      if ( v20
        || ResRuntimeView == -1
        || ResRuntimeView
        && ((v29 = *(_QWORD *)(ResRuntimeView + 16)) == 0
         || (v30 = *(_QWORD *)(v29 + 24)) == 0
         || (*(_DWORD *)(v30 + 48) & 0x100000) != 0) )
      {
        v21 = a2;
      }
      else
      {
        v21 = a2;
        MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v48, a2, 0, v37, (__int64)&v39, 0LL);
        v45 = MUIFromCMFSegment;
        if ( MUIFromCMFSegment )
        {
          v15 = MUIFromCMFSegment | 1;
          ModuleInfoFromVirtualMemory = 0;
          v33 = 0;
          goto LABEL_37;
        }
      }
      if ( v20 )
      {
        v22 = 0LL;
      }
      else
      {
        *((_QWORD *)&v41 + 1) = v69;
        LODWORD(v41) = 46006272;
        RtlAppendUnicodeToString(&v41, SourceString);
        v57 = &v68;
        v56[1] = 170;
        if ( (int)RtlLcidToLocaleName(v21, v56, 2LL) < 0 )
        {
          ModuleInfoFromVirtualMemory = -1073741811;
          v33 = -1073741811;
          goto LABEL_37;
        }
        RtlAppendUnicodeStringToString((unsigned __int16 *)&v41, v56);
        RtlAppendUnicodeToString(&v41, L"\\");
        RtlAppendUnicodeToString(&v41, v53);
        v22 = v57;
      }
      if ( (MEMORY[0x7FFE0385] & 1) != 0 )
        LdrpTraceLoadMUIDll(&v41, MEMORY[0x7FFE0384]);
      v23 = v48;
      ModuleInfoFromVirtualMemory = LdrpMapResourceFile(v48, &v41, v34, &Handle, &v45, &v40);
      v33 = ModuleInfoFromVirtualMemory;
      if ( ModuleInfoFromVirtualMemory >= 0 )
      {
        v15 = v45 | 1;
        if ( !v32 && !(unsigned __int8)LdrpVerifyAlternateResourceModule(v23, v45 | 1, v22, v37) )
        {
          NtUnmapViewOfSection(-1LL, v45);
          NtClose(Handle);
          Handle = 0LL;
          v40 = 0LL;
          v15 = 0LL;
          ModuleInfoFromVirtualMemory = -1073020926;
          goto LABEL_81;
        }
      }
    }
  }
LABEL_36:
  v21 = a2;
LABEL_37:
  if ( !v15 )
    v15 = -1LL;
  v44 = v15;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v24 = 0;
  }
  else
  {
    v24 = v35;
  }
  if ( v24 )
  {
    v25 = v42 != 0;
    v42 = -v42;
    LdrpSetAlternateResourceModuleHandle(
      v48,
      (unsigned int)&v44,
      (unsigned int)&Handle,
      0,
      v39,
      v21,
      (v25 ? 0x20 : 0) | 1,
      ModuleInfoFromVirtualMemory,
      v40);
    v15 = v44;
  }
  if ( v15 == -1 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( v39 == -1 )
    {
      if ( (MEMORY[0x7FFE0385] & 1) != 0 )
        LdrpTraceLoadMUIDll(&v41, MEMORY[0x7FFE0384]);
      if ( ResRuntimeView != -1 )
        ResCIncrementCMFMissCount();
    }
    *a3 = v15;
    if ( v58 )
      *v58 = v40;
    ModuleInfoFromVirtualMemory = 0;
    v33 = 0;
  }
  if ( v49 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v49);
    ModuleInfoFromVirtualMemory = v33;
  }
  if ( v50 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v50);
    ModuleInfoFromVirtualMemory = v33;
  }
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v9);
    return v33;
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
