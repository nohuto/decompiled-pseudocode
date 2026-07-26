/*
 * XREFs of ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C001D64C
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(NDIS_ADDDEVICE_PARAMETERS *this)
{
  Rtl::KString *p; // rcx
  Rtl::KString *v3; // rcx
  Rtl::KString *v4; // rcx

  p = this->LegacyImFilterClass._p;
  if ( p )
    ExFreePoolWithTag(p, 0x7274534Bu);
  v3 = this->ExportName._p;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
  v4 = this->ComponentId._p;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
}
