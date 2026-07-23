/*
 * XREFs of MiInitializeWorkingSetList @ 0x14046CCB8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiPopulateWorkingSetFreeList @ 0x14007BDD0 (MiPopulateWorkingSetFreeList.c)
 *     MiInitializeWsleAgeHeads @ 0x1400A04C4 (MiInitializeWsleAgeHeads.c)
 */

char __fastcall MiInitializeWorkingSetList(__int64 a1, ULONG_PTR *a2, int a3, __int64 a4, __int64 a5)
{
  int *v5; // rbp
  char v6; // al
  int v8; // edi
  ULONG_PTR *v9; // rsi
  ULONG_PTR v10; // rbx
  int v11; // r15d
  __int64 v12; // rcx
  ULONG_PTR *SharedWorkingSetList; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r10
  ULONG_PTR v17; // r11
  ULONG_PTR *v18; // r8
  __int64 v19; // r13
  unsigned __int64 v20; // r11
  int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 PteAddress; // rax
  unsigned __int64 *v26; // r11
  _QWORD *v27; // rax
  __int64 v28; // r11
  __int64 *v29; // r15
  __int64 v30; // rcx
  unsigned __int64 *v31; // r11
  unsigned __int64 v32; // r13
  __int64 v33; // r9
  __int64 v34; // r11
  __int64 v35; // r8
  __int64 *v36; // r15
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  _BYTE v43[64]; // [rsp+70h] [rbp+70h] BYREF

  v5 = (int *)((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 16) = a2;
  v8 = a3;
  v9 = a2;
  *(_BYTE *)(a1 + 184) ^= (a3 ^ v6) & 7;
  v10 = 0LL;
  v11 = 0;
  MiGetSharedVm(a1);
  SharedWorkingSetList = MiGetSharedWorkingSetList(v12);
  v18 = SharedWorkingSetList;
  *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = SharedWorkingSetList;
  v19 = (unsigned int)(v15 + 1);
  if ( *((_DWORD *)SharedWorkingSetList + 8) != (_DWORD)v15 )
    goto LABEL_19;
  v20 = (unsigned __int64)(SharedWorkingSetList + 12);
  *(_DWORD *)v14 = v15;
  *((_DWORD *)SharedWorkingSetList + 8) = 8;
  v11 = v15 + 1;
  *v5 = v19;
  if ( v8 == (_DWORD)v19 )
  {
    v40 = qword_140326908;
    if ( qword_140326900 < (unsigned __int64)qword_140326908 )
      v40 = qword_140326900;
    goto LABEL_31;
  }
  v21 = v8 - v19 - v19;
  if ( !v21 )
  {
    v40 = qword_140326CC0;
    v20 = (unsigned __int64)(v9 + 64);
LABEL_31:
    if ( v40 )
      v18[6] = v40;
    goto LABEL_6;
  }
  v22 = v21 - v19;
  if ( !v22 )
  {
    v40 = qword_140327F70;
    goto LABEL_31;
  }
  if ( v22 == (_DWORD)v19 )
  {
    v40 = qword_140328030;
    goto LABEL_31;
  }
LABEL_6:
  v23 = 4LL;
  if ( (*(_BYTE *)(v16 + 184) & 7u) >= 2 )
  {
    v41 = ((unsigned int)(v20 >> 12) & 0x1FF) + 4;
    *(_QWORD *)(v14 + 56) = v41;
    *(_QWORD *)(v14 + 48) = v41;
  }
  v18[10] = v20;
  if ( v8 )
  {
    v17 = (unsigned int)(v15 + 1);
    if ( v8 == (_DWORD)v19 )
    {
      v24 = qword_140326948;
      v39 = qword_140326958 + 0x4000;
    }
    else
    {
      v39 = a4 - 4096;
      v24 = a4 + 8 * a5;
    }
    v33 = v19 | v39;
  }
  else
  {
    a4 = qword_140326D40;
    v18[2] = *(_QWORD *)(v16 + 104);
    v24 = qword_140326D48;
    PteAddress = MiGetPteAddress(0xFFFFF6FB7DBED000uLL);
    *v26 = PteAddress & 0xFFFFFFFFFFFFF000uLL | 9;
    v27 = (_QWORD *)MiGetPteAddress(PteAddress & 0xFFFFFFFFFFFFF000uLL);
    v29 = (__int64 *)(48 * ((*v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v30 = qword_140327FD0;
    if ( (v29[5] & 0xFFFFFFFFFLL) != 48 * ((*v27 >> 12) & 0xFFFFFFFFFLL) / 48 )
      *v29 = (v28 - *(_QWORD *)(qword_140327FD0 + 276841312)) >> 3;
    v31 = (unsigned __int64 *)(v28 + 8);
    v32 = v30 + 276840816;
    do
    {
      *v31 = v32 | 9;
      v32 = MiGetPteAddress(v32);
      v36 = (__int64 *)(48 * (v35 & (*(_QWORD *)v32 >> 12)) - 0x58000000000LL);
      v37 = qword_140327FD0;
      if ( (v35 & v36[5]) != 48 * (v35 & (*(_QWORD *)v32 >> 12)) / 48 )
        *v36 = (v34 - *(_QWORD *)(qword_140327FD0 + 276841312)) >> 3;
      v31 = (unsigned __int64 *)(v34 + 8);
      --v23;
    }
    while ( v23 );
    v11 = *v5;
    v19 = (unsigned int)*v5;
    v18 = *(ULONG_PTR **)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v8 = a3;
    v9 = a2;
    v17 = ((__int64)v31 - *(_QWORD *)(v37 + 276841312)) >> 3;
    *(_QWORD *)(v16 - 360) = v17;
  }
  v38 = v18[10] & 0xFFF;
  v18[1] = v17;
  v18[8] = a4;
  v18[9] = v24;
  v10 = ((unsigned __int64)(unsigned int)(4096 - v38) >> 3) - v19;
  v18[7] = v33;
  LOBYTE(SharedWorkingSetList) = *(_BYTE *)(v16 + 184) & 7;
  if ( (unsigned __int8)SharedWorkingSetList >= 2u )
    v18[2] = v10;
  v18[3] = v10;
  v15 = 0LL;
LABEL_19:
  *v9 = v17;
  if ( v8 )
  {
    *(_QWORD *)(v16 + 112) = v15;
    *(_QWORD *)(v16 + 120) = v15;
    *(_QWORD *)(v16 + 128) = v15;
    *(_QWORD *)(v16 + 136) = v15;
    if ( v8 == (_DWORD)v19 )
    {
      *(_BYTE *)(v16 + 184) |= 0x80u;
      SharedWorkingSetList = (ULONG_PTR *)(*(_QWORD *)(v16 + 104) + 6LL);
      *(_QWORD *)(v16 + 144) = SharedWorkingSetList;
    }
    else
    {
      LOBYTE(SharedWorkingSetList) = a5;
      *(_QWORD *)(v16 + 144) = a5;
      if ( *((_DWORD *)v18 + 8) == 16 )
      {
        LOBYTE(SharedWorkingSetList) = *(_BYTE *)(v16 + 184) & 7;
        if ( (_BYTE)SharedWorkingSetList == 2 )
          LOBYTE(SharedWorkingSetList) = MiInitializeWsleAgeHeads((__int64)v9);
      }
    }
  }
  else
  {
    *(_QWORD *)(v16 + 112) = v19;
    *(_QWORD *)(v16 + 120) = v19;
    *(_QWORD *)(v16 + 128) = v17;
    *(_QWORD *)(v16 + 136) = v17;
  }
  if ( v11 == (_DWORD)v19 )
    LOBYTE(SharedWorkingSetList) = MiPopulateWorkingSetFreeList(v16, v17, v10);
  return (char)SharedWorkingSetList;
}
