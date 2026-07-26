/*
 * XREFs of ??4?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A05D0
 * Callers:
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 * Callees:
 *     <none>
 */

void **__fastcall KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::operator=(void **a1, void **a2)
{
  void *v3; // rdi
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v3 != v4 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0x7274534Bu);
      *a1 = v3;
    }
  }
  return a1;
}
