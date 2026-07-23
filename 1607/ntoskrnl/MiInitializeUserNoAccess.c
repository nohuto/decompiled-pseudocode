/*
 * XREFs of MiInitializeUserNoAccess @ 0x1404BF964
 * Callers:
 *     MiMapProcessExecutable @ 0x14046BCB8 (MiMapProcessExecutable.c)
 * Callees:
 *     MiAllocateVad @ 0x14046BFD8 (MiAllocateVad.c)
 *     MiInsertProcessVads @ 0x14046C754 (MiInsertProcessVads.c)
 *     MiReturnProcessVads @ 0x140657004 (MiReturnProcessVads.c)
 */

__int64 __fastcall MiInitializeUserNoAccess(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rbp
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 j; // rdi
  unsigned __int64 v12; // rcx
  _QWORD *i; // rax
  unsigned __int64 v14; // r8
  int v15; // r15d
  unsigned __int64 v16; // rcx
  _QWORD *Vad; // rax

  v2 = 0;
  v3 = a2;
  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 772) & 0x200) != 0 )
    v3 = a2 - 0x10000;
  v6 = *(_QWORD **)(a1 + 1568);
  v7 = 0LL;
  v8 = 0LL;
  while ( v6 )
  {
    v8 = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( 1 )
  {
    if ( v8 )
    {
      v9 = v8[1];
      v10 = (unsigned __int64)v8;
      if ( v9 )
      {
        for ( i = *(_QWORD **)v9; i; i = (_QWORD *)*i )
          v9 = (unsigned __int64)i;
      }
      else
      {
        for ( j = v8[2]; ; j = *(_QWORD *)(v9 + 16) )
        {
          v9 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 || *(_QWORD *)v9 == v10 )
            break;
          v10 = v9;
        }
      }
      v12 = (*((unsigned int *)v8 + 6) | ((unsigned __int64)*((unsigned __int8 *)v8 + 32) << 32)) << 12;
      if ( v12 <= v3 )
        goto LABEL_12;
      v14 = v12 - 1;
      v15 = 1;
      if ( v7 )
      {
        v16 = (((*((unsigned int *)v7 + 7) | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32)) << 12) | 0xFFF)
            + 1;
        if ( v16 >= v14 )
          goto LABEL_12;
        if ( v16 < v3 )
          v16 = v3;
      }
      else
      {
        v16 = v3;
      }
    }
    else
    {
      v14 = 0x7FFFFFFEFFFFLL;
      if ( v7 )
        v16 = (((*((unsigned int *)v7 + 7) | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32)) << 12) | 0xFFF)
            + 1;
      else
        v16 = v3;
      if ( v16 >= 0x7FFFFFFEFFFFLL )
      {
LABEL_28:
        MiInsertProcessVads((struct _KPROCESS *)a1, v5);
        return v2;
      }
      v15 = 2;
      v9 = 0LL;
    }
    Vad = (_QWORD *)MiAllocateVad(v16, v14);
    if ( !Vad )
      break;
    *Vad = v5;
    v5 = Vad;
    if ( v15 == 2 )
      goto LABEL_28;
LABEL_12:
    v7 = v8;
    v8 = (_QWORD *)v9;
  }
  v2 = -1073741801;
  MiReturnProcessVads(v5);
  return v2;
}
