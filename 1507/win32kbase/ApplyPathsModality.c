/*
 * XREFs of ApplyPathsModality @ 0x1C00610F8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C00605EC (ApplyPathModalityToCdsRegistryStore.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0061290 (DrvNotifyModeChangeStartStop.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B60D0 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        _BYTE *a7)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // esi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r8

  *a6 = 0;
  *a7 = 0;
  if ( !(unsigned int)ApplyPathModalityToCdsRegistryStore(a1) )
    return 0xFFFFFFFFLL;
  LOBYTE(v10) = 1;
  DrvNotifyModeChangeStartStop(v10);
  if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v20);
  }
  v12 = a2;
  LODWORD(v12) = a2 | 0x20000;
  if ( (int)((__int64 (__fastcall *)(__int64, __int64))qword_1C01012E8)(v12, a1) < 0 )
  {
    *a7 = 1;
    v14 = -1;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 36) || !*(_QWORD *)(a1 + 40) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v21);
    }
    if ( (a2 & 0x400000) != 0 )
    {
      v22 = *(unsigned int *)(a1 + 36);
      v23 = 0;
      if ( (_DWORD)v22 )
      {
        while ( 1 )
        {
          v24 = 168LL * v23;
          if ( *(_DWORD *)(v24 + *(_QWORD *)(a1 + 40) + 152) != *(_DWORD *)(v24 + *(_QWORD *)(a1 + 40) + 156) )
            break;
          if ( ++v23 >= (unsigned int)v22 )
            goto LABEL_8;
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v22);
        v26 = 168LL * v23;
        v25[3] = *(int *)(*(_QWORD *)(a1 + 40) + v26 + 4);
        v25[4] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v26);
        v25[5] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v26 + 152);
        v25[6] = *(unsigned int *)(*(_QWORD *)(a1 + 40) + v26 + 156);
        WdLogEvent5_WdEvent(v25);
      }
    }
LABEL_8:
    v14 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, 0, 1, a5);
    if ( v14 < 0 )
      *a7 = 1;
    ((void (__fastcall *)(__int64))qword_1C01012F0)(a1);
    if ( v14 == 2 )
    {
      v15 = *(_DWORD *)(a1 + 36);
      if ( v15 )
      {
        v16 = *(_QWORD *)(a1 + 40);
        if ( v16 )
        {
          v17 = 0;
          while ( 1 )
          {
            v18 = 168LL * v17;
            if ( *(_DWORD *)(v18 + v16 + 152) || *(_DWORD *)(v18 + v16 + 164) || *(_DWORD *)(v18 + v16 + 160) )
              break;
            if ( ++v17 >= v15 )
              goto LABEL_18;
          }
          *a6 = 1;
          GreIncrementDisplaySettingsUniqueness();
        }
      }
    }
  }
LABEL_18:
  DrvNotifyModeChangeStartStop(0LL);
  return (unsigned int)v14;
}
