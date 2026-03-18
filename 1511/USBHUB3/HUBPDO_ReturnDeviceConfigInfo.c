/*
 * XREFs of HUBPDO_ReturnDeviceConfigInfo @ 0x1C0010DA0
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012A40 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     HUBID_BuildHardwareID @ 0x1C001604C (HUBID_BuildHardwareID.c)
 *     HUBID_BuildCompatibleID @ 0x1C00166A0 (HUBID_BuildCompatibleID.c)
 *     memmove @ 0x1C0035000 (memmove.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBPDO_ReturnDeviceConfigInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  unsigned __int16 v5; // r9
  int v6; // esi
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  unsigned __int16 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  PVOID PoolWithTag; // rax
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  int v19; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(v2 + 8);
  if ( !v4 )
  {
    v5 = 19;
LABEL_3:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      v5,
      (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)v4 != 1 )
  {
    v5 = 20;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(v4 + 4) != 204 )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      0x15u,
      (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
      *(_DWORD *)(v4 + 4),
      204);
    return (unsigned int)-1073741789;
  }
  memset(*(void **)(v2 + 8), 0, 0xCCuLL);
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)v4 = 1;
  *(_DWORD *)(v4 + 4) = 204;
  v7 = *(_DWORD *)(v4 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 2440LL) & 2) != 0 )
    v7 = 1;
  *(_DWORD *)(v4 + 8) = v7;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2402LL) >= 0x200u )
    *(_DWORD *)(v4 + 8) |= 1u;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL) & 2) != 0 )
    *(_DWORD *)(v4 + 8) |= 8u;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL) & 2) != 0 )
    *(_DWORD *)(v4 + 8) |= 4u;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 232LL) == 2 )
    *(_DWORD *)(v4 + 8) |= 2u;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL) & 0x100) != 0 )
    *(_DWORD *)(v4 + 8) |= 0x20u;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 216LL) )
    *(_DWORD *)(v4 + 8) |= 0x10u;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 84LL) == 100 )
    *(_DWORD *)(v4 + 8) |= 0x40u;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1616LL) & 1) != 0 )
  {
    *(_DWORD *)(v4 + 132) |= 1u;
    v8 = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(v4 + 136) = *(_OWORD *)(v8 + 1648);
    *(_OWORD *)(v4 + 152) = *(_OWORD *)(v8 + 1664);
    *(_OWORD *)(v4 + 168) = *(_OWORD *)(v8 + 1680);
    *(_OWORD *)(v4 + 184) = *(_OWORD *)(v8 + 1696);
    *(_DWORD *)(v4 + 200) = *(_DWORD *)(v8 + 1712);
  }
  v9 = HUBID_BuildCompatibleID(*(_QWORD *)(a1 + 24), 0LL, v4 + 28);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v6 = HUBID_BuildHardwareID(*(_QWORD *)(a1 + 24), 0LL, v4 + 12);
    if ( v6 >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(v4 + 44) = 0LL;
      v13 = v12 + 2144;
      v6 = 0;
      *(_QWORD *)(v4 + 52) = 0LL;
      if ( *(_QWORD *)(v13 + 8) && *(_DWORD *)(v13 + 4) )
      {
        *(_OWORD *)(v4 + 44) = *(_OWORD *)v13;
        PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)(v13 + 4), 0x64334855u);
        *(_QWORD *)(v4 + 52) = PoolWithTag;
        if ( PoolWithTag )
          memmove(PoolWithTag, *(const void **)(v13 + 8), *(unsigned int *)(v13 + 4));
        else
          v6 = -1073741670;
      }
      goto LABEL_36;
    }
    v10 = 23;
    v19 = v6;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  }
  else
  {
    v10 = 22;
    v19 = v9;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  }
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v11 + 1432),
    3u,
    5u,
    v10,
    (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
    v19);
LABEL_36:
  if ( v6 < 0 )
  {
    v15 = *(void **)(v4 + 36);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x64334855u);
      *(_QWORD *)(v4 + 36) = 0LL;
      *(_DWORD *)(v4 + 32) = 0;
    }
    v16 = *(void **)(v4 + 20);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x64334855u);
      *(_QWORD *)(v4 + 20) = 0LL;
      *(_DWORD *)(v4 + 16) = 0;
    }
    v17 = *(void **)(v4 + 52);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x64334855u);
      *(_QWORD *)(v4 + 52) = 0LL;
      *(_DWORD *)(v4 + 48) = 0;
    }
  }
  return (unsigned int)v6;
}
