/*
 * XREFs of MiAddRangeToCrashDump @ 0x1401E7468
 * Callers:
 *     MiAddRangeToCrashDump @ 0x1401E7468 (MiAddRangeToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x1401E7880 (MmAddRangeToCrashDump.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     KdCheckForDebugBreak @ 0x140114668 (KdCheckForDebugBreak.c)
 *     MiIsPageSecured @ 0x1401E4A18 (MiIsPageSecured.c)
 *     MiAddRangeToCrashDump @ 0x1401E7468 (MiAddRangeToCrashDump.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64),
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int v5; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int16 v8; // r9
  __int64 v9; // r11
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  BOOL IsPfnInline; // eax
  __int64 v14; // r8
  __int64 v15; // r10
  char v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // r9
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rcx
  int v30; // eax
  _BYTE v32[32]; // [rsp+80h] [rbp+80h] BYREF
  unsigned __int64 i; // [rsp+C0h] [rbp+C0h]

  v5 = 0;
  v6 = a2;
  if ( a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v6 = *(_QWORD *)(a4 + 16LL * a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * a5 + 8) )
    a3 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  for ( i = a3; v6 <= i; v6 += 8LL )
  {
    if ( a5 == 3 )
      KdCheckForDebugBreak();
    v7 = MI_READ_PTE_LOCK_FREE(v6);
    *(_QWORD *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) = v7;
    v8 = v7;
    v9 = v7 & 1;
    if ( (v7 & 1) != 0 )
    {
      v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) >> 12) & 0xFFFFFFFFFLL;
      if ( v10 == MiState[a5 + 597] || v10 == MiState[a5 + 593] )
        continue;
    }
    else
    {
      if ( a5 )
        continue;
      v10 = 0LL;
    }
    if ( a5 == 3 )
    {
      v11 = v6;
      v12 = 4LL;
      do
      {
        v11 = (__int64)(v11 << 25) >> 16;
        --v12;
      }
      while ( v12 );
      if ( *(_DWORD *)(a4 + 80) == 1 && v11 >= qword_140326950 && v11 < qword_140326950 + 0x8000000000LL )
        continue;
      if ( !qword_140326CC0 || v11 < qword_140326CC0 )
      {
LABEL_24:
        IsPfnInline = MiIsPfnInline(v10);
        if ( v16 >= 0 )
        {
          if ( IsPfnInline )
          {
            v23 = (*a1)(a1, v15, 1LL);
            if ( v23 < 0 && v5 >= 0 )
              v5 = v23;
          }
          v24 = MiAddRangeToCrashDump(
                  (_DWORD)a1,
                  (__int64)(v6 << 25) >> 16,
                  (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
                  a4,
                  a5 - 1);
          if ( v24 < 0 && v5 >= 0 )
            v5 = v24;
          continue;
        }
        if ( IsPfnInline )
        {
          v17 = v14 << 25;
          v18 = (__int64)((v6 << 25) - (v14 << 25)) >> 16;
          v19 = (__int64)((v6 << 25) - (v14 << 25) + 0x10000000) >> 16;
          v20 = a5;
          do
          {
            v18 = (__int64)((v18 << 25) - v17) >> 16;
            v19 = ((v19 << 25) - v17) >> 16;
            --v20;
          }
          while ( v20 );
          v21 = 1LL;
          if ( v18 < *(_QWORD *)(a4 + 64) )
            v18 = *(_QWORD *)(a4 + 64);
          v22 = (v19 - v18) >> 12;
          goto LABEL_54;
        }
        continue;
      }
      if ( v11 < qword_140326CC0 + (qword_140326CA0 << 21) )
        continue;
    }
    if ( a5 )
      goto LABEL_24;
    if ( !v9 )
    {
      if ( (v8 & 0x400) != 0 || (v8 & 0x800) == 0 )
        continue;
      v10 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL);
    }
    if ( MiIsPfnInline(v10) && !MiIsPageSecured(48 * v25 - 0x58000000000LL) )
    {
      if ( v28 < qword_140326B30
        || v28 >= qword_140326B30 + (qword_140326B20 << 21)
        || (v29 = *(_QWORD *)(v26 + 8) | 0x8000000000000000uLL, v29 > 0xFFFFF6BFFFFFFF78uLL)
        || v29 < 0xFFFFF68000000000uLL
        || (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
        && (*(_BYTE *)(v26 + 34) & 7) == 6
        && (*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      {
        v21 = 3842LL;
        v22 = 1LL;
        v18 = v27;
LABEL_54:
        v30 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, __int64, __int64), unsigned __int64, __int64, __int64))*a1)(
                a1,
                v18,
                v22,
                v21);
        if ( v30 < 0 && v5 >= 0 )
          v5 = v30;
      }
    }
  }
  return (unsigned int)v5;
}
