/*
 * XREFs of Bulk_TransferData_ConfigureBuffer @ 0x1C0003480
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000DE10 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0008EC4 (WPP_RECORDER_SF_DDD.c)
 */

__int64 __fastcall Bulk_TransferData_ConfigureBuffer(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // ecx
  __int64 v5; // rcx
  PMDL Mdl; // rax
  int v8; // edx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 60);
  if ( v4 <= 0 )
    return 0LL;
  if ( v4 <= 2 )
  {
    v14 = *(_QWORD *)(v1 + 40);
    if ( v14 )
    {
      *(_QWORD *)(a1 + 72) = v14;
      return 0LL;
    }
    v15 = *(_QWORD *)(v1 + 48);
    if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
      v16 = *(PVOID *)(v15 + 24);
    else
      v16 = MmMapLockedPagesSpecifyCache(
              (PMDL)v15,
              0,
              MmCached,
              0LL,
              0,
              *(&WPP_MAIN_CB.AlignmentRequirement + 1) | 0x10);
    *(_QWORD *)(a1 + 72) = v16;
    if ( v16 )
      return 0LL;
    v12 = 37;
  }
  else
  {
    if ( v4 != 3 )
      return 0LL;
    v5 = *(_QWORD *)(v1 + 48);
    if ( v5 )
    {
      *(_QWORD *)(a1 + 64) = v5;
      return 0LL;
    }
    Mdl = IoAllocateMdl(*(PVOID *)(v1 + 40), *(_DWORD *)(a1 + 88), 0, 0, 0LL);
    *(_QWORD *)(a1 + 64) = Mdl;
    if ( Mdl )
    {
LABEL_13:
      MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 64));
      return 0LL;
    }
    if ( (*(_DWORD *)(v1 + 32) & 0x10) != 0 && *(_QWORD *)(v3 + 112) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v8 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
        LOBYTE(v8) = 5;
        WPP_RECORDER_SF_DDD(
          *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
          v8,
          13,
          38,
          (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
          *(_DWORD *)(v3 + 64));
      }
      v9 = *(_QWORD *)(v3 + 112);
      v10 = *(unsigned int *)(a1 + 88);
      *(_QWORD *)(a1 + 64) = v9;
      v11 = *(_QWORD *)(v1 + 40);
      *(_QWORD *)v9 = 0LL;
      *(_WORD *)(v9 + 10) = 0;
      *(_DWORD *)(v9 + 40) = v10;
      *(_QWORD *)(v9 + 32) = v11 & 0xFFFFFFFFFFFFF000uLL;
      *(_WORD *)(v9 + 8) = 8 * ((((unsigned __int64)(v11 & 0xFFF) + v10 + 4095) >> 12) + 6);
      *(_DWORD *)(v9 + 44) = v11 & 0xFFF;
      goto LABEL_13;
    }
    v12 = 39;
  }
  v13 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
  LOBYTE(v13) = 2;
  WPP_RECORDER_SF_DDD(
    *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
    v13,
    13,
    v12,
    (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
    *(_DWORD *)(v3 + 64));
  return 3221225626LL;
}
