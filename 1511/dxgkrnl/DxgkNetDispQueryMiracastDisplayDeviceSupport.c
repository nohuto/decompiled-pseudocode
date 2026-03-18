/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C00C9490
 * Callers:
 *     <none>
 * Callees:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00C94C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceSupport(_QWORD *a1)
{
  int v2; // r8d
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h]

  LODWORD(v5) = 0;
  v4 = 0LL;
  v2 = DxgkMiracastQueryMiracastSupportInternal(&v4);
  if ( v2 >= 0 )
  {
    HIDWORD(v5) = HIDWORD(v4);
    LOBYTE(v5) = v4;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = v5;
  }
  return (unsigned int)v2;
}
