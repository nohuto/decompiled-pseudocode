/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x1400AB910
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPickClusterForMappedFileFault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 *v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rbx
  char v11; // r13
  unsigned __int64 v12; // rbp
  unsigned int v14; // r11d
  __int64 v16; // r9
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v18; // esi
  int v19; // ecx
  unsigned __int64 v20; // r12
  unsigned __int64 i; // rdi
  unsigned __int64 v22; // rdi
  unsigned __int64 j; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+98h] [rbp+10h]

  v8 = *(__int64 **)(a2 + 200);
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 168);
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 224);
  v14 = *(_DWORD *)(a2 + 180);
  v16 = a1;
  CurrentThread = KeGetCurrentThread();
  v18 = 1;
  v29 = *v8;
  if ( (v10 & 0x400) == 0 )
    goto LABEL_41;
  if ( BYTE1(CurrentThread[1].Teb) )
    goto LABEL_41;
  v19 = *(_DWORD *)(*v8 + 56);
  if ( (v19 & 8) != 0 && LOBYTE(CurrentThread[1].Teb) != 2 )
    goto LABEL_41;
  if ( *(__int64 *)(v16 + 5952) < 160 )
    goto LABEL_41;
  if ( dword_1402FF214 )
  {
    --dword_1402FF214;
    goto LABEL_41;
  }
  if ( *(_QWORD *)(v16 + 5888) <= 0x140uLL )
  {
LABEL_41:
    j = v12;
    v20 = v12;
    goto LABEL_31;
  }
  v20 = a4 + 8LL * *((unsigned int *)v8 + 11) - 8;
  if ( !a3 )
  {
    if ( (v19 & 0x20) != 0 )
    {
      v14 = 4;
      if ( (v8[4] & 4) != 0 )
        v14 = 8;
    }
    else if ( !v14 )
    {
      v14 = LODWORD(CurrentThread[1].WaitListEntry.Flink) + 1;
    }
  }
  v28 = 8LL * v14;
  if ( v20 > v12 + v28 - 8 )
    v20 = v12 + v28 - 8;
  if ( !a3 && (v19 & 0x20000000) != 0 )
  {
    v27 = MiStartingOffset(v8, v12, a5);
    v31 = dword_1402FF21C;
    v25 = (dword_1402FF21C - (v27 & (dword_1402FF21C - 1))) >> 12;
    if ( v20 > v12 - 8 + 8 * v25 )
      v20 = v12 - 8 + 8 * v25;
  }
  else
  {
    v31 = dword_1402FF21C;
    v27 = 0;
  }
  if ( v20 > (v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v20 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  for ( i = v20; i > v12; i -= 8LL )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) == v10 )
    {
      ++v18;
    }
    else if ( i == v20 )
    {
      v20 -= 8LL;
    }
  }
  v22 = v20 - v28 + 8;
  if ( v22 < a4 )
    v22 = a4;
  if ( v22 < (v12 & 0xFFFFFFFFFFFFF000uLL) )
    v22 = v12 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 || (*(_BYTE *)(a2 + 189) & 0x20) != 0 )
  {
    v22 = v12;
  }
  else if ( (*(_DWORD *)(v29 + 56) & 0x20000000) != 0 )
  {
    v26 = ((unsigned int)(v31 - 1) >> 12) & (v27 >> 12);
    if ( v22 < v12 - 8 * v26 )
      v22 = v12 - 8 * v26;
  }
  for ( j = v22; v22 < v12; v22 += 8LL )
  {
    if ( MI_READ_PTE_LOCK_FREE(v22) == v10 )
    {
      ++v18;
    }
    else if ( v22 == j )
    {
      j += 8LL;
    }
  }
  v16 = a1;
LABEL_31:
  if ( a6 == -1 )
    v11 = 3;
  else
    --v18;
  if ( v18 )
    v9 = MiObtainFaultCharges((int *)v16, v18, v11);
  if ( a6 != -1 )
    ++v9;
  *a7 = j;
  *a8 = v20;
  return v9;
}
