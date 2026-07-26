/*
 * XREFs of ndisInitializeAdapter @ 0x1C00AC230
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00AC324 (ndisPnPStartDevice.c)
 * Callees:
 *     ndisCloseULongRef @ 0x1C000F7A4 (ndisCloseULongRef.c)
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qZddD @ 0x1C004AE10 (WPP_SF_qZddD.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C009BB1C (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 */

__int64 __fastcall ndisInitializeAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // rsi^4
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h]

  v4 = HIDWORD(a4);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x18u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, a2);
  ndisReferencePackage((__int64)&dword_1C0084098);
  HIDWORD(v11) = v4;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = ndisMInitializeAdapter(a1, a2, *(_QWORD *)(a2 + 4056));
  v9 = (MEMORY[0xFFFFF78000000014] - v7) / 10000;
  *(_DWORD *)(a2 + 1624) = v9;
  if ( (ndisFlags & 1) != 0 )
    DbgPrint("NDIS: Init time (%wZ) %ld ms\n", *(_QWORD *)(a2 + 3912), (unsigned int)v9);
  if ( (unsigned __int8)byte_1C0085310 >= 4u )
  {
    LODWORD(v11) = *(unsigned __int8 *)(a2 + 32);
    WPP_SF_qZddD(
      *(unsigned __int8 *)(a2 + 32),
      v9,
      a2,
      *(__int64 **)(a2 + 3912),
      v11,
      *(unsigned __int8 *)(a2 + 33),
      v8);
  }
  if ( v8 )
  {
    ndisCloseULongRef((PKSPIN_LOCK)(a2 + 4496));
    ndisMCleanupMiniportBlockOnStop(a2);
  }
  else
  {
    ndisLogMiniportEvent(a2, 0x33u);
  }
  MmUnlockPagableImageSection(qword_1C00840A8);
  _InterlockedDecrement(&dword_1C0084098);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x1Au, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, a2);
  return v8;
}
