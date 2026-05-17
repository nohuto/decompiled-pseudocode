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
  _DWORD *v11; // rax
  __int64 v12; // r8
  unsigned int v14; // eax
  __int64 v15; // rsi
  int DataModulePath; // eax
  unsigned __int64 v17; // rax
  int ModuleInfoFromVirtualMemory; // edi
  int v19; // edi
  int v20; // r8d
  char v21; // di
  unsigned __int16 v22; // r14
  char *v23; // r14
  __int64 v24; // r13
  char v25; // al
  bool v26; // cf
  __int64 MUIFromCMFSegment; // rax
  __int64 Heap; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  char v33; // [rsp+52h] [rbp-7E6h]
  unsigned int v34; // [rsp+54h] [rbp-7E4h]
  char v35; // [rsp+58h] [rbp-7E0h] BYREF
  char v36; // [rsp+59h] [rbp-7DFh]
  unsigned int v37; // [rsp+5Ch] [rbp-7DCh] BYREF
  unsigned int v38; // [rsp+60h] [rbp-7D8h]
  unsigned int v39; // [rsp+64h] [rbp-7D4h] BYREF
  int v40; // [rsp+68h] [rbp-7D0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-7C8h] BYREF
  int v42; // [rsp+78h] [rbp-7C0h] BYREF
  _BYTE *v43; // [rsp+80h] [rbp-7B8h]
  wchar_t *Str; // [rsp+88h] [rbp-7B0h] BYREF
  __int64 v45; // [rsp+90h] [rbp-7A8h] BYREF
  int v46; // [rsp+98h] [rbp-7A0h]
  HANDLE Handle; // [rsp+A0h] [rbp-798h] BYREF
  wchar_t *v48; // [rsp+A8h] [rbp-790h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-788h] BYREF
  wchar_t *v50; // [rsp+B8h] [rbp-780h]
  __int64 v51; // [rsp+C0h] [rbp-778h]
  __int64 v52; // [rsp+C8h] [rbp-770h] BYREF
  __int16 v53; // [rsp+D0h] [rbp-768h] BYREF
  __int16 v54; // [rsp+D2h] [rbp-766h]
  char *v55; // [rsp+D8h] [rbp-760h]
  __int64 v56; // [rsp+E0h] [rbp-758h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-750h]
  _BYTE v58[2]; // [rsp+F0h] [rbp-748h] BYREF
  __int16 v59; // [rsp+F2h] [rbp-746h]
  char *v60; // [rsp+F8h] [rbp-740h]
  int v61; // [rsp+100h] [rbp-738h] BYREF
  _BYTE *v62; // [rsp+108h] [rbp-730h]
  int v63; // [rsp+110h] [rbp-728h] BYREF
  __int64 v64; // [rsp+118h] [rbp-720h]
  _QWORD *v65; // [rsp+120h] [rbp-718h]
  __int64 v66; // [rsp+130h] [rbp-708h] BYREF
  int v67; // [rsp+138h] [rbp-700h]
  _BYTE v68[56]; // [rsp+140h] [rbp-6F8h] BYREF
  char v69; // [rsp+180h] [rbp-6B8h] BYREF
  WCHAR SourceString[352]; // [rsp+1C0h] [rbp-678h] BYREF
  char v71; // [rsp+480h] [rbp-3B8h] BYREF
  _BYTE v72[704]; // [rsp+530h] [rbp-308h] BYREF

  v65 = a4;
  v51 = a1;
  v38 = a5;
  v49 = 0LL;
  Handle = 0LL;
  v39 = 0;
  v8 = 0LL;
  Str = 0LL;
  v37 = 0;
  v9 = 0LL;
  v57 = 0LL;
  v41 = 0LL;
  v56 = 0LL;
  v33 = 0;
  v66 = 72LL;
  v67 = 1;
  memset(v68, 0, sizeof(v68));
  v35 = 0;
  v40 = -1;
  v50 = 0LL;
  v48 = 0LL;
  v36 = 1;
  v10 = 0LL;
  v52 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v11 = LdrpGetFromMUIMemCache(a1, a2, &v41, 4);
  if ( v11 == (_DWORD *)-1LL )
  {
    v14 = v38;
    if ( (v38 & 0x400000) == 0 )
    {
      *a3 = 0LL;
      return 3221946374LL;
    }
  }
  else
  {
    if ( v11 )
    {
      *a3 = (__int64)v11;
      if ( a4 )
        *a4 = v41;
      return 0LL;
    }
    v14 = v38;
  }
  v15 = 0LL;
  v45 = 0LL;
  v46 = v14 & 0x400000;
  if ( (v14 & 0x400000) != 0 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(a1, SourceString, v12, &v39, &Str, &v37, &v52);
    v8 = Str;
    v10 = v52;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v51, SourceString, 702LL, &v39, &v48, &v37, &v35);
    v34 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_36;
    v8 = v48;
    Str = v48;
  }
  v17 = (unsigned __int64)v39 >> 1;
  if ( v17 >= 351 )
    _report_rangecheckfailure();
  SourceString[v17] = 0;
  if ( wcsrchr(v8, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(SourceString, v8) >= 0 )
  {
    v8 = v50;
    Str = v50;
    v29 = -1LL;
    do
      ++v29;
    while ( v50[v29] );
    v37 = 2 * v29;
  }
  v62 = v72;
  v61 = 46006272;
  v64 = 0LL;
  v63 = 0;
  if ( (unsigned __int64)v37 + 12 > 0x3C )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 2LL * v37 + 10);
    v9 = Heap;
    v57 = Heap;
    v15 = v45;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_81:
      v34 = ModuleInfoFromVirtualMemory;
      goto LABEL_36;
    }
    v55 = (char *)Heap;
    v54 = 2 * (v37 + 5);
    v8 = Str;
    v10 = v52;
  }
  else
  {
    v55 = &v69;
    v54 = 60;
  }
  v53 = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v53, v8);
  v34 = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory >= 0 )
  {
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v53, L".mui");
    v34 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      if ( v10 )
        RtlActivateActivationContextUnsafeFast(&v66, v10);
      v19 = LdrpQuerySxSMUIFile(&v53, a2, &v61, &v63, &v56);
      if ( v10 )
        RtlDeactivateActivationContextUnsafeFast(&v66);
      if ( v19 >= 0 )
      {
        v21 = 1;
        v33 = 1;
        v43 = *(_BYTE **)(v56 + 8);
        v42 = *(_DWORD *)v56;
      }
      else
      {
        v21 = 0;
      }
      if ( v21
        || ResRuntimeView == -1
        || ResRuntimeView
        && ((v30 = *(_QWORD *)(ResRuntimeView + 16)) == 0
         || (v31 = *(_QWORD *)(v30 + 24)) == 0
         || (*(_DWORD *)(v31 + 48) & 0x100000) != 0) )
      {
        v22 = a2;
      }
      else
      {
        v22 = a2;
        MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v51, a2, 0, v38, &v40, 0LL);
        v49 = MUIFromCMFSegment;
        if ( MUIFromCMFSegment )
        {
          v15 = MUIFromCMFSegment | 1;
          ModuleInfoFromVirtualMemory = 0;
          v34 = 0;
          goto LABEL_37;
        }
      }
      if ( v21 )
      {
        v23 = 0LL;
      }
      else
      {
        v43 = v72;
        v42 = 46006272;
        RtlAppendUnicodeToString(&v42, SourceString);
        v60 = &v71;
        v59 = 170;
        if ( (int)RtlLcidToLocaleName(v22, v58, 2LL) < 0 )
        {
          ModuleInfoFromVirtualMemory = -1073741811;
          v34 = -1073741811;
          goto LABEL_37;
        }
        RtlAppendUnicodeStringToString(&v42, v58);
        RtlAppendUnicodeToString(&v42, L"\\");
        RtlAppendUnicodeToString(&v42, v55);
        v23 = v60;
      }
      if ( (MEMORY[0x7FFE0385] & 1) != 0 )
        LdrpTraceLoadMUIDll(&v42, MEMORY[0x7FFE0384]);
      LOBYTE(v20) = v35;
      v24 = v51;
      ModuleInfoFromVirtualMemory = LdrpMapResourceFile(
                                      v51,
                                      (unsigned int)&v42,
                                      v20,
                                      (unsigned int)&Handle,
                                      (__int64)&v49,
                                      (__int64)&v41);
      v34 = ModuleInfoFromVirtualMemory;
      if ( ModuleInfoFromVirtualMemory >= 0 )
      {
        v15 = v49 | 1;
        if ( !v33 && !(unsigned __int8)LdrpVerifyAlternateResourceModule(v24, v49 | 1, v23, v38) )
        {
          NtUnmapViewOfSection(-1LL);
          NtClose(Handle);
          Handle = 0LL;
          v41 = 0LL;
          v15 = 0LL;
          ModuleInfoFromVirtualMemory = -1073020926;
          goto LABEL_81;
        }
      }
    }
  }
LABEL_36:
  v22 = a2;
LABEL_37:
  if ( !v15 )
    v15 = -1LL;
  v45 = v15;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v25 = 0;
  }
  else
  {
    v25 = v36;
  }
  if ( v25 )
  {
    v26 = v46 != 0;
    v46 = -v46;
    LdrpSetAlternateResourceModuleHandle(
      v51,
      (unsigned int)&v45,
      (unsigned int)&Handle,
      0,
      v40,
      v22,
      (v26 ? 0x20 : 0) | 1,
      ModuleInfoFromVirtualMemory,
      v41);
    v15 = v45;
  }
  if ( v15 == -1 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( v40 == -1 )
    {
      if ( (MEMORY[0x7FFE0385] & 1) != 0 )
        LdrpTraceLoadMUIDll(&v42, MEMORY[0x7FFE0384]);
      if ( ResRuntimeView != -1 )
        ResCIncrementCMFMissCount();
    }
    *a3 = v15;
    if ( v65 )
      *v65 = v41;
    ModuleInfoFromVirtualMemory = 0;
    v34 = 0;
  }
  if ( v48 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v48);
    ModuleInfoFromVirtualMemory = v34;
  }
  if ( v50 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v50);
    ModuleInfoFromVirtualMemory = v34;
  }
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v9);
    return v34;
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
