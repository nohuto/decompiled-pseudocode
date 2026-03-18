/*
 * XREFs of RIMCmGetActiveContactsCountNoButton @ 0x1C00E12D0
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimFindOrCreateActiveContact @ 0x1C00DDA20 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetActiveContactsCountNoButton(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // ecx

  v1 = *(_DWORD *)(a1 + 1568);
  if ( *(_DWORD *)(a1 + 24) == 7 )
    v2 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 1528) + 32LL), 2);
  else
    v2 = 0;
  if ( v2 )
    --v1;
  return v1;
}
