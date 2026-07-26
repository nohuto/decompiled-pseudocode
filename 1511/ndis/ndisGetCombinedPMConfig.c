/*
 * XREFs of ndisGetCombinedPMConfig @ 0x1C00223A4
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0001000 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0001230 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C00109B0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C0045CD0 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0045DBC (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0046380 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00AA34C (ndisPreSetPMParameters.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00C5280 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetCombinedPMConfig(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // edi
  KIRQL v6; // r8
  int v7; // edx
  __int64 i; // rcx
  __int64 j; // rax
  int v10; // edi
  __int128 v11; // [rsp+20h] [rbp-28h]

  LODWORD(v11) = 1311360;
  v4 = 0;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2755953;
  v7 = *(_DWORD *)(a2 + 4) & 2;
  for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
  {
    v7 |= *(_DWORD *)(i + 312);
    v4 |= *(_DWORD *)(i + 316);
    v5 |= *(_DWORD *)(i + 324);
  }
  for ( j = *(_QWORD *)(a1 + 2048); j; j = *(_QWORD *)(j + 120) )
  {
    v7 |= *(_DWORD *)(j + 876);
    v4 |= *(_DWORD *)(j + 880);
    v5 |= *(_DWORD *)(j + 888);
  }
  v10 = *(_DWORD *)(a1 + 1156) | v5;
  DWORD1(v11) = *(_DWORD *)(a1 + 1144) | v7;
  DWORD2(v11) = *(_DWORD *)(a1 + 1148) | v4;
  HIDWORD(v11) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)a2 = v11;
  *(_DWORD *)(a2 + 16) = v10;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
}
