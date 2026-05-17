/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180031D60
 * Callers:
 *     LdrGetProcedureAddress @ 0x180075ED0 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x18007E3F0 (LdrGetProcedureAddressEx.c)
 * Callees:
 *     RtlReleasePath @ 0x1800091A0 (RtlReleasePath.c)
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     LdrpLoadForwardedDll @ 0x180013300 (LdrpLoadForwardedDll.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180032370 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpInitializeGraphRecurse @ 0x1800722B8 (LdrpInitializeGraphRecurse.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 *     LdrpReportError @ 0x18007AF88 (LdrpReportError.c)
 *     LdrpParseForwarderDescription @ 0x18007B844 (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     AVrfCallAPILookupCallback @ 0x1800D5DC0 (AVrfCallAPILookupCallback.c)
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
  _QWORD *v7; // r15
  int v10; // r14d
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 Heap; // r13
  __int64 v14; // rdi
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rbx
  unsigned int v21; // r12d
  __int64 v22; // r14
  __int64 v23; // rsi
  int ProcedureAddress; // eax
  int v25; // ebx
  unsigned __int64 v26; // rsi
  __int64 v27; // rsi
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // [rsp+30h] [rbp-D0h]
  _BYTE v36[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+40h] [rbp-C0h]
  unsigned int v39; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v45; // [rsp+70h] [rbp-90h]
  __int128 v46; // [rsp+78h] [rbp-88h] BYREF
  STRING v47; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v49; // [rsp+120h] [rbp+20h] BYREF
  int v50; // [rsp+220h] [rbp+120h]

  v6 = (a5 & 1) == 0;
  v50 = a5 & 1;
  v7 = (_QWORD *)a4;
  v43 = a6;
  v45 = (_QWORD *)a4;
  v40 = a3;
  v37 = 0LL;
  v35 = 0;
  if ( v6 || (void *)qword_18014C550 != NtCurrentTeb()->ClientId.UniqueThread )
    v10 = 9;
  else
    v10 = 6;
  if ( a2 )
  {
    v11 = *(unsigned __int16 *)a2;
    v12 = v11 + 1;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v11 + 1) || (Heap = (__int64)a2[1], *(_BYTE *)(v11 + Heap)) )
    {
      if ( v12 <= 0x80 )
      {
        Heap = (__int64)&v49;
      }
      else
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v12);
        if ( !Heap )
          return 3221225626LL;
        v35 = 1;
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
LABEL_80:
      v25 = -1073741515;
      goto LABEL_46;
    }
    if ( a1 == LdrpSystemDllBase )
    {
      v14 = LdrpNtDllDataTableEntry;
      v38 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
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
      v38 = *(_DWORD *)(*(_QWORD *)(v14 + 152) + 56LL);
    }
LABEL_23:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_24:
    if ( !v14 )
      goto LABEL_80;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 && v38 < v10 )
    {
      LdrpDereferenceModule(v14);
      LdrpDrainWorkQueue(0);
      LdrpDropLastInProgressCount(v32, v31, v33, v34);
      continue;
    }
    break;
  }
  v19 = v40;
  v20 = *(_QWORD *)(v14 + 80);
  v21 = 0;
  v39 = v40;
  v42 = Heap;
  v22 = Heap;
  v41 = v14;
  v23 = v14;
  memset(v48, 0, sizeof(v48));
  LODWORD(v48[3]) = 0;
  v48[4] = v20;
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v23 + 48), v22, v19, &v37);
    v25 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v29 = v21++;
    if ( v29 >= 0x20 )
    {
      v25 = -1073741701;
      goto LABEL_34;
    }
    v25 = LdrpParseForwarderDescription(v37, &v47, &v42, &v39);
    if ( v25 < 0 )
      goto LABEL_34;
    LODWORD(v48[3]) = *(_DWORD *)(v23 + 272);
    v25 = LdrpLoadForwardedDll(&v47, (int)v48, v14, v23, 2, (__int64)&v41);
    if ( v25 < 0 )
      goto LABEL_34;
    v23 = v41;
    LdrpDereferenceModule(v41);
    v22 = v42;
    v19 = v39;
  }
  if ( ProcedureAddress >= 0 )
  {
    v26 = *(_QWORD *)(v23 + 48);
    if ( qword_180163310 )
    {
      if ( v26 < *((_QWORD *)&xmmword_180163430 + 1)
        || v26 >= *((_QWORD *)&xmmword_180163430 + 1) + (unsigned __int64)(unsigned int)qword_180163440 )
      {
        RtlpxLookupFunctionTable(v26, &v46);
      }
      else
      {
        v46 = xmmword_180163430;
      }
      if ( *((_QWORD *)&v46 + 1) != v26 )
        __fastfail(0x18u);
    }
  }
LABEL_34:
  if ( BYTE4(v48[15]) )
    RtlReleasePath(v48[0]);
  if ( v25 >= 0 )
  {
    if ( v38 == 7
      && !v50
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && (void *)qword_18014C550 != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v30 = *(_QWORD *)(v14 + 152);
      v36[0] = 0;
      v25 = LdrpInitializeGraphRecurse(v30, 0LL, v36);
    }
    if ( v25 < 0 )
    {
      v37 = 0LL;
    }
    else
    {
      v27 = v43;
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback(v43, *(_QWORD *)(v14 + 48), v37, 0, (__int64)&v37);
      if ( g_ShimsEnabled )
      {
        v44 = 0LL;
        ((void (__fastcall *)(__int64 *, __int64, __int64, _QWORD, __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                                    g_pfnSE_GetProcAddressForCaller,
                                                                                                    64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
          &v44,
          v14,
          v37,
          0LL,
          v27);
        if ( v44 )
          v37 = v44;
      }
    }
  }
  if ( v25 == -1073741515 || v25 == -1073741502 )
    v25 = -1073741702;
  LdrpDereferenceModule(v14);
  if ( v25 == -1073741702 )
  {
    if ( Heap )
    {
      v25 = -1073741511;
    }
    else
    {
      Heap = v40;
      v25 = -1073741512;
    }
    LdrpReportError(0LL, Heap, (unsigned int)v25);
  }
  v7 = v45;
LABEL_46:
  if ( v35 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  *v7 = v37;
  return (unsigned int)v25;
}
