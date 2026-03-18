/*
 * XREFs of EnableDisableDeviceRegionSpace @ 0x1C003FD40
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C001892C (EnableDisableDeviceTreeRegionSpace.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C003FDDC (EnableDisableRegionSpacesForDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall EnableDisableDeviceRegionSpace(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 *v6; // rdi
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2;
  v5 = 0;
  v6 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 704), 1195725407);
  if ( v6 )
  {
    memset(v8, 0, sizeof(v8));
    v8[2] = v4;
    WORD1(v8[0]) = 1;
    WORD1(v8[5]) = 1;
    LOBYTE(v5) = a3 != 0;
    v8[7] = (int)v5;
    v5 = AMLIEvalNameSpaceObject(v6, 0LL, 2u, v8);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
  }
  return v5;
}
