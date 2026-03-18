/*
 * XREFs of KeIsSubsetAffinityEx @ 0x140201478
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r9
  unsigned __int16 v4; // ax
  unsigned int v6; // edx
  unsigned __int16 i; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int16 *v10; // r10
  unsigned __int16 v11; // r8
  unsigned __int16 v13; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int16 v14; // [rsp+2h] [rbp-C6h]
  int v15; // [rsp+4h] [rbp-C4h]
  _QWORD v16[21]; // [rsp+8h] [rbp-C0h]

  v2 = *a1;
  v4 = *a2;
  if ( *a1 < *a2 )
    v4 = *a1;
  v6 = 0;
  v13 = v4;
  for ( i = 0; i < v13; v4 = v13 )
  {
    v8 = i++;
    v16[v8] = *(_QWORD *)&a2[4 * v8 + 4] & *(_QWORD *)&a1[4 * v8 + 4];
  }
  v15 = 0;
  v14 = 20;
  if ( i < 0x14u )
  {
    do
    {
      v9 = i++;
      v16[v9] = 0LL;
    }
    while ( i < v14 );
    v4 = v13;
  }
  if ( v2 >= v4 )
  {
    v10 = a1;
    v2 = v4;
  }
  else
  {
    v10 = &v13;
  }
  v11 = 0;
  if ( v2 )
  {
    while ( *(_QWORD *)&a1[4 * v11 + 4] == v16[v11] )
    {
      if ( ++v11 >= v2 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    while ( v11 < *v10 )
    {
      if ( *(_QWORD *)&v10[4 * v11 + 4] )
        return v6;
      ++v11;
    }
    return 1;
  }
  return v6;
}
