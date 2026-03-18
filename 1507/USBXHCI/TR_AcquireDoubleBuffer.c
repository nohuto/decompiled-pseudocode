/*
 * XREFs of TR_AcquireDoubleBuffer @ 0x1C001FED8
 * Callers:
 *     Control_MapTransfer @ 0x1C00214A8 (Control_MapTransfer.c)
 *     Bulk_RetrieveNextStage @ 0x1C002B4EC (Bulk_RetrieveNextStage.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 */

__int64 *__fastcall TR_AcquireDoubleBuffer(__int64 a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rdx

  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v2 = (__int64 **)(a1 + 216);
  if ( *v2 == (__int64 *)v2 )
  {
    v3 = CommonBuffer_AcquireBuffer(
           *(KSPIN_LOCK **)(*(_QWORD *)(a1 + 40) + 88LL),
           *(_DWORD *)(a1 + 24),
           a1,
           0x32676E52u);
  }
  else
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    v3[1] = (__int64)v3;
    *v3 = (__int64)v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return v3;
}
