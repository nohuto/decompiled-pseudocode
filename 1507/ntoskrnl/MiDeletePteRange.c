/*
 * XREFs of MiDeletePteRange @ 0x140038650
 * Callers:
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiConvertWsleHash @ 0x1401063E0 (MiConvertWsleHash.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     MiDeleteAllHashMappings @ 0x140124F08 (MiDeleteAllHashMappings.c)
 *     MiDeleteExcessWorkingSetPages @ 0x1402135DC (MiDeleteExcessWorkingSetPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     MiFreeUnmappedPageTables @ 0x140039270 (MiFreeUnmappedPageTables.c)
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiReplicatePteChange @ 0x14016D0F4 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiDeletePteRange(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // r14
  int v7; // eax
  int v8; // r9d
  __int64 v9; // r8
  ULONG_PTR v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  _KPROCESS *Process; // rcx
  ULONG_PTR NextPageTable; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 updated; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  ULONG_PTR v28; // r15
  unsigned int v29; // r14d
  ULONG_PTR v30; // rbx
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int16 v35; // ax
  unsigned __int64 v36; // rbx
  unsigned __int8 v37; // al
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  char v40; // al
  __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+38h] [rbp-C8h]
  __int64 v44; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v45; // [rsp+48h] [rbp-B8h]
  __int64 VmPartition; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v47; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v48; // [rsp+60h] [rbp-A0h]
  char v49[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  int v54; // [rsp+90h] [rbp-70h] BYREF
  __int16 v55; // [rsp+94h] [rbp-6Ch]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]

  v43 = a4;
  v51 = 0LL;
  v50 = 0LL;
  v4 = a2;
  v52 = 0LL;
  v53 = 0LL;
  VmPartition = MiGetVmPartition(a1, a2, a3, a4);
  v6 = VmPartition;
  v56 = 20LL;
  v7 = MiTbFlushType(a1);
  v10 = v9 - 8;
  v54 = v7;
  v55 = 0;
  v11 = 0LL;
  v45 = 0LL;
  v12 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v48 = v9 - 8;
  v42 = 0LL;
  if ( v4 <= v9 - 8 )
  {
    while ( 1 )
    {
      LOBYTE(v8) = 17;
      NextPageTable = MiGetNextPageTable(v4, v10, 1, v8, 1, (__int64)v49);
      if ( !NextPageTable )
        goto LABEL_66;
      do
      {
        v15 = *(_QWORD *)NextPageTable;
        v16 = NextPageTable + 0x90482413000LL;
        v17 = *(_QWORD *)NextPageTable;
        if ( NextPageTable + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v15)
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v18 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8 * ((NextPageTable >> 3) & 0x1FF));
            if ( (v19 & 0x20) != 0 )
              v17 |= 0x20uLL;
            if ( (v19 & 0x42) != 0 )
              v17 |= 0x42uLL;
          }
        }
        if ( (v17 & 1) != 0 )
        {
          if ( (v43 & 0x20) != 0 )
          {
            if ( v16 <= 0x7F8
              && (unsigned int)MiPteHasShadow(Process, v15)
              && (v15 & 1) != 0
              && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
            {
              v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v20 )
              {
                v21 = *(_QWORD *)(v20 + 8 * ((NextPageTable >> 3) & 0x1FF));
                if ( (v21 & 0x20) != 0 )
                  v15 |= 0x20uLL;
                if ( (v21 & 0x42) != 0 )
                  v15 |= 0x42uLL;
              }
            }
            updated = MiUpdatePageFileHighInPte(
                        *(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16),
                        0LL);
            *(_QWORD *)(v23 + 16) = updated;
          }
          MiDeleteValidSystemPte(NextPageTable, (__int64)&v42);
LABEL_27:
          ++v12;
          goto LABEL_44;
        }
        if ( (v17 & 0x400) != 0 )
          goto LABEL_44;
        if ( (v17 & 0x800) != 0 )
        {
          if ( (unsigned int)MiDeleteTransitionPte(NextPageTable) != 1 )
            goto LABEL_27;
          v17 = *(_QWORD *)NextPageTable;
          if ( v16 <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v24)
            && (v17 & 1) != 0
            && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
          {
            v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 8 * ((NextPageTable >> 3) & 0x1FF));
              if ( (v26 & 0x20) != 0 )
                v17 |= 0x20uLL;
              if ( (v26 & 0x42) != 0 )
                v17 |= 0x42uLL;
            }
          }
        }
        MiReleasePageFileSpace(VmPartition, v17, 1LL);
        if ( v17 )
        {
          ++v12;
          *(_QWORD *)NextPageTable = 0LL;
          if ( v16 <= 0x7F8 )
            MiWritePteShadow(NextPageTable, 0LL);
        }
LABEL_44:
        NextPageTable += 8LL;
      }
      while ( NextPageTable <= v10 && (NextPageTable & 0xFFF) != 0 );
      v44 = v12;
      v47 = NextPageTable;
      MiFlushTbList(&v54);
      MiFreeUnmappedPageTables(v42, &v50);
      v28 = NextPageTable - 8;
      v42 = 0LL;
      v4 = v45;
      v29 = 1;
      v30 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v31 = *(_QWORD *)v30;
        if ( v30 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(v27, v31)
          && (v31 & 1) != 0
          && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
        {
          v32 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 8 * ((v30 >> 3) & 0x1FF));
            if ( (v33 & 0x20) != 0 )
              v31 |= 0x20uLL;
            if ( (v33 & 0x42) != 0 )
              v31 |= 0x42uLL;
          }
        }
        v34 = 48 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          break;
        v35 = *(_WORD *)(v34 + 32);
        if ( v35 != 1 && (v35 != 2 || (*(_BYTE *)(v34 + 34) & 8) == 0) )
          break;
        MiDeleteValidSystemPte(v30, (__int64)&v42);
        if ( v29 == 3 && *(_QWORD *)(a1 + 184) != 0xFFFFF58010804000uLL )
          MiReplicatePteChange(v28, v28);
        MiFlushTbList(&v54);
        MiFreeUnmappedPageTables(v42, &v50);
        v42 = 0LL;
        ++v4;
        v30 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v29;
      }
      while ( v29 < 4 );
      v10 = v48;
      v12 = v44;
      v45 = v4;
      LODWORD(v4) = v47;
      if ( v47 > v48 )
      {
LABEL_66:
        v6 = VmPartition;
        LOBYTE(v8) = v43;
        v11 = v45;
        break;
      }
    }
  }
  v36 = v11 + v12;
  if ( (v8 & 0x10) != 0 )
  {
    v37 = *(_BYTE *)(a1 + 216) & 7;
    if ( v37 != 1 )
    {
      v38 = *(_QWORD *)(a1 + 144);
      v39 = *(_QWORD *)(a1 + 152) - v36;
      *(_QWORD *)(a1 + 152) = v39;
      if ( v38 )
      {
        if ( v37 >= 2u || v39 + v36 <= v38 )
        {
          v36 = 0LL;
        }
        else if ( v39 < v38 )
        {
          v36 += v39 - v38;
        }
      }
    }
  }
  else if ( (v8 & 0x20) != 0 )
  {
    if ( !v36 )
      return v36;
    v40 = *(_BYTE *)(a1 + 216);
    *(_QWORD *)(a1 + 160) -= v36;
    if ( (v40 & 7) != 1 )
      _InterlockedExchangeAdd64(&qword_14034FCF8, -(__int64)v36);
  }
  if ( v36 )
  {
    if ( (__int16 *)v6 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v36);
      _InterlockedExchangeAdd64(&qword_14034F848, v36);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 5568), v36);
    }
    v36 -= v51;
    MiReturnCommit(v6, v36);
  }
  return v36;
}
