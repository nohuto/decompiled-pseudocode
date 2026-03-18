/*
 * XREFs of GetNVMeRegisterAddress @ 0x1C000EF00
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNVMeRegisterAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r10
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  bool v10; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)(a2 + 52);
  v4 = 0LL;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a2 + 56);
    v7 = 0LL;
    while ( *(_QWORD *)(v6 + 16LL * (unsigned int)v7) != a3 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v3 )
        return v4;
    }
    v8 = 2 * v7;
    v10 = *(_BYTE *)(v6 + 8 * v8 + 12) == 0;
    return StorPortGetDeviceBase(
             a1,
             *(unsigned int *)(a2 + 8),
             *(unsigned int *)(a2 + 4),
             *(_QWORD *)(v6 + 8 * v8),
             *(_DWORD *)(v6 + 8 * v8 + 8),
             v10);
  }
  return v4;
}
