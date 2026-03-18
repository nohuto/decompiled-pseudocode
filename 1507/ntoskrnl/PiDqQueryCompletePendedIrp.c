/*
 * XREFs of PiDqQueryCompletePendedIrp @ 0x140546804
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     PiDqIrpComplete @ 0x140546884 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1405468EC (PiDqQueryGetNextIoctlInfo.c)
 */

__int64 __fastcall PiDqQueryCompletePendedIrp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // r9
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  result = 0LL;
  v3 = *(_QWORD *)(a1 + 176);
  v8[0] = 0LL;
  v8[1] = 0LL;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 184);
    result = _InterlockedExchange64((volatile __int64 *)(v3 + 104), 0LL);
    if ( result )
    {
      v5 = 0LL;
      if ( (*(_DWORD *)(a1 + 216) & 1) != 0 )
      {
        v7 = 0LL;
        v6 = 3221225626LL;
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(a1, *(unsigned int *)(v4 + 8), 0LL, v8);
        v6 = 0LL;
        v7 = v8;
        v5 = 16LL;
      }
      result = PiDqIrpComplete(*(_QWORD *)(a1 + 176), v6, v5, v7);
      *(_DWORD *)(a1 + 216) &= ~0x10u;
      *(_QWORD *)(a1 + 176) = 0LL;
    }
  }
  return result;
}
