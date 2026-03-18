/*
 * XREFs of PowerIsDisplayRequired @ 0x1C00A9D30
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayIdleExpired @ 0x1C0072600 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

__int64 PowerIsDisplayRequired()
{
  unsigned int v0; // edx

  v0 = 0;
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - dword_1C010471C >= (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                        - dword_1C01030E8 )
    return dword_1C010472C > 0;
  return v0;
}
