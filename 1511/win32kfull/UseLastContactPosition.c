/*
 * XREFs of UseLastContactPosition @ 0x1C01CE970
 * Callers:
 *     GetPointerDeviceContactState @ 0x1C01CCC50 (GetPointerDeviceContactState.c)
 *     GetPTPContactState @ 0x1C01D0F54 (GetPTPContactState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UseLastContactPosition(__int64 a1, _QWORD *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = a4;
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 6) > 2 && (*(_DWORD *)(a1 + 252) & 0x20) == 0 )
    EtwTracePointerDeviceContactIds(0LL, *a3, *(unsigned __int16 *)a2, a2[7]);
  a2[5] = *(_QWORD *)(*(_QWORD *)(a1 + 696) + 2400 * v4 + 2252);
  a2[6] = *(_QWORD *)(*(_QWORD *)(a1 + 696) + 2400 * v4 + 2260);
  a2[7] = *(_QWORD *)(*(_QWORD *)(a1 + 696) + 2400 * v4 + 2268);
  result = *(_QWORD *)(a1 + 696);
  a2[8] = *(_QWORD *)(result + 2400 * v4 + 2276);
  return result;
}
