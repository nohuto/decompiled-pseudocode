/*
 * XREFs of KiIntRedirectConnnect @ 0x14011B51C
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140122F3C (KiIntSteerChooseInitialTargetProcessors.c)
 * Callees:
 *     KiIntRedirectAllocateObject @ 0x14011B5B0 (KiIntRedirectAllocateObject.c)
 */

__int64 __fastcall KiIntRedirectConnnect(__int64 *a1, unsigned int a2, __int64 a3)
{
  bool v4; // zf
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_DWORD *)(a3 + 16) == 1;
  v5 = a1;
  v11 = 0LL;
  if ( !v4 || !*(_BYTE *)(*a1 + 93) || *(_WORD *)(a3 + 32) )
    return 3221225659LL;
  v6 = 0LL;
  if ( LOWORD(KeActiveProcessors[0]) )
    v6 = qword_1403825B8[0];
  if ( *(_QWORD *)(a3 + 24) != v6 )
    return 3221225659LL;
  result = KiIntRedirectAllocateObject(a3, &v11);
  if ( (int)result >= 0 && a2 )
  {
    v8 = v11;
    v9 = a2;
    do
    {
      v10 = *v5++;
      *(_QWORD *)(v10 + 240) = v8;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
