/*
 * XREFs of WheapWmiGetSingleInstance @ 0x1402318AC
 * Callers:
 *     WheaWmiDispatch @ 0x14014B6A8 (WheaWmiDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapWmiGetSingleInstance(__int64 a1, unsigned int a2, __int64 a3, int *a4)
{
  int v4; // ecx
  __int64 result; // rax

  v4 = 102;
  if ( a2 >= 0x66 )
  {
    *(_DWORD *)a3 = 102;
    *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a3 + 60) = 38;
    *(_DWORD *)(a3 + 56) = 64;
  }
  else
  {
    if ( a2 < 0x38 )
    {
      result = 3221225507LL;
      *a4 = 0;
      return result;
    }
    *(_DWORD *)(a3 + 48) = 102;
    v4 = 56;
    *(_DWORD *)(a3 + 44) = 32;
  }
  result = 0LL;
  *a4 = v4;
  return result;
}
