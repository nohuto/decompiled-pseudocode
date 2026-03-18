/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x140524604
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r12
  int i; // ebp
  _QWORD **v4; // rcx
  _QWORD *v5; // rdx
  _QWORD **v6; // rcx
  _QWORD *v7; // rdx
  unsigned int v8; // esi
  unsigned int v9; // r14d
  __int64 *v10; // r15
  volatile __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 **v16; // rbx
  __int64 *v17; // rcx
  __int64 v18; // rax

  v1 = *a1;
  for ( i = 0; ; ++i )
  {
    v4 = (_QWORD **)*((_QWORD *)a1 + 8);
    if ( v4 == *((_QWORD ***)a1 + 9) )
      break;
    v5 = *v4;
    *v4 = (_QWORD *)**v4;
    if ( v5 == *((_QWORD **)a1 + 9) )
      *((_QWORD *)a1 + 9) = *((_QWORD *)a1 + 8);
    if ( v5 == (_QWORD *)32 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
    ExFreePoolWithTag(v5 - 4, 0);
  }
  while ( 1 )
  {
    v6 = (_QWORD **)*((_QWORD *)a1 + 11);
    if ( v6 == *((_QWORD ***)a1 + 12) )
      break;
    v7 = *v6;
    *v6 = (_QWORD *)**v6;
    if ( v7 == *((_QWORD **)a1 + 12) )
      *((_QWORD *)a1 + 12) = *((_QWORD *)a1 + 11);
    if ( v7 == (_QWORD *)32 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    ++i;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
    ExFreePoolWithTag(v7 - 4, 0);
  }
  v8 = 0;
  if ( (a1[3] & 0x10000000) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v9 = KeNumberProcessors_0;
    if ( !(_DWORD)KeNumberProcessors_0 )
      goto LABEL_26;
  }
  v10 = KiProcessorBlock;
  do
  {
    if ( (a1[3] & 0x10000000) != 0 )
    {
      v11 = (volatile __int64 *)(a1 + 36);
    }
    else
    {
      if ( v8 >= (unsigned int)KeNumberProcessors_0 )
        v12 = 0LL;
      else
        v12 = *v10;
      v11 = (volatile __int64 *)(*(_QWORD *)(v12 + 24536) + 8 * (v1 + 8));
    }
    v13 = _InterlockedExchange64(v11, 0LL);
    v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), -(v13 & 0xF));
      do
      {
        v15 = *(_QWORD *)(v14 + 32);
        _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
        ++i;
        ExFreePoolWithTag((PVOID)v14, 0);
        v14 = v15;
      }
      while ( v15 );
    }
    ++v8;
    ++v10;
  }
  while ( v8 < v9 );
LABEL_26:
  v16 = (__int64 **)(a1 + 28);
  while ( *v16 != (__int64 *)v16 )
  {
    v17 = *v16;
    v18 = **v16;
    if ( (__int64 **)(*v16)[1] != v16 || *(__int64 **)(v18 + 8) != v17 )
      __fastfail(3u);
    *v16 = (__int64 *)v18;
    *(_QWORD *)(v18 + 8) = v16;
    ExFreePoolWithTag(v17, 0);
  }
  _InterlockedExchangeAdd(&dword_140327804[a1[79] & 1], -(i * a1[1]));
  return 0LL;
}
