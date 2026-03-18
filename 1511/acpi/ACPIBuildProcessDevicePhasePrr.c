/*
 * XREFs of ACPIBuildProcessDevicePhasePrr @ 0x1C000B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0035304 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIWriteEventLogEntry @ 0x1C003AFD4 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // rdi
  unsigned int v3; // ebp
  ULONG_PTR v4; // rdx
  unsigned int v6; // eax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( v1[49] )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_3;
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
LABEL_9:
    FreeDataBuffs(v2, 1LL);
    goto LABEL_3;
  }
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_3;
    }
    v6 = ACPIBuildDeviceResetPowerNode((ULONG_PTR)v1, v4);
    dword_1C005A228 = 0;
    v3 = v6;
    byte_1C005A22C = 0;
    goto LABEL_9;
  }
LABEL_3:
  v1[55] = AMLIGetNamedChild(v1[88], 1414746719LL);
  ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
