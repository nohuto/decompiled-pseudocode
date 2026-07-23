/*
 * XREFs of MiCountSystemImageCommitment @ 0x14012CFC0
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x14012CF48 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14012D210 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // rcx
  __int64 v3; // rbp
  ULONG_PTR v4; // r11
  __int64 v5; // rsi
  __int64 v6; // r14
  char *AnyMultiplexedVm; // r15
  int v8; // r12d
  __int64 v9; // rdi
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  KIRQL v14; // r13
  __int64 v15; // r13
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rcx
  KIRQL v23; // [rsp+60h] [rbp+8h]
  __int64 v24; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 196) & 7) != 0 )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v2 = *(_QWORD *)(v1 + 112);
  if ( !v2 )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v3 = MiSectionControlArea(v2);
  if ( !*(_QWORD *)(v3 + 144) )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  if ( v4 < qword_140326950 || v4 >= qword_140326950 + 0x8000000000LL )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
  v8 = (*(_DWORD *)(v3 + 56) >> 11) & 1;
  v9 = 0LL;
  v24 = MiFreePrivateFixupEntryForSystemImage(v4);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v11 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v3 + 128;
  v23 = v11;
  v14 = v11;
  if ( v3 != -128 )
  {
    v15 = v24;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v13 + 32) & 0x3Eu) < 8 )
      {
        v17 = MiGetSubsectionDriverProtos((_QWORD *)v13) == 0;
        v16 = *(unsigned int *)(v13 + 44);
        if ( v17 )
        {
          if ( !(_DWORD)v16 )
            goto LABEL_32;
          v18 = (unsigned int)v16;
          v19 = -v5;
          while ( 2 )
          {
            if ( !v15
              || (v12 = (v19 + v6) >> 3, !_bittest(*(const signed __int32 **)(*(_QWORD *)(v15 + 40) + 8LL), v12)) )
            {
              v20 = MI_READ_PTE_LOCK_FREE(v6);
              v24 = v20;
              if ( !v20 )
                goto LABEL_31;
              if ( v8 == 1 )
                break;
              if ( (v20 & 1) != 0 )
              {
                v21 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v24) - 0x58000000000LL;
                if ( !*(_QWORD *)v21 )
                  break;
                if ( (*(_BYTE *)(v21 + 35) & 8) != 0 )
                  break;
                v12 = 0x200000000000000LL;
                if ( (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) == 0 )
                  break;
                v12 = 0x8000000000000000uLL;
                if ( *(__int64 *)(v21 + 8) >= 0 || (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
                  break;
LABEL_31:
                v6 += 8LL;
                if ( !--v18 )
                  goto LABEL_32;
                continue;
              }
              if ( (v20 & 0x400) != 0 && !MI_PROTO_FORMAT_COMBINED(v20) )
                goto LABEL_31;
            }
            break;
          }
          ++v9;
          goto LABEL_31;
        }
      }
      else
      {
        v16 = *(unsigned int *)(v13 + 44);
      }
      v6 += 8 * v16;
      v9 += v16;
LABEL_32:
      v13 = *(_QWORD *)(v13 + 16);
      if ( !v13 )
      {
        v14 = v23;
        break;
      }
    }
  }
  LOBYTE(v12) = v14;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12);
  return v9;
}
