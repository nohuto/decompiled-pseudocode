/*
 * XREFs of PowerIsDisplayRequired @ 0x1C00A53D0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayIdleExpired @ 0x1C00104B0 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

__int64 PowerIsDisplayRequired()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( qword_1C00FFF68 <= (unsigned __int64)qword_1C00FFD20 )
    return dword_1C00FFF80 > 0;
  return v0;
}
