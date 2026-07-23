/*
 * XREFs of MiCheckLargePageOk @ 0x1407B5CD4
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r8
  __int64 v3; // r10
  char *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r10
  unsigned int v10; // r11d
  unsigned __int64 v12; // r14
  unsigned __int64 i; // r10
  ULONG_PTR v14; // rax
  ULONG_PTR v15; // r10
  __int64 v16; // r11
  __int64 v17; // r10
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v19; // r11
  ULONG_PTR v20; // rbx
  unsigned __int64 v21; // rax
  ULONG_PTR *v22; // rdx
  ULONG_PTR *v23; // rcx
  ULONG_PTR v24; // rax
  ULONG_PTR v25; // r8
  ULONG_PTR v26; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  qword_140760510 = v1;
  v3 = *(_QWORD *)v1;
  PsNtosImageBase = *(PVOID *)(v1 + 48);
  v4 = (char *)PsNtosImageBase + *(unsigned int *)(v1 + 64);
  MxHalDataTableEntry = v3;
  PsHalImageBase = *(PVOID *)(v3 + 48);
  PsNtosImageEnd = (__int64)v4;
  PsHalImageEnd = (__int64)PsHalImageBase + *(unsigned int *)(v3 + 64);
  if ( *(_QWORD *)(v1 + 48) >= *(_QWORD *)(v3 + 48) )
    v5 = v3;
  else
    v5 = v1;
  v6 = *(_QWORD *)(v5 + 48);
  MI_IS_PHYSICAL_ADDRESS(v6);
  v8 = *(_QWORD *)(v7 + 48);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
    ++v10;
  if ( !v10 )
    return 0LL;
  if ( v10 != 2 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, BugCheckParameter2, v10, 0LL);
  v12 = v8 + *(unsigned int *)(v9 + 64);
  for ( i = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        i <= (((v12 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        i = v17 + 8 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(i);
    v26 = v14;
    if ( (v14 & 0x80u) == 0LL )
      KeBugCheckEx(0x1Au, 0x3030200uLL, BugCheckParameter2, v15, v14);
    if ( v16 == -1 )
    {
      MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v26);
    }
    else if ( MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v26) != v16 + 512 )
    {
      KeBugCheckEx(0x1Au, 0x3030201uLL, BugCheckParameter2, v19, BugCheckParameter4);
    }
  }
  v20 = MiVaToPfn(v6) & 0xFFFFFFFFFFFFFE00uLL;
  v21 = MiVaToPfn(v12 - 1);
  v22 = (ULONG_PTR *)(BugCheckParameter2 + 32);
  v23 = *(ULONG_PTR **)(BugCheckParameter2 + 32);
  v24 = ((v21 + 512) & 0xFFFFFFFFFFFFFE00uLL) - v20;
  while ( 1 )
  {
    if ( v23 == v22 )
      goto LABEL_32;
    if ( v23[3] == v20 )
      break;
LABEL_22:
    v23 = (ULONG_PTR *)*v23;
  }
  if ( *((_DWORD *)v23 + 4) != 9 )
  {
    v23 = (ULONG_PTR *)(BugCheckParameter2 + 32);
    goto LABEL_27;
  }
  v25 = v23[4];
  if ( v24 > v25 )
  {
    v24 -= v25;
    v20 += v25;
    goto LABEL_22;
  }
  if ( v24 < v25 )
    v23 = (ULONG_PTR *)(BugCheckParameter2 + 32);
LABEL_27:
  if ( v23 == v22 )
LABEL_32:
    KeBugCheckEx(0x1Au, 0x3030202uLL, BugCheckParameter2, v20, v24);
  return 1LL;
}
