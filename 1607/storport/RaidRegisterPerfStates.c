/*
 * XREFs of RaidRegisterPerfStates @ 0x1C0030C00
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     RaidGetStorPoFxPerfState @ 0x1C002CEC0 (RaidGetStorPoFxPerfState.c)
 *     RaidValidatePerfSets @ 0x1C00315C4 (RaidValidatePerfSets.c)
 */

__int64 __fastcall RaidRegisterPerfStates(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v10; // ecx
  _DWORD *v11; // rdx
  __int64 v12; // r8
  size_t v13; // rbp
  _DWORD *Pool; // rax
  _DWORD *v15; // rsi
  __int64 v17; // r11
  _QWORD *v18; // r14
  __int64 v19; // r9
  _DWORD *v20; // r10
  int v21; // eax
  unsigned int v22; // ebx
  __int64 StorPoFxPerfState; // rax
  __int64 v24; // r8
  void *v25; // r9
  unsigned int v26; // ebx

  v6 = a4;
  if ( !a4 || !a5 || !(unsigned __int8)RaidValidatePerfSets(a5, a4) )
    return 3221225485LL;
  v10 = 48 * v6 + 56;
  if ( (_DWORD)v6 )
  {
    v11 = (_DWORD *)(a5 + 24);
    v12 = (unsigned int)v6;
    do
    {
      if ( !*(v11 - 1) )
        v10 += 16 * *v11;
      v11 += 10;
      --v12;
    }
    while ( v12 );
  }
  v13 = v10;
  Pool = RaidAllocatePool(NonPagedPoolNx, v10, 0x4F506152u, a1);
  v15 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memset(Pool, 0, v13);
  *v15 = v6;
  v17 = v6;
  v18 = &v15[12 * v6 + 14];
  if ( (_DWORD)v6 )
  {
    v19 = a5 + 20;
    v20 = v15 + 8;
    do
    {
      *((_QWORD *)v20 - 1) = *(_QWORD *)(v19 - 12);
      v20[1] = *(_DWORD *)v19;
      v21 = *(_DWORD *)(v19 - 4);
      if ( v21 == 3 )
        v21 = 0;
      *v20 = v21;
      if ( *(_DWORD *)v19 )
      {
        if ( *(_DWORD *)v19 == 1 )
        {
          *((_QWORD *)v20 + 1) = *(_QWORD *)(v19 + 4);
          *((_QWORD *)v20 + 2) = *(_QWORD *)(v19 + 12);
        }
      }
      else
      {
        *((_QWORD *)v20 + 2) = v18;
        v22 = 0;
        for ( v20[2] = *(_DWORD *)(v19 + 4); v22 < *(_DWORD *)(v19 + 4); v18 += 2 )
        {
          StorPoFxPerfState = RaidGetStorPoFxPerfState((_DWORD *)(v19 - 20), v22++);
          v18[1] = *(_QWORD *)(StorPoFxPerfState + 16);
          *v18 = *(_QWORD *)(StorPoFxPerfState + 8);
        }
      }
      v19 += 40LL;
      v20 += 12;
      --v17;
    }
    while ( v17 );
  }
  v24 = 0LL;
  v25 = RaidAdapterPerfStateCallback;
  if ( **(_DWORD **)(a1 + 64) == 1 )
    v25 = RaidNullReference;
  if ( a3 < 0 )
    v24 = 1LL;
  v26 = PoFxRegisterComponentPerfStates(a6, a2, v24, v25, v15, 0LL);
  ExFreePoolWithTag(v15, 0x4F506152u);
  return v26;
}
