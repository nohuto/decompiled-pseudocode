/*
 * XREFs of ndisGetCombinedPMConfig @ 0x1C001BE60
 * Callers:
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C000DE90 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C000DFC0 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C000E1B0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C0044738 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0044824 (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0044DF0 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00AC91C (ndisPreSetPMParameters.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00CBE60 (ndisSetOpenEnableWakeUp.c)
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
