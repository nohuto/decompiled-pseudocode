/*
 * XREFs of KsepApplyShimsToDriver @ 0x140653158
 * Callers:
 *     KseDriverLoadImage @ 0x140514D7C (KseDriverLoadImage.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     KsepPatchDriverImportsTable @ 0x140653388 (KsepPatchDriverImportsTable.c)
 */

__int64 __fastcall KsepApplyShimsToDriver(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rsi
  unsigned int v9; // edi
  void (__fastcall *v10)(__int64, _QWORD, _QWORD, _QWORD, _DWORD); // r10
  void *v11; // rcx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  char v15; // al
  __int64 v17; // rcx
  char v18; // al

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v7 = 0;
  if ( !a4 )
  {
LABEL_16:
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v15 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v14]) = 0;
    LODWORD(KsepHistoryMessages[v14]) = 459420;
    if ( (v15 & 1) != 0 )
      KsepDebugPrint(8LL, "KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
    KsepLogInfo(8LL, (__int64)"KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
    return 0;
  }
  v8 = a3 + 72;
  while ( (*(_DWORD *)(*(_QWORD *)v8 + 28LL) & 4) != 0 )
  {
LABEL_15:
    ++v7;
    v8 += 80LL;
    if ( v7 >= a4 )
      goto LABEL_16;
  }
  v9 = KsepPatchDriverImportsTable(a1, *(_QWORD *)(*(_QWORD *)v8 + 16LL));
  if ( (v9 & 0x80000000) == 0 )
  {
    v10 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 40LL);
    if ( v10 )
      v10(a2, *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), *(unsigned int *)(a1 + 156), *(_DWORD *)(a1 + 120));
    v11 = *(void **)(*(_QWORD *)v8 + 32LL);
    if ( v11 )
      ObfReferenceObject(v11);
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v13 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v12]) = 0;
    LODWORD(KsepHistoryMessages[v12]) = 459416;
    if ( (v13 & 1) != 0 )
      KsepDebugPrint(
        8LL,
        "KSE: Applied shim [0x%08X] to driver [%ws]\n",
        **(unsigned int **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 8LL),
        *(_QWORD *)(a2 + 8));
    KsepLogInfo(
      8LL,
      (__int64)"KSE: Applied shim [0x%08X] to driver [%ws]\n",
      **(unsigned int **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 8LL),
      *(_QWORD *)(a2 + 8));
    goto LABEL_15;
  }
  v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  v18 = KsepDebugFlag;
  dword_140307464[2 * v17] = v9;
  KsepHistoryErrors[2 * v17] = 459377;
  if ( (v18 & 2) != 0 )
    KsepDebugPrint(8LL, "KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v9);
  KsepLogError(8, "KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v9);
  return v9;
}
