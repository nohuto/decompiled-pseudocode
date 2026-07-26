/*
 * XREFs of ndisPostSetMiniportRSSParameters @ 0x1C00247F4
 * Callers:
 *     ndisOidPostRSSParameters @ 0x1C0024270 (ndisOidPostRSSParameters.c)
 * Callees:
 *     ?ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0010D5C (-ndisPcwGetCpu@@YAKPEAUNDIS_PCW_CONTEXT@@@Z.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0024960 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0067948 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisPostSetMiniportRSSParameters(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v8; // r15
  void *v9; // r9
  __int64 v10; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int16 v15; // cx
  _NDIS_PCW_DATA_BLOCK *v16; // rax
  int v17; // r9d
  unsigned int DatapathCyclesMask; // ecx
  int Cpu; // eax
  char *v20; // r8
  unsigned __int64 v21; // rax
  struct NDIS_PCW_CONTEXT v22; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(160LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3);
  if ( !a3 && ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)a2) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    CurrentThread = KeGetCurrentThread();
    v8 = v6;
    v9 = *(void **)(a1 + 1984);
    *(_QWORD *)(a1 + 552) = v9;
    *(_QWORD *)(a1 + 520) = CurrentThread;
    *(_DWORD *)(a1 + 1856) = 2305782;
    v10 = *(_QWORD *)(a2 + 40);
    v11 = *(_DWORD *)(v10 + 16) + *(unsigned __int16 *)(v10 + 12);
    v12 = *(_DWORD *)(v10 + 24) + *(unsigned __int16 *)(v10 + 20);
    if ( *(_BYTE *)(v10 + 1) < 2u )
      v13 = 0;
    else
      v13 = *(_DWORD *)(v10 + 28) + *(_DWORD *)(v10 + 32) * *(_DWORD *)(v10 + 36);
    v14 = *(_DWORD *)(v10 + 24) + *(unsigned __int16 *)(v10 + 20);
    if ( v11 > v12 )
      v14 = *(_DWORD *)(v10 + 16) + *(unsigned __int16 *)(v10 + 12);
    if ( v14 <= v13 )
    {
      v12 = v13;
    }
    else if ( v11 > v12 )
    {
      v12 = *(_DWORD *)(v10 + 16) + *(unsigned __int16 *)(v10 + 12);
    }
    if ( v12 > 0x394 )
      v12 = 916;
    if ( v12 )
      memmove(v9, *(const void **)(a2 + 40), v12);
    v15 = *(_WORD *)(v10 + 4);
    if ( (v15 & 0x10) != 0 || !(unsigned __int8)*(_DWORD *)(v10 + 8) )
    {
      *(_QWORD *)(a1 + 552) = 0LL;
    }
    else if ( (v15 & 4) == 0 )
    {
      v16 = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
      v17 = 2048;
      v22.CurrentCpu = -1;
      DatapathCyclesMask = *(_DWORD *)(a1 + 80);
      v22.PcwBlock = v16;
      v22.DatapathEventsMask = *(_DWORD *)(a1 + 48);
      v22.DatapathCyclesMask = DatapathCyclesMask;
      if ( (v22.DatapathEventsMask & 0x800) != 0 )
      {
        ndisPcwAddEvent(&v22, 0xBuLL, 1uLL);
        DatapathCyclesMask = v22.DatapathCyclesMask;
      }
      if ( (DatapathCyclesMask & v17) != 0 )
      {
        Cpu = ndisPcwGetCpu(&v22);
        v20 = (char *)v22.PcwBlock + Cpu * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData;
        v21 = __rdtsc();
        *((_QWORD *)v20 + 24) += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - *(_QWORD *)(a2 + 144);
        *((_QWORD *)v20 + 49) = 0LL;
      }
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(161LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3);
}
