/*
 * XREFs of ndisMResetCompleteStage1 @ 0x1C005A97C
 * Callers:
 *     NdisMResetComplete @ 0x1C0058590 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C0059EE8 (ndisMProcessDeferred.c)
 * Callees:
 *     ndisMAbortRequests @ 0x1C001366C (ndisMAbortRequests.c)
 *     ndisMAbortPackets @ 0x1C00136C4 (ndisMAbortPackets.c)
 *     ndisMRestoreFilterSettings @ 0x1C0042990 (ndisMRestoreFilterSettings.c)
 *     WPP_SF_qDdZ @ 0x1C0058CE4 (WPP_SF_qDdZ.c)
 */

__int64 __fastcall ndisMResetCompleteStage1(__int64 a1, __int64 a2, struct _NDIS_STACK_RESERVED *a3)
{
  char v3; // bp
  int v4; // esi
  unsigned int v6; // edi
  __int64 result; // rax

  v3 = (char)a3;
  v4 = a2;
  v6 = 0;
  if ( (unsigned __int8)byte_1C0083710 >= 4u )
    WPP_SF_qDdZ(a1, a2, a1, a2, (char)a3, *(unsigned __int16 **)(a1 + 3912));
  if ( v4 == -2147418111 )
  {
    *(_DWORD *)(a1 + 120) &= ~0x80000u;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 32) < 6u )
    {
      ndisMAbortPackets(a1, a2, a3);
      ndisMAbortRequests(a1);
    }
    *(_DWORD *)(a1 + 120) &= ~0x80000u;
    if ( v3 && !v4 && *(_QWORD *)(a1 + 400) )
      v6 = ndisMRestoreFilterSettings(a1, 0LL, 1u);
  }
  result = v6;
  *(_DWORD *)(a1 + 384) = v4;
  return result;
}
