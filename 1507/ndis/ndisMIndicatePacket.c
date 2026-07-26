/*
 * XREFs of ndisMIndicatePacket @ 0x1C005E750
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0008FC0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C000AB30 (NdisAcquireRWLockRead.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     NdisGetFirstBufferFromPacket @ 0x1C0054FB0 (NdisGetFirstBufferFromPacket.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0057DD0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C005E47C (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006085C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C0064758 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMIndicatePacket(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  unsigned int Number; // eax
  struct _NDIS_PACKET **v6; // rbx
  char v7; // r15
  struct _NDIS_RW_LOCK_EX *v8; // rcx
  struct _NDIS_PACKET *v9; // rbx
  __int64 v10; // rcx
  struct _NDIS_STACK_RESERVED *v11; // r13
  char *v12; // r14
  unsigned __int8 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rdx
  struct _NDIS_STACK_RESERVED *v19; // r12
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rax
  __int64 v27; // rax
  struct _NET_BUFFER_LIST *v28; // rcx
  int v29; // ecx
  __int64 v30; // rdx
  bool v31; // zf
  struct _NDIS_PACKET *v32; // rdx
  _QWORD *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbx
  unsigned int v38; // [rsp+40h] [rbp-49h]
  unsigned int v39; // [rsp+44h] [rbp-45h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-41h]
  _QWORD *v41; // [rsp+50h] [rbp-39h]
  struct _NDIS_STACK_RESERVED *v42; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v43; // [rsp+60h] [rbp-29h]
  ULONG_PTR v44; // [rsp+68h] [rbp-21h]
  __int64 v45; // [rsp+70h] [rbp-19h] BYREF
  __int64 v46; // [rsp+78h] [rbp-11h]
  int v47; // [rsp+80h] [rbp-9h] BYREF
  struct _NDIS_STACK_RESERVED *v48; // [rsp+88h] [rbp-1h]
  __int64 v49; // [rsp+90h] [rbp+7h]
  struct _MDL *v50; // [rsp+98h] [rbp+Fh] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+F8h] [rbp+6Fh]
  unsigned int v53; // [rsp+100h] [rbp+77h]
  int v54; // [rsp+108h] [rbp+7Fh]

  v53 = a3;
  BugCheckParameter4 = a2;
  Number = KeGetPcr()->Prcb.Number;
  v6 = (struct _NDIS_PACKET **)a2;
  v41 = *(_QWORD **)(BugCheckParameter2 + 400);
  v44 = a2;
  v7 = 0;
  v54 = 0;
  v8 = (struct _NDIS_RW_LOCK_EX *)v41[36];
  v40 = Number;
  NdisAcquireRWLockRead(v8, &LockState, 0);
  v38 = 0;
  if ( !a3 )
  {
    v33 = v41;
    goto LABEL_61;
  }
  do
  {
    v9 = *v6;
    ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v9, &v42);
    v11 = v42;
    v48 = v42;
    if ( *((_DWORD *)v42 + 2) )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)(BugCheckParameter2 + 3912),
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 0x12uLL, BugCheckParameter2, (ULONG_PTR)v9, BugCheckParameter4);
    }
    v12 = (char *)v9 + v9->Private.NdisPacketOobOffset;
    NdisGetFirstBufferFromPacket(v10, &v50, &v45, &v47, &v39);
    if ( (v9->Private.Flags & 0x20000) == 0 && (v9->Private.NdisPacketFlags & 2) == 0 )
    {
      v14 = *(_QWORD *)(BugCheckParameter2 + 3192);
      if ( v14 )
      {
        v15 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v15 + v14 + 32);
      }
      v16 = *(_QWORD *)(BugCheckParameter2 + 3192);
      if ( v16 )
      {
        v17 = v39;
        v18 = (_QWORD *)(v16 + 112LL * KeGetPcr()->Prcb.Number);
        v18[1] += v39;
        *v18 += v17;
      }
    }
    v9->Private.Flags &= ~0x20000u;
    *((_DWORD *)v11 + 2) = -1;
    v19 = v42;
    *((_DWORD *)v42 + 3) = 0;
    *(_QWORD *)v19 = BugCheckParameter2;
    v9->Private.ValidCounts = 0;
    if ( *((_DWORD *)v12 + 8) == -1073741670 || (*(_DWORD *)(BugCheckParameter2 + 124) & 0x800) != 0 )
    {
      v20 = 1LL;
      v7 = 1;
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) == 0 )
        *((_DWORD *)v12 + 8) = 0;
      v20 = 1LL;
    }
    v21 = *v41;
    if ( *v41 )
    {
      v22 = v40 << 12;
      do
      {
        v23 = *(_QWORD *)(v21 + 424);
        ++v54;
        v46 = v23;
        *(_BYTE *)(v22 + *(_QWORD *)(v21 + 816)) = 1;
        v24 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(BugCheckParameter2 + 1600);
        v25 = *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset);
        v26 = KeGetPcr()->Prcb.Number;
        v43 = v25;
        v27 = *((_QWORD *)v24 + v26);
        v49 = v27;
        LODWORD(v27) = KeGetPcr()->Prcb.Number;
        *((_QWORD *)v24 + v27) = v9;
        if ( v7 || !*(_QWORD *)(v21 + 160) )
        {
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v21 + 128))(*(_QWORD *)(v21 + 32), v9);
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = v43;
        }
        else
        {
          v28 = *(struct _NET_BUFFER_LIST **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset);
          if ( v28 && v25 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(v28, v24, *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v21 + 680), v13);
          *((_DWORD *)v19 + 3) += (*(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v21 + 160))(
                                    *(_QWORD *)(v21 + 32),
                                    v9);
        }
        v20 = 1LL;
        if ( *((int *)v19 + 3) > 0 && (*(_DWORD *)(v21 + 224) & 8) == 0 )
          v7 = 1;
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v49;
        v21 = v46;
      }
      while ( v46 );
      v11 = v48;
    }
    v29 = *((_DWORD *)v19 + 3);
    v7 = 0;
    if ( v29 )
    {
      v30 = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, v29 + 1) + v29 + 1);
      v31 = (_DWORD)v30 == 0;
      if ( (int)v30 <= 0 )
        goto LABEL_35;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) == 0 )
        *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
    }
    else
    {
      v30 = 0LL;
      *((_DWORD *)v11 + 2) = 0;
    }
    v31 = (_DWORD)v30 == 0;
LABEL_35:
    if ( v31 )
    {
      --*(_DWORD *)&v9[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v12 + 8) == -1073741670 )
        goto LABEL_51;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v42 = 0LL;
        *((_DWORD *)v12 + 8) = 259;
        if ( (v9[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v9[-1].ProtocolReserved[4] == -1 )
          goto LABEL_40;
        v32 = v9;
        if ( !*(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
        {
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(*(_QWORD *)(BugCheckParameter2 + 3816) + 224LL))(
            *(_QWORD *)(BugCheckParameter2 + 24),
            v9,
            1LL);
          goto LABEL_51;
        }
        goto LABEL_47;
      }
      if ( *(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
      {
        *(_QWORD *)v42 = 0LL;
        *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
        if ( (v9[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v9[-1].ProtocolReserved[4] == -1 )
        {
LABEL_40:
          NDIS_FREE_XFER_DATA_PACKET(v9);
          goto LABEL_51;
        }
        v32 = v9;
LABEL_47:
        ndisReturnPacketToNetBufferList(BugCheckParameter2, v32);
        goto LABEL_51;
      }
      *((_DWORD *)v12 + 8) = 0;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter2 + 1828), 1u);
    }
LABEL_51:
    v6 = (struct _NDIS_PACKET **)(v44 + 8);
    ++v38;
    v44 += 8LL;
  }
  while ( v38 < v53 );
  v33 = v41;
  if ( v54 )
  {
    v34 = *v41;
    if ( *v41 )
    {
      v35 = v40 << 12;
      do
      {
        v36 = *(_QWORD *)(v34 + 816);
        v37 = *(_QWORD *)(v34 + 424);
        if ( *(_BYTE *)(v36 + v35) )
        {
          *(_BYTE *)(v36 + v35) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(v34 + 136))(*(_QWORD *)(v34 + 32), v30, v20);
        }
        v34 = v37;
      }
      while ( v37 );
    }
  }
LABEL_61:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v33[36], &LockState);
}
