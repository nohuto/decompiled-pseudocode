/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x140415AD0
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiVadPureReserve @ 0x140061050 (MiVadPureReserve.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _BYTE *a7)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v8; // esi
  unsigned __int64 v9; // r12
  int v11; // eax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // r8
  _BYTE *v15; // r15
  int v16; // r8d
  int v17; // r14d
  unsigned int v18; // r9d
  __int64 v19; // r10
  int v20; // r13d
  unsigned __int64 v22; // r8
  int v23; // ecx
  signed int v24; // r12d
  __int64 v25; // r15
  __int64 PteAddress; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r8
  _QWORD **v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-58h]
  int v36; // [rsp+24h] [rbp-54h]
  __int64 PdeAddress; // [rsp+28h] [rbp-50h]
  __int64 v38; // [rsp+30h] [rbp-48h]
  int v39; // [rsp+80h] [rbp+8h]
  int v40; // [rsp+88h] [rbp+10h]
  unsigned __int64 v41; // [rsp+98h] [rbp+20h]
  int v42; // [rsp+A8h] [rbp+30h]

  v41 = a4;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v38 = (__int64)CurrentThread;
  v9 = a4;
  v40 = 0;
  v11 = *(_DWORD *)(a6 + 48);
  if ( (v11 & 0x8000) != 0 )
  {
    if ( (v11 & 7) != 5 )
      goto LABEL_3;
LABEL_59:
    v40 = 1;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a6 + 67) & 1) != 0 )
    goto LABEL_59;
LABEL_3:
  v12 = a1 >> 21;
  v13 = a2 >> 21;
  v39 = MiVadPureReserve(a6);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v14);
  v15 = a7;
  v16 = 0;
  v17 = v40;
  LOBYTE(v18) = 0;
  v19 = 0xA7FEF7FBCFLL;
  v42 = 0;
  v35 = 0;
  do
  {
    v20 = v12;
    v36 = v13;
    if ( *v15 )
    {
      if ( v9 )
      {
        while ( ((*(_DWORD *)(v9 + 28) >> 9) | (*(unsigned __int8 *)(v9 + 33) << 23)) >> v18 == (_DWORD)v12 )
        {
          if ( !(unsigned int)MiVadPureReserve(v9) )
          {
            *v15 = 0;
            goto LABEL_5;
          }
          v28 = *(_QWORD *)v9;
          v29 = v9;
          if ( *(_QWORD *)v9 )
          {
            v9 = *(_QWORD *)v9;
            v41 = v28;
            v33 = *(_QWORD *)(v28 + 8);
            if ( v33 )
            {
              do
              {
                v41 = v33;
                v33 = *(_QWORD *)(v33 + 8);
              }
              while ( v33 );
              v15 = a7;
              v9 = v41;
            }
          }
          else
          {
            v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            v41 = v9;
            if ( v9 )
            {
              do
              {
                if ( *(_QWORD *)(v9 + 8) == v29 )
                  break;
                v29 = v9;
                v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v9 );
              v41 = v9;
            }
          }
          if ( !v9 )
            break;
        }
      }
    }
    else
    {
LABEL_5:
      LODWORD(v12) = v12 + 1;
    }
    if ( v15[1] )
    {
      v22 = (unsigned __int64)a5;
      if ( a5 )
      {
        while ( ((*(_DWORD *)(v22 + 24) >> 9) | (*(unsigned __int8 *)(v22 + 32) << 23)) >> v18 == (_DWORD)v13 )
        {
          if ( !(unsigned int)MiVadPureReserve(v22) )
          {
            LODWORD(v13) = v13 - 1;
            v15[1] = 0;
            break;
          }
          v31 = *(_QWORD ***)(v30 + 8);
          v32 = v30;
          if ( v31 )
          {
            v34 = *v31;
            v22 = *(_QWORD *)(v30 + 8);
            a5 = v31;
            if ( *v31 )
            {
              do
              {
                a5 = v34;
                v34 = (_QWORD *)*v34;
              }
              while ( v34 );
              v17 = v40;
              v22 = (unsigned __int64)a5;
            }
          }
          else
          {
            v22 = *(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            a5 = (_QWORD *)v22;
            if ( v22 )
            {
              do
              {
                if ( *(_QWORD *)v22 == v32 )
                  break;
                v32 = v22;
                v22 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v22 );
              a5 = (_QWORD *)v22;
            }
          }
          if ( !v22 )
            break;
        }
      }
      v16 = v42;
    }
    else
    {
      LODWORD(v13) = v13 - 1;
    }
    if ( (int)v12 > (int)v13 )
      break;
    if ( !v17 || v16 )
    {
      v23 = v39;
      if ( !v39 )
        v8 += v13 - v12 + 1;
    }
    else
    {
      v23 = v39;
    }
    v24 = v12;
    v25 = 16 * ((unsigned int)(2 - v16) - v19);
    do
    {
      if ( !v23 )
      {
        _bittestandreset(*(signed __int32 **)(v25 + 8), v24);
        goto LABEL_29;
      }
      if ( v24 == (_DWORD)v12 )
      {
        v12 = *(_QWORD *)(v25 + 8) + v24 / 8;
        PdeAddress = MiGetPdeAddress(v12);
        if ( !MI_READ_PTE_LOCK_FREE((__int64 *)PdeAddress) )
        {
          v23 = v39;
          LODWORD(v12) = 8 * ((((PdeAddress << 25) + 0x10000000) >> 16 << 25 >> 16) - *(_DWORD *)(v25 + 8));
          v24 = v12 - 1;
          goto LABEL_29;
        }
        PteAddress = MiGetPteAddress(v12);
        LODWORD(v12) = 8 * ((((PteAddress << 25) + 0x10000000) >> 16) - *(_DWORD *)(v25 + 8));
        v27 = MI_READ_PTE_LOCK_FREE((__int64 *)PteAddress);
        v23 = v39;
        if ( !v27 )
        {
          v24 = v12 - 1;
          goto LABEL_29;
        }
      }
      if ( _bittest(*(const signed __int32 **)(v25 + 8), v24) )
      {
        _bittestandreset(*(signed __int32 **)(v25 + 8), v24);
        ++v8;
      }
LABEL_29:
      ++v24;
    }
    while ( v24 <= (int)v13 );
    v15 = a7;
    v19 = 0xA7FEF7FBCFLL;
    v16 = v42 + 1;
    v18 = v35 + 9;
    *a7 >>= 1;
    a7[1] >>= 1;
    v9 = v41;
    LODWORD(v13) = v36 >> 9;
    LODWORD(v12) = v20 >> 9;
    ++v42;
    v35 = v18;
  }
  while ( v18 < 0x1B );
  if ( v8 )
  {
    MEMORY[0xFFFFF580108041F8] -= v8;
    MiReturnFullProcessCommitment(a3, v8);
  }
  return UNLOCK_PAGE_TABLE_COMMITMENT(v38, a3);
}
