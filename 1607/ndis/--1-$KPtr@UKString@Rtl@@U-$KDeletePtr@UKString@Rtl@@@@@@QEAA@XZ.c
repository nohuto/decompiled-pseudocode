/*
 * XREFs of ??1?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAA@XZ @ 0x1C00C3158
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00ACC00 (ndisPnPAddDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::~KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0x7274534Bu);
}
