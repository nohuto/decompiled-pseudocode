/*
 * XREFs of ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00D1F94
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00ACC00 (ndisPnPAddDevice.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7EA8 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A7F1C (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A8060 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C44B8 (ndisIfCreateInterfaceForiScsi.c)
 *     ??$QueryValueMultisz@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_@@@KRegKey@@QEAAJPEBGV_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_@@@Z @ 0x1C00D1CCC (--$QueryValueMultisz@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb4442cf1f3c11bfda.c)
 */

char __fastcall ndisReadAddDeviceParametersV1(
        struct _DEVICE_OBJECT *a1,
        struct KRegKey *a2,
        struct NDIS_ADDDEVICE_PARAMETERS *a3)
{
  void **p; // r9
  char v7; // si
  NTSTATUS v8; // eax
  __int16 v9; // bp
  __int64 v10; // rcx
  HANDLE Handle[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+20h] BYREF

  p = a2->_p;
  Handle[0] = 0LL;
  v7 = 1;
  if ( (int)KRegKey::Open((KRegKey *)Handle, 1u, (wchar_t *)L"Linkage", p) < 0 )
    goto LABEL_12;
  KRegKey::QueryValueMultisz<_lambda_ab37ff936e37ec89cf58545827f832d7_,_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_>((__int64)Handle);
  if ( !a3->ExportName._p )
    goto LABEL_12;
  if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"Characteristics", &a3->Characteristics) < 0 )
    a3->Characteristics = 0;
  if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"*PhysicalMediaType", (unsigned int *)&a3->PhysicalMedium) >= 0 )
  {
    a3->IsPhysicalMediumAvailable = 1;
  }
  else
  {
    a3->PhysicalMedium = NdisPhysicalMediumUnspecified;
    a3->IsPhysicalMediumAvailable = 0;
  }
  v14 = 0;
  if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"*IfType", &v14) < 0
    || (v13 = 0, v8 = KRegKey::QueryValueUlong(a2, (wchar_t *)L"NetLuidIndex", &v13), v9 = v14, v8 < 0)
    && (unsigned int)ndisIfCreateInterfaceForiScsi((WCHAR *)a2->_p, a1, v14, (__int128 *)a3, &v13) )
  {
LABEL_12:
    v7 = 0;
  }
  else
  {
    v10 = v13 & 0xFFFFFF;
    *((_WORD *)&a3->NetLuid.Info + 3) = v9;
    a3->NetLuid.Value = a3->NetLuid.Value & 0xFFFF000000000000uLL | (v10 << 24);
    KRegKey::QueryValueString((HANDLE *)&a2->_p, L"FilterClass", &a3->LegacyImFilterClass._p);
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return v7;
}
