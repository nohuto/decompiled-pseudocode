/*
 * XREFs of ndisMSetSriovAttributes @ 0x1C00D1860
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AEC30 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisIovInitVf @ 0x1C00D917C (ndisIovInitVf.c)
 */

__int64 __fastcall ndisMSetSriovAttributes(__int64 a1, __int64 a2)
{
  unsigned int LocallyUniqueId; // ebx
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *PoolWithTag; // rax
  unsigned __int16 *v11; // rdx
  unsigned int v12; // eax
  _DWORD *v13; // rax
  _WORD *v14; // rdx
  unsigned __int16 v15; // ax
  void *v16; // rcx
  void *v17; // rcx

  LocallyUniqueId = 0;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qq(0x7Eu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 48);
  if ( !*(_BYTE *)(v5 + 1) || (v6 = 12, *(_WORD *)(v5 + 2) < 0xCu) )
  {
    LocallyUniqueId = -1073741811;
    goto LABEL_31;
  }
  v7 = *(_QWORD *)(a2 + 56);
  if ( !*(_BYTE *)(v7 + 1)
    || *(_WORD *)(v7 + 2) < 0xCu
    || (*(_BYTE *)(v5 + 8) & 3) == 3 && ((v8 = *(_QWORD *)(a1 + 3608)) == 0 || *(_BYTE *)(v8 + 1) < 2u)
    || (*(_BYTE *)(v7 + 8) & 3) == 3 && ((v9 = *(_QWORD *)(a1 + 3616)) == 0 || *(_BYTE *)(v9 + 1) < 2u) )
  {
    LocallyUniqueId = -1073741811;
LABEL_33:
    v16 = *(void **)(a1 + 4672);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *(_QWORD *)(a1 + 4672) = 0LL;
    }
    v17 = *(void **)(a1 + 4664);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *(_QWORD *)(a1 + 4664) = 0LL;
    }
    goto LABEL_37;
  }
  if ( *(_QWORD *)(a1 + 4672) || *(_QWORD *)(a1 + 4664) )
  {
    LocallyUniqueId = -1073676283;
    goto LABEL_37;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
  *(_QWORD *)(a1 + 4664) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_17:
    LocallyUniqueId = -1073741670;
    goto LABEL_33;
  }
  *(_QWORD *)PoolWithTag = 0LL;
  PoolWithTag[2] = 0;
  v11 = *(unsigned __int16 **)(a2 + 48);
  v12 = v11[1];
  if ( (unsigned __int16)v12 >= 0xCu )
    v12 = 12;
  memmove(*(void **)(a1 + 4664), v11, v12);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 8LL) & 3) != 3 || ndisSystemSupportsSriov )
  {
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
    *(_QWORD *)(a1 + 4672) = v13;
    if ( !v13 )
      goto LABEL_17;
    *(_QWORD *)v13 = 0LL;
    v13[2] = 0;
    v14 = *(_WORD **)(a2 + 56);
    v15 = v14[1];
    if ( v15 < 0xCu )
      v6 = v15;
    memmove(*(void **)(a1 + 4672), v14, v6);
    LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(a1 + 4940));
    if ( LocallyUniqueId
      || (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 8LL) & 5) == 5 && (LocallyUniqueId = ndisIovInitVf(a1)) != 0 )
    {
LABEL_31:
      if ( (int)(LocallyUniqueId + 0x80000000) < 0 || LocallyUniqueId == -1073676283 )
        goto LABEL_37;
      goto LABEL_33;
    }
  }
LABEL_37:
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qqd(0x7Fu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, a2, LocallyUniqueId);
  return LocallyUniqueId;
}
