/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x1400FD7D0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbp
  unsigned __int64 v9; // r15
  unsigned __int64 *v10; // rsi
  unsigned __int64 result; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r12
  __int16 v17; // di
  unsigned __int64 v18; // rcx
  __int64 v19; // r10
  char v20; // bl
  unsigned int v21; // eax
  unsigned __int64 Address; // rax
  int v23; // r14d
  ULONG_PTR v24; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  int v29; // [rsp+30h] [rbp-78h] BYREF
  __int64 v30; // [rsp+38h] [rbp-70h] BYREF
  __int64 v31; // [rsp+40h] [rbp-68h]
  ULONG_PTR v32; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-58h]
  unsigned __int64 v34; // [rsp+58h] [rbp-50h]
  unsigned __int64 *v36; // [rsp+B8h] [rbp+10h]
  int v37; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+C8h] [rbp+20h]

  v38 = (unsigned __int64)a4;
  v36 = a2;
  v6 = a1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = (unsigned __int64)a4;
  v10 = a2;
  v31 = 0xFFFFFFFFFLL;
  result = (unsigned __int64)&a2[a3];
  v34 = result;
  if ( (unsigned __int64)a2 < result )
  {
    while ( 1 )
    {
      result = *v10;
      v12 = 48 * *v10 - 0x58000000000LL;
      if ( v12 != qword_1402FF240 )
        break;
LABEL_55:
      v9 += 8LL;
      v10 = v36 + 1;
      v38 = v9;
      v36 = v10;
      if ( (unsigned __int64)v10 >= v34 )
        return result;
    }
    v13 = MI_READ_PTE_LOCK_FREE(v9);
    LODWORD(v16) = 0;
    v33 = v13;
    v17 = v13;
    v30 = v13;
    if ( (a6 & 0x40) != 0 )
    {
      v18 = v13;
      if ( HIDWORD(v13) != 0xFFFFFFFF )
      {
        v30 = MI_READ_PTE_LOCK_FREE((__int64)v13 >> 16);
        v18 = *(unsigned int *)(48 * (MI_GET_PAGE_FRAME_FROM_PTE(&v30) - 0x1D55555555LL));
      }
      LODWORD(v16) = MmMakeProtectNotWriteCopy[(v18 >> 5) & 0x1F];
      v13 = 32 * (v16 & 0x1F);
      v30 = v13;
    }
    else if ( (v13 & 0x400) == 0 && (v13 & 0x800) != 0 )
    {
      v19 = 0xFFFFFFFFFLL;
      v13 = *(_QWORD *)(48 * (((v13 >> 12) & 0xFFFFFFFFFLL) - 0x1D55555555LL));
      v30 = v13;
LABEL_8:
      *(_QWORD *)v12 = a5;
      *(_QWORD *)(v12 + 16) = v13;
      v20 = a6;
      if ( (a6 & 0x40) != 0 )
      {
        v21 = v16;
      }
      else
      {
        if ( (a6 & 0x10) != 0 )
        {
          *(_QWORD *)(v12 + 40) |= 0x200000000000000uLL;
          v20 = a6;
          v16 = (v13 >> 5) & 0x1F;
        }
        else
        {
          LODWORD(v16) = (v13 >> 5) & 0x1F;
        }
        v21 = v16;
        if ( (_DWORD)v16 == 24 && v6 <= (unsigned __int64)MmHighestUserAddress )
        {
          Address = MiLocateAddress(v6);
          v20 = a6;
          v21 = (*(_DWORD *)(Address + 48) >> 3) & 0x1F;
        }
      }
      v23 = 1;
      if ( v21 != 31 )
      {
        if ( v21 >> 3 == 3 && (v21 & 7) != 0 )
        {
          v23 = dword_1403812A8;
        }
        else if ( v21 >> 3 == 1 )
        {
          v23 = MiPlatformCacheAttributes[0];
        }
      }
      if ( v31 == v19 )
      {
        v7 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        if ( (v9 & 0xFFF) != 0 )
        {
LABEL_31:
          if ( (v20 & 0x20) != 0 )
            v9 = v38 & 0x7FFFFFFFFFFFFFFFLL;
          *(_BYTE *)(v12 + 34) |= 0x20u;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v37 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v37, v14, v15);
              while ( (*(_QWORD *)(v12 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
            v17 = v33;
          }
          if ( *(unsigned __int8 *)(v12 + 34) >> 6 != v23 )
            MiChangePageAttribute(v12, v23, 1u);
          *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
          *(_WORD *)(v12 + 32) = 1;
          if ( (a6 & 8) != 0 )
            *(_BYTE *)(v12 + 35) ^= (*(_BYTE *)(v12 + 35) ^ a6) & 7;
          v26 = (*(_QWORD *)(v12 + 40) ^ v31) & 0xFFFFFFFFFLL;
          *(_QWORD *)(v12 + 8) = v9;
          *(_QWORD *)(v12 + 40) ^= v26;
          *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
          if ( a6 < 0 )
            *(_BYTE *)(v12 + 35) |= 0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          if ( (v17 & 0x400) == 0 && (v17 & 0x800) != 0 )
          {
            v9 = v38;
          }
          else
          {
            v9 = v38;
            v27 = v38;
            v28 = 32 * (v16 & 0x1F | ((*v36 & 0xFFFFFFFFFLL) << 7) | 0x40);
            *(_QWORD *)v38 = v28;
            result = MiPteInShadowRange(v27);
            if ( (_DWORD)result )
              result = MiWritePteShadow(v9, v28);
          }
          if ( (a6 & 0x40) == 0 )
          {
            v29 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v29, v14, v15);
                while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
              v9 = v38;
            }
            result = *(_QWORD *)(v8 + 24);
            *(_QWORD *)(v8 + 24) = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v6 = a1;
          goto LABEL_55;
        }
        v7 += 8LL;
      }
      v24 = MI_READ_PTE_LOCK_FREE(v7);
      if ( (*(_BYTE *)v7 & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x61940uLL, v7 << 25 >> 16, v24, 0LL);
      v32 = v24;
      v31 = MI_GET_PAGE_FRAME_FROM_PTE(&v32);
      v8 = 48 * v31 - 0x58000000000LL;
      goto LABEL_31;
    }
    v19 = 0xFFFFFFFFFLL;
    goto LABEL_8;
  }
  return result;
}
