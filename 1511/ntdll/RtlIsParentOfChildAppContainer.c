/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1800652C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerSidType @ 0x1800622C0 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  _DWORD *v5; // rdx
  __int64 v6; // rbx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (int)RtlGetAppContainerSidType(a1, &v8) >= 0
    && v8 == 2
    && (int)RtlGetAppContainerSidType(a2, &v8) >= 0
    && v8 == 1 )
  {
    v4 = 1;
    v5 = (_DWORD *)(a2 + 12);
    v6 = a1 - a2;
    while ( *(_DWORD *)((char *)v5 + v6) == *v5 )
    {
      ++v4;
      ++v5;
      if ( v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
