/*
 * XREFs of IopQueryProcessorInitValues @ 0x1405C21E8
 * Callers:
 *     IoInitializeProcessor @ 0x140595D04 (IoInitializeProcessor.c)
 *     PspInitializeQuotaBlock @ 0x1405BE3DC (PspInitializeQuotaBlock.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x140006D08 (MmIsThisAnNtAsSystem.c)
 */

__int64 __fastcall IopQueryProcessorInitValues(__int64 a1)
{
  __int16 v2; // ax
  unsigned int v3; // kr00_4
  __int64 result; // rax

  if ( MmIsThisAnNtAsSystem() )
  {
    *(_DWORD *)(a1 + 4) = 6291584;
    *(_WORD *)a1 = 96;
    v2 = 256;
    *(_DWORD *)(a1 + 28) = 0x10000;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 2097216;
    *(_WORD *)a1 = 32;
    v2 = 128;
    *(_DWORD *)(a1 + 28) = 1536;
  }
  *(_WORD *)(a1 + 8) = v2;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 12) = 280;
  *(_DWORD *)(a1 + 28) = v3 / 0x280;
  *(_DWORD *)(a1 + 16) = 72 * IopMediumIrpStackLocations + 208;
  result = (unsigned int)IopLargeIrpStackLocations;
  *(_DWORD *)(a1 + 24) = 184;
  *(_DWORD *)(a1 + 20) = 72 * result + 208;
  return result;
}
