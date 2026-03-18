/*
 * XREFs of Isoch_PrepareStage @ 0x1C000C2C0
 * Callers:
 *     Isoch_MappingLoop @ 0x1C00022FC (Isoch_MappingLoop.c)
 * Callees:
 *     TR_AcquireSegments @ 0x1C0001008 (TR_AcquireSegments.c)
 *     Isoch_Stage_EstimateRequiredSegments @ 0x1C0001370 (Isoch_Stage_EstimateRequiredSegments.c)
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0002B40 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_AcquireMdl @ 0x1C0002DF4 (Isoch_Stage_AcquireMdl.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C000D218 (WPP_RECORDER_SF_DDqqD.c)
 *     Isoch_Stage_DetermineSize @ 0x1C0028C18 (Isoch_Stage_DetermineSize.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x1C002A000 (WPP_RECORDER_SF_DDqqDD.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rax
  unsigned int v7; // r9d
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // eax
  int v11; // eax
  int v12; // r8d
  unsigned int v13; // esi
  __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned __int64 *v17; // rdx
  __int64 v18; // rbp

  v1 = *(_QWORD *)(a1 + 320);
  v3 = *(_QWORD *)v1;
  v4 = *(_DWORD *)(*(_QWORD *)v1 + 92LL) + *(_DWORD *)(*(_QWORD *)v1 + 88LL);
  v5 = *(_QWORD *)(*(_QWORD *)v1 + 32LL);
  *(_DWORD *)(v1 + 40) = v4;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL);
  v7 = *(_DWORD *)(v5 + 128) + (unsigned int)(v4 + *(_DWORD *)(a1 + 308) - 1) / *(_DWORD *)(a1 + 308);
  if ( ((*(_QWORD *)(*(_QWORD *)(v6 + 8) + 232LL) & 0x800000000000000LL) != 0 || ((*(_DWORD *)(v6 + 104) >> 11) & 1) == 0)
    && (v8 = *(_DWORD *)(a1 + 280), (v8 & 0x20) != 0)
    && (v9 = *(_DWORD *)(a1 + 316), v7 != v9 + 1)
    && ((v8 & 0x10) != 0 || *(_DWORD *)(a1 + 328)) )
  {
    WPP_RECORDER_SF_DDqqDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v9,
      v7);
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v15 = *(_QWORD *)v1;
    if ( *(_BYTE *)(v1 + 56) )
    {
      IoFreeMdl(*(PMDL *)(v1 + 64));
      *(_QWORD *)(v1 + 64) = 0LL;
      *(_BYTE *)(v1 + 56) = 0;
    }
    TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 8), 1);
    TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 24), 0);
    StageQueue_Release((unsigned __int8 *)(v15 + 112), (unsigned __int8 *)v1);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 2;
  }
  else
  {
    if ( (int)Isoch_Stage_AcquireMdl((__int64 *)v1) < 0 )
    {
      *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v16 = *(_QWORD *)v1;
      if ( *(_BYTE *)(v1 + 56) )
      {
        IoFreeMdl(*(PMDL *)(v1 + 64));
        *(_QWORD *)(v1 + 64) = 0LL;
        *(_BYTE *)(v1 + 56) = 0;
      }
      v17 = (unsigned __int64 *)(v1 + 8);
      goto LABEL_12;
    }
    Isoch_Stage_DetermineSize(a1, v3, v1);
    v10 = Isoch_Stage_EstimateRequiredSegments(a1, v1);
    if ( !v10 )
      return 0;
    v11 = TR_AcquireSegments(a1, v10, (__int64 *)(v1 + 8));
    if ( v11 != 259 )
    {
      if ( v11 < 0 )
      {
        WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 2, v12, 49);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        v16 = *(_QWORD *)v1;
        if ( *(_BYTE *)(v1 + 56) )
        {
          IoFreeMdl(*(PMDL *)(v1 + 64));
          *(_QWORD *)(v1 + 64) = 0LL;
          *(_BYTE *)(v1 + 56) = 0;
        }
        v17 = (unsigned __int64 *)(v1 + 8);
LABEL_12:
        TR_ReleaseSegments(a1, v17, 1);
        TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 24), 0);
        StageQueue_Release((unsigned __int8 *)(v16 + 112), (unsigned __int8 *)v1);
        if ( *(_DWORD *)(v3 + 96) == *(_DWORD *)(v3 + 100) )
        {
          Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v3, 0xFFFFFFFF, 0xC0001000, 0, 0);
          v13 = 1;
        }
        else
        {
          v13 = 4;
          *(_DWORD *)(v3 + 92) = *(_DWORD *)(v3 + 80) - *(_DWORD *)(v3 + 88);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return v13;
      }
      *(_DWORD *)(a1 + 288) = 0;
      return 0;
    }
    WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 4, v12, 48);
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v18 = *(_QWORD *)v1;
    if ( *(_BYTE *)(v1 + 56) )
    {
      IoFreeMdl(*(PMDL *)(v1 + 64));
      *(_QWORD *)(v1 + 64) = 0LL;
      *(_BYTE *)(v1 + 56) = 0;
    }
    TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 8), 1);
    TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 24), 0);
    StageQueue_Release((unsigned __int8 *)(v18 + 112), (unsigned __int8 *)v1);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 3;
  }
}
