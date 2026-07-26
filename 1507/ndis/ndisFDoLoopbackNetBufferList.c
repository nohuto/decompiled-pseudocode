/*
 * XREFs of ndisFDoLoopbackNetBufferList @ 0x1C0053664
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C0053DFC (ndisFLoopbackNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000B7E0 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C000BB60 (NdisFreeNetBufferList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 */

void __fastcall ndisFDoLoopbackNetBufferList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // rdi
  SIZE_T DataLength; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  SIZE_T v11; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v13; // rdi
  unsigned __int64 v14; // rdx
  struct _MDL *v15; // rcx
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v17; // rsi
  __int64 v18; // rax
  char *v19; // rbp
  __int64 *v20; // r14
  char *v21; // rax
  __int64 v22; // rcx
  char *v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // r15d
  __int64 v26; // rbx
  size_t i; // r8
  unsigned int v28; // ecx

  v5 = a3;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qqq(0x66u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1, a2, a3);
  DataLength = *(unsigned int *)(a2 + 24);
  v9 = ((unsigned int)MmSizeOfMdl((PVOID)0xFFF, (unsigned int)DataLength) + 7) & 0xFFFFFFF8;
  v10 = (unsigned int)v9;
  v11 = DataLength + v9;
  if ( !HIDWORD(v11) )
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v11, 0x706C444Eu);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      v14 = (unsigned __int64)PoolWithTag + v10;
      if ( (struct _MDL *)((char *)PoolWithTag + v10) >= PoolWithTag )
      {
        PoolWithTag->Next = 0LL;
        PoolWithTag->MdlFlags = 0;
        PoolWithTag->ByteCount = DataLength;
        PoolWithTag->StartVa = (PVOID)(v14 & 0xFFFFFFFFFFFFF000uLL);
        PoolWithTag->Size = 8 * ((((v14 & 0xFFF) + DataLength + 4095) >> 12) + 6);
        PoolWithTag->ByteOffset = v14 & 0xFFF;
        MmBuildMdlForNonPagedPool(PoolWithTag);
        NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(
                                      ndisNetBufferListPool,
                                      0,
                                      0,
                                      v13,
                                      0,
                                      DataLength);
        v17 = NetBufferAndNetBufferList;
        if ( NetBufferAndNetBufferList )
        {
          v18 = *(_QWORD *)(NetBufferAndNetBufferList->Link.Region + 32);
          if ( (*(_BYTE *)(v18 + 10) & 5) != 0 )
            v19 = *(char **)(v18 + 24);
          else
            v19 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v18, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
          if ( v19 )
          {
            v20 = *(__int64 **)(a2 + 8);
            v21 = (*((_BYTE *)v20 + 10) & 5) != 0
                ? (char *)v20[3]
                : (char *)MmMapLockedPagesSpecifyCache((PMDL)v20, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v21 )
            {
              v22 = *(unsigned int *)(a2 + 16);
              v23 = &v21[v22];
              v24 = *((_DWORD *)v20 + 10) - v22;
              if ( v24 > (unsigned int)DataLength )
                v24 = DataLength;
              v25 = DataLength - v24;
              v26 = v24;
              for ( i = v24; ; i = v28 )
              {
                memmove(v19, v23, i);
                v20 = (__int64 *)*v20;
                v19 += v26;
                if ( !v20 || !v25 )
                  break;
                v23 = (*((_BYTE *)v20 + 10) & 5) != 0
                    ? (char *)v20[3]
                    : (char *)MmMapLockedPagesSpecifyCache((PMDL)v20, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                if ( !v23 )
                  break;
                v28 = *((_DWORD *)v20 + 10);
                if ( v25 < v28 )
                  v28 = v25;
                v25 -= v28;
                v26 = v28;
              }
              v17->Flags |= 0x80u;
              v17->NblFlags |= 0x8000u;
              v17->SourceHandle = *(void **)(a3 + 120);
              if ( (a5 & 2) != 0 )
                v17->Flags |= 0x200u;
              (*(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, __int64, int))(a1 + 632))(
                a1,
                v17,
                a4,
                1LL,
                2);
              if ( (v13->MdlFlags & 0x20) != 0 )
                MmUnmapLockedPages(v13->MappedSystemVa, v13);
              ExFreePoolWithTag(v13, 0);
              NdisFreeNetBufferList(v17);
              goto LABEL_38;
            }
          }
          NdisFreeNetBufferList(v17);
        }
        if ( (v13->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(v13->MappedSystemVa, v13);
        v15 = v13;
      }
      else
      {
        v15 = PoolWithTag;
      }
      ExFreePoolWithTag(v15, 0);
    }
LABEL_38:
    v5 = a3;
  }
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qqq(0x67u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1, a2, v5);
}
