/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x1C00C46B4
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C0078524 (RIMRemoveFromActiveDevices.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C451C (RIMUpdateDeviceFrameState.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  bool v8; // cf

  v5 = *(_QWORD *)(a1 + 568);
  if ( v5 )
  {
    *(_DWORD *)(2400LL * *(unsigned int *)(a1 + 576) + *(_QWORD *)(v5 + 680) + 2392) &= ~1u;
    result = *(_QWORD *)(a1 + 568);
    *(_DWORD *)(result + 236) &= ~1u;
  }
  if ( a2 )
  {
    v7 = 2400LL * a3;
    *(_DWORD *)(v7 + *(_QWORD *)(a2 + 680) + 2392) |= 1u;
    *(_DWORD *)(a2 + 236) |= 1u;
    *(_QWORD *)(a1 + 568) = a2;
    *(_DWORD *)(a1 + 576) = a3;
    result = *(_QWORD *)(a2 + 680);
    v8 = __CFSHR__(*(_DWORD *)(v7 + result + 2392), 2);
    *(_DWORD *)(a1 + 584) = a4;
    *(_DWORD *)(a1 + 580) = -v8;
  }
  else
  {
    *(_QWORD *)(a1 + 568) = 0LL;
    *(_DWORD *)(a1 + 576) = 0;
    *(_DWORD *)(a1 + 580) = 0;
    *(_DWORD *)(a1 + 584) = 0;
  }
  return result;
}
