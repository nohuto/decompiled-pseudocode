/*
 * XREFs of ?HasEndpoint@DWMCursorBroker@@UEAAHXZ @ 0x18001E4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::HasEndpoint(DWMCursorBroker *this)
{
  int v1; // eax
  _DWORD *i; // rcx

  v1 = 0;
  for ( i = (_DWORD *)((char *)this + 1316); !*i; i += 2 )
  {
    if ( (unsigned int)++v1 >= 0xA )
      return 0LL;
  }
  return 1LL;
}
