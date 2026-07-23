/*
 * XREFs of MiWalkVaRange @ 0x1400B9514
 * Callers:
 *     MiResetVirtualMemory @ 0x1400ADFA4 (MiResetVirtualMemory.c)
 *     MiSetPriorityVaRanges @ 0x1404C9B34 (MiSetPriorityVaRanges.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x1400984DC (MiMakeProtoLeafValid.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // r12d
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  KIRQL v11; // si
  __int64 v12; // r9
  __int64 NextPageTable; // rbx
  int v14; // eax
  __int64 ProtoPteAddress; // rsi
  int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // r8d
  unsigned __int64 v20; // rax
  int v21; // r8d
  unsigned int v22; // eax
  unsigned __int64 v23; // rbx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  KIRQL v29; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v30[3]; // [rsp+41h] [rbp-BFh] BYREF
  int v31; // [rsp+44h] [rbp-BCh]
  unsigned int v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v35; // [rsp+60h] [rbp-A0h]
  __int64 *v36; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v37; // [rsp+70h] [rbp-90h]
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  unsigned __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  struct _KEVENT *v40; // [rsp+88h] [rbp-78h] BYREF
  int v41; // [rsp+90h] [rbp-70h] BYREF
  __int16 v42; // [rsp+94h] [rbp-6Ch]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]

  v32 = a4;
  v30[0] = 17;
  v33 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = 20LL;
  v41 = 1;
  v42 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v37 = v9;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].IdealNode[12];
  v35 = &Process[1].IdealNode[12];
  v11 = MiLockWorkingSetExclusive((__int64)&Process[1].IdealNode[12]);
  v29 = v11;
  while ( v8 <= v9 )
  {
    LOBYTE(v12) = v11;
    NextPageTable = MiGetNextPageTable(v8, v9, (__int64)&v41, v12, 4, &v34);
    v14 = 1;
    v31 = 1;
    if ( NextPageTable != v8 )
    {
      if ( (*(_DWORD *)(a3 + 48) & 0x8000) == 0
        && *(_QWORD *)(a3 + 80)
        && MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12, 1, &v36) )
      {
        v14 = 0;
        v31 = 0;
      }
      else
      {
        v6 = -1073740748;
        if ( !NextPageTable )
          break;
        v14 = v31;
        v8 = NextPageTable;
      }
    }
    if ( v34 == 1 )
    {
      v8 += 4096LL;
      goto LABEL_75;
    }
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v16 = 0;
      if ( !v14 || (v17 = MI_READ_PTE_LOCK_FREE(v8), (v18 = v17) == 0) )
      {
        if ( (*(_DWORD *)(a3 + 48) & 0x8000) == 0 && *(_QWORD *)(a3 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12, 1, &v36);
          if ( ProtoPteAddress )
            goto LABEL_36;
          if ( !v31 )
          {
            v16 = 1;
            v8 -= 8LL;
            goto LABEL_46;
          }
        }
        goto LABEL_47;
      }
      if ( (v17 & 1) != 0 || (v17 & 0x400) == 0 )
        goto LABEL_47;
      if ( v32 == 2 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v17) )
      {
        ProtoPteAddress = MiGetPrototypePteDirect(v18);
        goto LABEL_35;
      }
      if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v18) )
      {
        v20 = ((__int64)(v8 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
        if ( (v20 == 2147352576 || v20 == qword_1403269D8 && qword_1403269D8)
          && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0
          || ((*(_DWORD *)(a3 + 48) & 0x8000) != 0
           || !*(_QWORD *)(a3 + 80)
           || (ProtoPteAddress = MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12, 1, &v36),
               !(unsigned int)MiIsPrototypePteVadLookup(v18))
           && ProtoPteAddress != MiGetPrototypePteDirect(v18))
          && (ProtoPteAddress = MiGetPrototypePteDirect(v18), v21 != 2) )
        {
LABEL_29:
          v6 = -1073740748;
LABEL_46:
          v11 = v29;
          goto LABEL_60;
        }
LABEL_35:
        if ( ProtoPteAddress )
        {
LABEL_36:
          if ( ((v33 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            if ( v7 )
            {
              MiUnlockProtoPoolPage(v7, v30[0]);
              v33 = 0LL;
            }
            v7 = MiLockProtoPoolPage(ProtoPteAddress, v30);
            if ( !v7 )
            {
              MiFlushTbList(&v41);
              v10 = (__int64)v35;
              LOBYTE(v25) = v29;
              MiUnlockWorkingSetExclusive((__int64)v35, v25);
              MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
              v11 = MiLockWorkingSetExclusive(v10);
              v29 = v11;
              goto LABEL_75;
            }
            v33 = ProtoPteAddress;
          }
LABEL_49:
          v22 = MiActOnPte(a3, v8, ProtoPteAddress, v32, a5, &v40, &v39);
          if ( v22 )
          {
            if ( v22 == 274 )
            {
              v16 = 1;
              MiInsertTbFlushEntry(&v41, (__int64)(v8 << 25) >> 16, 1LL);
              MiFlushTbList(&v41);
              v11 = v29;
              MiCopyOnWriteEx((__int64)(v8 << 25) >> 16, 0);
              v8 -= 8LL;
              goto LABEL_56;
            }
            if ( v22 == -1073741791 )
              MiInsertTbFlushEntry(&v41, (__int64)(v8 << 25) >> 16, 1LL);
            else
              v6 = v22;
          }
          v11 = v29;
LABEL_56:
          v23 = v39;
          if ( v39 )
          {
            if ( v7 )
            {
              MiUnlockProtoPoolPage(v7, v30[0]);
              v7 = 0LL;
              v33 = 0LL;
            }
            MiReleasePageFileInfo(v40, v23, 1);
          }
          goto LABEL_60;
        }
LABEL_47:
        if ( v7 )
        {
          MiUnlockProtoPoolPage(v7, v30[0]);
          v7 = 0LL;
          v33 = 0LL;
        }
        goto LABEL_49;
      }
      if ( v19 == 1 )
        goto LABEL_29;
      if ( v7 )
      {
        MiUnlockProtoPoolPage(v7, v30[0]);
        v7 = 0LL;
        v33 = 0LL;
      }
      MiFlushTbList(&v41);
      v11 = v29;
      if ( MiMakeProtoLeafValid(v8, 24LL, v29) == v8 )
        v8 -= 8LL;
      else
        v6 = -1073740748;
LABEL_60:
      v8 += 8LL;
      v24 = 0;
      if ( v16 == 1 || v8 > v37 || (v8 & 0xFFF) == 0 )
        v24 = 1;
      v10 = (__int64)v35;
      if ( (v8 & 0x78) == 0 && MiWorkingSetIsContended((__int64)v35) || KeShouldYieldProcessor() )
        v24 |= 2u;
      if ( v24 )
        break;
      v14 = v31;
    }
    if ( v7 )
    {
      MiUnlockProtoPoolPage(v7, v30[0]);
      v7 = 0LL;
      v33 = 0LL;
    }
    if ( (v24 & 2) != 0 )
    {
      MiFlushTbList(&v41);
      LOBYTE(v26) = v11;
      MiRelockWorkingSetExclusive(v10, v26);
    }
LABEL_75:
    v9 = v37;
  }
  MiFlushTbList(&v41);
  LOBYTE(v27) = v11;
  MiUnlockWorkingSetExclusive(v10, v27);
  return v6;
}
