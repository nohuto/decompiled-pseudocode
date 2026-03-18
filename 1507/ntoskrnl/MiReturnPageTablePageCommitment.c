/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x1404B7F80
 * Callers:
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14008B640 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *j,
        __int64 a6,
        _BYTE *a7)
{
  unsigned int v7; // ebx
  unsigned __int64 v9; // rdi
  BOOL v10; // r15d
  int v11; // eax
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  int v14; // ebp
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // r8
  int v18; // r9d
  unsigned __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // r11
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  _QWORD **v27; // rcx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // esi
  signed int v31; // ebp
  __int64 v32; // r13
  unsigned __int64 v33; // r14
  __int64 v34; // r15
  __int64 PteShadow; // rbx
  __int64 v36; // rbx
  int v38; // [rsp+20h] [rbp-68h]
  int v39; // [rsp+24h] [rbp-64h]
  int v40; // [rsp+28h] [rbp-60h]
  int v41; // [rsp+2Ch] [rbp-5Ch]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-58h]
  unsigned int v43; // [rsp+90h] [rbp+8h]
  int v44; // [rsp+98h] [rbp+10h]
  unsigned __int64 i; // [rsp+A8h] [rbp+20h]
  unsigned int v47; // [rsp+B8h] [rbp+30h]

  i = a4;
  v7 = 0;
  v9 = a4;
  CurrentThread = KeGetCurrentThread();
  v43 = 0;
  v10 = 0;
  v11 = *(_DWORD *)(a6 + 48);
  v44 = 0;
  if ( (v11 & 0x8000) != 0 )
  {
    if ( (v11 & 7) == 5 )
    {
      v10 = 1;
      v44 = 1;
    }
  }
  else
  {
    v10 = (*(_BYTE *)(a6 + 67) & 1) != 0;
    v44 = v10;
  }
  v12 = a1 >> 21;
  v13 = a2 >> 21;
  v14 = MiVadPureReserve(a6);
  v39 = v14;
  LOCK_PAGE_TABLE_COMMITMENT(v15, a3, v15, v16);
  v17 = a7;
  v18 = 0;
  v19 = (unsigned __int64)j;
  LOBYTE(v20) = 0;
  v21 = 0xA7FEF7FBD48LL;
  v38 = 0;
  v22 = 0x904C0000000LL;
  v47 = 0;
  do
  {
    v40 = v12;
    v41 = v13;
    if ( *v17 )
    {
      if ( v9 )
      {
        while ( ((*(_DWORD *)(v9 + 28) >> 9) | (*(unsigned __int8 *)(v9 + 33) << 23)) >> v20 == (_DWORD)v12 )
        {
          if ( !(unsigned int)MiVadPureReserve(v9) )
          {
            LOBYTE(v20) = v47;
            *v17 = 0;
            goto LABEL_21;
          }
          v23 = *(_QWORD *)v9;
          v24 = v9;
          if ( *(_QWORD *)v9 )
          {
            v25 = *(_QWORD *)(v23 + 8);
            v9 = *(_QWORD *)v9;
            for ( i = v23; v25; v25 = *(_QWORD *)(v25 + 8) )
            {
              v9 = v25;
              i = v25;
            }
          }
          else
          {
            v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            i = v9;
            if ( v9 )
            {
              do
              {
                if ( *(_QWORD *)(v9 + 8) == v24 )
                  break;
                v24 = v9;
                v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v9 );
              i = v9;
            }
          }
          LOBYTE(v20) = v47;
          if ( !v9 )
            break;
        }
      }
    }
    else
    {
LABEL_21:
      LODWORD(v12) = v12 + 1;
    }
    if ( v17[1] )
    {
      if ( v19 )
      {
        while ( ((*(_DWORD *)(v19 + 24) >> 9) | (*(unsigned __int8 *)(v19 + 32) << 23)) >> v20 == (_DWORD)v13 )
        {
          if ( !(unsigned int)MiVadPureReserve(v19) )
          {
            *(_BYTE *)(v26 + 1) = 0;
            goto LABEL_37;
          }
          v27 = *(_QWORD ***)(v19 + 8);
          v28 = v19;
          if ( v27 )
          {
            v29 = *v27;
            v19 = *(_QWORD *)(v19 + 8);
            for ( j = v27; v29; v29 = (_QWORD *)*v29 )
            {
              v19 = (unsigned __int64)v29;
              j = v29;
            }
          }
          else
          {
            v19 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            j = (_QWORD *)v19;
            if ( v19 )
            {
              do
              {
                if ( *(_QWORD *)v19 == v28 )
                  break;
                v28 = v19;
                v19 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v19 );
              j = (_QWORD *)v19;
            }
          }
          LOBYTE(v20) = v47;
          if ( !v19 )
            break;
        }
      }
    }
    else
    {
LABEL_37:
      LODWORD(v13) = v13 - 1;
    }
    if ( (int)v12 > (int)v13 )
      break;
    if ( (!v10 || v18) && !v14 )
      v43 = v13 - v12 + v7 + 1;
    v30 = v43;
    v31 = v12;
    v32 = 16LL * (unsigned int)(2 - v18) - v21;
    do
    {
      if ( v39 )
      {
        if ( v31 != (_DWORD)v12 )
          goto LABEL_64;
        v33 = *(_QWORD *)(v32 + 8) + v31 / 8;
        v34 = ((v33 >> 18) & 0x3FFFFFF8) - v22;
        PteShadow = *(_QWORD *)v34;
        if ( MiPteInShadowRange(v34) )
          PteShadow = MiReadPteShadow(v34, PteShadow);
        if ( !PteShadow )
        {
          LODWORD(v12) = 8 * ((((v34 << 25) + 0x10000000) >> 16 << 25 >> 16) - *(_DWORD *)(v32 + 8));
          v31 = v12 - 1;
          goto LABEL_57;
        }
        v12 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v36 = *(_QWORD *)v12;
        if ( MiPteInShadowRange(v12) )
          v36 = MiReadPteShadow(v12, v36);
        LODWORD(v12) = 8 * ((((v12 << 25) + 0x10000000) >> 16) - *(_DWORD *)(v32 + 8));
        if ( v36 )
        {
LABEL_64:
          if ( _bittest(*(const signed __int32 **)(v32 + 8), v31) )
          {
            _bittestandreset(*(signed __int32 **)(v32 + 8), v31);
            ++v30;
          }
        }
        else
        {
          v31 = v12 - 1;
        }
      }
      else
      {
        _bittestandreset(*(signed __int32 **)(v32 + 8), v31);
      }
LABEL_57:
      ++v31;
      v22 = 0x904C0000000LL;
    }
    while ( v31 <= (int)v13 );
    v17 = a7;
    v21 = 0xA7FEF7FBD48LL;
    v18 = v38 + 1;
    v20 = v47 + 9;
    *a7 >>= 1;
    a7[1] >>= 1;
    v9 = i;
    v14 = v39;
    v10 = v44;
    v43 = v30;
    v19 = (unsigned __int64)j;
    v7 = v43;
    LODWORD(v12) = v40 >> 9;
    LODWORD(v13) = v41 >> 9;
    ++v38;
    v47 = v20;
  }
  while ( v20 < 0x1B );
  if ( v7 )
  {
    MEMORY[0xFFFFF580108041F8] -= v7;
    MiReturnFullProcessCommitment(a3, v7);
  }
  return UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a3);
}
