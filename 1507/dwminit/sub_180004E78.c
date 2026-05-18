/*
 * XREFs of sub_180004E78 @ 0x180004E78
 * Callers:
 *     sub_180004DC8 @ 0x180004DC8 (sub_180004DC8.c)
 *     sub_180004EB4 @ 0x180004EB4 (sub_180004EB4.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_180004E78(__int64 a1)
{
  void *v2; // rcx
  BOOL result; // eax

  if ( *(_BYTE *)(a1 + 56) )
  {
    v2 = *(void **)(a1 + 48);
    if ( v2 )
    {
      result = CloseHandle(v2);
      *(_BYTE *)(a1 + 56) = 0;
    }
  }
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
