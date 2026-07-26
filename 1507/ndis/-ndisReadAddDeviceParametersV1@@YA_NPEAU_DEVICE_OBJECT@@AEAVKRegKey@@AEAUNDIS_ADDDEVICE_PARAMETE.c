/*
 * XREFs of ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00B2338
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A5484 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A54F8 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A55D4 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 *     ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBGV_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00B2A48 (--$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a14_ea_1C00B2A48.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C64F8 (ndisIfCreateInterfaceForiScsi.c)
 */

char __fastcall ndisReadAddDeviceParametersV1(
        struct _DEVICE_OBJECT *a1,
        struct KRegKey *a2,
        struct NDIS_ADDDEVICE_PARAMETERS *a3)
{
  void **p; // r9
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // r8
  NTSTATUS v9; // eax
  __int16 v10; // r14
  __int64 v11; // rcx
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+48h] BYREF

  p = a2->_p;
  Handle[0] = 0LL;
  v6 = 1;
  if ( (int)KRegKey::Open((KRegKey *)Handle, 1u, L"Linkage", p) < 0 )
    goto LABEL_13;
  LOBYTE(v8) = v14;
  KRegKey::QueryValueMultisz<_lambda_96cc44e42cdf8d0bb97f810167971fd3_,_lambda_5efab4a145f888ea93e43ede63b27154_>(
    Handle,
    v7,
    v8,
    a3);
  if ( !a3->ExportName._p )
    goto LABEL_13;
  if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"Characteristics", &a3->Characteristics) < 0 )
    a3->Characteristics = 0;
  if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"*PhysicalMediaType", (unsigned int *)&a3->PhysicalMedium) < 0 )
  {
    a3->PhysicalMedium = NdisPhysicalMediumUnspecified;
    a3->IsPhysicalMediumAvailable = 0;
  }
  else
  {
    a3->IsPhysicalMediumAvailable = 1;
  }
  v15 = 0;
  if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"*IfType", &v15) < 0
    || (v14 = 0, v9 = KRegKey::QueryValueUlong(a2, (wchar_t *)L"NetLuidIndex", &v14), v10 = v15, v9 < 0)
    && (unsigned int)ndisIfCreateInterfaceForiScsi(a2->_p, (__int64)&v14) )
  {
LABEL_13:
    v6 = 0;
  }
  else
  {
    v11 = v14 & 0xFFFFFF;
    *((_WORD *)&a3->NetLuid.Info + 3) = v10;
    a3->NetLuid.Value = a3->NetLuid.Value & 0xFFFF000000000000uLL | (v11 << 24);
    KRegKey::QueryValueString((HANDLE *)&a2->_p, L"FilterClass", (void **)&a3->LegacyImFilterClass._p);
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return v6;
}
