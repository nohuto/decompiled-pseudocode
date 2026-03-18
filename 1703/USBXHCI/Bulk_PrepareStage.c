/*
 * XREFs of Bulk_PrepareStage @ 0x1C000BE40
 * Callers:
 *     Bulk_MappingLoop @ 0x1C00030D0 (Bulk_MappingLoop.c)
 * Callees:
 *     TR_AcquireSegments @ 0x1C0001008 (TR_AcquireSegments.c)
 *     Bulk_Stage_AcquireMdl @ 0x1C0001260 (Bulk_Stage_AcquireMdl.c)
 *     Bulk_Stage_DetermineSize @ 0x1C000153C (Bulk_Stage_DetermineSize.c)
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C00024B0 (Bulk_Stage_EstimateRequiredSegments.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0003348 (Bulk_Transfer_CompleteCancelable.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C000C890 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     WPP_RECORDER_SF_DDDqqD @ 0x1C002C630 (WPP_RECORDER_SF_DDDqqD.c)
 */

__int64 __fastcall Bulk_PrepareStage(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rsi
  int v6; // eax
  int v7; // r8d
  __int64 v8; // r15
  unsigned __int8 *v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r13
  unsigned int v12; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 312);
  v3 = 0;
  v4 = *(_QWORD *)v1;
  if ( *(_DWORD *)(*(_QWORD *)v1 + 60LL) == 1 )
  {
    *(_QWORD *)(v1 + 64) = *(_QWORD *)(v4 + 72) + *(unsigned int *)(v4 + 96);
  }
  else if ( *(_DWORD *)(*(_QWORD *)v1 + 60LL) == 2 )
  {
    *(_QWORD *)(v1 + 64) = *(_QWORD *)(v4 + 72) + *(unsigned int *)(v4 + 96);
    *(_QWORD *)(v1 + 72) = *(_QWORD *)(v4 + 80);
  }
  else if ( *(_DWORD *)(*(_QWORD *)v1 + 60LL) == 3 && (int)Bulk_Stage_AcquireMdl((__int64 *)v1) < 0 )
  {
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v8 = *(_QWORD *)v1;
    if ( *(_BYTE *)(v1 + 44) )
    {
      IoFreeMdl(*(PMDL *)(v1 + 48));
      *(_QWORD *)(v1 + 48) = 0LL;
      *(_BYTE *)(v1 + 44) = 0;
    }
    v3 = 1;
    TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 8), 1);
    TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 24), 0);
    v9 = (unsigned __int8 *)(v8 + 112);
LABEL_3:
    StageQueue_Release(v9, (unsigned __int8 *)v1);
    if ( *(_DWORD *)(v4 + 104) == *(_DWORD *)(v4 + 100) )
    {
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
  Bulk_Stage_DetermineSize(a1, v4, v1);
  Bulk_Stage_EstimateRequiredTrbs(v1);
  Bulk_Stage_EstimateRequiredSegments((_DWORD *)v1, (int *)&v12);
  if ( !v12 )
    return v3;
  v6 = TR_AcquireSegments(a1, v12, (__int64 *)(v1 + 8));
  if ( v6 != 259 )
  {
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
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v11 = *(_QWORD *)v1;
    if ( *(_BYTE *)(v1 + 44) )
    {
      IoFreeMdl(*(PMDL *)(v1 + 48));
      *(_QWORD *)(v1 + 48) = 0LL;
      *(_BYTE *)(v1 + 44) = 0;
    }
    v3 = 1;
    TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 8), 1);
    TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 24), 0);
    v9 = (unsigned __int8 *)(v11 + 112);
    goto LABEL_3;
  }
  WPP_RECORDER_SF_DDDqqD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v7,
    33);
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v10 = *(_QWORD *)v1;
  if ( *(_BYTE *)(v1 + 44) )
  {
    IoFreeMdl(*(PMDL *)(v1 + 48));
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_BYTE *)(v1 + 44) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 8), 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)(v1 + 24), 0);
  StageQueue_Release((unsigned __int8 *)(v10 + 112), (unsigned __int8 *)v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return 3;
}
