/*
 * XREFs of ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C006A028
 * Callers:
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C00180F8 (ACPISystemPowerUpdateDeviceCapabilities.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C000D680 (AMLIIsNamedChildPresent.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerDetermineSupportedDeviceStates(_QWORD *BugCheckParameter2, _DWORD *a2, int *a3)
{
  int v3; // ebx
  int v5; // edi
  int v8; // esi
  int *v9; // r14
  int v10; // esi
  int *v11; // r14
  char v12; // al
  int v14; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v15[2]; // [rsp+34h] [rbp-64h] BYREF
  _DWORD v16[4]; // [rsp+40h] [rbp-58h] BYREF

  v3 = 0;
  v14 = 810700895;
  *a2 = 0;
  *a3 = 0;
  v5 = 0;
  qmemcpy(v15, "_PR1_PR2", sizeof(v15));
  qmemcpy(v16, "_PS0_PS1_PS2_PS3", sizeof(v16));
  if ( (*BugCheckParameter2 & 0x8000000000000LL) != 0 )
  {
    v3 = 18;
LABEL_13:
    *a2 = v5;
    *a3 = v3;
    return 0LL;
  }
  v8 = 1;
  v9 = v16;
  do
  {
    if ( AMLIIsNamedChildPresent(BugCheckParameter2[88], *v9) )
      v3 |= 1 << v8;
    ++v8;
    ++v9;
  }
  while ( v8 <= 4 );
  v10 = 1;
  v11 = &v14;
  do
  {
    if ( AMLIIsNamedChildPresent(BugCheckParameter2[88], *v11) )
      v5 |= (1 << v10) | 0x10;
    ++v10;
    ++v11;
  }
  while ( v10 <= 3 );
  v12 = v5 | v3;
  if ( v5 | v3 )
  {
    if ( (v12 & 2) == 0 )
      KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, v5 != 0 ? 810700895 : 810766431, 0LL);
    if ( (v12 & 0x10) == 0 )
      KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x3353505FuLL, 0LL);
    if ( v5 && v3 && v5 != v3 )
    {
      v5 &= v3;
      v3 &= v5;
    }
    goto LABEL_13;
  }
  return 0LL;
}
