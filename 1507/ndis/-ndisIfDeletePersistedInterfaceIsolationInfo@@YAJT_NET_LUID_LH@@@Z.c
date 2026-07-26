/*
 * XREFs of ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C003B744
 * Callers:
 *     ndisIfDeletePersistedInterface @ 0x1C003E528 (ndisIfDeletePersistedInterface.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_dL @ 0x1C003E17C (WPP_SF_dL.c)
 *     WPP_SF_llL @ 0x1C003E344 (WPP_SF_llL.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00C63F0 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfDeletePersistedInterfaceIsolationInfo(union _NET_LUID_LH a1, __int64 a2)
{
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // esi
  char *PoolWithTag; // rax
  unsigned int v9; // esi
  __int64 i; // r12
  _QWORD v12[14]; // [rsp+38h] [rbp-89h] BYREF
  _QWORD v13[10]; // [rsp+A8h] [rbp-19h] BYREF

  v2 = 0LL;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_dL(189LL, a2, *((unsigned __int16 *)&a1.Info + 3), (a1.Value >> 24) & 0xFFFFFF);
  memset(v12, 0, sizeof(v12));
  v12[4] = 0x100000000LL;
  v12[5] = 0LL;
  v12[7] = 0LL;
  v12[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v12[3]) = 15;
  LODWORD(v12[6]) = 16;
  LODWORD(v12[8]) = 32;
  v3 = NsiEnumerateObjectsAllParametersEx(v12);
  v5 = v3;
  if ( LODWORD(v12[13]) )
  {
    while ( v3 == 261 )
    {
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      v6 = (16 * LODWORD(v12[13]) + 7) & 0xFFFFFFF8;
      v7 = v6 + 32 * LODWORD(v12[13]);
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6669444Eu);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        break;
      }
      memset(PoolWithTag, 0, v7);
      v12[5] = v2;
      v12[7] = &v2[v6];
      LODWORD(v12[6]) = 16;
      LODWORD(v12[8]) = 32;
      v3 = NsiEnumerateObjectsAllParametersEx(v12);
      v5 = v3;
    }
    if ( v5 >= 0 )
    {
      v2 = (char *)v12[5];
      v9 = 0;
      for ( i = v12[7]; v9 < LODWORD(v12[13]); ++v9 )
      {
        if ( *(_QWORD *)&v2[16 * v9] == a1.Value )
        {
          memset(v13, 0, 0x48uLL);
          v13[0] = 0LL;
          LODWORD(v13[1]) = 0;
          v13[4] = 0x300000000LL;
          v13[7] = 0LL;
          LODWORD(v13[8]) = 0;
          v13[2] = &NPI_MS_NDIS_MODULEID;
          LODWORD(v13[3]) = 15;
          v13[5] = &v2[16 * v9];
          LODWORD(v13[6]) = 16;
          v5 = NsiSetAllParametersEx(v13);
          if ( v5 >= 0 )
            NdisIfFreeNetLuidIndex(*(_WORD *)(32LL * v9 + i + 14), (*(_QWORD *)(32LL * v9 + i + 8) >> 24) & 0xFFFFFF);
        }
      }
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  else
  {
    v5 = 0;
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_llL(190LL, v4, HIWORD(a1.Value), (a1.Value >> 24) & 0xFFFFFF, v5);
  return (unsigned int)v5;
}
