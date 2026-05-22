/*
 * XREFs of ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x1800752DC
 * Callers:
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x180074DD0 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074EE0 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        struct AugmentedInputCacheState *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rax
  __int64 *v5; // r10
  __int64 result; // rax
  __int64 v7; // xmm0_8
  int v8; // ecx

  v3 = (__int64 *)*((_QWORD *)this + 345);
  v4 = v3;
  v5 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *((_DWORD *)v5 + 7) >= a2 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( v4 == v3 || a2 < *((_DWORD *)v4 + 7) )
    v4 = (__int64 *)*((_QWORD *)this + 345);
  if ( v4 == v3 )
    return 2147500037LL;
  v7 = v4[4];
  v8 = *((_DWORD *)v4 + 10);
  result = 0LL;
  *(_QWORD *)a3 = v7;
  *((_DWORD *)a3 + 2) = v8;
  return result;
}
