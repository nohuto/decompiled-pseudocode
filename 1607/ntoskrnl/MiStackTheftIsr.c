/*
 * XREFs of MiStackTheftIsr @ 0x1401E6498
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeFlushSingleCurrentTb @ 0x14012CDD0 (KeFlushSingleCurrentTb.c)
 *     MiCopyKstack @ 0x1401E6034 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1401E6638 (MiSwitchKstackPages.c)
 */

ULONG_PTR __fastcall MiStackTheftIsr(ULONG_PTR Argument)
{
  unsigned __int64 v1; // rbp
  signed __int32 v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rbx
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  int i; // eax
  signed __int32 v10; // eax
  unsigned int v11; // ebx
  signed __int32 v12; // eax
  unsigned int v13; // ebx
  ULONG_PTR result; // rax
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF
  int j; // [rsp+78h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(Argument + 40);
  v3 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 56));
  v4 = ~v3 & 0x80000000;
  if ( (v3 & 0x7FFFFFFF) != 0 )
  {
    v16 = 0;
    for ( i = *(_DWORD *)(Argument + 56); (i & 0x80000000) != v4; i = *(_DWORD *)(Argument + 56) )
      KeYieldProcessorEx(&v16);
    v10 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 56));
    v11 = ~v10 & 0x80000000;
    if ( (v10 & 0x7FFFFFFF) != 0 )
    {
      v17 = 0;
      while ( (*(_DWORD *)(Argument + 56) & 0x80000000) != v11 )
        KeYieldProcessorEx(&v17);
    }
    else
    {
      *(_DWORD *)(Argument + 56) = v11 | *(_DWORD *)(Argument + 60);
    }
    KeFlushSingleCurrentTb(v1, 0);
  }
  else
  {
    *(_DWORD *)(Argument + 56) = v4 | *(_DWORD *)(Argument + 60);
    v5 = 48LL * *(_QWORD *)Argument - 0x58000000000LL;
    v6 = 48LL * *(_QWORD *)(Argument + 8) - 0x58000000000LL;
    MiCopyKstack(v6, v5, *(_QWORD *)(Argument + 16));
    KeFlushSingleCurrentTb(v1, 0);
    MiSwitchKstackPages(v6, v5);
    *(_QWORD *)(v5 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(v5 + 34) &= 0xC7u;
    *(_BYTE *)(v5 + 35) &= ~0x20u;
    v7 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 56));
    v8 = ~v7 & 0x80000000;
    if ( (v7 & 0x7FFFFFFF) != 0 )
    {
      v15 = 0;
      while ( (*(_DWORD *)(Argument + 56) & 0x80000000) != v8 )
        KeYieldProcessorEx(&v15);
    }
    else
    {
      *(_DWORD *)(Argument + 56) = v8 | *(_DWORD *)(Argument + 60);
    }
  }
  v12 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 56));
  v13 = ~v12 & 0x80000000;
  if ( (v12 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      result = *(_DWORD *)(Argument + 56) & 0x80000000;
      if ( (_DWORD)result == v13 )
        break;
    }
  }
  else
  {
    result = v13 | *(_DWORD *)(Argument + 60);
    *(_DWORD *)(Argument + 56) = result;
  }
  return result;
}
