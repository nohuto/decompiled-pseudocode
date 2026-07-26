/*
 * XREFs of ndisUpdatePMCurrentCapabilities @ 0x1C001B8C8
 * Callers:
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00CB0E0 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisResetPMCapabilities @ 0x1C009A7F0 (ndisResetPMCapabilities.c)
 *     ndisComparePMCapabilities @ 0x1C00ABBB4 (ndisComparePMCapabilities.c)
 *     ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x1C00ABBEC (-ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z.c)
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
  unsigned __int8 v10; // al
  __int64 v11; // rax
  KIRQL v12; // dl
  bool v13; // zf
  unsigned __int8 v14; // cl
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // ecx
  int v19; // r8d
  int v20; // r8d
  int v21; // eax
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
    v10 = *(_BYTE *)(a1 + 32);
    if ( (v10 > 6u || v10 == 6 && *(_BYTE *)(a1 + 33) >= 0x1Eu) && (*(_DWORD *)(a1 + 120) & 0x20000) == 0 )
    {
      v11 = *(_QWORD *)(a1 + 3816);
      if ( *(_QWORD *)(v11 + 848) )
      {
        if ( *(_QWORD *)(v11 + 856) && (*(_DWORD *)(a1 + 3968) & 0x3000) != 0x1000 && (*(_DWORD *)(a1 + 1004) & 2) != 0 )
          *(_DWORD *)(a1 + 1064) |= 2u;
      }
    }
    if ( (*(_DWORD *)(a1 + 1004) & 1) != 0 )
      *(_DWORD *)(a1 + 1064) |= 1u;
    *(_DWORD *)(a1 + 1108) = *(_DWORD *)(a1 + 1048);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v13 = ndisAoAcCapable == 0;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2763646;
    if ( !v13
      || ndisAoAcTest
      || (v14 = *(_BYTE *)(a1 + 32), v14 <= 6u) && (v14 != 6 || *(_BYTE *)(a1 + 33) < 0x14u)
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
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
    v15 = *(_DWORD *)(a1 + 3968);
    v16 = *(_DWORD *)(a1 + 1028);
    *(_DWORD *)(a1 + 1088) = v16;
    if ( (v15 & 0xC0) == 0x40 )
      *(_DWORD *)(a1 + 1088) = v16 & 0xFFFFFFFE;
    if ( (v15 & 0x300) == 0x100 )
      *(_DWORD *)(a1 + 1088) &= ~2u;
    if ( (v15 & 0xC00) == 0x400 )
      *(_DWORD *)(a1 + 1088) &= ~0x80u;
    v17 = *(_DWORD *)(a1 + 3920);
    if ( (v17 & 0x10000000) != 0 && (*(_BYTE *)(a1 + 1088) & 1) == 0 && *(_DWORD *)(a1 + 3832) != 8 )
      *(_DWORD *)(a1 + 3920) = v17 | 0x100;
    v18 = *(_DWORD *)(a1 + 3920);
    if ( (v18 & 0x10) == 0 )
    {
      v19 = *(_DWORD *)(a1 + 1040);
      if ( (unsigned int)(v19 - 2) <= 2 && ((v18 & 0x100) != 0 || (v15 & 0xC) != 4) )
      {
        *(_DWORD *)(a1 + 1068) = 2;
        *(_DWORD *)(a1 + 1100) = v19;
      }
      v20 = *(_DWORD *)(a1 + 1044);
      if ( (unsigned int)(v20 - 2) <= 2 && (v15 & 3) != 1 && (v18 & 0x100) == 0 )
      {
        v21 = *(_DWORD *)(a1 + 1008);
        if ( (v21 & 1) != 0 )
        {
          *(_DWORD *)(a1 + 1068) |= 1u;
          *(_DWORD *)(a1 + 1104) = v20;
        }
        *(_DWORD *)(a1 + 1068) |= v21 & 0xFFFFFFFC;
      }
    }
  }
  ndisConvertPMCapabilitiesToPnp(v1, (struct _NDIS_PNP_CAPABILITIES *)(a1 + 984));
  return (unsigned __int8)ndisComparePMCapabilities(v1, v23) == 0;
}
