/*
 * XREFs of MiCountSystemImageCommitment @ 0x14011FFB4
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x14011FF3C (MiSessionUpdateImageCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140120244 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  ULONG_PTR v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rsi
  volatile LONG *v8; // r14
  __int64 v9; // rbx
  int v10; // r13d
  KIRQL v11; // al
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rdi
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  KIRQL v21; // [rsp+70h] [rbp+8h]
  __int64 v22; // [rsp+78h] [rbp+10h]
  unsigned __int64 v23; // [rsp+80h] [rbp+18h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h]

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 196) & 7) != 0 )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v2 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(8 * ((v2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v2 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((v2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  }
  v3 = *(_QWORD *)(a1 + 112);
  if ( !v3 )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v4 = (_QWORD *)MiSectionControlArea(v3);
  if ( !v4[17] )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = v6;
  v7 = v6;
  if ( v5 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    v8 = &dword_1402FFA80;
  else
    v8 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
  v9 = 0LL;
  v10 = *(_BYTE *)(*v4 + 14LL) & 1;
  v22 = MiFreePrivateFixupEntryForSystemImage(v5);
  v11 = ExAcquireSpinLockExclusive(v8);
  v21 = v11;
  v14 = v4 + 15;
  if ( v14 )
  {
    while ( 1 )
    {
      if ( ((_BYTE)v14[4] & 0x3Eu) >= 8 )
      {
        v15 = *((unsigned int *)v14 + 11);
LABEL_13:
        v7 += 8 * v15;
        v9 += v15;
        goto LABEL_33;
      }
      v16 = MiGetSubsectionDriverProtos(v14) == 0;
      v15 = *((unsigned int *)v14 + 11);
      if ( !v16 )
        goto LABEL_13;
      if ( !(_DWORD)v15 )
        goto LABEL_33;
      v17 = (unsigned int)v15;
      do
      {
        if ( v22 )
        {
          v12 = (v7 - v6) >> 3;
          if ( _bittest(*(const signed __int32 **)(*(_QWORD *)(v22 + 40) + 8LL), v12) )
            goto LABEL_30;
        }
        v18 = MI_READ_PTE_LOCK_FREE(v7);
        v23 = v18;
        if ( !v18 )
          goto LABEL_31;
        if ( v10 == 1 )
        {
LABEL_30:
          ++v9;
          goto LABEL_31;
        }
        if ( (v18 & 1) != 0 )
        {
          v19 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v23) - 0x58000000000LL;
          if ( !*(_QWORD *)v19 )
            goto LABEL_30;
          if ( (*(_BYTE *)(v19 + 35) & 8) != 0 )
            goto LABEL_30;
          v12 = 0x200000000000000LL;
          if ( (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) == 0 )
            goto LABEL_30;
          v12 = 0x8000000000000000uLL;
          if ( *(__int64 *)(v19 + 8) >= 0 || (*(_DWORD *)(v19 + 16) & 0x400LL) == 0 )
            goto LABEL_30;
        }
        else if ( (v18 & 0x400) == 0 || MI_PROTO_FORMAT_COMBINED(v18) )
        {
          goto LABEL_30;
        }
LABEL_31:
        v7 += 8LL;
        --v17;
      }
      while ( v17 );
      v6 = v24;
LABEL_33:
      v14 = (_QWORD *)v14[2];
      if ( !v14 )
      {
        v11 = v21;
        break;
      }
    }
  }
  LOBYTE(v12) = v11;
  MiUnlockWorkingSetExclusive((__int64)v8, v12, v13);
  return v9;
}
