/*
 * XREFs of MiAddToReservationCluster @ 0x1401091BC
 * Callers:
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400E2724 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 */

__int64 __fastcall MiAddToReservationCluster(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int16 v6; // ax
  unsigned int v7; // ebp
  __int64 v8; // rcx
  __int64 v11; // rax
  __int64 v13; // r12
  unsigned int v14; // edi
  __int64 v15; // rbx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // r14
  unsigned __int64 v18; // r9
  const signed __int64 *v20; // rcx
  int v21; // ecx
  unsigned int v22; // r10d
  _DWORD *v23; // r8
  _DWORD *v24; // r9
  unsigned int v25; // edx
  bool i; // zf
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+70h] [rbp+8h]

  v6 = *(_WORD *)(a1 + 204);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 256);
  v28 = v8;
  v11 = 5 * ((v6 & 0xF) + 56LL);
  v27 = v11;
  if ( a3 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v8 + 8 * v11 + 16);
      if ( v13 == 0xFFFFFFFFFLL )
        break;
      v14 = 0;
      v15 = 48 * v13 - 0x58000000000LL;
      v16 = MiLockPageInline(v15);
      v8 = v28;
      v17 = v16;
      if ( v13 == *(_QWORD *)(v28 + 8 * v27 + 16) )
      {
        v18 = HIDWORD(*(_QWORD *)(v15 + 16));
        if ( (_DWORD)v18 != a4 )
        {
          v14 = v18 - a4;
          if ( !MI_IS_PTE_IN_WS_SWAP_SET((_QWORD *)(v15 + 16)) || (unsigned int)v18 < a4 || v14 > 0x1F || v14 + v7 >= a3 )
            goto LABEL_6;
        }
        v20 = *(const signed __int64 **)(a2 + 8);
        if ( _bittest64(v20, v18) )
          goto LABEL_6;
        if ( v14 )
        {
          v22 = v14 + a4 - 1;
          if ( v22 >= *(_DWORD *)a2 )
            goto LABEL_6;
          if ( v14 > 1 )
          {
            v23 = (_DWORD *)v20 + ((unsigned __int64)a4 >> 5);
            v24 = (_DWORD *)v20 + ((unsigned __int64)v22 >> 5);
            if ( v23 != v24 )
            {
              for ( i = ((-1 << a4) & *v23) == 0; i; i = *v23 == 0 )
              {
                if ( ++v23 == v24 )
                {
                  v25 = 0xFFFFFFFF >> -(char)(v14 + a4);
                  goto LABEL_32;
                }
              }
LABEL_6:
              _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v17);
              return v7;
            }
            v25 = 0xFFFFFFFF >> (32 - v14) << a4;
LABEL_32:
            if ( (v25 & *v23) != 0 )
              goto LABEL_6;
          }
          else if ( _bittest((const signed __int32 *)v20, a4) )
          {
            goto LABEL_6;
          }
        }
        v21 = MiReferencePageForModifiedWrite(48 * v13 - 0x58000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v17);
        if ( !v21 )
          return v7;
        if ( v14 )
        {
          v7 += v14;
          a4 += v14;
          *a6 += v14;
          do
          {
            *a5++ = qword_1402FF238;
            --v14;
          }
          while ( v14 );
        }
        *a5 = v13;
        ++v7;
        ++a5;
        ++a4;
        if ( v21 == 3 && v7 >= 0x10 )
          return v7;
        v8 = v28;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v16);
      }
      if ( v7 == a3 )
        return v7;
      v11 = v27;
    }
  }
  return v7;
}
