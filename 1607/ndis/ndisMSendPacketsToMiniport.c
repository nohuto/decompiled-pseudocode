/*
 * XREFs of ndisMSendPacketsToMiniport @ 0x1C0056390
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001C7E0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisFreePaddedMdl @ 0x1C0053DD4 (ndisFreePaddedMdl.c)
 *     ndisMCheckPacketAndPad @ 0x1C0053EAC (ndisMCheckPacketAndPad.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0055774 (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMProcessDeferred @ 0x1C005E304 (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C005E968 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMSendPacketsToMiniport(KSPIN_LOCK *MiniportAdapterHandle, __int64 *a2, unsigned int a3)
{
  unsigned int v4; // ebp
  KIRQL v7; // di
  __int64 *v8; // r13
  char *v9; // r12
  __int64 v10; // rdi
  char *v11; // rcx
  char **v12; // rdx
  struct _NDIS_STACK_RESERVED *v13; // r12
  __int64 v14; // rdx
  char **v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-58h]
  unsigned int v18; // [rsp+80h] [rbp+8h]
  struct _NDIS_STACK_RESERVED *v19; // [rsp+88h] [rbp+10h] BYREF
  KIRQL v20; // [rsp+90h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+20h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qqd(0xCu, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, MiniportAdapterHandle, a2, a3);
  v18 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
  v20 = v7;
  v8 = a2;
  MiniportAdapterHandle[65] = (KSPIN_LOCK)KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 1507570;
  if ( a3 )
  {
    v9 = (char *)(MiniportAdapterHandle + 16);
    do
    {
      v10 = *v8;
      if ( (MiniportAdapterHandle[116] & 8) != 0 )
        v4 = ndisMCheckPacketAndPad((__int64)MiniportAdapterHandle, *v8);
      *(_DWORD *)(*(unsigned __int16 *)(v10 + 42) + v10 + 32) = 259;
      NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v10, &v19);
      v11 = (char *)(v10 + 64);
      *(_QWORD *)(v10 + 72) = v10 + 64;
      *(_QWORD *)(v10 + 64) = v10 + 64;
      v12 = (char **)*((_QWORD *)v9 + 1);
      if ( *v12 != v9 )
        __fastfail(3u);
      *(_QWORD *)v11 = v9;
      *(_QWORD *)(v10 + 72) = v12;
      *v12 = v11;
      *((_QWORD *)v9 + 1) = v11;
      if ( v4 )
      {
        v13 = v19;
        v14 = *(_QWORD *)v11;
        v21 = *(_QWORD *)v19;
        v15 = *(char ***)(v10 + 72);
        if ( *(char **)(v14 + 8) != v11 || *v15 != v11 )
          __fastfail(3u);
        *v15 = (char *)v14;
        *(_QWORD *)(v14 + 8) = v15;
        *(_QWORD *)(v10 + 72) = v10 + 64;
        *(_QWORD *)v11 = v11;
        *((_DWORD *)MiniportAdapterHandle + 30) |= 0x400000u;
        *(_QWORD *)v13 = 1297040176LL;
        MiniportAdapterHandle[65] = 0LL;
        *((_DWORD *)MiniportAdapterHandle + 464) = 0;
        KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 12);
        *((_DWORD *)v13 + 2) = 0;
        if ( (MiniportAdapterHandle[116] & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v10 + 42) + v10 + 128) )
          ndisFreePaddedMdl(v10);
        v16 = *(unsigned __int16 *)(v10 + 42);
        *(_BYTE *)(v10 + 41) &= 0xC0u;
        if ( *(_QWORD *)(v16 + v10 + 112) )
          ndisMSendCompletePacketToNetBufferLists((__int64)MiniportAdapterHandle, (struct _NDIS_PACKET *)v10, v4);
        else
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v21 + 112))(v21, v10, v4);
        KeAcquireSpinLockAtDpcLevel(MiniportAdapterHandle + 12);
        v9 = (char *)(MiniportAdapterHandle + 16);
        MiniportAdapterHandle[65] = (KSPIN_LOCK)KeGetCurrentThread();
        v4 = 0;
        *((_DWORD *)MiniportAdapterHandle + 464) = 1507590;
      }
      else if ( !MiniportAdapterHandle[18] )
      {
        MiniportAdapterHandle[18] = v10;
      }
      ++v8;
      ++v18;
    }
    while ( v18 < a3 );
    v7 = v20;
  }
  ndisMQueueWorkItem(MiniportAdapterHandle, 1LL);
  if ( !*((_BYTE *)MiniportAdapterHandle + 89) )
  {
    *((_BYTE *)MiniportAdapterHandle + 89) = 1;
    *((_DWORD *)MiniportAdapterHandle + 465) = 1507602;
    MiniportAdapterHandle[233] = (KSPIN_LOCK)KeGetCurrentThread();
    ndisMProcessDeferred(MiniportAdapterHandle);
    *((_BYTE *)MiniportAdapterHandle + 89) = 0;
    *((_DWORD *)MiniportAdapterHandle + 465) = 0;
    MiniportAdapterHandle[233] = 0LL;
  }
  MiniportAdapterHandle[65] = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock(MiniportAdapterHandle + 12, v7);
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
  {
    LODWORD(v17) = a3;
    WPP_SF_qqd(0xDu, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, MiniportAdapterHandle, a2, v17);
  }
}
