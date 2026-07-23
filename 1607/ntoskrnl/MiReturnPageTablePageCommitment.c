/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x1404330E0
 * Callers:
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiVadPureReserve @ 0x14002B610 (MiVadPureReserve.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 j,
        _QWORD *a5,
        __int64 a6,
        _BYTE *a7)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v8; // esi
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // r13
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // r8
  _BYTE *v18; // r9
  unsigned int v19; // ecx
  int v20; // r14d
  int v21; // r8d
  int v22; // ebp
  int v23; // r11d
  int v24; // r15d
  unsigned __int64 v26; // r8
  signed int v27; // r10d
  signed __int32 **v28; // r13
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v30; // r8
  _QWORD **v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 i; // rax
  _QWORD *v36; // rax
  int v37; // [rsp+20h] [rbp-58h]
  unsigned __int64 PdeAddress; // [rsp+20h] [rbp-58h]
  __int64 v39; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+30h] [rbp-48h]
  unsigned int v41; // [rsp+80h] [rbp+8h]
  int v42; // [rsp+88h] [rbp+10h]
  int v44; // [rsp+A8h] [rbp+30h]

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v40 = (__int64)CurrentThread;
  v42 = 0;
  v12 = *(_DWORD *)(a6 + 48);
  if ( (v12 & 0x8000) != 0 )
  {
    if ( (v12 & 7) != 5 )
      goto LABEL_3;
LABEL_58:
    v42 = 1;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a6 + 67) & 1) != 0 )
    goto LABEL_58;
LABEL_3:
  v13 = MiVadPureReserve(a6);
  v14 = (_DWORD *)(qword_140327FD0 + 276840448);
  v15 = a1 >> 21;
  v16 = a2 >> 21;
  v39 = qword_140327FD0 + 276840448;
  v37 = v13;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v17);
  v18 = a7;
  LOBYTE(v19) = 0;
  v20 = v42;
  v21 = 0;
  v22 = v37;
  v41 = 0;
  v44 = 0;
  do
  {
    v23 = v15;
    v24 = v16;
    if ( *v18 )
    {
      if ( j )
      {
        while ( ((*(_DWORD *)(j + 28) >> 9) | (*(unsigned __int8 *)(j + 33) << 23)) >> v19 == (_DWORD)v15 )
        {
          if ( !(unsigned int)MiVadPureReserve(j) )
          {
            LOBYTE(v19) = v41;
            *v18 = 0;
            goto LABEL_5;
          }
          v33 = *(_QWORD *)j;
          v34 = j;
          if ( *(_QWORD *)j )
          {
            j = *(_QWORD *)j;
            for ( i = *(_QWORD *)(v33 + 8); i; i = *(_QWORD *)(i + 8) )
              j = i;
          }
          else
          {
            for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)(j + 8) == v34 )
                break;
              v34 = j;
            }
          }
          LOBYTE(v19) = v41;
          if ( !j )
            break;
        }
      }
    }
    else
    {
LABEL_5:
      LODWORD(v15) = v15 + 1;
    }
    if ( v18[1] )
    {
      v26 = (unsigned __int64)a5;
      if ( a5 )
      {
        while ( ((*(_DWORD *)(v26 + 24) >> 9) | (*(unsigned __int8 *)(v26 + 32) << 23)) >> v19 == (_DWORD)v16 )
        {
          if ( !(unsigned int)MiVadPureReserve(v26) )
          {
            LODWORD(v16) = v16 - 1;
            v18[1] = 0;
            break;
          }
          v31 = *(_QWORD ***)(v30 + 8);
          v32 = v30;
          if ( v31 )
          {
            v36 = *v31;
            v26 = *(_QWORD *)(v30 + 8);
            a5 = v31;
            if ( *v31 )
            {
              do
              {
                a5 = v36;
                v36 = (_QWORD *)*v36;
              }
              while ( v36 );
              v20 = v42;
              v26 = (unsigned __int64)a5;
            }
          }
          else
          {
            v26 = *(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            a5 = (_QWORD *)v26;
            if ( v26 )
            {
              do
              {
                if ( *(_QWORD *)v26 == v32 )
                  break;
                v32 = v26;
                v26 = *(_QWORD *)(v26 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v26 );
              a5 = (_QWORD *)v26;
            }
          }
          LOBYTE(v19) = v41;
          if ( !v26 )
            break;
        }
      }
      v21 = v44;
    }
    else
    {
      LODWORD(v16) = v16 - 1;
    }
    if ( (int)v15 > (int)v16 )
      break;
    if ( (!v20 || v21) && !v22 )
      v8 += v16 - v15 + 1;
    v27 = v15;
    v28 = (signed __int32 **)&v14[4 * (2 - v21)];
    do
    {
      if ( !v22 )
      {
        _bittestandreset(v28[38], v27);
        goto LABEL_25;
      }
      if ( v27 == (_DWORD)v15 )
      {
        v15 = (unsigned __int64)v28[38] + v27 / 8;
        PdeAddress = MiGetPdeAddress(v15);
        if ( !MI_READ_PTE_LOCK_FREE(PdeAddress) )
        {
          LODWORD(v15) = 8 * (((__int64)((PdeAddress << 25) + 0x10000000) >> 16 << 25 >> 16) - *((_DWORD *)v28 + 76));
          v27 = v15 - 1;
          goto LABEL_25;
        }
        PteAddress = MiGetPteAddress(v15);
        LODWORD(v15) = 8 * (((__int64)((PteAddress << 25) + 0x10000000) >> 16) - *((_DWORD *)v28 + 76));
        if ( !MI_READ_PTE_LOCK_FREE(PteAddress) )
        {
          v27 = v15 - 1;
          goto LABEL_25;
        }
      }
      if ( _bittest(v28[38], v27) )
      {
        _bittestandreset(v28[38], v27);
        ++v8;
      }
LABEL_25:
      ++v27;
    }
    while ( v27 <= (int)v16 );
    v21 = v44 + 1;
    *v18 >>= 1;
    v19 = v41 + 9;
    v18[1] >>= 1;
    v20 = v42;
    v14 = (_DWORD *)v39;
    LODWORD(v15) = v23 >> 9;
    ++v44;
    LODWORD(v16) = v24 >> 9;
    v41 = v19;
  }
  while ( v19 < 0x1B );
  if ( v8 )
  {
    *v14 -= v8;
    MiReturnFullProcessCommitment(a3, v8);
  }
  return UNLOCK_PAGE_TABLE_COMMITMENT(v40, a3);
}
