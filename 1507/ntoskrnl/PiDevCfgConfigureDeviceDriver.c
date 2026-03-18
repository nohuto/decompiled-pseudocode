/*
 * XREFs of PiDevCfgConfigureDeviceDriver @ 0x140683298
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140683360 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriver(int a1, int a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rbp
  __int64 v8; // r8
  int v11; // r8d
  __int64 **v12; // rdi
  __int64 *i; // rbx
  _DWORD v15[10]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  v16 = 0;
  v8 = *(_QWORD *)(a3 + 32);
  v15[0] = 0;
  v11 = PiDevCfgConfigureDeviceDriverConfiguration(a1, a2, v8, -1, a4, (__int64)a5);
  if ( v11 >= 0 )
  {
    v12 = (__int64 **)(a3 + 352);
    for ( i = *v12; i != (__int64 *)v12; i = (__int64 *)*i )
    {
      v11 = PiDevCfgConfigureDeviceDriverConfiguration(a1, a2, i[4], *((_DWORD *)i + 26), &v16, (__int64)v15);
      if ( v11 < 0 )
        break;
      if ( a4 )
        *a4 |= v16;
      if ( v5 )
        *v5 |= v15[0];
    }
  }
  return (unsigned int)v11;
}
