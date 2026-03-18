/*
 * XREFs of MiWalkVaRange @ 0x14001C524
 * Callers:
 *     MiResetVirtualMemory @ 0x1400EEF4C (MiResetVirtualMemory.c)
 *     MiSetPriorityVaRanges @ 0x1404BFD14 (MiSetPriorityVaRanges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiMakeProtoLeafValid @ 0x14001EF04 (MiMakeProtoLeafValid.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  ULONG_PTR v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned int v8; // r12d
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  KIRQL v13; // si
  char v14; // r15
  __int64 NextPageTable; // rbx
  int v16; // eax
  ULONG_PTR ProtoPteAddress; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // eax
  int v21; // esi
  __int64 v22; // rbx
  int v23; // ebx
  volatile LONG *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v29; // rdx
  __int64 ProtoLeafValid; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  KIRQL v34; // al
  KIRQL v35; // [rsp+40h] [rbp-C0h]
  char v36[3]; // [rsp+41h] [rbp-BFh] BYREF
  int v37; // [rsp+44h] [rbp-BCh]
  int v38; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v39; // [rsp+50h] [rbp-B0h]
  unsigned int v40; // [rsp+58h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+60h] [rbp-A0h]
  int v42; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v43; // [rsp+70h] [rbp-90h]
  _BYTE v44[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v49; // [rsp+A4h] [rbp-5Ch]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]

  v50 = 20LL;
  v48 = 1;
  v49 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = a4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = 0LL;
  v8 = 0;
  v36[0] = 17;
  v9 = 0LL;
  v43 = v6;
  Process = KeGetCurrentThread()->ApcState.Process;
  SpinLock = (PEX_SPIN_LOCK)&Process[1].IdealNode[12];
  v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  v13 = v35;
  if ( v5 > v6 )
    goto LABEL_48;
  v14 = v36[0];
  do
  {
    LOBYTE(v12) = v13;
    NextPageTable = MiGetNextPageTable(v5, v6, (unsigned int)&v48, v12, 4, (__int64)&v42);
    v16 = 1;
    v38 = 1;
    if ( NextPageTable != v5 )
    {
      if ( (*(_DWORD *)(a3 + 48) & 0x8000) == 0
        && *(_QWORD *)(a3 + 80)
        && MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12, 1LL, v44) )
      {
        v16 = 0;
        v38 = 0;
      }
      else
      {
        v8 = -1073740748;
        if ( !NextPageTable )
          break;
        v16 = v38;
        v5 = NextPageTable;
      }
    }
    if ( v42 == 1 )
    {
      v5 += 4096LL;
      goto LABEL_47;
    }
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v37 = 0;
      if ( !v16 || (v18 = MI_READ_PTE_LOCK_FREE(v5), (v19 = v18) == 0) )
      {
        if ( (*(_DWORD *)(a3 + 48) & 0x8000) != 0 || !*(_QWORD *)(a3 + 80) )
          goto LABEL_18;
        ProtoPteAddress = MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12, 1LL, v44);
        if ( !ProtoPteAddress )
        {
          if ( !v38 )
          {
            v21 = 1;
LABEL_73:
            v5 -= 8LL;
            goto LABEL_23;
          }
          goto LABEL_18;
        }
        goto LABEL_35;
      }
      if ( (v18 & 1) != 0 || (v18 & 0x400) == 0 )
        goto LABEL_18;
      if ( v40 == 2 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v18) )
      {
        ProtoPteAddress = v19 >> 16;
        goto LABEL_15;
      }
      if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v19) )
      {
        if ( v5 == 0xFFFFF680003FFF00uLL && (HIDWORD(Process[2].SwapListEntry.Next) & 1) == 0 )
        {
LABEL_66:
          v21 = v37;
          v8 = -1073740748;
          goto LABEL_23;
        }
        if ( (*(_DWORD *)(a3 + 48) & 0x8000) != 0 || !*(_QWORD *)(a3 + 80) )
        {
LABEL_69:
          ProtoPteAddress = v19 >> 16;
          if ( (_DWORD)v11 != 2 )
            goto LABEL_66;
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12, 1LL, v44);
          if ( HIDWORD(v19) != 0xFFFFFFFF && ProtoPteAddress != v19 >> 16 )
          {
            v11 = v40;
            goto LABEL_69;
          }
        }
LABEL_15:
        if ( !ProtoPteAddress )
        {
LABEL_18:
          if ( v9 )
          {
            LOBYTE(v10) = v14;
            MiUnlockProtoPoolPage(v9, v10);
            v9 = 0LL;
            v39 = 0LL;
          }
          goto LABEL_20;
        }
LABEL_35:
        if ( ((v39 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          if ( v9 )
          {
            LOBYTE(v10) = v14;
            MiUnlockProtoPoolPage(v9, v10);
            v39 = 0LL;
          }
          v9 = MiLockProtoPoolPage(ProtoPteAddress, v36);
          if ( !v9 )
          {
            MiFlushTbList(&v48, v25, v26);
            LOBYTE(v33) = v35;
            MiUnlockWorkingSetExclusive(SpinLock, v33);
            MmAccessFault(2uLL, ProtoPteAddress);
            v34 = ExAcquireSpinLockExclusive(SpinLock);
            v14 = v36[0];
            v13 = v34;
            v35 = v34;
            goto LABEL_47;
          }
          v14 = v36[0];
          v39 = ProtoPteAddress;
        }
LABEL_20:
        v20 = MiActOnPte(a3, v5, ProtoPteAddress, v40, a5, &v46, &v45);
        if ( v20 )
        {
          if ( v20 != 274 )
          {
            if ( v20 == -1073741791 )
              MiInsertTbFlushEntry(&v48, (__int64)(v5 << 25) >> 16, 1LL, 0LL);
            else
              v8 = v20;
            goto LABEL_21;
          }
          v21 = 1;
          MiInsertTbFlushEntry(&v48, (__int64)(v5 << 25) >> 16, 1LL, 0LL);
          MiFlushTbList(&v48, v31, v32);
          MiCopyOnWriteEx((__int64)(v5 << 25) >> 16, 0);
          v5 -= 8LL;
        }
        else
        {
LABEL_21:
          v21 = v37;
        }
        v22 = v45;
        if ( v45 )
        {
          if ( v9 )
          {
            LOBYTE(v10) = v14;
            MiUnlockProtoPoolPage(v9, v10);
            v9 = 0LL;
            v39 = 0LL;
          }
          MiReleasePageFileInfo(v46, v22, 1LL);
        }
        goto LABEL_23;
      }
      if ( (_DWORD)v11 == 1 )
        goto LABEL_66;
      if ( v9 )
      {
        LOBYTE(v10) = v14;
        MiUnlockProtoPoolPage(v9, v10);
        v9 = 0LL;
        v39 = 0LL;
      }
      MiFlushTbList(&v48, v10, v11);
      ProtoLeafValid = MiMakeProtoLeafValid(v5);
      v21 = v37;
      if ( ProtoLeafValid == v5 )
        goto LABEL_73;
      v8 = -1073740748;
LABEL_23:
      v5 += 8LL;
      v23 = 0;
      if ( v5 > v43 || v21 == 1 || (v5 & 0xFFF) == 0 )
        v23 = 1;
      v24 = SpinLock;
      if ( (v5 & 0x78) == 0 && (v14 = v36[0], (*SpinLock & 0x40000000) != 0) || KeShouldYieldProcessor() )
        v23 |= 2u;
      if ( v23 )
        break;
      v16 = v38;
    }
    if ( v9 )
    {
      LOBYTE(v10) = v14;
      MiUnlockProtoPoolPage(v9, v10);
      v9 = 0LL;
      v39 = 0LL;
    }
    if ( (v23 & 2) != 0 )
    {
      MiFlushTbList(&v48, v10, v11);
      LOBYTE(v29) = v35;
      MiUnlockWorkingSetExclusive(v24, v29);
      v13 = ExAcquireSpinLockExclusive(v24);
      v35 = v13;
    }
    else
    {
      v13 = v35;
    }
LABEL_47:
    LODWORD(v6) = v43;
  }
  while ( v5 <= v43 );
LABEL_48:
  MiFlushTbList(&v48, v10, v11);
  LOBYTE(v27) = v13;
  MiUnlockWorkingSetExclusive(SpinLock, v27);
  return v8;
}
