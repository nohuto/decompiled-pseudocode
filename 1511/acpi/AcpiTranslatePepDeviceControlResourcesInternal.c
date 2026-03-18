/*
 * XREFs of AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C007C27C
 * Callers:
 *     AcpiTranslatePepDeviceControlResources @ 0x1C007C240 (AcpiTranslatePepDeviceControlResources.c)
 * Callees:
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C007056C (PnpIoResourceListToCmResourceList.c)
 *     AcpiValidatePepDeviceControlResources @ 0x1C007C36C (AcpiValidatePepDeviceControlResources.c)
 */

__int64 __fastcall AcpiTranslatePepDeviceControlResourcesInternal(
        ULONG_PTR a1,
        ULONG_PTR a2,
        int a3,
        __int64 a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int *v13; // r14
  PVOID P; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v16; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  P = 0LL;
  if ( a2 && a3 )
  {
    v8 = PnpBiosResourcesToNtResources(a1, a2, 4u, (char **)&P);
    v7 = P;
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( !P
        || (v9 = AcpiValidatePepDeviceControlResources(P), v9 >= 0)
        && (v10 = PnpIoResourceListToCmResourceList(v7, &v16), v6 = v16, v9 = v10, v10 >= 0) )
      {
        v11 = 40;
        if ( v6 )
        {
          v12 = v6[4];
          if ( v12 > 1 )
            v11 = 20 * (v12 + 1);
        }
        v13 = a6;
        if ( *a6 >= v11 )
        {
          memmove(a5, v6, v11);
          v9 = 0;
        }
        else
        {
          v9 = -1073741789;
        }
        *v13 = v11;
      }
    }
  }
  else
  {
    v9 = -1073741808;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v9;
}
