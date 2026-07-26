/*
 * XREFs of ndisUpdatePMCurrentCapabilities @ 0x1C001FC54
 * Callers:
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00C4500 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C00EF3B0 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisResetPMCapabilities @ 0x1C0097968 (ndisResetPMCapabilities.c)
 *     ndisComparePMCapabilities @ 0x1C00A9358 (ndisComparePMCapabilities.c)
 *     ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x1C00A9390 (-ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z.c)
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
  unsigned __int8 v9; // al
  __int64 v10; // rax
  KIRQL v11; // dl
  bool v12; // zf
  unsigned __int8 v13; // cl
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // ecx
  int v18; // r8d
  int v19; // r8d
  int v20; // eax
  int v22; // ecx
  _OWORD v23[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-18h]
  int v25; // [rsp+58h] [rbp-10h]

  v1 = (struct _NDIS_PM_CAPABILITIES *)(a1 + 1060);
  v3 = *(_OWORD *)(a1 + 1076);
  v23[0] = *(_OWORD *)(a1 + 1060);
  v4 = *(_OWORD *)(a1 + 1092);
  v23[1] = v3;
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 1108);
  v23[2] = v4;
  v5 = *(_OWORD *)(a1 + 1000);
  v24 = v3;
  v6 = *(_OWORD *)(a1 + 1016);
  v25 = *(_DWORD *)(a1 + 1116);
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
    v9 = *(_BYTE *)(a1 + 32);
    if ( (v9 > 6u || v9 == 6 && *(_BYTE *)(a1 + 33) >= 0x1Eu) && (*(_DWORD *)(a1 + 120) & 0x20000) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 3816);
      if ( *(_QWORD *)(v10 + 848) )
      {
        if ( *(_QWORD *)(v10 + 856) && (*(_DWORD *)(a1 + 3968) & 0x3000) != 0x1000 && (*(_DWORD *)(a1 + 1004) & 2) != 0 )
          *(_DWORD *)(a1 + 1064) |= 2u;
      }
    }
    if ( (*(_DWORD *)(a1 + 1004) & 1) != 0 )
      *(_DWORD *)(a1 + 1064) |= 1u;
    *(_DWORD *)(a1 + 1108) = *(_DWORD *)(a1 + 1048);
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v12 = ndisAoAcCapable == 0;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2763639;
    if ( !v12
      || ndisAoAcTest
      || (v13 = *(_BYTE *)(a1 + 32), v13 <= 6u) && (v13 != 6 || *(_BYTE *)(a1 + 33) < 0x14u)
      || (unsigned int)(*(_DWORD *)(a1 + 1108) - 2) > 2
      || *(_WORD *)(a1 + 3732) == 0xFFFF
      || (v22 = *(_DWORD *)(a1 + 3968), (v22 & 0x30) == 0x10)
      || (v22 & 0x3000) == 0x2000
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
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v11);
    v14 = *(_DWORD *)(a1 + 3968);
    v15 = *(_DWORD *)(a1 + 1028);
    *(_DWORD *)(a1 + 1088) = v15;
    if ( (v14 & 0xC0) == 0x40 )
      *(_DWORD *)(a1 + 1088) = v15 & 0xFFFFFFFE;
    if ( (v14 & 0x300) == 0x100 )
      *(_DWORD *)(a1 + 1088) &= ~2u;
    if ( (v14 & 0xC00) == 0x400 )
      *(_DWORD *)(a1 + 1088) &= ~0x80u;
    v16 = *(_DWORD *)(a1 + 3920);
    if ( (v16 & 0x10000000) != 0 && (*(_BYTE *)(a1 + 1088) & 1) == 0 && *(_DWORD *)(a1 + 3832) != 8 )
      *(_DWORD *)(a1 + 3920) = v16 | 0x100;
    v17 = *(_DWORD *)(a1 + 3920);
    if ( (v17 & 0x10) == 0 )
    {
      v18 = *(_DWORD *)(a1 + 1040);
      if ( (unsigned int)(v18 - 2) <= 2 && ((v17 & 0x100) != 0 || (v14 & 0xC) != 4) )
      {
        *(_DWORD *)(a1 + 1068) = 2;
        *(_DWORD *)(a1 + 1100) = v18;
      }
      v19 = *(_DWORD *)(a1 + 1044);
      if ( (unsigned int)(v19 - 2) <= 2 && (v14 & 3) != 1 && (v17 & 0x100) == 0 )
      {
        v20 = *(_DWORD *)(a1 + 1008);
        if ( (v20 & 1) != 0 )
        {
          *(_DWORD *)(a1 + 1068) |= 1u;
          *(_DWORD *)(a1 + 1104) = v19;
        }
        *(_DWORD *)(a1 + 1068) |= v20 & 0xFFFFFFFC;
      }
    }
  }
  ndisConvertPMCapabilitiesToPnp(v1, (struct _NDIS_PNP_CAPABILITIES *)(a1 + 984));
  return (unsigned __int8)ndisComparePMCapabilities(v1, v23) == 0;
}
