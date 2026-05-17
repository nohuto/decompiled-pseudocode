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

__int64 __fastcall LdrLoadAlternateResourceModuleEx(
        __int64 a1,
        unsigned __int16 a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned int a5)
{
  wchar_t *v8; // rdi
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v15; // rsi
  int DataModulePath; // eax
  int ModuleInfoFromVirtualMemory; // edi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  _WORD *Heap; // rax
  int v21; // edi
  int v22; // r8d
  char v23; // di
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int16 v26; // r14
  __int64 MUIFromCMFSegment; // rax
  char *v28; // r14
  __int64 v29; // r13
  char v30; // al
  bool v31; // cf
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
  unsigned __int16 v53; // [rsp+D0h] [rbp-768h] BYREF
  __int16 v54; // [rsp+D2h] [rbp-766h]
  char *v55; // [rsp+D8h] [rbp-760h]
  __int64 v56; // [rsp+E0h] [rbp-758h] BYREF
  _WORD *v57; // [rsp+E8h] [rbp-750h]
  __int16 v58[4]; // [rsp+F0h] [rbp-748h] BYREF
  char *v59; // [rsp+F8h] [rbp-740h]
  int v60; // [rsp+100h] [rbp-738h] BYREF
  _BYTE *v61; // [rsp+108h] [rbp-730h]
  int v62; // [rsp+110h] [rbp-728h] BYREF
  __int64 v63; // [rsp+118h] [rbp-720h]
  _QWORD *v64; // [rsp+120h] [rbp-718h]
  __int64 v65; // [rsp+130h] [rbp-708h] BYREF
  int v66; // [rsp+138h] [rbp-700h]
  _BYTE v67[56]; // [rsp+140h] [rbp-6F8h] BYREF
  char v68; // [rsp+180h] [rbp-6B8h] BYREF
  WCHAR SourceString[352]; // [rsp+1C0h] [rbp-678h] BYREF
  char v70; // [rsp+480h] [rbp-3B8h] BYREF
  _BYTE v71[704]; // [rsp+530h] [rbp-308h] BYREF

  v64 = a4;
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
  v65 = 72LL;
  v66 = 1;
  memset(v67, 0, sizeof(v67));
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
  if ( v11 == -1 )
  {
    v13 = v38;
    if ( (v38 & 0x400000) == 0 )
    {
      *a3 = 0LL;
      return 3221946374LL;
    }
LABEL_12:
    v15 = 0LL;
    v45 = 0LL;
    v46 = v13 & 0x400000;
    if ( (v13 & 0x400000) != 0 )
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
      {
LABEL_59:
        v26 = a2;
        goto LABEL_60;
      }
      v8 = v48;
      Str = v48;
    }
    v18 = (unsigned __int64)v39 >> 1;
    if ( v18 >= 351 )
      _report_rangecheckfailure();
    SourceString[v18] = 0;
    if ( wcsrchr(v8, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(SourceString, v8) >= 0 )
    {
      v8 = v50;
      Str = v50;
      v19 = -1LL;
      do
        ++v19;
      while ( v50[v19] );
      v37 = 2 * v19;
    }
    v61 = v71;
    v60 = 46006272;
    v63 = 0LL;
    v62 = 0;
    if ( (unsigned __int64)v37 + 12 <= 0x3C )
    {
      v55 = &v68;
      v54 = 60;
    }
    else
    {
      Heap = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v37 + 10);
      v9 = (unsigned __int64)Heap;
      v57 = Heap;
      v15 = v45;
      if ( !Heap )
      {
        ModuleInfoFromVirtualMemory = -1073741801;
LABEL_27:
        v34 = ModuleInfoFromVirtualMemory;
        goto LABEL_59;
      }
      v55 = (char *)Heap;
      v54 = 2 * (v37 + 5);
      v8 = Str;
      v10 = v52;
    }
    v53 = 0;
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v53, v8);
    v34 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_59;
    ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v53, L".mui");
    v34 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_59;
    if ( v10 )
      RtlActivateActivationContextUnsafeFast((__int64)&v65, v10);
    v21 = LdrpQuerySxSMUIFile(&v53, a2, &v60, &v62, &v56);
    if ( v10 )
      RtlDeactivateActivationContextUnsafeFast((__int64)&v65);
    if ( v21 < 0 )
    {
      v23 = 0;
    }
    else
    {
      v23 = 1;
      v33 = 1;
      v43 = *(_BYTE **)(v56 + 8);
      v42 = *(_DWORD *)v56;
    }
    if ( v23
      || ResRuntimeView == -1
      || ResRuntimeView
      && ((v24 = *(_QWORD *)(ResRuntimeView + 16)) == 0
       || (v25 = *(_QWORD *)(v24 + 24)) == 0
       || (*(_DWORD *)(v25 + 48) & 0x100000) != 0) )
    {
      v26 = a2;
    }
    else
    {
      v26 = a2;
      MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v51, a2, 0, v38, (__int64)&v40, 0LL);
      v49 = MUIFromCMFSegment;
      if ( MUIFromCMFSegment )
      {
        v15 = MUIFromCMFSegment | 1;
        ModuleInfoFromVirtualMemory = 0;
        v34 = 0;
LABEL_60:
        if ( !v15 )
          v15 = -1LL;
        v45 = v15;
        if ( ModuleInfoFromVirtualMemory == -1073741523
          || ModuleInfoFromVirtualMemory == -1073741659
          || ModuleInfoFromVirtualMemory == -1073741801 )
        {
          v30 = 0;
        }
        else
        {
          v30 = v36;
        }
        if ( v30 )
        {
          v31 = v46 != 0;
          v46 = -v46;
          LdrpSetAlternateResourceModuleHandle(
            v51,
            (unsigned int)&v45,
            (unsigned int)&Handle,
            0,
            v40,
            v26,
            (v31 ? 0x20 : 0) | 1,
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
          if ( v64 )
            *v64 = v41;
          ModuleInfoFromVirtualMemory = 0;
          v34 = 0;
        }
        if ( v48 )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v48);
          ModuleInfoFromVirtualMemory = v34;
        }
        if ( v50 )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v50);
          ModuleInfoFromVirtualMemory = v34;
        }
        if ( v9 )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
          return v34;
        }
        return (unsigned int)ModuleInfoFromVirtualMemory;
      }
    }
    if ( v23 )
    {
      v28 = 0LL;
    }
    else
    {
      v43 = v71;
      v42 = 46006272;
      RtlAppendUnicodeToString((unsigned __int16 *)&v42, SourceString);
      v59 = &v70;
      v58[1] = 170;
      if ( (int)RtlLcidToLocaleName(v26, (__int64)v58, 2, 0) < 0 )
      {
        ModuleInfoFromVirtualMemory = -1073741811;
        v34 = -1073741811;
        goto LABEL_60;
      }
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v42, v58);
      RtlAppendUnicodeToString((unsigned __int16 *)&v42, L"\\");
      RtlAppendUnicodeToString((unsigned __int16 *)&v42, v55);
      v28 = v59;
    }
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v42, MEMORY[0x7FFE0384]);
    LOBYTE(v22) = v35;
    v29 = v51;
    ModuleInfoFromVirtualMemory = LdrpMapResourceFile(
                                    v51,
                                    (unsigned int)&v42,
                                    v22,
                                    (unsigned int)&Handle,
                                    (__int64)&v49,
                                    (__int64)&v41);
    v34 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_59;
    v15 = v49 | 1;
    if ( v33 || (unsigned __int8)LdrpVerifyAlternateResourceModule(v29, v49 | 1, v28, v38) )
      goto LABEL_59;
    NtUnmapViewOfSection(-1LL, v49);
    NtClose(Handle);
    Handle = 0LL;
    v41 = 0LL;
    v15 = 0LL;
    ModuleInfoFromVirtualMemory = -1073020926;
    goto LABEL_27;
  }
  if ( !v11 )
  {
    v13 = v38;
    goto LABEL_12;
  }
  *a3 = v11;
  if ( a4 )
    *a4 = v41;
  return 0LL;
}
