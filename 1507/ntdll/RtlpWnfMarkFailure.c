/*
 * XREFs of RtlpWnfMarkFailure @ 0x1800C8EB8
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000B74C (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     ZwQuerySystemTime @ 0x180093EA0 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlpWnfMarkFailure(__int64 a1, int a2, unsigned int a3)
{
  int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 result; // rax
  __int64 v11; // rcx
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  ZwQuerySystemTime(&SystemTime);
  if ( *(_DWORD *)(a1 + 148) < a3 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 148) = a3;
  }
  if ( a2 == -1073741801 )
  {
    v7 = qword_180146F28;
    if ( !*(_DWORD *)(a1 + 136) )
    {
      v6 = *(_DWORD *)(qword_180146F28 + 60);
      goto LABEL_11;
    }
    v8 = 2 * *(_DWORD *)(a1 + 140);
    *(_DWORD *)(a1 + 140) = v8;
    v9 = *(_DWORD *)(v7 + 68);
    if ( v8 > v9 )
      *(_DWORD *)(a1 + 140) = v9;
  }
  else if ( a2 == -1073741267 && !*(_DWORD *)(a1 + 136) )
  {
    v6 = *(_DWORD *)(qword_180146F28 + 64);
LABEL_11:
    *(_DWORD *)(a1 + 140) = v6;
  }
  result = *(unsigned int *)(a1 + 140);
  *(_DWORD *)(a1 + 120) = 1;
  v11 = SystemTime.QuadPart + 10000 * result;
  ++*(_DWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 128) = v11;
  return result;
}
