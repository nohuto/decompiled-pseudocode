/*
 * XREFs of PowerIsDisplayRequired @ 0x1C00B3090
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayIdleExpired @ 0x1C0076F00 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

__int64 PowerIsDisplayRequired()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( qword_1C011BAE8 <= (unsigned __int64)qword_1C011A4F0 )
    return dword_1C011BB08 > 0;
  return v0;
}
