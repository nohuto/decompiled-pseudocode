/*
 * XREFs of MiAddToReservationCluster @ 0x140116364
 * Callers:
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14009DBAC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReferencePageForModifiedWrite @ 0x1400FFD38 (MiReferencePageForModifiedWrite.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
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
  __int64 v14; // rbx
  unsigned int v15; // edi
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int8 v19; // r14
  unsigned int PteTimeStamp; // eax
  unsigned int v21; // r9d
  const signed __int64 *v22; // rcx
  unsigned int v23; // r10d
  _DWORD *v24; // r8
  _DWORD *v25; // r9
  unsigned int v26; // edx
  bool i; // zf
  int v28; // ecx
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+70h] [rbp+8h]

  v6 = *(_WORD *)(a1 + 204);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 256);
  v31 = v8;
  v11 = 5LL * (v6 & 0xF);
  v30 = v11;
  if ( a3 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v8 + 8 * v11 + 2384);
      if ( v13 == 0xFFFFFFFFFLL )
        break;
      v14 = 48 * v13 - 0x58000000000LL;
      v15 = 0;
      v16 = MiLockPageInline(v14);
      v8 = v31;
      v19 = v16;
      if ( v13 == *(_QWORD *)(v31 + 8 * v30 + 2384) )
      {
        PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v14 + 16), v17, v18);
        v21 = PteTimeStamp;
        if ( PteTimeStamp != a4 )
        {
          v15 = PteTimeStamp - a4;
          if ( !MI_IS_PTE_IN_WS_SWAP_SET((_QWORD *)(v14 + 16)) || v21 < a4 || v15 > 0x1F || v15 + v7 >= a3 )
            goto LABEL_33;
        }
        v22 = *(const signed __int64 **)(a2 + 8);
        if ( _bittest64(v22, v21) )
          goto LABEL_33;
        if ( v15 )
        {
          v23 = v15 + a4 - 1;
          if ( v23 >= *(_DWORD *)a2 )
            goto LABEL_33;
          if ( v15 > 1 )
          {
            v24 = (_DWORD *)v22 + ((unsigned __int64)a4 >> 5);
            v25 = (_DWORD *)v22 + ((unsigned __int64)v23 >> 5);
            if ( v24 != v25 )
            {
              for ( i = ((-1 << a4) & *v24) == 0; i; i = *v24 == 0 )
              {
                if ( ++v24 == v25 )
                {
                  v26 = 0xFFFFFFFF >> -(char)(v15 + a4);
                  goto LABEL_23;
                }
              }
LABEL_33:
              _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v19);
              return v7;
            }
            v26 = 0xFFFFFFFF >> (32 - v15) << a4;
LABEL_23:
            if ( (v26 & *v24) != 0 )
              goto LABEL_33;
          }
          else if ( _bittest((const signed __int32 *)v22, a4) )
          {
            goto LABEL_33;
          }
        }
        v28 = MiReferencePageForModifiedWrite(48 * v13 - 0x58000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v19);
        if ( !v28 )
          return v7;
        if ( v15 )
        {
          v7 += v15;
          a4 += v15;
          *a6 += v15;
          do
          {
            *a5++ = qword_1403276C8;
            --v15;
          }
          while ( v15 );
        }
        *a5 = v13;
        ++v7;
        ++a5;
        ++a4;
        if ( v28 == 3 && v7 >= 0x10 )
          return v7;
        v8 = v31;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v16);
      }
      if ( v7 == a3 )
        return v7;
      v11 = v30;
    }
  }
  return v7;
}
