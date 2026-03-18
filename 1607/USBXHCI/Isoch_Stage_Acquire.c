/*
 * XREFs of Isoch_Stage_Acquire @ 0x1C002C2E4
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C000C8B0 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     StageQueue_Acquire @ 0x1C000161C (StageQueue_Acquire.c)
 */

__int64 __fastcall Isoch_Stage_Acquire(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = StageQueue_Acquire((unsigned __int8 *)(a1 + 112));
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(result + 16) = result + 8;
    *(_QWORD *)(result + 8) = result + 8;
    *(_QWORD *)(result + 32) = result + 24;
    *(_QWORD *)(result + 24) = result + 24;
    *(_QWORD *)result = a1;
    *(_DWORD *)(result + 40) = -2;
    *(_DWORD *)(result + 44) = -2;
    *(_QWORD *)(result + 48) = 1LL;
    *(_BYTE *)(result + 56) = 0;
    *(_QWORD *)(result + 64) = 0LL;
    *(_QWORD *)(result + 72) = 0LL;
    *(_QWORD *)(result + 80) = *(_QWORD *)(v3 + 168);
    *(_DWORD *)(result + 88) = *(_DWORD *)(v3 + 184);
    *(_QWORD *)(result + 96) = *(_QWORD *)(v3 + 168);
    *(_DWORD *)(result + 104) = *(_DWORD *)(v3 + 184);
    *(_QWORD *)(result + 112) = *(_QWORD *)(v3 + 168);
    *(_DWORD *)(result + 120) = *(_DWORD *)(v3 + 184);
  }
  return result;
}
