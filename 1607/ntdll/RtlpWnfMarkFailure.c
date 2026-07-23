/*
 * XREFs of RtlpWnfMarkFailure @ 0x1800D9D40
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180065EF8 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpWnfMarkFailure(__int64 a1, int a2, unsigned int a3)
{
  int v4; // ecx
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 148) < a3 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 148) = a3;
  }
  if ( a2 == -1073741801 )
  {
    v5 = qword_1801530A0;
    if ( !*(_DWORD *)(a1 + 136) )
    {
      v4 = *(_DWORD *)(qword_1801530A0 + 60);
      goto LABEL_11;
    }
    v6 = 2 * *(_DWORD *)(a1 + 140);
    *(_DWORD *)(a1 + 140) = v6;
    v7 = *(_DWORD *)(v5 + 68);
    if ( v6 > v7 )
      *(_DWORD *)(a1 + 140) = v7;
  }
  else if ( a2 == -1073741267 && !*(_DWORD *)(a1 + 136) )
  {
    v4 = *(_DWORD *)(qword_1801530A0 + 64);
LABEL_11:
    *(_DWORD *)(a1 + 140) = v4;
  }
  v8 = RtlpFreezeTimeBias;
  v9 = MEMORY[0x7FFE0008];
  v10 = MEMORY[0x7FFE03B0];
  result = *(unsigned int *)(a1 + 140);
  ++*(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 120) = 1;
  *(_QWORD *)(a1 + 128) = v9 - v10 - v8 + 10000 * result;
  return result;
}
