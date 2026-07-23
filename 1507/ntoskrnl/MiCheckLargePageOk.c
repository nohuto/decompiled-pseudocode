/*
 * XREFs of MiCheckLargePageOk @ 0x1407E074C
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiVaToPfn @ 0x14021F070 (MiVaToPfn.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r8
  __int64 v3; // r9
  char *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // r14
  ULONG_PTR v11; // r11
  ULONG_PTR v12; // r10
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 PteShadow; // r11
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // rbx
  __int64 v21; // rax
  ULONG_PTR *v22; // rdx
  ULONG_PTR *v23; // rcx
  ULONG_PTR v24; // rax
  ULONG_PTR v25; // r8
  ULONG_PTR v26; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  qword_14080B550 = v1;
  v3 = *(_QWORD *)v1;
  PsNtosImageBase = *(PVOID *)(v1 + 48);
  v4 = (char *)PsNtosImageBase + *(unsigned int *)(v1 + 64);
  MxHalDataTableEntry = v3;
  PsHalImageBase = *(PVOID *)(v3 + 48);
  PsNtosImageEnd = (__int64)v4;
  PsHalImageEnd = (__int64)PsHalImageBase + *(unsigned int *)(v3 + 64);
  if ( *(_QWORD *)(v1 + 48) >= *(_QWORD *)(v3 + 48) )
  {
    v5 = v3;
    v3 = v1;
  }
  else
  {
    v5 = v1;
  }
  v6 = *(_QWORD *)(v5 + 48);
  v7 = 0;
  if ( (*(_BYTE *)(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v6 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0 )
  {
    v7 = (*(_BYTE *)(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81;
  }
  v8 = *(_QWORD *)(v3 + 48);
  if ( (*(_BYTE *)(8 * ((v8 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v8 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    ++v7;
  }
  if ( !v7 )
    return 0LL;
  if ( v7 != 2 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, BugCheckParameter2, v7, 0LL);
  v10 = v8 + *(unsigned int *)(v3 + 64);
  v11 = -1LL;
  v12 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v13 = (((v10 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( v12 <= v13 )
  {
    v14 = v12 + 0x90482413000LL;
    do
    {
      BugCheckParameter4 = *(_QWORD *)v12;
      if ( v14 <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (BugCheckParameter4 & 1) != 0
        && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
      {
        v16 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8 * ((v12 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            BugCheckParameter4 |= 0x20uLL;
          if ( (v17 & 0x42) != 0 )
            BugCheckParameter4 |= 0x42uLL;
        }
      }
      v26 = BugCheckParameter4;
      if ( (BugCheckParameter4 & 0x80u) == 0LL )
        KeBugCheckEx(0x1Au, 0x3030200uLL, BugCheckParameter2, v12, BugCheckParameter4);
      if ( v11 == -1LL )
      {
        PteShadow = BugCheckParameter4;
        if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8 )
          PteShadow = MiReadPteShadow((__int64)&v26, BugCheckParameter4);
        v11 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
      }
      else
      {
        v19 = BugCheckParameter4;
        if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8 )
          v19 = MiReadPteShadow((__int64)&v26, BugCheckParameter4);
        if ( ((v19 >> 12) & 0xFFFFFFFFFLL) != v11 + 512 )
          KeBugCheckEx(0x1Au, 0x3030201uLL, BugCheckParameter2, v11, BugCheckParameter4);
        v11 += 512LL;
      }
      v12 += 8LL;
      v14 += 8LL;
    }
    while ( v12 <= v13 );
  }
  v20 = MiVaToPfn(v6) & 0xFFFFFFFFFFFFFE00uLL;
  v21 = MiVaToPfn(v10 - 1);
  v22 = (ULONG_PTR *)(BugCheckParameter2 + 32);
  v23 = *(ULONG_PTR **)(BugCheckParameter2 + 32);
  v24 = ((v21 + 512) & 0xFFFFFFFFFFFFFE00uLL) - v20;
  while ( 1 )
  {
    if ( v23 == v22 )
      goto LABEL_52;
    if ( v23[3] == v20 )
      break;
LABEL_42:
    v23 = (ULONG_PTR *)*v23;
  }
  if ( *((_DWORD *)v23 + 4) != 9 )
  {
    v23 = (ULONG_PTR *)(BugCheckParameter2 + 32);
    goto LABEL_47;
  }
  v25 = v23[4];
  if ( v24 > v25 )
  {
    v24 -= v25;
    v20 += v25;
    goto LABEL_42;
  }
  if ( v24 < v25 )
    v23 = (ULONG_PTR *)(BugCheckParameter2 + 32);
LABEL_47:
  if ( v23 == v22 )
LABEL_52:
    KeBugCheckEx(0x1Au, 0x3030202uLL, BugCheckParameter2, v20, v24);
  return 1LL;
}
