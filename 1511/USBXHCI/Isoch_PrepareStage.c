/*
 * XREFs of Isoch_PrepareStage @ 0x1C000C4C4
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0002EF0 (Isoch_MappingLoop.c)
 * Callees:
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00017DC (Isoch_Transfer_CompleteCancelable.c)
 *     TR_AcquireSegments @ 0x1C0003024 (TR_AcquireSegments.c)
 *     Isoch_Stage_AcquireMdl @ 0x1C0003924 (Isoch_Stage_AcquireMdl.c)
 *     Isoch_Stage_EstimateRequiredSegments @ 0x1C0003A38 (Isoch_Stage_EstimateRequiredSegments.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C000CAB8 (WPP_RECORDER_SF_DDqqD.c)
 *     Isoch_Stage_DetermineSize @ 0x1C002BD74 (Isoch_Stage_DetermineSize.c)
 *     Isoch_Stage_Release @ 0x1C002BE8C (Isoch_Stage_Release.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x1C002D064 (WPP_RECORDER_SF_DDqqDD.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v3; // rbx
  int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rax
  unsigned int v7; // r9d
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // r8d

  v1 = *(__int64 **)(a1 + 320);
  v3 = *v1;
  v4 = *(_DWORD *)(*v1 + 92) + *(_DWORD *)(*v1 + 88);
  v5 = *(_QWORD *)(*v1 + 32);
  *((_DWORD *)v1 + 10) = v4;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL);
  v7 = *(_DWORD *)(v5 + 128) + (unsigned int)(v4 + *(_DWORD *)(a1 + 308) - 1) / *(_DWORD *)(a1 + 308);
  if ( (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 232LL) & 0x800000000000000LL) != 0 || ((*(_DWORD *)(v6 + 104) >> 11) & 1) == 0 )
  {
    v8 = *(_DWORD *)(a1 + 280);
    if ( (v8 & 0x20) != 0 )
    {
      v9 = *(_DWORD *)(a1 + 316);
      if ( v7 != v9 + 1 && ((v8 & 0x10) != 0 || *(_DWORD *)(a1 + 328)) )
      {
        WPP_RECORDER_SF_DDqqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v9,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v7);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        Isoch_Stage_Release(a1, v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return 2;
      }
    }
  }
  if ( (int)Isoch_Stage_AcquireMdl(v1) >= 0 )
  {
    Isoch_Stage_DetermineSize(a1, v3, v1);
    v11 = Isoch_Stage_EstimateRequiredSegments(a1, (__int64)v1);
    if ( v11 )
    {
      v12 = TR_AcquireSegments(a1, v11, v1 + 1);
      if ( v12 == 259 )
      {
        WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 4, v13, 48);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        Isoch_Stage_Release(a1, v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return 3;
      }
      if ( v12 < 0 )
      {
        WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 2, v13, 49);
        goto LABEL_9;
      }
      *(_DWORD *)(a1 + 288) = 0;
    }
    return 0;
  }
LABEL_9:
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  Isoch_Stage_Release(a1, v1);
  if ( *(_DWORD *)(v3 + 96) == *(_DWORD *)(v3 + 100) )
  {
    Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v3, 0xFFFFFFFF, 0xC0001000, 0, 0);
    v10 = 1;
  }
  else
  {
    v10 = 4;
    *(_DWORD *)(v3 + 92) = *(_DWORD *)(v3 + 80) - *(_DWORD *)(v3 + 88);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return v10;
}
