/*
 * XREFs of RIMCmActivateButtonContact @ 0x1C00E0FEC
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C00DDFEC (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     RIMCmGetButtonContact @ 0x1C00E12F8 (RIMCmGetButtonContact.c)
 */

_QWORD *__fastcall RIMCmActivateButtonContact(__int64 a1)
{
  __int64 ButtonContact; // rax
  __int64 v2; // rcx
  _QWORD *result; // rax
  __int64 *v4; // rdx
  __int64 v5; // rcx

  ButtonContact = RIMCmGetButtonContact(a1);
  *(_DWORD *)(ButtonContact + 32) |= 6u;
  ++*(_DWORD *)(v2 + 1568);
  ++*(_DWORD *)(v2 + 1572);
  *(_QWORD *)(ButtonContact + 24) = 0LL;
  result = (_QWORD *)(ButtonContact + 16);
  *result = 0LL;
  v4 = *(__int64 **)(v2 + 1552);
  v5 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    __fastfail(3u);
  *result = v5;
  result[1] = v4;
  *(_QWORD *)(v5 + 8) = result;
  *v4 = (__int64)result;
  return result;
}
