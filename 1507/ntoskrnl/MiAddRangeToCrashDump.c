/*
 * XREFs of MiAddRangeToCrashDump @ 0x1402180C8
 * Callers:
 *     MiAddRangeToCrashDump @ 0x1402180C8 (MiAddRangeToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140218688 (MmAddRangeToCrashDump.c)
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     KdCheckForDebugBreak @ 0x14014E92C (KdCheckForDebugBreak.c)
 *     MiAddRangeToCrashDump @ 0x1402180C8 (MiAddRangeToCrashDump.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiAddRangeToCrashDump(
        unsigned __int64 Process,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rbp
  int v6; // ebx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 (__fastcall **v16)(_QWORD, unsigned __int64, unsigned __int64, __int64); // r11
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  int v20; // eax
  __int64 PteShadow; // rax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 (__fastcall **v30)(_QWORD, __int64, __int64); // r11
  int v31; // eax
  int v32; // eax
  _BYTE v34[32]; // [rsp+80h] [rbp+80h] BYREF
  int v35; // [rsp+B0h] [rbp+B0h]
  unsigned __int64 v36; // [rsp+C0h] [rbp+C0h]
  __int64 v37; // [rsp+C8h] [rbp+C8h]

  v37 = a4;
  v35 = Process;
  v5 = (unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = 0;
  v7 = a2;
  if ( a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v7 = *(_QWORD *)(a4 + 16LL * a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * a5 + 8) )
    a3 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  v36 = a3;
  while ( v7 <= a3 )
  {
    if ( a5 == 3 )
    {
      KdCheckForDebugBreak();
      a3 = v36;
      a4 = v37;
    }
    v8 = *(_QWORD *)v7;
    if ( v7 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, a2)
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v9 = *(_QWORD *)(Process + 1520);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 8 * ((v7 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v10 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
    }
    *(_QWORD *)v5 = v8;
    a2 = v8 & 1;
    if ( (v8 & 1) == 0 && a5 )
      goto LABEL_83;
    if ( a5 == 3 )
    {
      Process = v7;
      v11 = 4LL;
      do
      {
        Process = (__int64)(Process << 25) >> 16;
        --v11;
      }
      while ( v11 );
      if ( *(_DWORD *)(a4 + 80) == 1 && Process + 0x70000000000LL <= 0x7FFFFFFFFFLL )
        goto LABEL_83;
      a3 = qword_14034EE00;
      if ( !qword_14034EE00 || Process < qword_14034EE00 )
      {
LABEL_64:
        if ( v5 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
          && v26
          && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          v27 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v27 )
          {
            v28 = *(_QWORD *)(v27 + 8 * ((v5 >> 3) & 0x1FF));
            if ( (v28 & 0x20) != 0 )
              v8 |= 0x20uLL;
            if ( (v28 & 0x42) != 0 )
              v8 |= 0x42uLL;
          }
        }
        if ( MI_IS_PFN((v8 >> 12) & 0xFFFFFFFFFLL) )
        {
          v31 = (*v30)(v30, v29, 1LL);
          if ( v31 < 0 && v6 >= 0 )
            v6 = v31;
        }
        v32 = MiAddRangeToCrashDump(
                v35,
                (__int64)(v7 << 25) >> 16,
                (unsigned int)((__int64)(v7 << 25) >> 16) + 4088,
                v37,
                a5 - 1);
        a3 = v36;
        if ( v32 < 0 && v6 >= 0 )
          v6 = v32;
        goto LABEL_83;
      }
      if ( Process < qword_14034EE00 + (qword_14034EDE0 << 21) )
        goto LABEL_82;
    }
    if ( a5 == 1 )
    {
      if ( (v8 & 0x80u) == 0LL )
        goto LABEL_64;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
        && v12
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        v13 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v8 |= 0x20uLL;
          if ( (v14 & 0x42) != 0 )
            v8 |= 0x42uLL;
        }
      }
      if ( !MI_IS_PFN((v8 >> 12) & 0xFFFFFFFFFLL) )
      {
LABEL_82:
        a3 = v36;
        goto LABEL_83;
      }
      v17 = (__int64)(v7 << 25) >> 16 << 25 >> 16;
      if ( v17 < *(_QWORD *)(v15 + 64) )
        v17 = *(_QWORD *)(v15 + 64);
      v18 = 1LL;
      v19 = (((__int64)((v7 << 25) + 0x10000000) >> 16 << 25 >> 16) - v17) >> 12;
      goto LABEL_44;
    }
    if ( a5 )
      goto LABEL_64;
    if ( (v8 & 1) != 0 )
    {
      if ( v5 + 0x90482413000LL > 0x7F8 )
        goto LABEL_55;
      PteShadow = MiReadPteShadow((unsigned __int64)v34 & 0xFFFFFFFFFFFFFFC0uLL, v8);
    }
    else
    {
      if ( (v8 & 0x400) != 0 || (v8 & 0x800) == 0 )
        goto LABEL_82;
      PteShadow = MiReverseSwizzleInvalidPte(v8, 0LL, a3, a4);
    }
    v8 = PteShadow;
LABEL_55:
    if ( !MI_IS_PFN((v8 >> 12) & 0xFFFFFFFFFLL) )
      goto LABEL_82;
    if ( v22 >= qword_14034EC70 && v22 < qword_14034EC70 + (qword_14034EC60 << 21) )
    {
      Process = 48 * v23 - 0x58000000000LL;
      v24 = *(_QWORD *)(Process + 8) | 0x8000000000000000uLL;
      if ( v24 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && v24 >= 0xFFFFF68000000000uLL )
      {
        a2 = 0x3FFFFFFFFFFFFFFFLL;
        if ( (*(_QWORD *)(Process + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          goto LABEL_82;
        if ( (*(_BYTE *)(Process + 34) & 7) != 6 )
          goto LABEL_82;
        v25 = *(_QWORD *)(Process + 40) & 0xFFFFFFFFFLL;
        Process = 0xFFFFFFFFDLL;
        if ( v25 != 0xFFFFFFFFDLL )
          goto LABEL_82;
      }
    }
    v18 = 2LL;
    v17 = v23;
    v19 = 1LL;
LABEL_44:
    v20 = (*v16)(v16, v17, v19, v18);
    if ( v20 >= 0 )
      goto LABEL_82;
    a3 = v36;
    if ( v6 >= 0 )
      v6 = v20;
LABEL_83:
    v7 += 8LL;
    a4 = v37;
  }
  return (unsigned int)v6;
}
