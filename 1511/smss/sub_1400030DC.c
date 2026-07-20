/*
 * XREFs of sub_1400030DC @ 0x1400030DC
 * Callers:
 *     sub_140002E90 @ 0x140002E90 (sub_140002E90.c)
 *     sub_140004C90 @ 0x140004C90 (sub_140004C90.c)
 * Callees:
 *     sub_1400031C0 @ 0x1400031C0 (sub_1400031C0.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 */

__int64 __fastcall sub_1400030DC(__int64 a1, PVOID *a2)
{
  __int64 v3; // rbx
  char v4; // r11
  int v5; // ebp
  volatile signed __int32 *v6; // rax
  PVOID *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rcx
  __int64 result; // rax

  v3 = qword_14001FCC8 + 40LL * (unsigned int)sub_1400031C0(a1);
  if ( v4 )
    *(_DWORD *)v3 = -1;
  v5 = 0;
  RtlAcquireSRWLockExclusive(v3 + 8);
  v6 = (volatile signed __int32 *)*a2;
  if ( *a2 )
  {
    if ( (v6[2] & 4) != 0 )
      return RtlReleaseSRWLockExclusive(v3 + 8);
    _InterlockedIncrement(v6);
  }
  v7 = a2;
  v8 = v3 - (_QWORD)a2;
  v9 = 2LL;
  do
  {
    v10 = *(PVOID *)((char *)v7 + v8 + 24);
    *(PVOID *)((char *)v7 + v8 + 24) = *v7;
    *v7++ = v10;
    --v9;
  }
  while ( v9 );
  if ( !*(_DWORD *)(v3 + 4) && *(_QWORD *)(v3 + 32) )
  {
    v5 = 1;
    *(_DWORD *)(v3 + 4) = 1;
  }
  result = RtlReleaseSRWLockExclusive(v3 + 8);
  if ( v5 == 1 )
    result = RtlWakeAllConditionVariable(v3 + 16);
  if ( *a2 )
    return sub_1400046B4(*a2);
  return result;
}
