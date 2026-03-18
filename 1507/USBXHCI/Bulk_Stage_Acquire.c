/*
 * XREFs of Bulk_Stage_Acquire @ 0x1C002B9B0
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C002B4EC (Bulk_RetrieveNextStage.c)
 * Callees:
 *     StageQueue_Acquire @ 0x1C001FE14 (StageQueue_Acquire.c)
 */

__int64 __fastcall Bulk_Stage_Acquire(__int64 a1)
{
  __int64 v2; // r11
  __int64 v3; // r8

  v2 = StageQueue_Acquire((unsigned __int8 *)(a1 + 112));
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(v2 + 16) = v2 + 8;
    *(_QWORD *)(v2 + 8) = v2 + 8;
    *(_QWORD *)(v2 + 32) = v2 + 24;
    *(_QWORD *)(v2 + 24) = v2 + 24;
    *(_QWORD *)v2 = a1;
    *(_DWORD *)(v2 + 40) = 0;
    *(_BYTE *)(v2 + 44) = 0;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 96) = *(_QWORD *)(v3 + 168);
    *(_DWORD *)(v2 + 104) = *(_DWORD *)(v3 + 184);
    *(_QWORD *)(v2 + 112) = *(_QWORD *)(v3 + 168);
    *(_DWORD *)(v2 + 120) = *(_DWORD *)(v3 + 184);
  }
  return v2;
}
