/*
 * XREFs of PiPnpRtlIsDeviceValidForSession @ 0x1404DCE28
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1404DCDC0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 * Callees:
 *     SeQuerySessionIdTokenEx @ 0x1404DD050 (SeQuerySessionIdTokenEx.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiPnpRtlIsDeviceValidForSession(int a1, int a2, int a3, __int64 a4, _BYTE *IsServiceSession)
{
  _BYTE *v5; // rbx
  void *v9; // rcx
  NTSTATUS v10; // ecx
  int ObjectProperty; // eax
  ULONG SessionId; // [rsp+60h] [rbp-18h] BYREF
  int v14; // [rsp+64h] [rbp-14h] BYREF
  _BYTE v15[8]; // [rsp+68h] [rbp-10h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF

  v5 = IsServiceSession;
  *IsServiceSession = 0;
  v9 = *(void **)a4;
  if ( !*(_QWORD *)a4 )
    v9 = *(void **)(a4 + 16);
  v10 = SeQuerySessionIdTokenEx(v9, &SessionId, (PBOOLEAN)&IsServiceSession);
  if ( v10 >= 0 )
  {
    if ( (_BYTE)IsServiceSession )
    {
LABEL_7:
      *v5 = 1;
      return (unsigned int)v10;
    }
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       1,
                       a3,
                       0LL,
                       (__int64)&DEVPKEY_Device_SessionId,
                       (__int64)&v16,
                       (__int64)&v14,
                       4,
                       (__int64)v15,
                       0);
    v10 = ObjectProperty;
    if ( ObjectProperty == -1073741275 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    if ( ObjectProperty >= 0 && (v16 != 7 || v14 == SessionId) )
      goto LABEL_7;
  }
  return (unsigned int)v10;
}
