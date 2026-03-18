/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiInsertWsle @ 0x1400AD8A0 (MiInsertWsle.c)
 *     MiClearPteAccessed @ 0x1400ADE80 (MiClearPteAccessed.c)
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiFlushTbListEarly @ 0x1401118F0 (MiFlushTbListEarly.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 */

void __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2)
{
  int *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // r14
  unsigned __int64 v8; // r9
  _KPROCESS *Process; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 PteShadow; // rax
  int v23; // ecx
  char v24; // al
  unsigned int v25; // eax
  int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rcx
  unsigned __int64 v30; // [rsp+30h] [rbp-118h]
  int v31; // [rsp+38h] [rbp-110h]
  _QWORD v32[2]; // [rsp+40h] [rbp-108h] BYREF
  int v33; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v34; // [rsp+54h] [rbp-F4h]
  __int64 v35; // [rsp+58h] [rbp-F0h]
  __int64 v36; // [rsp+60h] [rbp-E8h]
  __int64 v37; // [rsp+68h] [rbp-E0h]

  if ( (a2 & 0x10) != 0 )
  {
    v3 = &v33;
    v35 = 20LL;
    v33 = MiTbFlushType(a1);
    v34 = 0;
    v36 = 0LL;
    v37 = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 184);
  v31 = dword_14034F248;
  v5 = *(unsigned int *)(v4 + 64);
  v6 = *(_QWORD *)(v4 + 496);
  v7 = (__int64 *)(v6 + v5 * *(_QWORD *)(v4 + 8));
  v8 = v6 + v5 * *(_QWORD *)(v4 + 16);
  v30 = v8;
  if ( (unsigned __int64)v7 <= v8 )
  {
    Process = (_KPROCESS *)0xFFFF000000000000LL;
    v10 = 0x12090482600LL;
    v11 = 0x8000000000000000uLL;
    while ( 1 )
    {
      v12 = *v7;
      if ( (*v7 & 1) != 0 )
        break;
LABEL_54:
      v10 = 0x12090482600LL;
      v7 = (__int64 *)((char *)v7 + *(unsigned int *)(v4 + 64));
      v11 = 0x8000000000000000uLL;
      if ( (unsigned __int64)v7 > v8 )
        goto LABEL_55;
    }
    if ( (v12 & 0x800000000000LL) != 0 )
      v13 = v12 | 0xFFFF000000000000uLL;
    else
      v13 = v12 & 0xFFFFFFFFFFFFLL;
    v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = *(_QWORD *)v14;
    if ( v14 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(0xFFFF000000000000uLL, v15)
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v16 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 8 * ((v14 >> 3) & 0x1FF));
        if ( (v17 & 0x20) != 0 )
          v15 |= 0x20uLL;
        if ( (v17 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
    }
    v32[0] = v15;
    if ( (unsigned __int64)&v32[v10] <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v15)
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v18 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)v32 >> 3) & 0x1FF));
        if ( (v19 & 0x20) != 0 )
          v15 |= 0x20uLL;
        if ( (v19 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
    }
    v20 = 48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v21 = *(_QWORD *)(v20 + 8);
    if ( (v21 & v11) == 0 )
    {
      if ( (unsigned int)MiDemoteCombinedPte(v14, v11 | v21) == 1 )
      {
        PteShadow = *(_QWORD *)v14;
        if ( v14 + 0x90482413000LL <= 0x7F8 )
          PteShadow = MiReadPteShadow(v14, *(_QWORD *)v14);
        v32[0] = PteShadow;
      }
      v8 = v30;
    }
    if ( (v32[0] & 0x20) == 0 )
    {
LABEL_53:
      Process = (_KPROCESS *)0xFFFF000000000000LL;
      goto LABEL_54;
    }
    v23 = (*(_DWORD *)v7 >> 9) & 7;
    if ( v23 == 7 && ((v24 = *(_BYTE *)(v20 + 35), (v24 & 8) == 0) ? (v25 = v24 & 7) : (v25 = 5), v25 < dword_14034F270) )
    {
      v26 = 0;
    }
    else
    {
      v26 = 1;
      if ( (unsigned int)(v23 - 1) <= 5 )
      {
        --*(_QWORD *)(a1 + 8LL * (unsigned int)(v23 - 1) + 40);
        MiRemoveEntryWsle(v4, v7);
        *v7 &= 0xFFFFFFFFFFFFF1FFuLL;
        MiInsertWsle(v27, (unsigned __int64 *)v7, 0);
      }
    }
    if ( (unsigned int)MiClearPteAccessed(a1, v20, (__int64 *)v14, (unsigned __int64 *)v7, (__int64)v3, v31) == 1 )
    {
      if ( v26 == 1 && v31 )
      {
        if ( !v3 )
        {
          MiLogPageAccess(a1, v14, v28);
          goto LABEL_52;
        }
      }
      else if ( !v3 )
      {
        goto LABEL_52;
      }
      MiFlushTbListEarly((__int64)v3, 0);
    }
LABEL_52:
    v8 = v30;
    goto LABEL_53;
  }
LABEL_55:
  if ( v3 )
    MiFlushTbList((__int64)v3);
  v29 = *(_QWORD **)(a1 + 16);
  if ( v29 )
  {
    MiEmptyPageAccessLog(v29);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
