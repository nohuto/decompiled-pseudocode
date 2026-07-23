/*
 * XREFs of MiCheckVadSequential @ 0x140042260
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCheckVadSequential(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned int *v2; // r11
  __int64 v3; // rbx
  int v4; // edx
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // r13
  char v16; // al
  __int64 v17; // rdx
  unsigned int v18; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = (unsigned int *)a1;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)a1 | 0x10;
  *(_DWORD *)a1 = v4;
  v5 = v1 & 0xFFFFFFFFFFFFF000uLL | 1;
  v6 = *(_QWORD *)(v3 + 120);
  v7 = v6 & 0xFFF;
  v8 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v9 = (v6 & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)(*(_DWORD *)(v3 + 120) & 0xFFF) << 12);
  if ( (v1 & 0xFFFFFFFFFFFFF000uLL) == v9 )
  {
    if ( v7 == 4095 )
      v5 = (v8 + 4096) | 0xFFF;
    else
      v5 = v8 | ((_WORD)v6 + 1) & 0xFFF;
  }
  else if ( v1 > v9 && (v10 = (v1 - v9) >> 12, v10 < 8) )
  {
    v14 = (((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    if ( v14 <= v10 )
    {
      if ( v14 )
        *(_DWORD *)a1 = v4 & 0xFFFFFFEF;
    }
    else
    {
      v14 = (v1 - v9) >> 12;
    }
    v18 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x10) != 0 )
    {
      v15 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
      if ( v14 )
      {
        while ( 1 )
        {
          v16 = MI_READ_PTE_LOCK_FREE(v15);
          if ( (v16 & 1) == 0 || (v16 & 0x20) == 0 )
            break;
          v15 -= 8LL;
          if ( !--v14 )
            goto LABEL_24;
        }
        *v2 = v18 & 0xFFFFFFEF;
      }
      else
      {
LABEL_24:
        v17 = (unsigned int)(v10 + 1);
        if ( (unsigned __int64)(v17 + v7) > 0xFFF )
          v5 = (v6 + ((unsigned __int64)((unsigned int)v17 + (v6 & 0xFFF) - 4095) << 12)) | 0xFFF;
        else
          v5 = v8 | ((_WORD)v10 + 1 + (_WORD)v6) & 0xFFF;
      }
    }
  }
  else if ( v9 || v1 >> 12 != (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) )
  {
    *(_DWORD *)a1 = v4 & 0xFFFFFFEF;
  }
  if ( (*v2 & 0x10) == 0 )
  {
    *(_DWORD *)(v3 + 64) &= ~0x2000000u;
LABEL_8:
    *(_QWORD *)(v3 + 120) = v5;
    return 0LL;
  }
  if ( (*(_DWORD *)(v3 + 64) & 0x2000000) == 0 )
    goto LABEL_8;
  v12 = *(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32);
  *(_QWORD *)(v3 + 120) = v5;
  v13 = v9 - 4096;
  if ( !v9 )
    v13 = v1;
  if ( (((v13 >> 12) - v12) >> 8) + 1 != ((v1 >> 12) - v12) >> 8 )
    return 0LL;
  return 3221226016LL;
}
