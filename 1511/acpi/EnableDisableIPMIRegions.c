/*
 * XREFs of EnableDisableIPMIRegions @ 0x1C007B5DC
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00369C0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0036D70 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0066C90 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C0079910 (ACPIBusIrpStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007B5DC (EnableDisableIPMIRegions.c)
 * Callees:
 *     AMLIGetFirstChild @ 0x1C00077C8 (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0008B20 (AMLIIterateSiblingsNext.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     AMLIGetNSObjectData @ 0x1C00252F4 (AMLIGetNSObjectData.c)
 *     EnableDisableIPMIRegions @ 0x1C007B5DC (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall EnableDisableIPMIRegions(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // edi
  unsigned __int8 v3; // si
  volatile signed __int32 *i; // rax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  int v10; // eax
  volatile signed __int32 *v11; // rbx
  _QWORD v13[13]; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+B0h] [rbp+18h]

  v2 = 0;
  v3 = a2;
  for ( i = (volatile signed __int32 *)AMLIGetFirstChild(a1); ; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(v11) )
  {
    v11 = i;
    if ( !i )
      break;
    v7 = *(unsigned __int16 *)(AMLIGetNSObjectData(i) + 2);
    if ( v7 == 6 )
    {
      LOBYTE(v6) = v3;
      v10 = EnableDisableIPMIRegions(v11, v6);
      if ( v10 < 0 )
        v2 = v10;
    }
    else if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(AMLIGetNSObjectData(v11) + 32);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 12) == 7 )
        {
          v9 = (__int64 *)AMLIGetNamedChild(a1, 1195725407);
          if ( v9 )
          {
            memset(v13, 0, 0x50uLL);
            WORD1(v13[0]) = 1;
            WORD1(v13[5]) = 1;
            v13[2] = 7LL;
            v13[7] = a2;
            v15 = AMLIAsyncEvalObject(v9, 0LL, 2u, v13, 0LL, 0LL);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
            v3 = a2;
            if ( v15 < 0 )
              v2 = v15;
          }
          else
          {
            v3 = a2;
          }
        }
      }
    }
  }
  return v2;
}
