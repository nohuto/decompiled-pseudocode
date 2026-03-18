/*
 * XREFs of rimDoesDeviceHaveUnsuppressedDownContacts @ 0x1C00D1F88
 * Callers:
 *     rimCanContactBePrimary @ 0x1C00D1F1C (rimCanContactBePrimary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimDoesDeviceHaveUnsuppressedDownContacts(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  __int64 v4; // r10
  _DWORD *v5; // rcx

  v2 = *(_DWORD *)(a1 + 704);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 680);
  while ( 1 )
  {
    v5 = (_DWORD *)(v4 + 2400LL * v3);
    if ( v5 != a2 && v5[584] && (v5[598] & 0x20) == 0 && (v5[586] & 2) != 0 )
      break;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return 1LL;
}
