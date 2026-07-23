/*
 * XREFs of KdpIsBreakpoint @ 0x1401D1B34
 * Callers:
 *     KdpLowRestoreBreakpoint @ 0x1406F620C (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x1406F62A4 (KdpLowWriteContent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpIsBreakpoint(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // edx
  bool v5; // zf

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 1:
      v4 = 0;
      v5 = *a2 == *(_BYTE *)(a1 + 16);
      break;
    case 2:
      v4 = 0;
      v5 = *(_WORD *)a2 == *(_WORD *)(a1 + 16);
      break;
    case 4:
      v4 = 0;
      v5 = *(_DWORD *)a2 == *(_DWORD *)(a1 + 16);
      break;
    case 8:
      v4 = 0;
      v5 = *(_QWORD *)a2 == *(_QWORD *)(a1 + 16);
      break;
    default:
      return 0LL;
  }
  LOBYTE(v4) = v5;
  return v4;
}
