/*
 * XREFs of Bulk_TransferData_ConfigureBuffer @ 0x1C00025A0
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000B750 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0008558 (WPP_RECORDER_SF_DDD.c)
 */

__int64 __fastcall Bulk_TransferData_ConfigureBuffer(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // ecx
  __int64 v5; // rcx
  PMDL Mdl; // rax
  int v7; // edx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rax
  int v15; // r9d
  int v16; // edx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 60);
  if ( v4 <= 0 )
    return 0LL;
  if ( v4 <= 2 )
  {
    v12 = *(_QWORD *)(v1 + 40);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 72) = v12;
      return 0LL;
    }
    v13 = *(_QWORD *)(v1 + 48);
    if ( (*(_BYTE *)(v13 + 10) & 5) != 0 )
      v14 = *(PVOID *)(v13 + 24);
    else
      v14 = MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, WPP_MAIN_CB.AlignmentRequirement | 0x10);
    *(_QWORD *)(a1 + 72) = v14;
    if ( v14 )
      return 0LL;
    v15 = 37;
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
LABEL_10:
      MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 64));
      return 0LL;
    }
    if ( (*(_DWORD *)(v1 + 32) & 0x10) != 0 && *(_QWORD *)(v3 + 112) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v7 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
        LOBYTE(v7) = 5;
        WPP_RECORDER_SF_DDD(
          *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
          v7,
          13,
          38,
          (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
          *(_DWORD *)(v3 + 64));
      }
      v8 = *(_QWORD *)(v3 + 112);
      v9 = *(unsigned int *)(a1 + 88);
      *(_QWORD *)(a1 + 64) = v8;
      v10 = *(_QWORD *)(v1 + 40);
      *(_QWORD *)v8 = 0LL;
      *(_WORD *)(v8 + 10) = 0;
      *(_DWORD *)(v8 + 40) = v9;
      *(_QWORD *)(v8 + 32) = v10 & 0xFFFFFFFFFFFFF000uLL;
      *(_WORD *)(v8 + 8) = 8 * ((((unsigned __int64)(v10 & 0xFFF) + v9 + 4095) >> 12) + 6);
      *(_DWORD *)(v8 + 44) = v10 & 0xFFF;
      goto LABEL_10;
    }
    v15 = 39;
  }
  v16 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
  LOBYTE(v16) = 2;
  WPP_RECORDER_SF_DDD(
    *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
    v16,
    13,
    v15,
    (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
    *(_DWORD *)(v3 + 64));
  return 3221225626LL;
}
