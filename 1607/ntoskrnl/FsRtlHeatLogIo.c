/*
 * XREFs of FsRtlHeatLogIo @ 0x14061F820
 * Callers:
 *     <none>
 * Callees:
 *     Template_xxxqq @ 0x1401B9D60 (Template_xxxqq.c)
 */

__int64 __fastcall FsRtlHeatLogIo(_DWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, const GUID *a5)
{
  __int64 v5; // r9
  unsigned int v6; // ebx

  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  switch ( *(_BYTE *)v5 )
  {
    case 3:
      if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 2) != 0 )
        Template_xxxqq(a3[1], &TieredStorage_HeatRead, a5, *a3, a3[1], *(_QWORD *)(v5 + 24), *(_DWORD *)(v5 + 8), *a1);
      break;
    case 4:
      if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 4) != 0 )
        Template_xxxqq(
          (__int64)a1,
          &TieredStorage_HeatWrite,
          a5,
          *a3,
          a3[1],
          *(_QWORD *)(v5 + 24),
          *(_DWORD *)(v5 + 8),
          *a1);
      break;
    case 0x12:
      if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 8) != 0 )
        Template_xxxqq((__int64)a1, &TieredStorage_HeatDelete, a5, *a3, a3[1], 0LL, 0, *a1);
      break;
    default:
      return (unsigned int)-1073741584;
  }
  return v6;
}
