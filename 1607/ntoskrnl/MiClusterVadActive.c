/*
 * XREFs of MiClusterVadActive @ 0x1401F5F24
 * Callers:
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiClusterVadActive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // r10
  int v6; // esi
  __int64 v7; // rbx
  unsigned __int64 v8; // r10
  unsigned int i; // edi
  unsigned __int16 v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  *a3 = -1LL;
  v5 = (v3 << 25 >> 16) & 0xFFFFFFFFFFFF0000uLL;
  if ( v5 >> 12 < (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    || (v5 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v6 = 0;
  v7 = -1LL;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = 0; i < 0x10; ++i )
  {
    v15 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v15 & 1) != 0 )
    {
      v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15);
      v13 = (v12 >> 12) & 0xFFFFFFFFFLL;
      if ( (unsigned __int16)v12 >> 12 != (unsigned __int64)i )
        return 0LL;
      if ( v7 == -1 )
      {
        v7 = v13 - i;
      }
      else
      {
        if ( v13 != v7 + i )
          return 0LL;
        v6 = 1;
      }
    }
    v8 = v11 + 8;
  }
  if ( !v6 )
  {
    *a3 = v10 >> 12;
    return 0LL;
  }
  return 1LL;
}
