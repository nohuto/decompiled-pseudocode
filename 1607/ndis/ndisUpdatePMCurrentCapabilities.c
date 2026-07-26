/*
 * XREFs of ndisUpdatePMCurrentCapabilities @ 0x1C001B2B4
 * Callers:
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00C9EB0 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisResetPMCapabilities @ 0x1C009C25C (ndisResetPMCapabilities.c)
 *     ndisComparePMCapabilities @ 0x1C00ABF34 (ndisComparePMCapabilities.c)
 *     ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x1C00ABF6C (-ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z.c)
 */

bool __fastcall ndisUpdatePMCurrentCapabilities(__int64 a1)
{
  struct _NDIS_PM_CAPABILITIES *v1; // rdi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  __int128 v8; // xmm0
  __int64 v9; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // rax
  KIRQL v13; // dl
  bool v14; // zf
  unsigned __int8 v15; // cl
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // ecx
  int v20; // r8d
  int v21; // r8d
  int v22; // eax
  int v23; // ecx
  _OWORD v24[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+50h] [rbp-18h]
  int v26; // [rsp+58h] [rbp-10h]

  v1 = (struct _NDIS_PM_CAPABILITIES *)(a1 + 1060);
  v3 = *(_OWORD *)(a1 + 1076);
  v24[0] = *(_OWORD *)(a1 + 1060);
  v4 = *(_OWORD *)(a1 + 1092);
  v24[1] = v3;
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 1108);
  v24[2] = v4;
  v5 = *(_OWORD *)(a1 + 1000);
  v25 = v3;
  v6 = *(_OWORD *)(a1 + 1016);
  v26 = *(_DWORD *)(a1 + 1116);
  v7 = *(_DWORD *)(a1 + 1056);
  *(_OWORD *)(a1 + 1060) = v5;
  v8 = *(_OWORD *)(a1 + 1032);
  *(_OWORD *)(a1 + 1076) = v6;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 1048);
  *(_OWORD *)(a1 + 1092) = v8;
  *(_QWORD *)(a1 + 1108) = v6;
  *(_DWORD *)(a1 + 1116) = v7;
  ndisResetPMCapabilities(a1 + 1060);
  if ( (*(_DWORD *)(a1 + 124) & 1) != 0
    && (*(_DWORD *)(a1 + 3920) & 8) == 0
    && (unsigned int)(*(_DWORD *)(a1 + 1272) - 2) <= 2
    && *(_DWORD *)(a1 + 1268) )
  {
    v11 = *(_BYTE *)(a1 + 32);
    if ( (v11 > 6u || v11 == 6 && *(_BYTE *)(a1 + 33) >= 0x1Eu)
      && (*(_DWORD *)(a1 + 120) & 0x20000) == 0
      && (v12 = *(_QWORD *)(a1 + 3816), *(_QWORD *)(v12 + 848))
      && *(_QWORD *)(v12 + 856)
      && (*(_DWORD *)(a1 + 3968) & 0x3000) != 0x1000
      && (*(_DWORD *)(a1 + 1004) & 2) != 0
      || (*(_DWORD *)(a1 + 120) & 0x80u) != 0
      && (*(_DWORD *)(a1 + 3968) & 0x3000) != 0x1000
      && (*(_DWORD *)(a1 + 1004) & 2) != 0 )
    {
      *(_DWORD *)(a1 + 1064) |= 2u;
    }
    if ( (*(_DWORD *)(a1 + 1004) & 1) != 0 )
      *(_DWORD *)(a1 + 1064) |= 1u;
    *(_DWORD *)(a1 + 1108) = *(_DWORD *)(a1 + 1048);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v14 = ndisAoAcCapable == 0;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2764054;
    if ( !v14
      || ndisAoAcTest
      || (v15 = *(_BYTE *)(a1 + 32), v15 <= 6u) && (v15 != 6 || *(_BYTE *)(a1 + 33) < 0x14u)
      || (unsigned int)(*(_DWORD *)(a1 + 1108) - 2) > 2
      || *(_WORD *)(a1 + 3732) == 0xFFFF
      || (v23 = *(_DWORD *)(a1 + 3968), (v23 & 0x30) == 0x10)
      || (v23 & 0x3000) == 0x2000
      || *(_DWORD *)(a1 + 464)
      || *(_DWORD *)(a1 + 1832) != 14
      || !*(_BYTE *)(a1 + 1288) )
    {
      *(_DWORD *)(a1 + 4484) &= ~8u;
    }
    else
    {
      *(_DWORD *)(a1 + 4484) |= 8u;
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
    v16 = *(_DWORD *)(a1 + 3968);
    v17 = *(_DWORD *)(a1 + 1028);
    *(_DWORD *)(a1 + 1088) = v17;
    if ( (v16 & 0xC0) == 0x40 )
      *(_DWORD *)(a1 + 1088) = v17 & 0xFFFFFFFE;
    if ( (v16 & 0x300) == 0x100 )
      *(_DWORD *)(a1 + 1088) &= ~2u;
    if ( (v16 & 0xC00) == 0x400 )
      *(_DWORD *)(a1 + 1088) &= ~0x80u;
    v18 = *(_DWORD *)(a1 + 3920);
    if ( (v18 & 0x10000000) != 0 && (*(_BYTE *)(a1 + 1088) & 1) == 0 && *(_DWORD *)(a1 + 3832) != 8 )
      *(_DWORD *)(a1 + 3920) = v18 | 0x100;
    v19 = *(_DWORD *)(a1 + 3920);
    if ( (v19 & 0x10) == 0 )
    {
      v20 = *(_DWORD *)(a1 + 1040);
      if ( (unsigned int)(v20 - 2) <= 2 && ((v19 & 0x100) != 0 || (v16 & 0xC) != 4) )
      {
        *(_DWORD *)(a1 + 1068) = 2;
        *(_DWORD *)(a1 + 1100) = v20;
      }
      v21 = *(_DWORD *)(a1 + 1044);
      if ( (unsigned int)(v21 - 2) <= 2 && (v16 & 3) != 1 && (v19 & 0x100) == 0 )
      {
        v22 = *(_DWORD *)(a1 + 1008);
        if ( (v22 & 1) != 0 )
        {
          *(_DWORD *)(a1 + 1068) |= 1u;
          *(_DWORD *)(a1 + 1104) = v21;
        }
        *(_DWORD *)(a1 + 1068) |= v22 & 0xFFFFFFFC;
      }
    }
  }
  ndisConvertPMCapabilitiesToPnp(v1, (struct _NDIS_PNP_CAPABILITIES *)(a1 + 984));
  return (unsigned __int8)ndisComparePMCapabilities(v9, v24) == 0;
}
