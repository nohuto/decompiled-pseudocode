/*
 * XREFs of PpmUpdateIdleVeto @ 0x1402362BC
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x140236478 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402366B4 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  _DWORD **v7; // rsi
  bool v8; // r8
  _DWORD *i; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _DWORD *j; // rcx
  _QWORD *PoolWithTag; // rax
  int v15; // eax
  _QWORD *v16; // rdx

  v3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a3 + 32);
  v7 = (_DWORD **)(a3 + 8);
  v8 = v6 != 0;
  if ( !a1 )
  {
    for ( i = *v7; i != (_DWORD *)v7; i = *(_DWORD **)i )
    {
      if ( i[4] == a2 )
      {
        if ( i[5]-- == 1 )
        {
          v11 = *(_QWORD *)i;
          v12 = (_QWORD *)*((_QWORD *)i + 1);
          if ( *(_DWORD **)(*(_QWORD *)i + 8LL) != i || (_DWORD *)*v12 != i )
            __fastfail(3u);
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          if ( v8 )
          {
            *(_QWORD *)i = 0LL;
            *((_QWORD *)i + 1) = 0LL;
          }
          else
          {
            ExFreePoolWithTag(i, 0x694D5050u);
          }
          if ( *v7 == (_DWORD *)v7 )
            _InterlockedExchange((volatile __int32 *)a3, 0);
        }
        return v3;
      }
    }
    return (unsigned int)-1073741811;
  }
  for ( j = *v7; j != (_DWORD *)v7; j = *(_DWORD **)j )
  {
    if ( j[4] == a2 )
    {
      v15 = j[5];
      if ( v15 == -1 )
        return (unsigned int)-1073741675;
      else
        j[5] = v15 + 1;
      return v3;
    }
  }
  if ( v6 )
  {
    if ( a2 > *(_DWORD *)(a3 + 24) )
      return (unsigned int)-1073741811;
    PoolWithTag = (_QWORD *)(v6 + 24LL * (a2 - 1));
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x694D5050u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
  }
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  *((_DWORD *)PoolWithTag + 5) = 1;
  *((_DWORD *)PoolWithTag + 4) = a2;
  v16 = *(_QWORD **)(a3 + 16);
  *PoolWithTag = v7;
  PoolWithTag[1] = v16;
  if ( (_DWORD **)*v16 != v7 )
    __fastfail(3u);
  *v16 = PoolWithTag;
  *(_QWORD *)(a3 + 16) = PoolWithTag;
  _InterlockedExchange((volatile __int32 *)a3, 1);
  return v3;
}
