/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x1C00C554C
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C000AE4C (RIMRemoveFromActiveDevices.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C53B4 (RIMUpdateDeviceFrameState.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D3A74 (RIMRemoveContactFromActiveList.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D3F3C (RIMABArbitratePrimaryStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  bool v8; // cf

  v5 = *(_QWORD *)(a1 + 600);
  if ( v5 )
  {
    *(_DWORD *)(2400LL * *(unsigned int *)(a1 + 608) + *(_QWORD *)(v5 + 696) + 2392) &= ~1u;
    result = *(_QWORD *)(a1 + 600);
    *(_DWORD *)(result + 252) &= ~4u;
  }
  if ( a2 )
  {
    v7 = 2400LL * a3;
    *(_DWORD *)(v7 + *(_QWORD *)(a2 + 696) + 2392) |= 1u;
    *(_DWORD *)(a2 + 252) |= 4u;
    *(_QWORD *)(a1 + 600) = a2;
    *(_DWORD *)(a1 + 608) = a3;
    result = *(_QWORD *)(a2 + 696);
    v8 = __CFSHR__(*(_DWORD *)(v7 + result + 2392), 2);
    *(_DWORD *)(a1 + 616) = a4;
    *(_DWORD *)(a1 + 612) = -v8;
  }
  else
  {
    *(_QWORD *)(a1 + 600) = 0LL;
    *(_DWORD *)(a1 + 608) = 0;
    *(_DWORD *)(a1 + 612) = 0;
    *(_DWORD *)(a1 + 616) = 0;
  }
  return result;
}
