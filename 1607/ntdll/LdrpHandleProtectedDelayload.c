/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x180033840
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800319E0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     RtlReleasePath @ 0x1800091A0 (RtlReleasePath.c)
 *     LdrpGetDelayloadExportDll @ 0x18001136C (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadForwardedDll @ 0x180013300 (LdrpLoadForwardedDll.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlGuardCheckImageBase @ 0x180030064 (RtlGuardCheckImageBase.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180030098 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180031680 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007B728 (LdrpRedirectDelayloadFailure.c)
 *     LdrpParseForwarderDescription @ 0x18007B844 (LdrpParseForwarderDescription.c)
 *     RtlAddressInSectionTable @ 0x180080BF0 (RtlAddressInSectionTable.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     AVrfCallAPILookupCallback @ 0x1800D5DC0 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        unsigned int a6)
{
  int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // rsi
  int DelayloadExportDll; // eax
  int v11; // ebx
  __int64 v12; // r13
  char *v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  _BYTE *Heap; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  const char *v21; // r15
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // rbx
  unsigned __int64 v25; // r14
  bool v26; // bl
  unsigned __int64 v27; // rdi
  _DWORD *v28; // r13
  int v29; // eax
  __int16 v30; // ax
  __int64 v31; // rax
  unsigned int v32; // r11d
  int v33; // r10d
  int v34; // r9d
  int v35; // r8d
  const char *v36; // rax
  signed __int64 v37; // rdx
  unsigned __int8 v38; // cl
  int v39; // eax
  unsigned int v40; // esi
  int v41; // ebx
  __int64 v42; // rsi
  unsigned int v43; // ecx
  __int64 v44; // r15
  char *v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v49; // eax
  char *v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r8
  int v56; // [rsp+40h] [rbp-578h]
  unsigned int v57; // [rsp+44h] [rbp-574h]
  int v58; // [rsp+48h] [rbp-570h] BYREF
  int v59; // [rsp+4Ch] [rbp-56Ch]
  __int64 v60; // [rsp+50h] [rbp-568h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-560h]
  unsigned __int64 v62; // [rsp+60h] [rbp-558h]
  _BYTE *v63; // [rsp+68h] [rbp-550h]
  __int64 v64; // [rsp+70h] [rbp-548h] BYREF
  __int64 v65; // [rsp+78h] [rbp-540h]
  __int64 v66; // [rsp+80h] [rbp-538h] BYREF
  unsigned __int64 v67; // [rsp+88h] [rbp-530h] BYREF
  __int64 v68; // [rsp+90h] [rbp-528h]
  __int64 v69; // [rsp+98h] [rbp-520h] BYREF
  const char *v70; // [rsp+A0h] [rbp-518h] BYREF
  void (__fastcall *v71)(unsigned __int64 *, __int64, unsigned __int64, _QWORD, _QWORD); // [rsp+A8h] [rbp-510h]
  unsigned __int64 v72; // [rsp+B0h] [rbp-508h] BYREF
  unsigned __int64 v73; // [rsp+B8h] [rbp-500h]
  __int64 v74; // [rsp+C0h] [rbp-4F8h]
  __int64 v75; // [rsp+C8h] [rbp-4F0h]
  char *v76; // [rsp+D0h] [rbp-4E8h]
  unsigned __int64 *v77; // [rsp+D8h] [rbp-4E0h]
  __int64 v78; // [rsp+E0h] [rbp-4D8h]
  __int64 v79; // [rsp+E8h] [rbp-4D0h]
  STRING v80; // [rsp+F0h] [rbp-4C8h] BYREF
  __int64 v81[16]; // [rsp+100h] [rbp-4B8h] BYREF
  _BYTE v82[1024]; // [rsp+180h] [rbp-438h] BYREF

  v78 = a4;
  v7 = a3;
  v79 = a3;
  v8 = a2;
  v74 = a2;
  v9 = a1;
  v65 = a1;
  v76 = a5;
  v64 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v60, a6, (__int64)a5);
  v11 = DelayloadExportDll;
  v59 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    v12 = v60;
    RtlGuardCheckImageBase(*(PVOID *)(v60 + 48));
    v13 = (char *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(v8 + 12));
    v68 = (__int64)v13;
    v14 = (a5 - v13) >> 3;
    v73 = v14;
    LODWORD(v15) = 0;
    if ( *(_QWORD *)v13 )
    {
      do
        v15 = (unsigned int)(v15 + 1);
      while ( *(_QWORD *)&v13[8 * v15] );
    }
    if ( (unsigned int)v15 > 0x80 )
    {
      Heap = (_BYTE *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v15);
      v63 = Heap;
      if ( !Heap )
      {
        Heap = v82;
        v63 = v82;
        v13 = v76;
        v68 = (__int64)v76;
        LODWORD(v15) = v15 - v14;
        if ( (unsigned int)v15 > 0x80 )
          LODWORD(v15) = 128;
        LODWORD(v14) = 0;
        v73 = 0LL;
      }
    }
    else
    {
      Heap = v82;
      v63 = v82;
    }
    if ( g_ShimsEnabled )
      v71 = (void (__fastcall *)(unsigned __int64 *, __int64, unsigned __int64, _QWORD, _QWORD))(__ROR8__(
                                                                                                   g_pfnSE_GetProcAddressForCaller,
                                                                                                   64
                                                                                                 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v71 = 0LL;
    v17 = 0LL;
    v57 = 0;
    if ( !(_DWORD)v15 )
      goto LABEL_54;
    v18 = 0LL;
    v75 = 0LL;
    v56 = v58;
    while ( 1 )
    {
      v77 = (unsigned __int64 *)&Heap[8 * v18];
      *v77 = 0LL;
      if ( (_DWORD)v17 != (_DWORD)v14 )
      {
        if ( *(_QWORD *)&v13[8 * v18] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
        {
          v43 = v57;
          goto LABEL_53;
        }
        v17 = v57;
      }
      v62 = 0LL;
      v67 = 0LL;
      v19 = *(_QWORD *)(v9 + 48);
      v20 = *(_QWORD *)(v19
                      + *(unsigned int *)(v8 + 16)
                      + 8 * ((__int64)&v13[8 * v17 - (v19 + *(unsigned int *)(v8 + 12))] >> 3));
      if ( v20 < 0 )
      {
        v21 = 0LL;
        v22 = (unsigned __int16)v20;
      }
      else
      {
        v21 = (const char *)(v20 + v19 + 2);
        v22 = 0;
      }
      v70 = v21;
      v58 = v22;
      v23 = v12;
      v66 = v12;
      v61 = 0;
      v24 = *(_QWORD *)(v12 + 80);
      memset(v81, 0, sizeof(v81));
      LODWORD(v81[3]) = 0;
      v81[4] = v24;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v23 + 48);
        v26 = 1;
        v27 = v25;
        v69 = 0LL;
        v28 = 0LL;
        if ( (v25 & 3) != 0 )
        {
          v26 = (v25 & 1) == 0;
          v27 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        v29 = RtlImageNtHeaderEx(1LL, v27, 0LL, &v69);
        if ( !v69 )
          goto LABEL_101;
        v30 = *(_WORD *)(v69 + 24);
        if ( v30 == 267 )
        {
          if ( *(_DWORD *)(v69 + 116) )
          {
            v53 = *(unsigned int *)(v69 + 120);
            if ( (_DWORD)v53 )
            {
              v32 = *(_DWORD *)(v69 + 124);
              v56 = v32;
              if ( v26 || (unsigned int)v53 < *(_DWORD *)(v69 + 84) )
              {
                v28 = (_DWORD *)(v27 + v53);
                goto LABEL_25;
              }
              v54 = RtlSectionTableFromVirtualAddress(v69, 267LL, v53);
              v28 = v54
                  ? (_DWORD *)(v55 + v27 + *(unsigned int *)(v54 + 20) - (unsigned __int64)*(unsigned int *)(v54 + 12))
                  : 0LL;
              if ( v28 )
              {
                v29 = 0;
                goto LABEL_102;
              }
            }
          }
        }
        else if ( v30 == 523 )
        {
          if ( *(_DWORD *)(v69 + 132) )
          {
            v31 = *(unsigned int *)(v69 + 136);
            if ( (_DWORD)v31 )
            {
              v32 = *(_DWORD *)(v69 + 140);
              v56 = v32;
              if ( v26 || (unsigned int)v31 < *(_DWORD *)(v69 + 84) )
              {
                v28 = (_DWORD *)(v27 + v31);
                goto LABEL_25;
              }
              v28 = (_DWORD *)RtlAddressInSectionTable(v69, v27, (unsigned int)v31);
              if ( v28 )
              {
                v29 = 0;
LABEL_101:
                v32 = v56;
LABEL_102:
                if ( v29 >= 0 )
                  goto LABEL_25;
              }
            }
          }
        }
        v28 = 0LL;
        v32 = v56;
LABEL_25:
        if ( !v28 )
          goto LABEL_111;
        if ( v21 )
          break;
        if ( (LdrpDebugFlags & 5) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            656,
            (unsigned int)"LdrpGetProcedureAddress",
            2,
            (__int64)"Loading procedure 0x%lx by ordinal\n",
            v22);
          v32 = v56;
        }
        if ( !v22 )
        {
          v41 = -1073741811;
          goto LABEL_112;
        }
        v40 = v22 - v28[4];
LABEL_41:
        if ( v40 >= v28[5] )
        {
          v41 = (v21 != 0LL) - 1073741512;
          goto LABEL_112;
        }
        v14 = v25 + *(unsigned int *)(v25 + (unsigned int)v28[7] + 4LL * (int)v40);
        v62 = v14;
        v67 = v14;
        if ( v14 < (unsigned __int64)v28 || v14 >= (unsigned __int64)v28 + v32 )
        {
          v41 = 0;
          goto LABEL_44;
        }
        v49 = v61++;
        if ( v49 >= 0x20 )
        {
          v41 = -1073741701;
          goto LABEL_44;
        }
        v41 = LdrpParseForwarderDescription(v14, &v80, &v70, &v58);
        if ( v41 < 0 )
          goto LABEL_44;
        LODWORD(v81[3]) = *(_DWORD *)(v66 + 272);
        v41 = LdrpLoadForwardedDll(&v80, (int)v81, v60, v66, 2, (__int64)&v66);
        if ( v41 < 0 )
          goto LABEL_44;
        v23 = v66;
        LdrpDereferenceModule(v66, v50, v51, v52);
        v21 = v70;
        v22 = v58;
      }
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          638,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          (__int64)"Locating procedure \"%s\" by name\n",
          v21);
      v33 = 0;
      v34 = v28[6] - 1;
      v35 = v34 / 2;
      if ( v34 >= 0 )
      {
        while ( 1 )
        {
          v36 = v21;
          v37 = v25 + *(unsigned int *)(v25 + (unsigned int)v28[8] + 4LL * v35) - (_QWORD)v21;
          while ( 1 )
          {
            v38 = *v36;
            if ( *v36 != v36[v37] )
              break;
            ++v36;
            if ( !v38 )
            {
              v39 = 0;
              goto LABEL_34;
            }
          }
          v39 = v38 < (unsigned int)v36[v37] ? -1 : 1;
LABEL_34:
          if ( !v39 )
            break;
          if ( v39 < 0 )
            v34 = v35 - 1;
          else
            v33 = v35 + 1;
          v35 = (v34 + v33) / 2;
          if ( v34 < v33 )
            goto LABEL_104;
        }
        v40 = *(unsigned __int16 *)(v25 + (unsigned int)v28[9] + 2LL * v35);
        v32 = v56;
        goto LABEL_41;
      }
LABEL_104:
      if ( (LdrpDebugFlags & 3) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1325,
          (unsigned int)"LdrpNameToOrdinal",
          1,
          (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          v21,
          (const void *)v25);
      if ( (LdrpDebugFlags & 0x40) != 0 )
        __debugbreak();
LABEL_111:
      v41 = -1073741702;
LABEL_112:
      v14 = v62;
LABEL_44:
      if ( BYTE4(v81[15]) )
        RtlReleasePath(v81[0]);
      v58 = v41;
      if ( v41 >= 0 )
      {
        v42 = v65;
        if ( AvrfpAPILookupCallbacksEnabled )
        {
          AVrfCallAPILookupCallback(*(_QWORD *)(v65 + 48), *(_QWORD *)(v60 + 48), v14, 1, (__int64)&v67);
          v14 = v67;
        }
        if ( v71 )
        {
          v72 = 0LL;
          v71(&v72, v60, v14, *(_QWORD *)(v42 + 48), 0LL);
          if ( v72 )
            v14 = v72;
        }
      }
      *v77 = v14;
      v43 = v57;
      LODWORD(v14) = v73;
      Heap = v63;
      v9 = v65;
      v12 = v60;
      v8 = v74;
      if ( v57 == (_DWORD)v73 )
      {
        v59 = v41;
        v64 = *(_QWORD *)&v63[8 * (unsigned int)v73];
      }
      v13 = (char *)v68;
LABEL_53:
      v17 = v43 + 1;
      v57 = v17;
      v18 = ++v75;
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
LABEL_54:
        if ( v59 < 0 )
        {
          v44 = LdrpRedirectDelayloadFailure(v9, v12, v8, v79, v78, (__int64)v76, v59);
          v64 = v44;
          if ( v44 && ((unsigned int)(v59 + 1073741512) <= 1 || v59 == -1073741702 || v59 == -1073740671) )
            *(_QWORD *)&Heap[8 * (unsigned int)v14] = v44;
        }
        else
        {
          v44 = v64;
        }
        LdrpWriteBackProtectedDelayLoad(v9, v13, (__int64)Heap, (unsigned int)v15, v14);
        if ( v82 != Heap )
          RtlFreeHeap(LdrpHeap, 0LL, Heap);
        LdrpDereferenceModule(v12, v45, v46, v47);
        return v44;
      }
    }
  }
  v44 = LdrpRedirectDelayloadFailure(v9, 0, v8, v7, a4, (__int64)a5, DelayloadExportDll);
  v64 = v44;
  if ( v44 && v11 == -1073741515 )
    LdrpWriteBackProtectedDelayLoad(v9, a5, (__int64)&v64, 1LL, 0);
  return v44;
}
