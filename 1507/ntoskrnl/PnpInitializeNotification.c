/*
 * XREFs of PnpInitializeNotification @ 0x1407E3EF4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 *PnpInitializeNotification()
{
  __int64 v0; // rcx
  _QWORD *v1; // rax
  __int64 *result; // rax

  v0 = 13LL;
  v1 = &PnpDeviceClassNotifyList;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --v0;
  }
  while ( v0 );
  LODWORD(PnpDeviceClassNotifyLock) = 1;
  qword_14077EF70 = (__int64)&PnpProfileNotifyList;
  PnpProfileNotifyList = (__int64)&PnpProfileNotifyList;
  qword_14077EF40 = (__int64)&PnpDeferredRegistrationList;
  PnpDeferredRegistrationList = &PnpDeferredRegistrationList;
  qword_14034B288 = (__int64)&qword_14034B280;
  qword_14034B280 = (__int64)&qword_14034B280;
  qword_14034B2C8 = (__int64)&qword_14034B2C0;
  qword_14034B2C0 = (__int64)&qword_14034B2C0;
  qword_14034B308 = (__int64)&qword_14034B300;
  qword_14034B300 = (__int64)&qword_14034B300;
  result = &qword_14034B340;
  qword_14034B348 = (__int64)&qword_14034B340;
  qword_14034B340 = (__int64)&qword_14034B340;
  qword_14034B268 = 0LL;
  dword_14034B270 = 0;
  word_14034B278 = 1;
  byte_14034B27A = 6;
  dword_14034B27C = 0;
  LODWORD(PnpTargetDeviceNotifyLock) = 1;
  qword_14034B2A8 = 0LL;
  dword_14034B2B0 = 0;
  word_14034B2B8 = 1;
  byte_14034B2BA = 6;
  dword_14034B2BC = 0;
  LODWORD(PnpHwProfileNotifyLock) = 1;
  qword_14034B2E8 = 0LL;
  dword_14034B2F0 = 0;
  word_14034B2F8 = 1;
  byte_14034B2FA = 6;
  dword_14034B2FC = 0;
  LODWORD(PnpDeferredRegistrationLock) = 1;
  qword_14034B328 = 0LL;
  dword_14034B330 = 0;
  word_14034B338 = 1;
  byte_14034B33A = 6;
  dword_14034B33C = 0;
  return result;
}
