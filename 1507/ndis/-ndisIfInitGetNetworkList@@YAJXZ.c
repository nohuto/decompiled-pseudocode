/*
 * XREFs of ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C001228C
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C001287C (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ndisIfFindCompartmentBlock @ 0x1C0012D18 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001A3F8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 */

__int64 ndisIfInitGetNetworkList(void)
{
  char *v0; // rdi
  int v1; // ebx
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned int v6; // r15d
  KIRQL v7; // r13
  struct _NDIS_IF_NETWORK_BLOCK *v8; // rdi
  struct _NDIS_NSI_NETWORK_RW *v9; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // r12
  _QWORD v12[14]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v13[16]; // [rsp+90h] [rbp-29h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // [rsp+120h] [rbp+67h] BYREF
  __int64 v15; // [rsp+128h] [rbp+6Fh]
  char *PoolWithTag; // [rsp+130h] [rbp+77h]

  v0 = 0LL;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_(31LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids);
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[1]) = 0;
  v12[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v12[3]) = 6;
  v12[4] = 0x100000000LL;
  v12[5] = 0LL;
  LODWORD(v12[6]) = 16;
  v12[7] = 0LL;
  LODWORD(v12[8]) = 528;
  LODWORD(v12[13]) = 0;
  v1 = NsiEnumerateObjectsAllParametersEx(v12);
  if ( v1 >= 0 )
  {
    v2 = v12[13];
    if ( LODWORD(v12[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v2 = v12[13];
          v0 = 0LL;
        }
        v3 = (16 * v2 + 7) & 0xFFFFFFF8;
        if ( 16 * (unsigned __int64)v2 > 0xFFFFFFFF || v3 + 528 * v2 < v3 )
        {
          v1 = -1073741670;
          goto LABEL_23;
        }
        v4 = v3;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 528LL * v2, 0x6669444Eu);
        v0 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, 528LL * LODWORD(v12[13]));
        v12[5] = v0;
        v12[7] = &v0[v4];
        LODWORD(v12[6]) = 16;
        LODWORD(v12[8]) = 528;
        v1 = NsiEnumerateObjectsAllParametersEx(v12);
        if ( v1 != 261 )
          goto LABEL_11;
        v2 = v12[13];
      }
      v1 = -1073741670;
LABEL_11:
      if ( v1 >= 0 )
      {
        v5 = v12[7];
        NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)v12[5];
        v15 = v12[7];
        v6 = 0;
        v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        if ( LODWORD(v12[13]) )
        {
          v8 = NetworkBlock;
          do
          {
            v9 = (struct _NDIS_NSI_NETWORK_RW *)(528LL * v6 + v5);
            if ( v9->Header.Type == 0xAC && v9->Header.Revision && v9->Header.Size >= 0x210u )
            {
              CompartmentBlock = (struct _NDIS_IF_COMPARTMENT_BLOCK *)ndisIfFindCompartmentBlock(v9->CompartmentId);
              if ( CompartmentBlock )
              {
                NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)&v8->Link + v6);
                if ( !NetworkBlock )
                  v1 = ndisIfCreateNetworkBlock(CompartmentBlock, (struct _GUID *)&v8->Link + v6, v9, &NetworkBlock);
              }
              else
              {
                KeReleaseSpinLock(&ndisIfListLock, v7);
                memset(v13, 0, 0x48uLL);
                v13[2] = &NPI_MS_NDIS_MODULEID;
                v13[0] = 0LL;
                LODWORD(v13[8]) = 528;
                LODWORD(v13[1]) = 0;
                LODWORD(v13[3]) = 6;
                v13[4] = 0x300000000LL;
                v13[5] = (char *)v8 + 16 * v6;
                LODWORD(v13[6]) = 16;
                v13[7] = v9;
                NsiSetAllParametersEx(v13);
                v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              }
            }
            v5 = v15;
            ++v6;
          }
          while ( v6 < LODWORD(v12[13]) );
          v0 = PoolWithTag;
        }
        KeReleaseSpinLock(&ndisIfListLock, v7);
      }
LABEL_23:
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
    }
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_d(32LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (unsigned int)v1);
  return (unsigned int)v1;
}
