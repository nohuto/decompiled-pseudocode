/*
 * XREFs of Bulk_PrepareStage @ 0x1C000F728
 * Callers:
 *     Bulk_MappingLoop @ 0x1C00024C8 (Bulk_MappingLoop.c)
 * Callees:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0002708 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_Release @ 0x1C0002A7C (Bulk_Stage_Release.c)
 *     TR_AcquireSegments @ 0x1C0003024 (TR_AcquireSegments.c)
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C0003300 (Bulk_Stage_EstimateRequiredSegments.c)
 *     Bulk_Stage_AcquireMdl @ 0x1C0003818 (Bulk_Stage_AcquireMdl.c)
 *     Bulk_Stage_DetermineSize @ 0x1C0003DA4 (Bulk_Stage_DetermineSize.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C000F910 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     WPP_RECORDER_SF_DDDqqD @ 0x1C002F510 (WPP_RECORDER_SF_DDDqqD.c)
 */

__int64 __fastcall Bulk_PrepareStage(__int64 a1)
{
  __int64 *v1; // r14
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // eax
  int v7; // r8d
  __int64 v8; // r8
  unsigned int v10; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 312);
  v3 = 0;
  v4 = *v1;
  if ( *(_DWORD *)(*v1 + 60) == 1 )
  {
    v1[8] = *(_QWORD *)(v4 + 72) + *(unsigned int *)(v4 + 96);
  }
  else if ( *(_DWORD *)(*v1 + 60) == 2 )
  {
    v1[8] = *(_QWORD *)(v4 + 72) + *(unsigned int *)(v4 + 96);
    v1[9] = *(_QWORD *)(v4 + 80);
  }
  else if ( *(_DWORD *)(*v1 + 60) == 3 && (int)Bulk_Stage_AcquireMdl(v1) < 0 )
  {
    goto LABEL_5;
  }
  Bulk_Stage_DetermineSize(a1, v4, (__int64)v1);
  Bulk_Stage_EstimateRequiredTrbs(v1);
  Bulk_Stage_EstimateRequiredSegments(v1, (int *)&v10);
  if ( !v10 )
    return v3;
  v6 = TR_AcquireSegments(a1, v10, v1 + 1);
  if ( v6 == 259 )
  {
    WPP_RECORDER_SF_DDDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v7,
      33);
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    Bulk_Stage_Release(a1, v1, v8);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 3;
  }
  if ( v6 >= 0 )
  {
    *(_DWORD *)(a1 + 284) = 0;
    return v3;
  }
  WPP_RECORDER_SF_DDDqqD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v7,
    34);
LABEL_5:
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  Bulk_Stage_Release(a1, v1, v5);
  if ( *(_DWORD *)(v4 + 104) == *(_DWORD *)(v4 + 100) )
  {
    v3 = 1;
    Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v4, 0xC0001000, 1);
  }
  else
  {
    v3 = 4;
    *(_DWORD *)(v4 + 96) = *(_DWORD *)(v4 + 88);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return v3;
}
