/*
 * XREFs of ??1CDisplayRegKey@@QEAA@XZ @ 0x18013AEE8
 * Callers:
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x18013A12C (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayRegKey::~CDisplayRegKey(HKEY *this)
{
  if ( *(_BYTE *)this )
  {
    RegCloseKey(this[1]);
    *(_BYTE *)this = 0;
  }
}
