/*
 * XREFs of ethFilterDprIndicateReceivePacket @ 0x1C005D320
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C00046F0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C000E820 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ethFindMulticast @ 0x1C005DD48 (ethFindMulticast.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C005DDDC (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ethFilterReceivePacketStats @ 0x1C005DEE8 (ethFilterReceivePacketStats.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006006C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C0063218 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ethFilterDprIndicateReceivePacket(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  unsigned int Number; // ebp
  int v4; // eax
  __int64 *v6; // r13
  struct _NDIS_PACKET **v7; // rsi
  char v9; // r12
  int v10; // r14d
  struct _NDIS_RW_LOCK_EX *v11; // rcx
  struct _NDIS_PACKET *v12; // rbx
  int v13; // ecx
  int v14; // eax
  struct _NDIS_PACKET *v15; // rcx
  _MDL *Head; // rsi
  char *v17; // rdx
  _BYTE *MappedSystemVa; // r11
  _BYTE *v19; // rax
  struct _MDL *Next; // rcx
  unsigned int ByteCount; // r10d
  struct _NDIS_STACK_RESERVED *v22; // r9
  __int64 v23; // rsi
  unsigned int v24; // r15d
  bool v25; // r10
  unsigned int v26; // ebp
  __int64 v27; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v28; // rdx
  __int64 v29; // r14
  struct _NET_BUFFER_LIST *v30; // rcx
  __int16 v31; // ax
  __int64 v32; // r8
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // r14d
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // r12
  char v40; // r8
  __int64 v41; // rdx
  unsigned int v42; // ebp
  __int64 v43; // rax
  __int64 v44; // r15
  struct _NET_BUFFER_LIST *v45; // rcx
  __int16 v46; // ax
  char v47; // cl
  int v48; // r12d
  __int64 v49; // r8
  _QWORD *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r8
  _QWORD *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r15
  int v59; // eax
  int v60; // ebp
  char Multicast; // al
  bool v62; // r8
  __int64 v63; // rdx
  unsigned int v64; // ebp
  __int64 v65; // rax
  __int64 v66; // r14
  struct _NET_BUFFER_LIST *v67; // rcx
  __int16 v68; // ax
  char v69; // cl
  int v70; // ecx
  signed __int32 v71; // edx
  bool v72; // zf
  char *v73; // rcx
  struct _NDIS_PACKET *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rbx
  int v79; // [rsp+40h] [rbp-88h]
  char v80; // [rsp+44h] [rbp-84h]
  unsigned int v81; // [rsp+48h] [rbp-80h]
  struct _NDIS_STACK_RESERVED *v82; // [rsp+50h] [rbp-78h]
  unsigned int v83; // [rsp+58h] [rbp-70h]
  _BYTE *v84; // [rsp+60h] [rbp-68h]
  struct _NDIS_STACK_RESERVED *v85; // [rsp+68h] [rbp-60h] BYREF
  char *v86; // [rsp+70h] [rbp-58h]
  ULONG_PTR v87; // [rsp+78h] [rbp-50h]
  struct _LOCK_STATE_EX LockState; // [rsp+D0h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D8h] [rbp+10h]
  unsigned int v90; // [rsp+E0h] [rbp+18h]
  unsigned int v91; // [rsp+E8h] [rbp+20h]

  v90 = a3;
  BugCheckParameter4 = a2;
  Number = KeGetPcr()->Prcb.Number;
  v4 = *(_DWORD *)(BugCheckParameter2 + 124);
  v6 = *(__int64 **)(BugCheckParameter2 + 400);
  v7 = (struct _NDIS_PACKET **)a2;
  v87 = a2;
  v79 = 0;
  v9 = 1;
  v81 = Number;
  v10 = 0;
  v11 = (struct _NDIS_RW_LOCK_EX *)v6[36];
  LockState.OldIrql = 2;
  NdisAcquireRWLockRead(v11, &LockState, v4 < 0);
  *(_DWORD *)(BugCheckParameter2 + 2700) += a3;
  ++*(_DWORD *)(BugCheckParameter2 + 2704);
  v83 = 0;
  if ( !a3 )
    goto LABEL_147;
  while ( 1 )
  {
    v12 = *v7;
    v13 = *(_DWORD *)&(*v7)[-1].ProtocolReserved[4];
    if ( v13 != -1 && (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) == 0 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)(BugCheckParameter2 + 3912),
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 5uLL, BugCheckParameter2, (ULONG_PTR)v12, BugCheckParameter4);
    }
    v14 = v13 + 1;
    v15 = *v7;
    *(_DWORD *)&v12[-1].ProtocolReserved[4] = v14;
    NDIS_STACK_RESERVED_FROM_PACKET(v15, &v85);
    Head = v12->Private.Head;
    v17 = (char *)v12 + v12->Private.NdisPacketOobOffset;
    v86 = v17;
    if ( (Head->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = Head->MappedSystemVa;
      v84 = MappedSystemVa;
    }
    else
    {
      v19 = MmMapLockedPages(Head, 0);
      v17 = v86;
      MappedSystemVa = v19;
      v84 = v19;
    }
    Next = Head->Next;
    ByteCount = Head->ByteCount;
    v91 = ByteCount;
    if ( Next )
    {
      do
      {
        ByteCount += Next->ByteCount;
        Next = Next->Next;
      }
      while ( Next );
      v91 = ByteCount;
    }
    v22 = v85;
    v82 = v85;
    *((_DWORD *)v85 + 2) = -1;
    *((_DWORD *)v22 + 3) = 0;
    *(_QWORD *)v22 = BugCheckParameter2;
    v12->Private.ValidCounts = 0;
    if ( *((_DWORD *)v17 + 8) != -1073741670 && (*(_DWORD *)(BugCheckParameter2 + 124) & 0x800) == 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) == 0 )
        *((_DWORD *)v17 + 8) = 0;
      v9 = 0;
    }
    v23 = v6[41];
    v80 = v9;
    if ( v23 && *(_DWORD *)(v23 + 704) < 6u )
    {
      if ( (ByteCount >= 0xE || (v6[38] & 0xA0) != 0)
        && ((v12->Private.Flags & 0x80u) == 0
         || *(_QWORD *)&v12->MacReserved[v12->Private.NdisPacketOobOffset + 24] != v23) )
      {
        v24 = v91;
        v79 = v10 + 1;
        *(_BYTE *)((Number << 12) + *(_QWORD *)(v23 + 816)) = 1;
        v25 = (*(_BYTE *)(v23 + 432) & 0xA0) != 0;
        if ( (v12->Private.Flags & 0x20000) == 0 && (v12->Private.NdisPacketFlags & 2) == 0 )
          ethFilterReceivePacketStats(BugCheckParameter2, MappedSystemVa, v24);
        v12->Private.Flags &= ~0x20000u;
        v26 = *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset);
        v27 = KeGetPcr()->Prcb.Number;
        v28 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(BugCheckParameter2 + 1600);
        v29 = *((_QWORD *)v28 + v27);
        *((_QWORD *)v28 + v27) = v12;
        if ( v9 || !*(_QWORD *)(v23 + 160) || v25 && !v6[41] )
        {
          *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _BYTE *, __int64, _BYTE *, ULONG, unsigned int))(v23 + 128))(
            *(_QWORD *)(v23 + 32),
            v12,
            MappedSystemVa,
            14LL,
            MappedSystemVa + 14,
            v12->Private.Head->ByteCount - 14,
            v24 - 14);
          v22 = v82;
          *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset) = v26;
        }
        else
        {
          v30 = *(struct _NET_BUFFER_LIST **)((char *)&v12[1].Private.Head + v12->Private.NdisPacketOobOffset);
          if ( v30 && v26 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(
              v30,
              v28,
              *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v23 + 680),
              (unsigned __int8)v22);
          v31 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v23 + 160))(*(_QWORD *)(v23 + 32), v12);
          v22 = v82;
          *((_DWORD *)v82 + 3) += v31;
        }
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v29;
      }
      goto LABEL_115;
    }
    if ( ByteCount < 0xE )
    {
      v48 = 32;
      goto LABEL_89;
    }
    v9 = 1;
    if ( (*MappedSystemVa & 1) != 0 )
    {
      if ( *MappedSystemVa == 0xFF
        && MappedSystemVa[1] == 0xFF
        && MappedSystemVa[2] == 0xFF
        && MappedSystemVa[3] == 0xFF
        && MappedSystemVa[4] == 0xFF
        && MappedSystemVa[5] == 0xFF )
      {
        v48 = 8;
        if ( (v12->Private.Flags & 0x20000) == 0 && (v12->Private.NdisPacketFlags & 2) == 0 )
        {
          v49 = *(_QWORD *)(BugCheckParameter2 + 3192);
          if ( v49 )
          {
            v50 = (_QWORD *)(v49 + 112LL * KeGetPcr()->Prcb.Number);
            v50[2] += ByteCount;
            *v50 += ByteCount;
          }
          v51 = *(_QWORD *)(BugCheckParameter2 + 3192);
          if ( v51 )
          {
            v52 = 112LL * KeGetPcr()->Prcb.Number;
            ++*(_QWORD *)(v52 + v51 + 48);
          }
        }
      }
      else
      {
        v48 = 2;
        if ( (v12->Private.Flags & 0x20000) == 0 && (v12->Private.NdisPacketFlags & 2) == 0 )
        {
          v53 = *(_QWORD *)(BugCheckParameter2 + 3192);
          if ( v53 )
          {
            v54 = (_QWORD *)(v53 + 112LL * KeGetPcr()->Prcb.Number);
            v54[3] += ByteCount;
            *v54 += ByteCount;
          }
          v55 = *(_QWORD *)(BugCheckParameter2 + 3192);
          if ( v55 )
          {
            v56 = 112LL * KeGetPcr()->Prcb.Number;
            ++*(_QWORD *)(v56 + v55 + 40);
          }
        }
      }
      v12->Private.Flags &= ~0x20000u;
LABEL_89:
      v57 = *v6;
      if ( !*v6 )
      {
LABEL_115:
        v9 = 1;
        goto LABEL_116;
      }
      while ( 1 )
      {
        v58 = *(_QWORD *)(v57 + 424);
        if ( (v12->Private.Flags & 0x80u) == 0
          || *(_QWORD *)&v12->MacReserved[v12->Private.NdisPacketOobOffset + 24] != v57 )
        {
          v59 = *(_DWORD *)(v57 + 432);
          v60 = v59 & 0xA0;
          if ( (v59 & 0xA0) != 0 || v48 == 8 && (v59 & 8) != 0 )
          {
LABEL_99:
            v79 = v10 + 1;
            v62 = v60 != 0;
            *(_BYTE *)((v81 << 12) + *(_QWORD *)(v57 + 816)) = 1;
            v63 = *(_QWORD *)(BugCheckParameter2 + 1600);
            v64 = *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset);
            v65 = KeGetPcr()->Prcb.Number;
            v66 = *(_QWORD *)(v63 + 8 * v65);
            *(_QWORD *)(v63 + 8 * v65) = v12;
            if ( v80 || !*(_QWORD *)(v57 + 160) || v62 && !v6[41] )
            {
              *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset) = -1073741670;
              (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _BYTE *, __int64, _BYTE *, ULONG, unsigned int))(v57 + 128))(
                *(_QWORD *)(v57 + 32),
                v12,
                v84,
                14LL,
                v84 + 14,
                v12->Private.Head->ByteCount - 14,
                ByteCount - 14);
              v22 = v82;
              *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset) = v64;
            }
            else
            {
              v67 = *(struct _NET_BUFFER_LIST **)((char *)&v12[1].Private.Head + v12->Private.NdisPacketOobOffset);
              if ( v67 && v64 == -1073741670 )
                ndisNblTrackerTransferOwnershipSingleNbl(
                  v67,
                  0LL,
                  *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v57 + 680),
                  (unsigned __int8)v22);
              v68 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v57 + 160))(*(_QWORD *)(v57 + 32), v12);
              v22 = v82;
              *((_DWORD *)v82 + 3) += v68;
            }
            if ( *((int *)v22 + 3) > 0 )
            {
              v69 = v80;
              if ( (*(_DWORD *)(v57 + 224) & 8) == 0 )
                v69 = 1;
              v80 = v69;
            }
            ByteCount = v91;
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v66;
            v10 = v79;
            goto LABEL_114;
          }
          if ( v48 == 2 )
          {
            if ( (v59 & 4) != 0 )
              goto LABEL_99;
            if ( (v59 & 2) != 0 )
            {
              Multicast = ethFindMulticast(*(unsigned int *)(v57 + 456), *(_QWORD *)(v57 + 448), 0LL, MappedSystemVa);
              ByteCount = v91;
              if ( Multicast )
                goto LABEL_99;
              v22 = v82;
            }
          }
        }
LABEL_114:
        MappedSystemVa = v84;
        v57 = v58;
        if ( !v58 )
          goto LABEL_115;
      }
    }
    if ( (v12->Private.Flags & 0x20000) == 0 && (v12->Private.NdisPacketFlags & 2) == 0 )
    {
      v32 = *(_QWORD *)(BugCheckParameter2 + 3192);
      if ( v32 )
      {
        v33 = (_QWORD *)(v32 + 112LL * KeGetPcr()->Prcb.Number);
        v33[1] += ByteCount;
        *v33 += ByteCount;
      }
      v34 = *(_QWORD *)(BugCheckParameter2 + 3192);
      if ( v34 )
      {
        v35 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v35 + v34 + 32);
      }
    }
    v12->Private.Flags &= ~0x20000u;
    v36 = 0;
    if ( (v6[38] & 0xA4) != 0
      && (*(_DWORD *)((char *)v6 + 338) != *(_DWORD *)(MappedSystemVa + 2)
       || *((_WORD *)v6 + 168) != *(_WORD *)MappedSystemVa) )
    {
      v36 = 1;
    }
    v37 = *v6;
    if ( *v6 )
    {
      while ( 1 )
      {
        v38 = *(_DWORD *)(v37 + 432);
        v39 = *(_QWORD *)(v37 + 424);
        if ( (v38 & 0xA0) != 0 )
          break;
        v40 = 0;
        if ( !v36 && (v38 & 1) != 0 )
          goto LABEL_51;
LABEL_67:
        v37 = v39;
        if ( !v39 )
          goto LABEL_115;
      }
      v40 = 1;
LABEL_51:
      if ( (v12->Private.Flags & 0x80u) == 0
        || *(_QWORD *)&v12->MacReserved[v12->Private.NdisPacketOobOffset + 24] != v37 )
      {
        ++v79;
        *(_BYTE *)((Number << 12) + *(_QWORD *)(v37 + 816)) = 1;
        v41 = *(_QWORD *)(BugCheckParameter2 + 1600);
        v42 = *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset);
        v43 = KeGetPcr()->Prcb.Number;
        v44 = *(_QWORD *)(v41 + 8 * v43);
        *(_QWORD *)(v41 + 8 * v43) = v12;
        if ( v80 || !*(_QWORD *)(v37 + 160) || v40 && !v6[41] )
        {
          *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _BYTE *, __int64, _BYTE *, ULONG, unsigned int))(v37 + 128))(
            *(_QWORD *)(v37 + 32),
            v12,
            MappedSystemVa,
            14LL,
            MappedSystemVa + 14,
            v12->Private.Head->ByteCount - 14,
            ByteCount - 14);
          v22 = v82;
          *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset) = v42;
        }
        else
        {
          v45 = *(struct _NET_BUFFER_LIST **)((char *)&v12[1].Private.Head + v12->Private.NdisPacketOobOffset);
          if ( v45 && v42 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(
              v45,
              0LL,
              *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v37 + 680),
              (unsigned __int8)v22);
          v46 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v37 + 160))(*(_QWORD *)(v37 + 32), v12);
          v22 = v82;
          *((_DWORD *)v82 + 3) += v46;
        }
        if ( *((int *)v22 + 3) > 0 )
        {
          v47 = v80;
          if ( (*(_DWORD *)(v37 + 224) & 8) == 0 )
            v47 = 1;
          v80 = v47;
        }
        MappedSystemVa = v84;
        ByteCount = v91;
        Number = v81;
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v44;
      }
      goto LABEL_67;
    }
LABEL_116:
    v70 = *((_DWORD *)v22 + 3);
    if ( v70 )
    {
      v71 = _InterlockedExchangeAdd((volatile signed __int32 *)v22 + 2, v70 + 1) + v70 + 1;
      v72 = v71 == 0;
      if ( v71 <= 0 )
        goto LABEL_122;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) == 0 )
        *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset) = 259;
    }
    else
    {
      v71 = 0;
      *((_DWORD *)v22 + 2) = 0;
    }
    v72 = v71 == 0;
LABEL_122:
    if ( v72 )
    {
      v73 = v86;
      --*(_DWORD *)&v12[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v73 + 8) == -1073741670 )
        goto LABEL_138;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v85 = 0LL;
        *((_DWORD *)v73 + 8) = 259;
        if ( (v12[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v12[-1].ProtocolReserved[4] == -1 )
        {
LABEL_127:
          NDIS_FREE_XFER_DATA_PACKET(v12);
          goto LABEL_138;
        }
        v74 = v12;
        if ( !*(_MDL **)((char *)&v12[1].Private.Head + v12->Private.NdisPacketOobOffset) )
        {
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(BugCheckParameter2 + 3816) + 224LL))(
            *(_QWORD *)(BugCheckParameter2 + 24),
            v12);
          goto LABEL_138;
        }
        goto LABEL_134;
      }
      if ( *(_MDL **)((char *)&v12[1].Private.Head + v12->Private.NdisPacketOobOffset) )
      {
        *(_QWORD *)v85 = 0LL;
        *(unsigned int *)((char *)&v12->Private.Count + v12->Private.NdisPacketOobOffset) = 259;
        if ( (v12[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v12[-1].ProtocolReserved[4] == -1 )
          goto LABEL_127;
        v74 = v12;
LABEL_134:
        ndisReturnPacketToNetBufferList(BugCheckParameter2, v74);
        goto LABEL_138;
      }
      *((_DWORD *)v73 + 8) = 0;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter2 + 1828), 1u);
    }
LABEL_138:
    v7 = (struct _NDIS_PACKET **)(v87 + 8);
    ++v83;
    v87 += 8LL;
    if ( v83 >= v90 )
      break;
    Number = v81;
    v10 = v79;
  }
  if ( v79 )
  {
    v75 = *v6;
    if ( *v6 )
    {
      v76 = v81 << 12;
      do
      {
        v77 = *(_QWORD *)(v75 + 816);
        v78 = *(_QWORD *)(v75 + 424);
        if ( *(_BYTE *)(v77 + v76) )
        {
          *(_BYTE *)(v77 + v76) = 0;
          (*(void (__fastcall **)(_QWORD))(v75 + 136))(*(_QWORD *)(v75 + 32));
        }
        v75 = v78;
      }
      while ( v78 );
    }
  }
LABEL_147:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v6[36], &LockState);
}
