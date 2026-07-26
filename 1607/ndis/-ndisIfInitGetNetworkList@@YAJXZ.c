/*
 * XREFs of ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C001CE2C
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C000D750 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0014FE8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C001D40C (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 */

__int64 __fastcall ndisIfInitGetNetworkList(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  int v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // r15d
  KIRQL v10; // r13
  struct _NDIS_IF_NETWORK_BLOCK *v11; // rdi
  struct _NDIS_NSI_NETWORK_RW *v12; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // r12
  _QWORD v15[14]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v16[16]; // [rsp+90h] [rbp-29h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // [rsp+120h] [rbp+67h] BYREF
  __int64 v18; // [rsp+128h] [rbp+6Fh]
  char *PoolWithTag; // [rsp+130h] [rbp+77h]

  v3 = 0LL;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_(31LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a3);
  memset(v15, 0, sizeof(v15));
  LODWORD(v15[1]) = 0;
  v15[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v15[3]) = 6;
  v15[4] = 0x100000000LL;
  v15[5] = 0LL;
  LODWORD(v15[6]) = 16;
  v15[7] = 0LL;
  LODWORD(v15[8]) = 528;
  LODWORD(v15[13]) = 0;
  v4 = NsiEnumerateObjectsAllParametersEx(v15);
  if ( v4 >= 0 )
  {
    v5 = v15[13];
    if ( LODWORD(v15[13]) )
    {
      while ( 1 )
      {
        if ( v3 )
        {
          ExFreePoolWithTag(v3, 0);
          v5 = v15[13];
          v3 = 0LL;
        }
        v6 = (16 * v5 + 7) & 0xFFFFFFF8;
        if ( 16 * (unsigned __int64)v5 > 0xFFFFFFFF || v6 + 528 * v5 < v6 )
        {
          v4 = -1073741670;
          goto LABEL_23;
        }
        v7 = v6;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6 + 528LL * v5, 0x6669444Eu);
        v3 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, 528LL * LODWORD(v15[13]));
        v15[5] = v3;
        v15[7] = &v3[v7];
        LODWORD(v15[6]) = 16;
        LODWORD(v15[8]) = 528;
        v4 = NsiEnumerateObjectsAllParametersEx(v15);
        if ( v4 != 261 )
          goto LABEL_11;
        v5 = v15[13];
      }
      v4 = -1073741670;
LABEL_11:
      if ( v4 >= 0 )
      {
        v8 = v15[7];
        NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)v15[5];
        v18 = v15[7];
        v9 = 0;
        v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        if ( LODWORD(v15[13]) )
        {
          v11 = NetworkBlock;
          do
          {
            v12 = (struct _NDIS_NSI_NETWORK_RW *)(528LL * v9 + v8);
            if ( v12->Header.Type == 0xAC && v12->Header.Revision && v12->Header.Size >= 0x210u )
            {
              CompartmentBlock = (struct _NDIS_IF_COMPARTMENT_BLOCK *)ndisIfFindCompartmentBlock(v12->CompartmentId);
              if ( CompartmentBlock )
              {
                NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)&v11->Link + v9);
                if ( !NetworkBlock )
                  v4 = ndisIfCreateNetworkBlock(CompartmentBlock, (struct _GUID *)&v11->Link + v9, v12, &NetworkBlock);
              }
              else
              {
                KeReleaseSpinLock(&ndisIfListLock, v10);
                memset(v16, 0, 0x48uLL);
                v16[2] = &NPI_MS_NDIS_MODULEID;
                v16[0] = 0LL;
                LODWORD(v16[8]) = 528;
                LODWORD(v16[1]) = 0;
                LODWORD(v16[3]) = 6;
                v16[4] = 0x300000000LL;
                v16[5] = (char *)v11 + 16 * v9;
                LODWORD(v16[6]) = 16;
                v16[7] = v12;
                NsiSetAllParametersEx(v16);
                v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              }
            }
            v8 = v18;
            ++v9;
          }
          while ( v9 < LODWORD(v15[13]) );
          v3 = PoolWithTag;
        }
        KeReleaseSpinLock(&ndisIfListLock, v10);
      }
LABEL_23:
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
    }
  }
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_d(32LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (unsigned int)v4);
  return (unsigned int)v4;
}
