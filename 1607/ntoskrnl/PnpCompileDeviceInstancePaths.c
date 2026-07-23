/*
 * XREFs of PnpCompileDeviceInstancePaths @ 0x140485AE0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DE34 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     IopEnumerateRelations @ 0x140485C7C (IopEnumerateRelations.c)
 *     PnpAllocateCriticalMemory @ 0x140485EEC (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpCompileDeviceInstancePaths(unsigned int a1, __int64 a2, char a3, char a4, __int64 *a5)
{
  unsigned int v5; // ebx
  int v8; // r14d
  __int64 *v10; // rsi
  int v11; // edi
  __int64 CriticalMemory; // rax
  _WORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rsi
  const void *v16; // rdx
  _WORD *v17; // rdi
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF
  int v22; // [rsp+78h] [rbp+38h] BYREF

  v5 = 0;
  v8 = a2;
  if ( !a2 )
    __fastfail(5u);
  v10 = a5;
  v11 = 0;
  v20 = 0LL;
  *a5 = 0LL;
  while ( (unsigned __int8)IopEnumerateRelations(v8, (unsigned int)&v20, (unsigned int)&v21, (unsigned int)&v22, 0LL) )
  {
    if ( v21 )
      v18 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
    else
      v18 = 0LL;
    if ( v18 && (!a4 || (*(_DWORD *)(v18 + 704) & 2) == 0) && *(_QWORD *)(v18 + 48) && (!a3 || v22) )
      v11 += *(unsigned __int16 *)(v18 + 40) + 2;
  }
  CriticalMemory = PnpAllocateCriticalMemory(a1, 1LL, (unsigned int)(v11 + 2), 1265659472LL);
  *v10 = CriticalMemory;
  v13 = (_WORD *)CriticalMemory;
  if ( CriticalMemory )
  {
    v20 = 2LL;
    while ( (unsigned __int8)IopEnumerateRelations(v8, (unsigned int)&v20, (unsigned int)&v21, (unsigned int)&v22, 0LL) )
    {
      if ( v21 )
        v14 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
      else
        v14 = 0LL;
      if ( v14 && (!a4 || (*(_DWORD *)(v14 + 704) & 2) == 0) && *(_QWORD *)(v14 + 48) && (!a3 || v22) )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
        if ( v15 )
        {
          v16 = *(const void **)(v15 + 48);
          if ( v16 )
          {
            memmove(v13, v16, *(unsigned __int16 *)(v15 + 40));
            v17 = &v13[(unsigned __int64)*(unsigned __int16 *)(v15 + 40) >> 1];
            *v17 = 0;
            v13 = v17 + 1;
          }
        }
      }
    }
    *v13 = 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
