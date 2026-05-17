/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x180047DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerSidType @ 0x18004AA20 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(__int64 a1, __int64 a2)
{
  unsigned int v5; // r8d
  _DWORD *v6; // rdx
  __int64 v7; // rbx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (int)RtlGetAppContainerSidType(a1, &v8) >= 0
    && v8 == 2
    && (int)RtlGetAppContainerSidType(a2, &v8) >= 0
    && v8 == 1 )
  {
    v5 = 1;
    v6 = (_DWORD *)(a2 + 12);
    v7 = a1 - a2;
    while ( *(_DWORD *)((char *)v6 + v7) == *v6 )
    {
      ++v5;
      ++v6;
      if ( v5 >= 8 )
        return 1;
    }
  }
  return 0;
}
