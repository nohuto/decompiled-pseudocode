/*
 * XREFs of EnableDisableIPMIRegions @ 0x1C009C834
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0046610 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0046BC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0090230 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C009A600 (ACPIBusIrpStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 * Callees:
 *     AMLIGetFirstChild @ 0x1C0006FE8 (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C000DB94 (AMLIIterateSiblingsNext.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     AMLIGetNSObjectData @ 0x1C002C2F4 (AMLIGetNSObjectData.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall EnableDisableIPMIRegions(__int64 *a1, unsigned __int8 a2)
{
  unsigned int v2; // edi
  unsigned __int8 v3; // si
  volatile signed __int32 *i; // rax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  volatile signed __int32 *v12; // rbx
  _QWORD v14[13]; // [rsp+30h] [rbp-68h] BYREF
  int v16; // [rsp+B0h] [rbp+18h]

  v2 = 0;
  v3 = a2;
  for ( i = AMLIGetFirstChild(a1); ; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(v12) )
  {
    v12 = i;
    if ( !i )
      break;
    v7 = *(unsigned __int16 *)(AMLIGetNSObjectData(i) + 2);
    if ( v7 == 6 )
    {
      LOBYTE(v6) = v3;
      v11 = EnableDisableIPMIRegions(v12, v6);
      if ( v11 < 0 )
        v2 = v11;
    }
    else if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(AMLIGetNSObjectData(v12) + 32);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 12) == 7 )
        {
          v9 = AMLIGetNamedChild(a1, 1195725407);
          if ( v9 )
          {
            memset(v14, 0, 0x50uLL);
            WORD1(v14[0]) = 1;
            WORD1(v14[5]) = 1;
            v14[2] = 7LL;
            v14[7] = a2;
            v16 = AMLIAsyncEvalObject(v9, 0LL, 2u, v14, 0LL, 0LL);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v9, v10);
            v3 = a2;
            if ( v16 < 0 )
              v2 = v16;
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
