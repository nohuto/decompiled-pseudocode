/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x180033830
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800319D0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     RtlReleasePath @ 0x180009190 (RtlReleasePath.c)
 *     LdrpGetDelayloadExportDll @ 0x18001135C (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadForwardedDll @ 0x1800132F0 (LdrpLoadForwardedDll.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlGuardCheckImageBase @ 0x180030054 (RtlGuardCheckImageBase.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180030088 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180031670 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007B718 (LdrpRedirectDelayloadFailure.c)
 *     LdrpParseForwarderDescription @ 0x18007B834 (LdrpParseForwarderDescription.c)
 *     RtlAddressInSectionTable @ 0x180080BE0 (RtlAddressInSectionTable.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     AVrfCallAPILookupCallback @ 0x1800D5E80 (AVrfCallAPILookupCallback.c)
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
  NTSTATUS DelayloadExportDll; // eax
  NTSTATUS v11; // ebx
  _QWORD *v12; // r13
  char *v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  _BYTE *Heap; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  const char *v21; // r15
  NTSTATUS v22; // esi
  _QWORD *v23; // rdi
  WCHAR *v24; // rbx
  unsigned __int64 v25; // r14
  bool v26; // bl
  char *v27; // rdi
  char *v28; // r13
  NTSTATUS v29; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  unsigned int SizeOfHeapCommit_high; // r11d
  int v33; // r10d
  int v34; // r9d
  int v35; // r8d
  const char *v36; // rax
  signed __int64 v37; // rdx
  unsigned __int8 v38; // cl
  int v39; // eax
  unsigned __int32 v40; // esi
  NTSTATUS v41; // ebx
  __int64 v42; // rsi
  unsigned int v43; // ecx
  __int64 v44; // r15
  unsigned int v46; // eax
  __int64 SizeOfHeapCommit_low; // r8
  PIMAGE_SECTION_HEADER v48; // rax
  __int64 v49; // r8
  __int64 v50; // [rsp+20h] [rbp-598h]
  unsigned int v51; // [rsp+40h] [rbp-578h]
  unsigned int v52; // [rsp+44h] [rbp-574h]
  NTSTATUS v53; // [rsp+48h] [rbp-570h] BYREF
  NTSTATUS Status; // [rsp+4Ch] [rbp-56Ch]
  PVOID v55; // [rsp+50h] [rbp-568h] BYREF
  unsigned int v56; // [rsp+58h] [rbp-560h]
  unsigned __int64 v57; // [rsp+60h] [rbp-558h]
  _BYTE *v58; // [rsp+68h] [rbp-550h]
  __int64 v59; // [rsp+70h] [rbp-548h] BYREF
  __int64 v60; // [rsp+78h] [rbp-540h]
  PVOID v61; // [rsp+80h] [rbp-538h] BYREF
  unsigned __int64 v62; // [rsp+88h] [rbp-530h] BYREF
  __int64 v63; // [rsp+90h] [rbp-528h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+98h] [rbp-520h] BYREF
  const char *v65; // [rsp+A0h] [rbp-518h] BYREF
  void (__fastcall *v66)(unsigned __int64 *, PVOID, unsigned __int64, _QWORD, _QWORD); // [rsp+A8h] [rbp-510h]
  unsigned __int64 v67; // [rsp+B0h] [rbp-508h] BYREF
  unsigned __int64 v68; // [rsp+B8h] [rbp-500h]
  __int64 v69; // [rsp+C0h] [rbp-4F8h]
  __int64 v70; // [rsp+C8h] [rbp-4F0h]
  __int64 v71; // [rsp+D0h] [rbp-4E8h]
  unsigned __int64 *v72; // [rsp+D8h] [rbp-4E0h]
  __int64 v73; // [rsp+E0h] [rbp-4D8h]
  int v74[2]; // [rsp+E8h] [rbp-4D0h]
  ANSI_STRING v75; // [rsp+F0h] [rbp-4C8h] BYREF
  PWSTR Path[16]; // [rsp+100h] [rbp-4B8h] BYREF
  _BYTE BaseAddress[1024]; // [rsp+180h] [rbp-438h] BYREF

  v73 = a4;
  v7 = a3;
  *(_QWORD *)v74 = a3;
  v8 = a2;
  v69 = a2;
  v9 = a1;
  v60 = a1;
  v71 = (__int64)a5;
  v59 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (__int64 *)&v55, a6, (__int64)a5);
  v11 = DelayloadExportDll;
  Status = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    v12 = v55;
    RtlGuardCheckImageBase(*((PVOID *)v55 + 6));
    v13 = (char *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(v8 + 12));
    v63 = (__int64)v13;
    v14 = (a5 - v13) >> 3;
    v68 = v14;
    LODWORD(v15) = 0;
    if ( *(_QWORD *)v13 )
    {
      do
        v15 = (unsigned int)(v15 + 1);
      while ( *(_QWORD *)&v13[8 * v15] );
    }
    if ( (unsigned int)v15 > 0x80 )
    {
      Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v15);
      v58 = Heap;
      if ( !Heap )
      {
        Heap = BaseAddress;
        v58 = BaseAddress;
        v13 = (char *)v71;
        v63 = v71;
        LODWORD(v15) = v15 - v14;
        if ( (unsigned int)v15 > 0x80 )
          LODWORD(v15) = 128;
        LODWORD(v14) = 0;
        v68 = 0LL;
      }
    }
    else
    {
      Heap = BaseAddress;
      v58 = BaseAddress;
    }
    if ( g_ShimsEnabled )
      v66 = (void (__fastcall *)(unsigned __int64 *, PVOID, unsigned __int64, _QWORD, _QWORD))(__ROR8__(
                                                                                                 g_pfnSE_GetProcAddressForCaller,
                                                                                                 64
                                                                                               - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v66 = 0LL;
    v17 = 0LL;
    v52 = 0;
    if ( !(_DWORD)v15 )
      goto LABEL_54;
    v18 = 0LL;
    v70 = 0LL;
    v51 = v53;
    while ( 1 )
    {
      v72 = (unsigned __int64 *)&Heap[8 * v18];
      *v72 = 0LL;
      if ( (_DWORD)v17 != (_DWORD)v14 )
      {
        if ( *(_QWORD *)&v13[8 * v18] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
        {
          v43 = v52;
          goto LABEL_53;
        }
        v17 = v52;
      }
      v57 = 0LL;
      v62 = 0LL;
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
      v65 = v21;
      v53 = v22;
      v23 = v12;
      v61 = v12;
      v56 = 0;
      v24 = (WCHAR *)v12[10];
      memset(Path, 0, sizeof(Path));
      LODWORD(Path[3]) = 0;
      Path[4] = v24;
      while ( 1 )
      {
        v25 = v23[6];
        v26 = 1;
        v27 = (char *)v25;
        OutHeaders = 0LL;
        v28 = 0LL;
        if ( (v25 & 3) != 0 )
        {
          v26 = (v25 & 1) == 0;
          v27 = (char *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
        }
        v29 = RtlImageNtHeaderEx(1u, v27, 0LL, &OutHeaders);
        if ( !OutHeaders )
          goto LABEL_101;
        Magic = OutHeaders->OptionalHeader.Magic;
        if ( Magic == 267 )
        {
          if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
          {
            SizeOfHeapCommit_low = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
            if ( (_DWORD)SizeOfHeapCommit_low )
            {
              SizeOfHeapCommit_high = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
              v51 = SizeOfHeapCommit_high;
              if ( v26 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
              {
                v28 = &v27[SizeOfHeapCommit_low];
                goto LABEL_25;
              }
              v48 = RtlSectionTableFromVirtualAddress(OutHeaders, (PVOID)0x10B, SizeOfHeapCommit_low);
              v28 = v48 ? &v27[v48->PointerToRawData - (unsigned __int64)v48->VirtualAddress + v49] : 0LL;
              if ( v28 )
              {
                v29 = 0;
                goto LABEL_102;
              }
            }
          }
        }
        else if ( Magic == 523 )
        {
          if ( OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
          {
            VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
            if ( (_DWORD)VirtualAddress )
            {
              SizeOfHeapCommit_high = OutHeaders->OptionalHeader.DataDirectory[0].Size;
              v51 = SizeOfHeapCommit_high;
              if ( v26 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
              {
                v28 = &v27[VirtualAddress];
                goto LABEL_25;
              }
              v28 = (char *)RtlAddressInSectionTable(OutHeaders, v27, VirtualAddress);
              if ( v28 )
              {
                v29 = 0;
LABEL_101:
                SizeOfHeapCommit_high = v51;
LABEL_102:
                if ( v29 >= 0 )
                  goto LABEL_25;
              }
            }
          }
        }
        v28 = 0LL;
        SizeOfHeapCommit_high = v51;
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
          SizeOfHeapCommit_high = v51;
        }
        if ( !v22 )
        {
          v41 = -1073741811;
          goto LABEL_112;
        }
        v40 = v22 - *((_DWORD *)v28 + 4);
LABEL_41:
        if ( v40 >= *((_DWORD *)v28 + 5) )
        {
          v41 = (v21 != 0LL) - 1073741512;
          goto LABEL_112;
        }
        v14 = v25 + *(unsigned int *)(v25 + *((unsigned int *)v28 + 7) + 4LL * (int)v40);
        v57 = v14;
        v62 = v14;
        if ( v14 < (unsigned __int64)v28 || v14 >= (unsigned __int64)&v28[SizeOfHeapCommit_high] )
        {
          v41 = 0;
          goto LABEL_44;
        }
        v46 = v56++;
        if ( v46 >= 0x20 )
        {
          v41 = -1073741701;
          goto LABEL_44;
        }
        v41 = LdrpParseForwarderDescription(v14, &v75, &v65, &v53);
        if ( v41 < 0 )
          goto LABEL_44;
        LODWORD(Path[3]) = *((_DWORD *)v61 + 68);
        LODWORD(v50) = 2;
        v41 = LdrpLoadForwardedDll(&v75, (__int64)Path, (__int64)v55, (__int64)v61, v50, (__int64)&v61);
        if ( v41 < 0 )
          goto LABEL_44;
        v23 = v61;
        LdrpDereferenceModule((char *)v61);
        v21 = v65;
        v22 = v53;
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
      v34 = *((_DWORD *)v28 + 6) - 1;
      v35 = v34 / 2;
      if ( v34 >= 0 )
      {
        while ( 1 )
        {
          v36 = v21;
          v37 = v25 + *(unsigned int *)(v25 + *((unsigned int *)v28 + 8) + 4LL * v35) - (_QWORD)v21;
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
        v40 = *(unsigned __int16 *)(v25 + *((unsigned int *)v28 + 9) + 2LL * v35);
        SizeOfHeapCommit_high = v51;
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
      v14 = v57;
LABEL_44:
      if ( BYTE4(Path[15]) )
        RtlReleasePath(Path[0]);
      v53 = v41;
      if ( v41 >= 0 )
      {
        v42 = v60;
        if ( AvrfpAPILookupCallbacksEnabled )
        {
          AVrfCallAPILookupCallback(*(_QWORD *)(v60 + 48), *((_QWORD *)v55 + 6), v14, 1, (__int64)&v62);
          v14 = v62;
        }
        if ( v66 )
        {
          v67 = 0LL;
          v66(&v67, v55, v14, *(_QWORD *)(v42 + 48), 0LL);
          if ( v67 )
            v14 = v67;
        }
      }
      *v72 = v14;
      v43 = v52;
      LODWORD(v14) = v68;
      Heap = v58;
      v9 = v60;
      v12 = v55;
      v8 = v69;
      if ( v52 == (_DWORD)v68 )
      {
        Status = v41;
        v59 = *(_QWORD *)&v58[8 * (unsigned int)v68];
      }
      v13 = (char *)v63;
LABEL_53:
      v17 = v43 + 1;
      v52 = v17;
      v18 = ++v70;
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
LABEL_54:
        if ( Status < 0 )
        {
          v44 = LdrpRedirectDelayloadFailure(v9, (int)v12, v8, v74[0], v73, v71, Status);
          v59 = v44;
          if ( v44 && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073741702 || Status == -1073740671) )
            *(_QWORD *)&Heap[8 * (unsigned int)v14] = v44;
        }
        else
        {
          v44 = v59;
        }
        LdrpWriteBackProtectedDelayLoad((_RTL_SRWLOCK *)v9, v13, (__int64)Heap, v15, v14);
        if ( BaseAddress != Heap )
          RtlFreeHeap(LdrpHeap, 0, Heap);
        LdrpDereferenceModule((char *)v12);
        return v44;
      }
    }
  }
  v44 = LdrpRedirectDelayloadFailure(v9, 0, v8, v7, a4, (__int64)a5, DelayloadExportDll);
  v59 = v44;
  if ( v44 && v11 == -1073741515 )
    LdrpWriteBackProtectedDelayLoad((_RTL_SRWLOCK *)v9, a5, (__int64)&v59, 1u, 0);
  return v44;
}
