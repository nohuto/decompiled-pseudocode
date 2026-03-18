/*
 * XREFs of ??1CDisplayRegKey@@QEAA@XZ @ 0x180125B78
 * Callers:
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180124BF0 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
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
