/*
 * XREFs of PhysicalToLogicalInPlacePoint @ 0x1C01E5930
 * Callers:
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0138330 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F9B3C (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FACF0 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRect @ 0x1C00536A4 (PhysicalToLogicalInPlaceRect.c)
 */

__int64 __fastcall PhysicalToLogicalInPlacePoint(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+24h] [rbp-14h]
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  v2 = *a2;
  v7 = 0;
  v8 = 0;
  v5 = v2;
  v6 = a2[1];
  result = PhysicalToLogicalInPlaceRect(a1, &v5);
  if ( (_DWORD)result )
  {
    *a2 = v5;
    result = v6;
    a2[1] = v6;
  }
  return result;
}
