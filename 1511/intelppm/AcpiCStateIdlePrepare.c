/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0001000
 * Callers:
 *     PepIdlePrepare @ 0x1C0005EF0 (PepIdlePrepare.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiCStateIdlePrepare(__int64 *a1, __int64 i)
{
  __int64 v2; // rsi
  char v4; // cl
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx

  v2 = *a1;
  v4 = 0;
  LODWORD(v5) = *((_DWORD *)a1 + 10);
  if ( (_DWORD)v5 == -1 )
  {
    if ( *((_BYTE *)a1 + 50) )
    {
      v4 = 1;
      LODWORD(v7) = *(unsigned __int8 *)(v2 + 20) - 1;
      LODWORD(v5) = *(unsigned __int8 *)((unsigned int)v7 + v2 + 21);
    }
    else
    {
      v8 = a1[1] - *(_QWORD *)(v2 + 32);
      LODWORD(v7) = *(_DWORD *)(v2 + 16);
      if ( v8 >= *((unsigned int *)a1 + 11) )
      {
        v9 = a1[2] - *(_QWORD *)(v2 + 24);
        v10 = v8 * *((unsigned __int8 *)a1 + 49);
        i = (v10 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
        if ( v9 < (unsigned int)(v10 / 0x64) && (_DWORD)v7 )
        {
          LODWORD(v7) = v7 - 1;
        }
        else if ( v9 >= (unsigned int)(v8 * *((unsigned __int8 *)a1 + 48) / 0x64)
               && (int)v7 + 1 < (unsigned int)*(unsigned __int8 *)(v2 + 20) )
        {
          LODWORD(v7) = v7 + 1;
        }
        v4 = 1;
      }
      LODWORD(v5) = *(unsigned __int8 *)((unsigned int)v7 + v2 + 21);
    }
  }
  else
  {
    v6 = *(_DWORD *)(v2 + 56);
    if ( (unsigned int)v5 >= v6 )
      LODWORD(v5) = v6 - 1;
    LODWORD(v7) = 0;
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v2 + 20); i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i && *(unsigned __int8 *)(i + v2 + 21) <= (unsigned int)v5 )
        LODWORD(v7) = i;
    }
    v4 = 1;
  }
  *(_DWORD *)(v2 + 12) = v5;
  *(_DWORD *)(v2 + 16) = v7;
  if ( v4 )
  {
    *(_QWORD *)(v2 + 32) = a1[1];
    *(_QWORD *)(v2 + 24) = a1[2];
  }
  result = (unsigned int)v5;
  v12 = v2 + 8 * ((unsigned int)v5 + 8 * ((unsigned int)v5 + 1LL));
  if ( (_DWORD)v5 )
  {
    do
    {
      result = *(_QWORD *)(v12 + 16);
      if ( !result )
        break;
      result = ((__int64 (__fastcall *)(__int64, __int64))result)(v12 + 32, i);
      if ( (int)result >= 0 )
        break;
      v7 = (unsigned int)(v7 - 1);
      result = (unsigned int)(1 << v5);
      *((_DWORD *)a1 + 20) |= result;
      v5 = *(unsigned __int8 *)(v7 + v2 + 21);
      v12 = v2 + 8 * (v5 + 8 * (v5 + 1));
    }
    while ( *(_BYTE *)(v7 + v2 + 21) );
  }
  *(_DWORD *)(v2 + 8) = v5;
  *((_DWORD *)a1 + 19) = v5;
  *((_DWORD *)a1 + 15) = 0;
  *((_DWORD *)a1 + 18) = -1;
  return result;
}
