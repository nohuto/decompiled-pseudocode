/*
 * XREFs of AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C009D54C
 * Callers:
 *     AcpiTranslatePepDeviceControlResources @ 0x1C009D510 (AcpiTranslatePepDeviceControlResources.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00544B0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x1C00545FC (WPP_RECORDER_SF_sqqD.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C00845C4 (PnpIoResourceListToCmResourceList.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 *     AcpiValidatePepDeviceControlResources @ 0x1C009D6F4 (AcpiValidatePepDeviceControlResources.c)
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
  char v8; // bp
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // edx
  int v13; // edx
  unsigned int v14; // ebp
  unsigned int v15; // eax
  unsigned int *v16; // r14
  _DWORD *v18; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  v8 = a2;
  P = 0LL;
  if ( a2 && a3 )
  {
    v9 = PnpBiosResourcesToNtResources(a1, a2, 4u, (unsigned int **)&P);
    v11 = v9;
    if ( v9 < 0 )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        21,
        30,
        (__int64)&WPP_04283116df513c0b4bfc015614b55db9_Traceguids,
        v8,
        v9);
      v7 = P;
      goto LABEL_19;
    }
    v7 = P;
    if ( P )
    {
      v11 = AcpiValidatePepDeviceControlResources(P);
      if ( v11 < 0 )
      {
        WPP_RECORDER_SF_sqqD(WPP_GLOBAL_Control->DeviceExtension, v12, 21, 31);
        goto LABEL_19;
      }
      v11 = PnpIoResourceListToCmResourceList(v7, &v18);
      if ( v11 < 0 )
      {
        WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v13, 21, 32);
        v6 = v18;
        goto LABEL_19;
      }
      v6 = v18;
    }
    v14 = 40;
    if ( v6 )
    {
      v15 = v6[4];
      if ( v15 > 1 )
        v14 = 20 * (v15 + 1);
    }
    v16 = a6;
    if ( *a6 >= v14 )
    {
      memmove(a5, v6, v14);
      v11 = 0;
    }
    else
    {
      v11 = -1073741789;
    }
    *v16 = v14;
  }
  else
  {
    v11 = -1073741808;
  }
LABEL_19:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v11;
}
