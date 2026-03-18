/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C00D9A00
 * Callers:
 *     rimDispatchCompleteFrame @ 0x1C00D831C (rimDispatchCompleteFrame.c)
 * Callees:
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

unsigned __int64 __fastcall RIMFixUpAutoRepeatCompleteFrameUpDowns(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // esi
  int v6; // r8d
  unsigned int i; // edx
  __int64 v8; // r10
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // eax
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // edi
  __int64 v17; // r8

  v4 = 0;
  v5 = 0;
  v6 = 0;
  for ( i = 0; i < *(_DWORD *)(a3 + 24); ++i )
  {
    v8 = *(_QWORD *)(a3 + 88);
    v9 = 168LL * i;
    v10 = *(_DWORD *)(v9 + v8 + 28);
    if ( (v10 & 0x10000) != 0 )
    {
      v11 = v10 & 0xFFFCFFFF | 0x20000;
      *(_DWORD *)(v9 + v8 + 28) = v11;
      if ( (v11 & 0x2000) != 0 )
        v6 = 1;
    }
  }
  if ( *(_QWORD *)(a1 + 760) && v6 )
    PoLatencySensitivityHint(2LL);
  result = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)result )
  {
    v13 = (unsigned int)result;
    v14 = (_DWORD *)(*(_QWORD *)(a3 + 88) + 28LL);
    do
    {
      if ( (*v14 & 0x40000) != 0 )
        ++v5;
      v14 += 42;
      --v13;
    }
    while ( v13 );
    if ( v5 )
    {
      do
      {
        v15 = *(_DWORD *)(a3 + 24);
        v16 = 0;
        if ( v15 )
        {
          v17 = *(_QWORD *)(a3 + 88);
          while ( 1 )
          {
            result = v16;
            if ( (*(_DWORD *)(168LL * v16 + v17 + 28) & 0x40000) != 0 )
              break;
            if ( ++v16 >= v15 )
              goto LABEL_26;
          }
          result = v16;
          ++v4;
          if ( *(_QWORD *)(a3 + 72) == v17 + 168LL * v16 )
            *(_QWORD *)(a3 + 72) = 0LL;
          if ( v16 < v15 )
          {
            do
            {
              result = (unsigned int)(*(_DWORD *)(a3 + 24) - 1);
              if ( v16 < (unsigned int)result )
                result = (unsigned __int64)memmove(
                                             (void *)(*(_QWORD *)(a3 + 88) + 168LL * v16),
                                             (const void *)(*(_QWORD *)(a3 + 88) + 168LL * (v16 + 1)),
                                             0xA8uLL);
              ++v16;
            }
            while ( v16 < *(_DWORD *)(a3 + 24) );
          }
        }
LABEL_26:
        ;
      }
      while ( v4 < v5 );
      *(_DWORD *)(a3 + 24) -= v4;
    }
  }
  return result;
}
