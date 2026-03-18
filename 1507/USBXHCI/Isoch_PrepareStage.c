/*
 * XREFs of Isoch_PrepareStage @ 0x1C00252B4
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0025190 (Isoch_MappingLoop.c)
 * Callees:
 *     TR_AcquireSegments @ 0x1C001FFE0 (TR_AcquireSegments.c)
 *     Isoch_Stage_AcquireMdl @ 0x1C0026800 (Isoch_Stage_AcquireMdl.c)
 *     Isoch_Stage_DetermineSize @ 0x1C0026BA8 (Isoch_Stage_DetermineSize.c)
 *     Isoch_Stage_EstimateRequiredSegments @ 0x1C0026CC0 (Isoch_Stage_EstimateRequiredSegments.c)
 *     Isoch_Stage_Release @ 0x1C00279C8 (Isoch_Stage_Release.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0027EEC (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C0029304 (WPP_RECORDER_SF_DDqqD.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x1C0029444 (WPP_RECORDER_SF_DDqqDD.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  __int64 v1; // r14
  _DWORD *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // r8d

  v1 = *(_QWORD *)(a1 + 320);
  v3 = *(_DWORD **)v1;
  v4 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v1 + 92LL) + *(_DWORD *)(*(_QWORD *)v1 + 88LL));
  v5 = *(_QWORD *)(*(_QWORD *)v1 + 32LL);
  *(_DWORD *)(v1 + 40) = v4;
  v6 = 0x800000000000000LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL);
  v8 = *(_DWORD *)(v5 + 128) + (unsigned int)(v4 + *(_DWORD *)(a1 + 308) - 1) / *(_DWORD *)(a1 + 308);
  if ( (*(_QWORD *)(*(_QWORD *)(v7 + 8) + 232LL) & 0x800000000000000LL) != 0 || ((*(_DWORD *)(v7 + 104) >> 11) & 1) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 280);
    if ( (v9 & 0x20) != 0 )
    {
      v6 = *(unsigned int *)(a1 + 316);
      if ( (_DWORD)v8 != (_DWORD)v6 + 1 && ((v9 & 0x10) != 0 || *(_DWORD *)(a1 + 328)) )
      {
        WPP_RECORDER_SF_DDqqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v6,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v8);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        Isoch_Stage_Release(a1, v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return 2;
      }
    }
  }
  if ( (int)Isoch_Stage_AcquireMdl(v1, v6, v4, v8) >= 0 )
  {
    Isoch_Stage_DetermineSize(a1, v3, v1);
    v11 = Isoch_Stage_EstimateRequiredSegments(a1, v1);
    if ( v11 )
    {
      v12 = TR_AcquireSegments(a1, v11, (__int64 *)(v1 + 8));
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
  if ( v3[24] == v3[25] )
  {
    Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v3, -1, -1073737728, 0, 0);
    v10 = 1;
  }
  else
  {
    v10 = 4;
    v3[23] = v3[20] - v3[22];
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return v10;
}
