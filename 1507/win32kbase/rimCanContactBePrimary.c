/*
 * XREFs of rimCanContactBePrimary @ 0x1C00D1F1C
 * Callers:
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
 * Callees:
 *     rimDoesDeviceHaveUnsuppressedDownContacts @ 0x1C00D1F88 (rimDoesDeviceHaveUnsuppressedDownContacts.c)
 */

__int64 __fastcall rimCanContactBePrimary(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD **v6; // rbx
  _QWORD *i; // r11
  __int64 v8; // rcx

  if ( (unsigned int)rimDoesDeviceHaveUnsuppressedDownContacts(a2, *(_QWORD *)(a2 + 680) + 2400LL * a3) )
    return 0LL;
  v6 = (_QWORD **)(a1 + 536);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = *(i - 1);
    if ( v8 != a2 && (unsigned int)rimDoesDeviceHaveUnsuppressedDownContacts(v8, 0LL) )
      return 0LL;
  }
  return 1LL;
}
