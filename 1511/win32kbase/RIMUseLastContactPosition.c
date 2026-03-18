/*
 * XREFs of RIMUseLastContactPosition @ 0x1C00CD328
 * Callers:
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     RIMGetPTPContactState @ 0x1C00D209C (RIMGetPTPContactState.c)
 * Callees:
 *     EtwTracePointerDeviceContactIds @ 0x1C00ABEE0 (EtwTracePointerDeviceContactIds.c)
 */

__int64 __fastcall RIMUseLastContactPosition(__int64 a1, _QWORD *a2, int *a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = a4;
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 6) > 2 && (*(_DWORD *)(a1 + 252) & 0x20) == 0 )
    EtwTracePointerDeviceContactIds(0, *a3, *(unsigned __int16 *)a2, a2[7]);
  a2[5] = *(_QWORD *)(2400 * v4 + *(_QWORD *)(a1 + 696) + 2252);
  a2[6] = *(_QWORD *)(2400 * v4 + *(_QWORD *)(a1 + 696) + 2260);
  a2[7] = *(_QWORD *)(2400 * v4 + *(_QWORD *)(a1 + 696) + 2268);
  result = *(_QWORD *)(a1 + 696);
  a2[8] = *(_QWORD *)(2400 * v4 + result + 2276);
  return result;
}
