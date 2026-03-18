/*
 * XREFs of ??1CDisplayRegKey@@QEAA@XZ @ 0x1801650D8
 * Callers:
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180163A50 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
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
