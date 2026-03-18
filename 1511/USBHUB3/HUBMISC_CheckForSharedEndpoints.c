/*
 * XREFs of HUBMISC_CheckForSharedEndpoints @ 0x1C0023F00
 * Callers:
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C0024B3C (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_Ddddd @ 0x1C0023444 (WPP_RECORDER_SF_Ddddd.c)
 */

__int64 __fastcall HUBMISC_CheckForSharedEndpoints(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r9d
  int v6; // r10d
  unsigned int v7; // edi
  __int64 i; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rax
  int v13; // [rsp+20h] [rbp-38h]

  v3 = *(_DWORD *)(a2 + 24);
  v4 = 0;
  v6 = 0;
  if ( v3 )
  {
    v7 = *(_DWORD *)(a3 + 24);
    for ( i = a2 + 40; ; i += 64LL )
    {
      v9 = 0;
      if ( v7 )
        break;
LABEL_9:
      if ( ++v6 >= v3 )
        return v4;
    }
    v10 = *(_QWORD *)(i + 32);
    while ( 1 )
    {
      v11 = *(_QWORD *)(((unsigned __int64)v9 << 6) + a3 + 72);
      if ( *(_BYTE *)(v10 + 2) == *(_BYTE *)(v11 + 2) && *(_WORD *)(v10 + 4) && *(_WORD *)(v11 + 4) )
        break;
      if ( ++v9 >= v7 )
        goto LABEL_9;
    }
    WPP_RECORDER_SF_Ddddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      *(unsigned __int8 *)(v10 + 2),
      *(unsigned __int8 *)(*(_QWORD *)(a3 + 32) + 3LL),
      *(unsigned __int8 *)(*(_QWORD *)(a3 + 32) + 2LL),
      v13);
    return (unsigned int)-1073741811;
  }
  return v4;
}
