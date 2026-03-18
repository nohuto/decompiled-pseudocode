/*
 * XREFs of KeAndAffinityEx @ 0x140101900
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  unsigned __int16 v6; // r8
  unsigned int v7; // ebx
  unsigned __int16 v8; // dx
  unsigned __int16 i; // cx
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rdx
  _BYTE v14[176]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = v14;
  v6 = *a2;
  v7 = 0;
  v8 = *a1;
  if ( *a1 >= v6 )
    v8 = v6;
  *(_WORD *)v3 = v8;
  for ( i = 0; i < *(_WORD *)v3; ++i )
  {
    v10 = 4LL * i;
    v11 = (*(_QWORD *)&a2[v10 + 4] & *(_QWORD *)&a1[v10 + 4]) == 0LL;
    *(_QWORD *)&v3[v10 * 2 + 8] = *(_QWORD *)&a2[v10 + 4] & *(_QWORD *)&a1[v10 + 4];
    if ( !v11 )
      v7 = 1;
  }
  if ( v3 != v14 )
  {
    *((_DWORD *)v3 + 1) = 0;
    *((_WORD *)v3 + 1) = 20;
    if ( i < 0x14u )
    {
      do
      {
        v12 = i++;
        *(_QWORD *)&v3[8 * v12 + 8] = 0LL;
      }
      while ( i < *((_WORD *)v3 + 1) );
    }
  }
  return v7;
}
