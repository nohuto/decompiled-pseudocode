/*
 * XREFs of ?ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ @ 0x1C00A9818
 * Callers:
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A7A34 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A1EE0 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A2098 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

bool ndisIsNetSetupTheBindingEngineUncached(void)
{
  void *v0; // rbx
  bool v1; // di
  int v2; // eax
  void *v4; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v0 = 0LL;
  v4 = 0LL;
  v1 = 1;
  if ( (int)KRegKey::Open(
              (KRegKey *)&Handle,
              1u,
              (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class\\{4d36e972-e325-11ce-bfc1-08002be10318}",
              0LL) >= 0 )
  {
    v2 = KRegKey::QueryValueString(&Handle, L"Installer32", &v4);
    v0 = v4;
    v1 = v2 < 0;
  }
  if ( v0 )
    ExFreePoolWithTag(v0, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return v1;
}
