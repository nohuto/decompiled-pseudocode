/*
 * XREFs of Isoch_PrepareStage @ 0x1C000B4B0
 * Callers:
 *     Isoch_MappingLoop @ 0x1C00021E0 (Isoch_MappingLoop.c)
 * Callees:
 *     TR_AcquireSegments @ 0x1C0001000 (TR_AcquireSegments.c)
 *     Isoch_Stage_EstimateRequiredSegments @ 0x1C0001350 (Isoch_Stage_EstimateRequiredSegments.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00029B4 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_AcquireMdl @ 0x1C0002C58 (Isoch_Stage_AcquireMdl.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C000C4F8 (WPP_RECORDER_SF_DDqqD.c)
 *     Isoch_Stage_DetermineSize @ 0x1C002C390 (Isoch_Stage_DetermineSize.c)
 *     Isoch_Stage_Release @ 0x1C002C4A8 (Isoch_Stage_Release.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x1C002D5B4 (WPP_RECORDER_SF_DDqqDD.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rdi
  int v4; // edx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // rax
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // r8d
  int v13; // edx
  unsigned int v15; // edi
  int v16; // edx

  v1 = *(__int64 **)(a1 + 320);
  v3 = *v1;
  v4 = *(_DWORD *)(*v1 + 92) + *(_DWORD *)(*v1 + 88);
  v5 = *(_QWORD *)(*v1 + 32);
  *((_DWORD *)v1 + 10) = v4;
  v6 = *(_DWORD *)(v5 + 128) + (unsigned int)(v4 + *(_DWORD *)(a1 + 308) - 1) / *(_DWORD *)(a1 + 308);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v7 + 8) + 232LL) & 0x800000000000000LL) != 0 || ((*(_DWORD *)(v7 + 104) >> 11) & 1) == 0 )
  {
    v8 = *(_DWORD *)(a1 + 280);
    if ( (v8 & 0x20) != 0 )
    {
      v9 = *(_DWORD *)(a1 + 316);
      if ( v6 != v9 + 1 && ((v8 & 0x10) != 0 || *(_DWORD *)(a1 + 328)) )
      {
        WPP_RECORDER_SF_DDqqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v9,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v6);
        *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        Isoch_Stage_Release(a1, v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
        return 2LL;
      }
    }
  }
  if ( (int)Isoch_Stage_AcquireMdl(v1) < 0 )
    goto LABEL_11;
  Isoch_Stage_DetermineSize(a1, v3, v1);
  v10 = Isoch_Stage_EstimateRequiredSegments(a1, (__int64)v1);
  if ( !v10 )
    return 0LL;
  v11 = TR_AcquireSegments(a1, v10, v1 + 1);
  if ( v11 == 259 )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v13, v12, 48);
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    Isoch_Stage_Release(a1, v1);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 3LL;
  }
  if ( v11 >= 0 )
  {
    *(_DWORD *)(a1 + 288) = 0;
    return 0LL;
  }
  v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
  LOBYTE(v16) = 2;
  WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v16, v12, 49);
LABEL_11:
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  Isoch_Stage_Release(a1, v1);
  if ( *(_DWORD *)(v3 + 96) == *(_DWORD *)(v3 + 100) )
  {
    Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v3, 0xFFFFFFFF, 0xC0001000, 0, 0);
    v15 = 1;
  }
  else
  {
    *(_DWORD *)(v3 + 92) = *(_DWORD *)(v3 + 80) - *(_DWORD *)(v3 + 88);
    v15 = 4;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return v15;
}
