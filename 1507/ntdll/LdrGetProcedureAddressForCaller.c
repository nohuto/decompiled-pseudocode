/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180016020
 * Callers:
 *     LdrGetProcedureAddress @ 0x180003560 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x18007A0E0 (LdrGetProcedureAddressEx.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     LdrpGetProcedureAddress @ 0x180015BD0 (LdrpGetProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     RtlReleasePath @ 0x180035A90 (RtlReleasePath.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     LdrpInitializeGraphRecurse @ 0x180044D18 (LdrpInitializeGraphRecurse.c)
 *     LdrpReportError @ 0x18006A65C (LdrpReportError.c)
 *     LdrpParseForwarderDescription @ 0x18006DE40 (LdrpParseForwarderDescription.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpLoadForwardedDll @ 0x18007A1FC (LdrpLoadForwardedDll.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 *     AVrfCallAPILookupCallback @ 0x1800C4AE0 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        unsigned int a3,
        _QWORD *a4,
        char a5,
        __int64 a6)
{
  bool v6; // zf
  int v9; // r15d
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _BYTE *v12; // r13
  __int64 v13; // rsi
  _QWORD *v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  int v18; // r12d
  int v19; // r15d
  __int64 v20; // rbx
  const char *v21; // r14
  unsigned int v22; // r13d
  __int64 v23; // rdi
  int ProcedureAddress; // eax
  __int64 v25; // rdx
  int ForwardedDll; // ebx
  unsigned __int64 v27; // rdi
  __int64 v28; // r14
  _BYTE *v29; // rdi
  unsigned int v31; // eax
  __int64 v32; // rcx
  char v33; // [rsp+30h] [rbp-D0h]
  char v34[7]; // [rsp+31h] [rbp-CFh] BYREF
  char *v35; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *Heap; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h]
  unsigned int v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h]
  const char *v42; // [rsp+68h] [rbp-98h] BYREF
  char *v43; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v44; // [rsp+78h] [rbp-88h]
  __int128 v45; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v46[24]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v47[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v48[128]; // [rsp+130h] [rbp+30h] BYREF
  int v49; // [rsp+230h] [rbp+130h]

  v6 = (a5 & 1) == 0;
  v49 = a5 & 1;
  v41 = a6;
  v44 = a4;
  v39 = a3;
  v35 = 0LL;
  v33 = 0;
  if ( v6 || (void *)qword_180143090 != NtCurrentTeb()->ClientId.UniqueThread )
    v9 = 9;
  else
    v9 = 6;
  if ( a2 )
  {
    v10 = *(unsigned __int16 *)a2;
    v11 = v10 + 1;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v10 + 1) || (v12 = a2[1], Heap = v12, v12[v10]) )
    {
      if ( v11 <= 0x80 )
      {
        v12 = v48;
        Heap = v48;
      }
      else
      {
        Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(NtdllBaseTag + 1572864), v11);
        v12 = Heap;
        if ( !Heap )
          return 3221225626LL;
        v33 = 1;
      }
      memmove(v12, a2[1], v11 - 1);
      v12[v11 - 1] = 0;
    }
  }
  else
  {
    v12 = 0LL;
    Heap = 0LL;
  }
  while ( 2 )
  {
    v13 = 0LL;
    if ( !a1 )
    {
LABEL_79:
      ForwardedDll = -1073741515;
      v29 = Heap;
      goto LABEL_45;
    }
    if ( a1 == LdrpSystemDllBase )
    {
      v13 = LdrpNtDllDataTableEntry;
      v38 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
      goto LABEL_24;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v14 = (_QWORD *)LdrpModuleBaseAddressIndex;
    if ( !LdrpModuleBaseAddressIndex )
      goto LABEL_23;
    while ( 1 )
    {
      v15 = *(v14 - 19);
      if ( a1 < v15 )
        v16 = -1;
      else
        v16 = a1 > v15;
      if ( v16 < 0 )
      {
        v14 = (_QWORD *)*v14;
        goto LABEL_14;
      }
      if ( v16 <= 0 )
        break;
      v14 = (_QWORD *)v14[1];
LABEL_14:
      if ( !v14 )
        goto LABEL_23;
    }
    if ( v14 )
    {
      v13 = (__int64)(v14 - 25);
      v17 = *(v14 - 6);
      if ( *(_DWORD *)(v17 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v17 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 276));
      v38 = *(_DWORD *)(*(_QWORD *)(v13 + 152) + 56LL);
    }
LABEL_23:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_24:
    if ( !v13 )
      goto LABEL_79;
    v18 = v38;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 && v38 < v9 )
    {
      LdrpDereferenceModule(v13, 4096LL);
      LdrpDrainWorkQueue(0LL);
      LdrpDropLastInProgressCount();
      continue;
    }
    break;
  }
  v19 = v39;
  v20 = *(_QWORD *)(v13 + 80);
  v21 = v12;
  v42 = v12;
  v22 = 0;
  v37 = v39;
  v40 = v13;
  v23 = v13;
  memset(v47, 0, sizeof(v47));
  LODWORD(v47[3]) = 0;
  v47[4] = v20;
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v23 + 48), v21, v19, &v35);
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v31 = v22++;
    if ( v31 >= 0x20 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_34;
    }
    ForwardedDll = LdrpParseForwarderDescription(v35, v46, &v42, &v37);
    if ( ForwardedDll < 0 )
      goto LABEL_34;
    LODWORD(v47[3]) = *(_DWORD *)(v23 + 272);
    ForwardedDll = LdrpLoadForwardedDll((unsigned int)v46, (unsigned int)v47, v13, v23, 2, (__int64)&v40);
    if ( ForwardedDll < 0 )
      goto LABEL_34;
    v23 = v40;
    LdrpDereferenceModule(v40, v25);
    v21 = v42;
    v19 = v37;
  }
  if ( ProcedureAddress >= 0 )
  {
    v27 = *(_QWORD *)(v23 + 48);
    if ( qword_1801572F0 )
    {
      if ( v27 < *((_QWORD *)&xmmword_180157330 + 1)
        || v27 >= *((_QWORD *)&xmmword_180157330 + 1) + (unsigned __int64)(unsigned int)qword_180157340 )
      {
        RtlpxLookupFunctionTable(v27, (__int64 *)&v45);
      }
      else
      {
        v45 = xmmword_180157330;
      }
      if ( *((_QWORD *)&v45 + 1) != v27 )
        __fastfail(0x18u);
    }
  }
LABEL_34:
  if ( BYTE4(v47[15]) )
    RtlReleasePath(v47[0]);
  if ( ForwardedDll >= 0 )
  {
    if ( v18 == 7
      && !v49
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && (void *)qword_180143090 != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v32 = *(_QWORD *)(v13 + 152);
      v34[0] = 0;
      ForwardedDll = LdrpInitializeGraphRecurse(v32, 0LL, v34);
    }
    if ( ForwardedDll < 0 )
    {
      v35 = 0LL;
    }
    else
    {
      v28 = v41;
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback(v41, *(_QWORD *)(v13 + 48), (_DWORD)v35, 0, (__int64)&v35);
      if ( g_ShimsEnabled )
      {
        v43 = 0LL;
        ((void (__fastcall *)(char **, __int64, char *, _QWORD, __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                                 g_pfnSE_GetProcAddressForCaller,
                                                                                                 64
                                                                                               - (MEMORY[0x7FFE0330] & 0x3Fu))))(
          &v43,
          v13,
          v35,
          0LL,
          v28);
        if ( v43 )
          v35 = v43;
      }
    }
  }
  if ( ForwardedDll == -1073741515 || ForwardedDll == -1073741502 )
    ForwardedDll = -1073741702;
  LdrpDereferenceModule(v13, v25);
  v29 = Heap;
  if ( ForwardedDll == -1073741702 )
  {
    if ( Heap )
    {
      ForwardedDll = -1073741511;
    }
    else
    {
      v29 = (_BYTE *)v39;
      ForwardedDll = -1073741512;
    }
    LdrpReportError(0LL, v29, (unsigned int)ForwardedDll);
  }
LABEL_45:
  if ( v33 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v29);
  *v44 = v35;
  return (unsigned int)ForwardedDll;
}
