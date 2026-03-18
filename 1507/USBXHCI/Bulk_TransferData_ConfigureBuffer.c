/*
 * XREFs of Bulk_TransferData_ConfigureBuffer @ 0x1C002C930
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C002B4EC (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 */

__int64 __fastcall Bulk_TransferData_ConfigureBuffer(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rax
  PMDL Mdl; // rax
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  PVOID v15; // rax
  __int64 Priority; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+38h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 60);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v1 > 0 )
  {
    if ( v1 <= 2 )
    {
      v13 = *(_QWORD *)(v3 + 40);
      if ( v13 )
      {
        *(_QWORD *)(a1 + 72) = v13;
        return v2;
      }
      v14 = *(_QWORD *)(v3 + 48);
      if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
        v15 = *(PVOID *)(v14 + 24);
      else
        v15 = MmMapLockedPagesSpecifyCache(
                (PMDL)v14,
                0,
                MmCached,
                0LL,
                0,
                *(&WPP_MAIN_CB.AlignmentRequirement + 1) | 0x10);
      *(_QWORD *)(a1 + 72) = v15;
      if ( !v15 )
      {
        v11 = 37;
        v12 = *(_QWORD *)(v5 + 56);
        v19 = *(_DWORD *)(v5 + 64);
        v18 = *(_DWORD *)(v12 + 144);
        LODWORD(Priority) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
        goto LABEL_21;
      }
    }
    else if ( v1 == 3 )
    {
      v6 = *(_QWORD *)(v3 + 48);
      if ( v6 )
      {
        *(_QWORD *)(a1 + 64) = v6;
        return v2;
      }
      Mdl = IoAllocateMdl(*(PVOID *)(v3 + 40), *(_DWORD *)(a1 + 88), 0, 0, 0LL);
      *(_QWORD *)(a1 + 64) = Mdl;
      if ( Mdl )
      {
LABEL_12:
        MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 64));
        return v2;
      }
      if ( (*(_DWORD *)(v3 + 32) & 0x10) != 0 && *(_QWORD *)(v5 + 112) )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DDD(
            *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
            5u,
            0xDu,
            0x26u,
            (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
            *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
            *(_DWORD *)(v5 + 64));
        v8 = *(_QWORD *)(v5 + 112);
        v9 = *(unsigned int *)(a1 + 88);
        *(_QWORD *)(a1 + 64) = v8;
        v10 = *(_QWORD *)(v3 + 40);
        *(_QWORD *)v8 = 0LL;
        *(_WORD *)(v8 + 10) = 0;
        *(_DWORD *)(v8 + 40) = v9;
        *(_QWORD *)(v8 + 32) = v10 & 0xFFFFFFFFFFFFF000uLL;
        *(_WORD *)(v8 + 8) = 8 * ((((unsigned __int64)(v10 & 0xFFF) + v9 + 4095) >> 12) + 6);
        *(_DWORD *)(v8 + 44) = v10 & 0xFFF;
        goto LABEL_12;
      }
      v11 = 39;
      v12 = *(_QWORD *)(v5 + 56);
      v19 = *(_DWORD *)(v5 + 64);
      v18 = *(_DWORD *)(v12 + 144);
      LODWORD(Priority) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
LABEL_21:
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v12 + 80),
        2u,
        0xDu,
        v11,
        (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
        Priority,
        v18,
        v19);
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
