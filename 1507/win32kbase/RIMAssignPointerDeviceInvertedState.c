/*
 * XREFs of RIMAssignPointerDeviceInvertedState @ 0x1C00C3CF0
 * Callers:
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMAssignPointerDeviceInvertedState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  int v7; // eax
  int v8; // edx
  __int64 result; // rax

  if ( *(_DWORD *)(a5 + 2340) )
  {
    v8 = *(_DWORD *)(a3 + 2392);
    if ( (((unsigned __int8)v8 ^ *(_BYTE *)(a5 + 2392)) & 8) != 0 )
      *(_DWORD *)(a3 + 2392) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)*(_DWORD *)(a5 + 2392)) & 8;
  }
  else if ( a6 )
  {
    v7 = *(_DWORD *)(a3 + 2392);
    if ( (v7 & 8) != 0 )
      *(_DWORD *)(a3 + 2392) = v7 & 0xFFFFFFF7;
  }
  result = *(unsigned int *)(a3 + 2392);
  if ( (result & 8) != 0 )
  {
    *(_DWORD *)(a4 + 104) |= 2u;
    if ( *(_DWORD *)(a5 + 2340) == 2 )
      *(_DWORD *)(a4 + 104) |= 4u;
    result = *(_QWORD *)(a2 + 312);
    *(_WORD *)a4 = *(_WORD *)(result + 16);
    *(_DWORD *)(a5 + 2392) |= 8u;
  }
  else
  {
    *(_DWORD *)(a4 + 104) &= ~4u;
  }
  return result;
}
