/*
 * XREFs of ndisMSetSriovAttributes @ 0x1C00B33AC
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00A00B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ndisIovInitVf @ 0x1C00D9B08 (ndisIovInitVf.c)
 */

__int64 __fastcall ndisMSetSriovAttributes(__int64 a1, __int64 a2)
{
  unsigned int LocallyUniqueId; // ebx
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *PoolWithTag; // rax
  unsigned __int16 *v10; // rdx
  unsigned int v11; // eax
  _DWORD *v12; // rax
  _WORD *v13; // rdx
  unsigned __int16 v14; // ax
  __int64 v16; // rax
  void *v17; // rcx
  void *v18; // rcx

  LocallyUniqueId = 0;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qq(0x7Bu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 48);
  if ( !*(_BYTE *)(v5 + 1) || (v6 = 12, *(_WORD *)(v5 + 2) < 0xCu) )
  {
    LocallyUniqueId = -1073741811;
LABEL_36:
    if ( (int)(LocallyUniqueId + 0x80000000) < 0 || LocallyUniqueId == -1073676283 )
      goto LABEL_22;
    goto LABEL_38;
  }
  v7 = *(_QWORD *)(a2 + 56);
  if ( !*(_BYTE *)(v7 + 1)
    || *(_WORD *)(v7 + 2) < 0xCu
    || (*(_BYTE *)(v5 + 8) & 3) == 3 && ((v8 = *(_QWORD *)(a1 + 3608)) == 0 || *(_BYTE *)(v8 + 1) < 2u)
    || (*(_BYTE *)(v7 + 8) & 3) == 3 && ((v16 = *(_QWORD *)(a1 + 3616)) == 0 || *(_BYTE *)(v16 + 1) < 2u) )
  {
    LocallyUniqueId = -1073741811;
LABEL_38:
    v17 = *(void **)(a1 + 4672);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *(_QWORD *)(a1 + 4672) = 0LL;
    }
    v18 = *(void **)(a1 + 4664);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(a1 + 4664) = 0LL;
    }
    goto LABEL_22;
  }
  if ( *(_QWORD *)(a1 + 4672) || *(_QWORD *)(a1 + 4664) )
  {
    LocallyUniqueId = -1073676283;
    goto LABEL_22;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
  *(_QWORD *)(a1 + 4664) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_29:
    LocallyUniqueId = -1073741670;
    goto LABEL_38;
  }
  *(_QWORD *)PoolWithTag = 0LL;
  PoolWithTag[2] = 0;
  v10 = *(unsigned __int16 **)(a2 + 48);
  v11 = v10[1];
  if ( (unsigned __int16)v11 >= 0xCu )
    v11 = 12;
  memmove(*(void **)(a1 + 4664), v10, v11);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 8LL) & 3) != 3 || ndisSystemSupportsSriov )
  {
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
    *(_QWORD *)(a1 + 4672) = v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      v12[2] = 0;
      v13 = *(_WORD **)(a2 + 56);
      v14 = v13[1];
      if ( v14 < 0xCu )
        v6 = v14;
      memmove(*(void **)(a1 + 4672), v13, v6);
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(a1 + 4940));
      if ( !LocallyUniqueId )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 8LL) & 5) != 5 )
          goto LABEL_22;
        LocallyUniqueId = ndisIovInitVf(a1);
        if ( !LocallyUniqueId )
          goto LABEL_22;
      }
      goto LABEL_36;
    }
    goto LABEL_29;
  }
LABEL_22:
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qqd(0x7Cu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, a2, LocallyUniqueId);
  return LocallyUniqueId;
}
