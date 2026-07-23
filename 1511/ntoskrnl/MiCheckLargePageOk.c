/*
 * XREFs of MiCheckLargePageOk @ 0x14076BC88
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCheckLargePageOk(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r13
  _QWORD *v17; // rcx
  __int64 v18; // r11
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdi
  __int64 i; // r8
  _QWORD *v23; // rax
  BOOL v24; // edx
  _QWORD *v25; // rbx
  unsigned __int64 v26; // r10
  _QWORD *v27; // r8
  __int64 v28; // rsi
  _QWORD *v29; // rbx
  __int64 v30; // r10
  unsigned __int64 v31; // rax

  v1 = *(_QWORD *)(a1 + 16);
  qword_140717510 = v1;
  v3 = -1LL;
  v4 = *(_QWORD *)(v1 + 48);
  v5 = MI_READ_PTE_LOCK_FREE((__int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  v6 = *(unsigned int *)(v1 + 64);
  PsNtosImageBase = (PVOID)v4;
  v7 = (v5 >> 12) & 0xFFFFFFFFFLL;
  v8 = *(unsigned int *)(v1 + 64);
  v9 = *(_QWORD *)v1;
  PsNtosImageEnd = v4 + v8;
  MxHalDataTableEntry = v9;
  v10 = v7 & 0xFFFFFFFFFFFFFE00uLL;
  v11 = v7 + (v6 >> 12) - 1;
  v12 = *(_QWORD *)(v9 + 48);
  v13 = MI_GET_PAGE_FRAME_FROM_PTE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v14 = *(unsigned int *)(v9 + 64);
  v15 = v13;
  PsHalImageBase = (PVOID)v12;
  v16 = v14 >> 12;
  PsHalImageEnd = v12 + *(unsigned int *)(v9 + 64);
  if ( MxUseLargePagesForKernelAndHal )
  {
    v17 = (_QWORD *)(a1 + 32);
    v18 = v7;
    v19 = *(_QWORD **)(a1 + 32);
    while ( 1 )
    {
      v20 = v19;
      v21 = (v11 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      for ( i = v11 + 1; v20 != v17; v20 = (_QWORD *)*v20 )
      {
        v3 = (__int64)v20;
        if ( v20[3] == v18 )
          break;
      }
      v23 = *(_QWORD **)v3;
      v24 = *(_QWORD **)v3 != v17 || (i & 0x1FF) == 0;
      do
      {
        if ( v23 == v17 )
          break;
        v25 = v23;
        v23 = (_QWORD *)*v23;
        v26 = v25[3];
        if ( v26 >= v21 )
          break;
        if ( v26 != i )
          return 0LL;
        i += v25[4];
        if ( *((_DWORD *)v25 + 4) != 5 && v26 != v7 && v26 != v15 )
        {
          v24 = 0;
          break;
        }
      }
      while ( i != v21 );
      if ( v24 )
      {
        v27 = *(_QWORD **)(v3 + 8);
        v28 = v18;
        if ( v27 == v17 )
        {
          if ( (v18 & 0x1FF) != 0 )
LABEL_22:
            v24 = 0;
        }
        else
        {
          do
          {
            v29 = v27;
            v27 = (_QWORD *)v27[1];
            v30 = v29[3];
            v31 = v30 + v29[4];
            if ( v31 <= v10 )
              break;
            if ( v31 != v28 )
              return 0LL;
            v28 = v29[3];
            if ( *((_DWORD *)v29 + 4) != 5 && v30 != v7 && v30 != v15 )
              goto LABEL_22;
          }
          while ( v30 != v10 && v27 != v17 );
        }
      }
      if ( !v24 )
        break;
      if ( v18 == v15 )
        return 1LL;
      v18 = v15;
      if ( v10 == (v15 & 0xFFFFFFFFFFFFFE00uLL) && v21 == ((v15 + v16 + 510) & 0xFFFFFFFFFFFFFE00uLL) )
        return 1LL;
      v10 = v15 & 0xFFFFFFFFFFFFFE00uLL;
      v11 = v15 + v16 - 1;
    }
  }
  return 0LL;
}
