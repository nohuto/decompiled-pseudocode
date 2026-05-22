/*
 * XREFs of ?GetInfo@CraneCarryRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1800385C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CraneCarryRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_DWORD *)a3 != 20 || a2 != 14 )
    return 2147942487LL;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 32);
  result = 0LL;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    *(_DWORD *)(a3 + 16) = 0;
  }
  else if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    *(_DWORD *)(a3 + 16) = 1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 16) == 3 )
      *(_DWORD *)(a3 + 16) = 2;
    else
      *(_DWORD *)(a3 + 16) = 3;
    if ( *(_DWORD *)(a1 + 16) != 2 )
    {
      *(_BYTE *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 28) = 0xFFFF;
    }
  }
  *(_BYTE *)(a1 + 20) = 0;
  return result;
}
