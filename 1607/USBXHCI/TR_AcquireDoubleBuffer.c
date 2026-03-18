/*
 * XREFs of TR_AcquireDoubleBuffer @ 0x1C00019A0
 * Callers:
 *     Control_MapTransfer @ 0x1C00033B4 (Control_MapTransfer.c)
 *     Bulk_RetrieveNextStage @ 0x1C000B750 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C0009010 (CommonBuffer_AcquireBuffer.c)
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
    v3 = (__int64 *)CommonBuffer_AcquireBuffer(*(PVOID *)(*(_QWORD *)(a1 + 40) + 88LL));
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
