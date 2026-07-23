/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x140097090
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
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
  __int64 *v8; // r15
  __int64 v10; // rbx
  unsigned int v11; // r12d
  unsigned __int64 v12; // rsi
  char v13; // r8
  unsigned int v14; // r10d
  struct _KTHREAD *CurrentThread; // r11
  __int64 v18; // r9
  unsigned int v19; // edi
  int v20; // ecx
  unsigned __int64 v21; // r14
  unsigned __int64 j; // rbp
  __int64 v23; // r10
  int v24; // r15d
  unsigned int v25; // r11d
  unsigned __int64 i; // r9
  __int64 v27; // r9
  unsigned __int64 v28; // r9
  __int64 v30; // r9
  unsigned int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v36; // [rsp+78h] [rbp+10h]

  v8 = *(__int64 **)(a2 + 200);
  v10 = *(_QWORD *)(a2 + 168);
  v11 = 0;
  v12 = *(_QWORD *)(a2 + 224);
  v13 = 1;
  v14 = *(_DWORD *)(a2 + 180);
  CurrentThread = KeGetCurrentThread();
  v18 = a1;
  v34 = *v8;
  v19 = 1;
  if ( (v10 & 0x400) == 0 )
    goto LABEL_12;
  if ( BYTE5(CurrentThread[1].Queue) )
    goto LABEL_12;
  v20 = *(_DWORD *)(*v8 + 56);
  if ( (v20 & 8) != 0 && BYTE4(CurrentThread[1].Queue) != 2 )
    goto LABEL_12;
  if ( *(__int64 *)(v18 + 6528) < 160 )
    goto LABEL_12;
  if ( dword_1403276A4 )
  {
    --dword_1403276A4;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v18 + 6464) <= 0x140uLL )
  {
LABEL_12:
    j = v12;
    v21 = v12;
    goto LABEL_35;
  }
  v21 = a4 + 8LL * *((unsigned int *)v8 + 11) - 8;
  if ( !a3 )
  {
    if ( (v20 & 0x20) != 0 )
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
  v23 = 8LL * v14;
  v36 = v23;
  if ( v21 > v23 + v12 - 8 )
    v21 = v23 + v12 - 8;
  if ( !a3 && (v20 & 0x20000000) != 0 )
  {
    v31 = MiStartingOffset(v8, v12, a5);
    v24 = dword_1403276AC;
    v25 = v31;
    v23 = v36;
    v32 = v31 & (dword_1403276AC - 1);
    if ( v21 > v12 + 8 * (((unsigned int)(dword_1403276AC - v32) >> 12) - 1LL) )
      v21 = v12 + 8 * (((unsigned int)(dword_1403276AC - v32) >> 12) - 1LL);
  }
  else
  {
    v24 = dword_1403276AC;
    v25 = 0;
  }
  if ( v21 > (v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v21 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  for ( i = v21; i > v12; i = v27 - 8 )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) == v10 )
    {
      ++v19;
    }
    else if ( v27 == v21 )
    {
      v21 -= 8LL;
    }
  }
  v28 = v21 - v23 + 8;
  if ( v28 < a4 )
    v28 = a4;
  if ( v28 < (v12 & 0xFFFFFFFFFFFFF000uLL) )
    v28 = v12 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 || (*(_BYTE *)(a2 + 189) & 0x20) != 0 )
  {
    v28 = v12;
  }
  else if ( (*(_DWORD *)(v34 + 56) & 0x20000000) != 0 )
  {
    v33 = (v25 >> 12) & ((unsigned int)(v24 - 1) >> 12);
    if ( v28 < v12 - 8 * v33 )
      v28 = v12 - 8 * v33;
  }
  for ( j = v28; v28 < v12; v28 = v30 + 8 )
  {
    if ( MI_READ_PTE_LOCK_FREE(v28) == v10 )
    {
      ++v19;
    }
    else if ( v30 == j )
    {
      j += 8LL;
    }
  }
  v18 = a1;
  v13 = 1;
LABEL_35:
  if ( a6 == -1 )
    v13 = 3;
  else
    --v19;
  if ( v19 )
    v11 = MiObtainFaultCharges((int *)v18, v19, v13);
  if ( a6 != -1 )
    ++v11;
  *a7 = j;
  *a8 = v21;
  return v11;
}
