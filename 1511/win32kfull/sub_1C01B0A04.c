/*
 * XREFs of sub_1C01B0A04 @ 0x1C01B0A04
 * Callers:
 *     FreeQDCActivePathsData @ 0x1C0111570 (FreeQDCActivePathsData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C01B0A04(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = a1[2];
  if ( v2 )
    Win32FreePool(v2);
  v3 = a1[1];
  if ( v3 )
    Win32FreePool(v3);
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
