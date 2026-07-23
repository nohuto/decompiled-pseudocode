/*
 * XREFs of ObpHashBuffer @ 0x1404A5270
 * Callers:
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ObpHashBuffer(char *a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r11
  char *v7; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx

  v2 = a2;
  v3 = (__int64)a1;
  result = 0LL;
  v5 = 0LL;
  v6 = (unsigned __int64)&a1[v2];
  v7 = &a1[v2 & 0xFFFFFFFFFFFFFFF8uLL];
  v8 = (unsigned __int64)(v7 - a1 + 7) >> 3;
  if ( a1 > v7 )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      ++v5;
      result = __ROL8__(*(_QWORD *)v3 ^ result, 3);
      v3 += 8LL;
    }
    while ( v5 < v8 );
  }
  v9 = v6 - v3;
  if ( v3 > v6 )
    v9 = 0LL;
  if ( v9 )
  {
    v10 = -v3;
    do
    {
      v11 = *(unsigned __int8 *)v3++;
      result = __ROL8__(v11 ^ result, 3);
    }
    while ( v10 + v3 < v9 );
  }
  return result;
}
