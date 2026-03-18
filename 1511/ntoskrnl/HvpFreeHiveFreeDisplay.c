/*
 * XREFs of HvpFreeHiveFreeDisplay @ 0x1403D80A4
 * Callers:
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpFreeHiveFreeDisplay(__int64 a1, char a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rsi

  v2 = (_QWORD *)(a1 + 1448);
  result = a2 != 0;
  v5 = (unsigned int)(result + 1);
  do
  {
    v6 = v2;
    v7 = 24LL;
    do
    {
      if ( *v6 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*v6, *((unsigned int *)v6 - 4));
        *((_DWORD *)v6 - 2) = 0;
        *v6 = 0LL;
        *((_DWORD *)v6 - 4) = 0;
      }
      v6 += 3;
      --v7;
    }
    while ( v7 );
    v2 += 79;
    --v5;
  }
  while ( v5 );
  return result;
}
