/*
 * XREFs of MiAddRangeToCrashDump @ 0x1401D5D2C
 * Callers:
 *     MiAddRangeToCrashDump @ 0x1401D5D2C (MiAddRangeToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x1401D61E4 (MmAddRangeToCrashDump.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     KdCheckForDebugBreak @ 0x140119A78 (KdCheckForDebugBreak.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPageSecured @ 0x1401D3FF0 (MiIsPageSecured.c)
 *     MiAddRangeToCrashDump @ 0x1401D5D2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64),
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int v6; // edi
  unsigned __int64 v8; // rsi
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r10
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r10
  __int64 v27; // r11
  unsigned __int64 v28; // rcx
  __int64 v29; // r10
  int v30; // eax
  int v31; // eax
  _BYTE v33[48]; // [rsp+90h] [rbp+90h] BYREF
  unsigned __int64 v35; // [rsp+E0h] [rbp+E0h]

  v6 = 0;
  v8 = (unsigned __int64)a2;
  v9 = a5;
  *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a5;
  if ( (unsigned __int64)a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v8 = *(_QWORD *)(a4 + 16LL * a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * a5 + 8) )
    a3 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  v35 = a3;
  while ( v8 <= v35 )
  {
    if ( v9 == 3 )
      KdCheckForDebugBreak();
    v10 = MI_READ_PTE_LOCK_FREE((__int64 *)v8);
    *(_QWORD *)((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) = v10;
    v11 = v10 & 1;
    v12 = v10;
    *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v11;
    if ( (v10 & 1) != 0 )
    {
      v13 = MI_READ_PTE_LOCK_FREE((__int64 *)((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL));
      v14 = *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v9 = a5;
      v15 = (v13 >> 12) & 0xFFFFFFFFFLL;
      if ( v15 == MiState[v14 + 545] || v15 == MiState[v14 + 541] )
        goto LABEL_56;
      v11 = *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    else
    {
      v9 = a5;
      if ( a5 )
        goto LABEL_56;
      v15 = 0LL;
    }
    if ( v9 != 3 )
      goto LABEL_23;
    v16 = v8;
    v17 = 4LL;
    do
    {
      v16 = (__int64)(v16 << 25) >> 16;
      --v17;
    }
    while ( v17 );
    if ( *(_DWORD *)(a4 + 80) != 1 || v16 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    {
      if ( !qword_1402FE940 || v16 < qword_1402FE940 )
      {
LABEL_47:
        if ( MI_IS_PFN(v15) )
        {
          v30 = (*a1)(a1, v29, 1LL);
          if ( v30 < 0 && v6 >= 0 )
            v6 = v30;
        }
        v31 = MiAddRangeToCrashDump(
                (_DWORD)a1,
                (__int64)(v8 << 25) >> 16,
                (unsigned int)((__int64)(v8 << 25) >> 16) + 4088,
                a4,
                a5 - 1);
        v9 = a5;
        if ( v31 < 0 && v6 >= 0 )
          v6 = v31;
        goto LABEL_56;
      }
      if ( v16 >= qword_1402FE940 + (qword_1402FE920 << 21) )
      {
LABEL_23:
        if ( v9 == 1 )
        {
          if ( (v12 & 0x80u) == 0LL )
            goto LABEL_47;
          if ( MI_IS_PFN(v15) )
          {
            v19 = 1LL;
            v20 = (__int64)(v8 << 25) >> 16 << 25 >> 16;
            if ( v20 < *(_QWORD *)(v18 + 64) )
              v20 = *(_QWORD *)(v18 + 64);
            v21 = (((__int64)((v8 << 25) + 0x10000000) >> 16 << 25 >> 16) - v20) >> 12;
            goto LABEL_29;
          }
        }
        else
        {
          if ( v9 )
            goto LABEL_47;
          if ( !v11 )
          {
            if ( (v12 & 0x400) != 0 || (v12 & 0x800) == 0 )
              goto LABEL_56;
            v15 = (v12 >> 12) & 0xFFFFFFFFFLL;
          }
          if ( MI_IS_PFN(v15) && !MiIsPageSecured(48 * v23 - 0x58000000000LL) )
          {
            if ( v25 < qword_1402FE7B0
              || v25 >= qword_1402FE7B0 + (qword_1402FE7A0 << 21)
              || (v28 = *(_QWORD *)(v24 + 8) | 0x8000000000000000uLL,
                  v28 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
              || v28 < 0xFFFFF68000000000uLL
              || (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
              && (*(_BYTE *)(v24 + 34) & 7) == 6
              && (v27 & *(_QWORD *)(v24 + 40)) == 0xFFFFFFFFDLL )
            {
              v19 = 3842LL;
              v21 = 1LL;
              v20 = v26;
LABEL_29:
              v22 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, __int64, __int64), unsigned __int64, unsigned __int64, __int64))*a1)(
                      a1,
                      v20,
                      v21,
                      v19);
              if ( v22 < 0 )
              {
                v9 = a5;
                if ( v6 >= 0 )
                  v6 = v22;
                goto LABEL_56;
              }
            }
          }
        }
        v9 = a5;
      }
    }
LABEL_56:
    v8 += 8LL;
  }
  return (unsigned int)v6;
}
