/*
 * XREFs of MiGetPhysicalAddress @ 0x140024BB0
 * Callers:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     MiDbgCopyMemory @ 0x140084338 (MiDbgCopyMemory.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiSetNonPagedPoolNoSteal @ 0x140124E70 (MiSetNonPagedPoolNoSteal.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r10
  __int16 v17; // r9
  __int64 result; // rax
  __int64 v19; // [rsp+40h] [rbp+0h] BYREF

  v3 = (_QWORD *)((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFE0uLL);
  *a3 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v7 = MiVaToPfn(a1);
LABEL_11:
    *a3 = 1;
    goto LABEL_12;
  }
  v8 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v8;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v9;
  v10 = 3;
  *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    if ( (MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFE0uLL)
                                          + 8
                                          + 8LL * (unsigned int)(v10 - 1))) & 1) == 0 )
      return 0LL;
  }
  while ( v10 );
  v12 = MI_READ_PTE_LOCK_FREE(v11 + ((a1 >> 9) & 0x7FFFFFFFF8LL));
  *v3 = v12;
  if ( (v12 & 1) == 0 )
    return 0LL;
  if ( a1 >= qword_140327F60 && a1 < qword_140327F60 + 0x100000000000LL )
  {
    MiSetNonPagedPoolNoSteal(v15, v13, v14, v12);
    *v3 = MI_READ_PTE_LOCK_FREE(v16);
  }
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFE0uLL) >> 12) & 0xFFFFFFFFFLL;
  if ( (v17 & 0x800) != 0 )
    goto LABEL_11;
LABEL_12:
  *v3 = v7 << 12;
  result = 1LL;
  *(_DWORD *)v3 += a1 & 0xFFF;
  *a2 = *v3;
  return result;
}
