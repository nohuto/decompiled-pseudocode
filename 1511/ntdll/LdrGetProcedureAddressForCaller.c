/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180032870
 * Callers:
 *     LdrGetProcedureAddress @ 0x18004EE30 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x1800812F0 (LdrGetProcedureAddressEx.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrpLoadForwardedDll @ 0x180010DF8 (LdrpLoadForwardedDll.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleasePath @ 0x18002F730 (RtlReleasePath.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180034810 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 *     LdrpInitializeGraphRecurse @ 0x180071E9C (LdrpInitializeGraphRecurse.c)
 *     LdrpReportError @ 0x1800785E8 (LdrpReportError.c)
 *     LdrpParseForwarderDescription @ 0x180078D08 (LdrpParseForwarderDescription.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     AVrfCallAPILookupCallback @ 0x1800CDE10 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  bool v6; // zf
  _QWORD *v7; // r12
  int v10; // r15d
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned __int64 Heap; // r13
  __int64 v14; // r14
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rbx
  unsigned int v21; // r12d
  unsigned __int64 v22; // rsi
  __int64 v23; // rdi
  int ProcedureAddress; // eax
  char *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int ForwardedDll; // ebx
  unsigned __int64 v29; // rdi
  __int64 v30; // rsi
  unsigned int v32; // eax
  __int64 v33; // rcx
  char v34; // [rsp+30h] [rbp-D0h]
  _BYTE v35[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+40h] [rbp-C0h]
  unsigned int v38; // [rsp+44h] [rbp-BCh]
  unsigned int v39; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int128 v45; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v46[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v48; // [rsp+120h] [rbp+20h] BYREF
  int v49; // [rsp+220h] [rbp+120h]

  v6 = (a5 & 1) == 0;
  v49 = a5 & 1;
  v7 = (_QWORD *)a4;
  v44 = a6;
  v41 = (_QWORD *)a4;
  v38 = a3;
  v36 = 0LL;
  v34 = 0;
  if ( v6 || (void *)qword_1801421C0 != NtCurrentTeb()->ClientId.UniqueThread )
    v10 = 9;
  else
    v10 = 6;
  if ( a2 )
  {
    v11 = *(unsigned __int16 *)a2;
    v12 = v11 + 1;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v11 + 1)
      || (Heap = (unsigned __int64)a2[1], *(_BYTE *)(v11 + Heap)) )
    {
      if ( v12 <= 0x80 )
      {
        Heap = (unsigned __int64)&v48;
      }
      else
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v12);
        if ( !Heap )
          return 3221225626LL;
        v34 = 1;
      }
      memmove((void *)Heap, a2[1], v12 - 1);
      *(_BYTE *)(v12 - 1 + Heap) = 0;
    }
  }
  else
  {
    Heap = 0LL;
  }
  while ( 2 )
  {
    v14 = 0LL;
    if ( !a1 )
    {
LABEL_68:
      ForwardedDll = -1073741515;
      goto LABEL_46;
    }
    if ( a1 == LdrpSystemDllBase )
    {
      v14 = LdrpNtDllDataTableEntry;
      v37 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
      goto LABEL_24;
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (char *)0x1000, a3, a4);
    v15 = (_QWORD *)LdrpModuleBaseAddressIndex;
    if ( !LdrpModuleBaseAddressIndex )
      goto LABEL_23;
    while ( 1 )
    {
      v16 = *(v15 - 19);
      if ( a1 < v16 )
        v17 = -1;
      else
        v17 = a1 > v16;
      if ( v17 < 0 )
      {
        v15 = (_QWORD *)*v15;
        goto LABEL_14;
      }
      if ( v17 <= 0 )
        break;
      v15 = (_QWORD *)v15[1];
LABEL_14:
      if ( !v15 )
        goto LABEL_23;
    }
    if ( v15 )
    {
      v14 = (__int64)(v15 - 25);
      v18 = *(v15 - 6);
      if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 276));
      v37 = *(_DWORD *)(*(_QWORD *)(v14 + 152) + 56LL);
    }
LABEL_23:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_24:
    if ( !v14 )
      goto LABEL_68;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 && v37 < v10 )
    {
      LdrpDereferenceModule(v14, (char *)0x1000, a3, a4);
      LdrpDrainWorkQueue(0);
      LdrpDropLastInProgressCount();
      continue;
    }
    break;
  }
  v19 = v38;
  v20 = *(_QWORD *)(v14 + 80);
  v21 = 0;
  v39 = v38;
  v40 = Heap;
  v22 = Heap;
  v43 = v14;
  v23 = v14;
  memset(v47, 0, sizeof(v47));
  LODWORD(v47[3]) = 0;
  v47[4] = v20;
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v23 + 48), v22, v19, &v36);
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v32 = v21++;
    if ( v32 >= 0x20 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_34;
    }
    ForwardedDll = LdrpParseForwarderDescription(v36, v46, &v40, &v39);
    if ( ForwardedDll < 0 )
      goto LABEL_34;
    LODWORD(v47[3]) = *(_DWORD *)(v23 + 272);
    ForwardedDll = LdrpLoadForwardedDll((__int64)v46, (int)v47, v14, v23, 2, (__int64)&v43);
    if ( ForwardedDll < 0 )
      goto LABEL_34;
    v23 = v43;
    LdrpDereferenceModule(v43, v25, v26, v27);
    v22 = v40;
    v19 = v39;
  }
  if ( ProcedureAddress >= 0 )
  {
    v29 = *(_QWORD *)(v23 + 48);
    if ( qword_1801552F0 )
    {
      if ( v29 < *((_QWORD *)&xmmword_180155330 + 1)
        || v29 >= *((_QWORD *)&xmmword_180155330 + 1) + (unsigned __int64)(unsigned int)qword_180155340 )
      {
        RtlpxLookupFunctionTable(v29, &v45);
      }
      else
      {
        v45 = xmmword_180155330;
      }
      if ( *((_QWORD *)&v45 + 1) != v29 )
        __fastfail(0x18u);
    }
  }
LABEL_34:
  if ( BYTE4(v47[15]) )
    RtlReleasePath(v47[0], v25, v26, v27);
  if ( ForwardedDll >= 0 )
  {
    if ( v37 == 7
      && !v49
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && (void *)qword_1801421C0 != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v33 = *(_QWORD *)(v14 + 152);
      v35[0] = 0;
      ForwardedDll = LdrpInitializeGraphRecurse(v33, 0LL, v35);
    }
    if ( ForwardedDll < 0 )
    {
      v36 = 0LL;
    }
    else
    {
      v30 = v44;
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback(v44, *(_QWORD *)(v14 + 48), v36, 0, (__int64)&v36);
      if ( g_ShimsEnabled )
      {
        v42 = 0LL;
        ((void (__fastcall *)(__int64 *, __int64, __int64, _QWORD, __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                                    g_pfnSE_GetProcAddressForCaller,
                                                                                                    64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
          &v42,
          v14,
          v36,
          0LL,
          v30);
        if ( v42 )
          v36 = v42;
      }
    }
  }
  if ( ForwardedDll == -1073741515 || ForwardedDll == -1073741502 )
    ForwardedDll = -1073741702;
  LdrpDereferenceModule(v14, v25, v26, v27);
  if ( ForwardedDll == -1073741702 )
  {
    if ( Heap )
    {
      ForwardedDll = -1073741511;
    }
    else
    {
      Heap = v38;
      ForwardedDll = -1073741512;
    }
    LdrpReportError(0LL, Heap, (unsigned int)ForwardedDll);
  }
  v7 = v41;
LABEL_46:
  if ( v34 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  *v7 = v36;
  return (unsigned int)ForwardedDll;
}
