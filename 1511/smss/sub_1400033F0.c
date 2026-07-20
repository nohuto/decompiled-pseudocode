/*
 * XREFs of sub_1400033F0 @ 0x1400033F0
 * Callers:
 *     sub_14000338C @ 0x14000338C (sub_14000338C.c)
 *     sub_140012D18 @ 0x140012D18 (sub_140012D18.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1400033F0(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE *v2; // rcx

  result = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = (HANDLE *)_InterlockedExchange64((volatile __int64 *)(a1 + 16), 0LL);
    if ( v2 )
    {
      if ( *(_DWORD *)v2 )
        return NtSetEvent(v2[1], 0LL);
      else
        return sub_140012DA4(v2);
    }
  }
  return result;
}
