/*
 * XREFs of ??4?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A810C
 * Callers:
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A80D4 (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 */

void **__fastcall KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::operator=(void **a1, void **a2)
{
  void *v4; // rdx

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset(a1, v4);
  }
  return a1;
}
