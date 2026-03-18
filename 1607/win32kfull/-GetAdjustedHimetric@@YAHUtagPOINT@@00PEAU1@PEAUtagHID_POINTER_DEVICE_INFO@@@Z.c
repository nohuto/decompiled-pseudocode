/*
 * XREFs of ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01EF254
 * Callers:
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F05C0 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 * Callees:
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C01EF330 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 *     ?GetAdjustedHimetricWithoutRoundTripError@@YAHJJJJJJJPEAJ@Z @ 0x1C01EF384 (-GetAdjustedHimetricWithoutRoundTripError@@YAHJJJJJJJPEAJ@Z.c)
 */

__int64 __fastcall GetAdjustedHimetric(
        struct tagPOINT a1,
        __int64 a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        struct tagHID_POINTER_DEVICE_INFO *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r9
  LONG v9; // [rsp+64h] [rbp+Ch]
  int v10; // [rsp+6Ch] [rbp+14h]
  LONG y; // [rsp+74h] [rbp+1Ch]

  y = a3.y;
  v10 = HIDWORD(a2);
  v9 = a1.y;
  v5 = 0;
  if ( !a5 )
    return GetAdjustedHimetricLong(a1.x, a2, a3.x, (int *)a4) && GetAdjustedHimetricLong(v9, v10, y, (int *)(v7 + 4));
  if ( (unsigned int)GetAdjustedHimetricWithoutRoundTripError(
                       *((_DWORD *)a5 + 31),
                       *((_DWORD *)a5 + 33),
                       *((_DWORD *)a5 + 35),
                       *((_DWORD *)a5 + 37),
                       a1.x,
                       a2,
                       a3.x,
                       (int *)a4) )
    return (unsigned int)GetAdjustedHimetricWithoutRoundTripError(
                           *((_DWORD *)a5 + 32),
                           *((_DWORD *)a5 + 34),
                           *((_DWORD *)a5 + 36),
                           *((_DWORD *)a5 + 38),
                           v9,
                           v10,
                           y,
                           &a4->y) != 0;
  return v5;
}
