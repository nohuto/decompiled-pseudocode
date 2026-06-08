/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0001000
 * Callers:
 *     PepIdlePrepare @ 0x1C0005AB0 (PepIdlePrepare.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiCStateIdlePrepare(__int64 *a1)
{
  __int64 v1; // rsi
  char v3; // cl
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  unsigned int v10; // eax
  __int64 i; // rdx

  v1 = *a1;
  v3 = 0;
  LODWORD(v4) = *((_DWORD *)a1 + 10);
  if ( (_DWORD)v4 == -1 )
  {
    if ( *((_BYTE *)a1 + 50) )
    {
      v3 = 1;
      LODWORD(v6) = *(unsigned __int8 *)(v1 + 20) - 1;
      LODWORD(v4) = *(unsigned __int8 *)((unsigned int)v6 + v1 + 21);
    }
    else
    {
      v5 = a1[1] - *(_QWORD *)(v1 + 32);
      LODWORD(v6) = *(_DWORD *)(v1 + 16);
      if ( v5 >= *((unsigned int *)a1 + 11) )
      {
        v9 = a1[2] - *(_QWORD *)(v1 + 24);
        if ( v9 < (unsigned int)(v5 * *((unsigned __int8 *)a1 + 49) / 0x64) && (_DWORD)v6 )
        {
          LODWORD(v6) = v6 - 1;
          v3 = 1;
        }
        else
        {
          if ( v9 >= (unsigned int)(v5 * *((unsigned __int8 *)a1 + 48) / 0x64)
            && (int)v6 + 1 < (unsigned int)*(unsigned __int8 *)(v1 + 20) )
          {
            LODWORD(v6) = v6 + 1;
          }
          v3 = 1;
        }
      }
      LODWORD(v4) = *(unsigned __int8 *)((unsigned int)v6 + v1 + 21);
    }
  }
  else
  {
    v10 = *(_DWORD *)(v1 + 56);
    if ( (unsigned int)v4 >= v10 )
      LODWORD(v4) = v10 - 1;
    LODWORD(v6) = 0;
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v1 + 20); i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i && *(unsigned __int8 *)(i + v1 + 21) <= (unsigned int)v4 )
        LODWORD(v6) = i;
    }
    v3 = 1;
  }
  *(_DWORD *)(v1 + 12) = v4;
  *(_DWORD *)(v1 + 16) = v6;
  if ( v3 )
  {
    *(_QWORD *)(v1 + 32) = a1[1];
    *(_QWORD *)(v1 + 24) = a1[2];
  }
  result = (unsigned int)v4;
  v8 = v1 + 8 * ((unsigned int)v4 + 8 * ((unsigned int)v4 + 1LL));
  if ( (_DWORD)v4 )
  {
    do
    {
      result = *(_QWORD *)(v8 + 16);
      if ( !result )
        break;
      result = ((__int64 (__fastcall *)(__int64))result)(v8 + 32);
      if ( (int)result >= 0 )
        break;
      v6 = (unsigned int)(v6 - 1);
      result = (unsigned int)(1 << v4);
      *((_DWORD *)a1 + 20) |= result;
      v4 = *(unsigned __int8 *)(v6 + v1 + 21);
      v8 = v1 + 8 * (v4 + 8 * (v4 + 1));
    }
    while ( *(_BYTE *)(v6 + v1 + 21) );
  }
  *(_DWORD *)(v1 + 8) = v4;
  *((_DWORD *)a1 + 15) = 0;
  *((_DWORD *)a1 + 19) = v4;
  *((_DWORD *)a1 + 18) = -1;
  return result;
}
