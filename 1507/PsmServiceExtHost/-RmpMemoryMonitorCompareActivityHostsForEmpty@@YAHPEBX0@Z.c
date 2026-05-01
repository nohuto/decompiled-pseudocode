/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x18003C9C0
 * Callers:
 *     <none>
 * Callees:
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x180005F6C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     RmpPolicyCompareActivityHostsByPriorityAndCommit @ 0x18003C25C (RmpPolicyCompareActivityHostsByPriorityAndCommit.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForEmpty(__int16 *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rbp
  char v8; // al
  char v9; // dl
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax

  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v5 = a2[4];
  if ( a1[22] < 0 )
  {
    if ( (*((_WORD *)a2 + 22) & 0x8000) == 0 )
      return 0xFFFFFFFFLL;
    if ( a1[22] < 0 )
      return RmpPolicyCompareActivityHostsByPriorityAndCommit((__int64)a1, (__int64)a2);
  }
  if ( (*((_WORD *)a2 + 22) & 0x8000) != 0 )
    return 1LL;
  if ( a1[22] < 0 )
    return RmpPolicyCompareActivityHostsByPriorityAndCommit((__int64)a1, (__int64)a2);
  if ( RmpPolicyActivityHostIsValidEmptyTarget(v3) && !RmpPolicyActivityHostIsValidEmptyTarget(v5) )
    return 0xFFFFFFFFLL;
  if ( !RmpPolicyActivityHostIsValidEmptyTarget(v3) && RmpPolicyActivityHostIsValidEmptyTarget(v5) )
    return 1LL;
  if ( !RmpPolicyActivityHostIsValidEmptyTarget(v3) )
    return 0LL;
  v8 = *(_BYTE *)(v3 + 772) & 7;
  if ( !v8 && (*(_BYTE *)(v5 + 772) & 7) != 0 )
    return 0xFFFFFFFFLL;
  if ( v8 && (*(_BYTE *)(v5 + 772) & 7) == 0 )
    return 1LL;
  v9 = *(_BYTE *)(v3 + 905) & 1;
  if ( v8 )
  {
    v10 = *((_QWORD *)a1 + 3);
    if ( v9 )
      v10 >>= 1;
    v11 = a2[3];
  }
  else
  {
    v10 = *((_QWORD *)a1 + 2);
    if ( v9 )
      v10 >>= 1;
    v11 = a2[2];
  }
  if ( (*(_BYTE *)(v5 + 905) & 1) != 0 )
    v11 >>= 1;
  if ( v10 > v11 )
    return 0xFFFFFFFFLL;
  LOBYTE(v2) = v10 < v11;
  return v2;
}
