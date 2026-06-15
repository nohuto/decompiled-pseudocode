/*
 * XREFs of PolicyConfigResetDeviceFormat @ 0x180070300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PolicyConfigResetDeviceFormat()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 40LL))(g_PolicyConfig);
}
