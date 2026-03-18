/*
 * XREFs of DestroyEventHook @ 0x1C00DCC10
 * Callers:
 *     FreeThreadsWinEvents @ 0x1C00DCA40 (FreeThreadsWinEvents.c)
 *     _UnhookWinEvent @ 0x1C00DCBC4 (_UnhookWinEvent.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C00849F0 (RemoveHmodDependency.c)
 */

__int64 __fastcall DestroyEventHook(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 *v4; // rdx
  _QWORD *v5; // rcx
  __int64 i; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  int v9; // r9d
  __int64 v10; // r10
  int v11; // ecx

  *(_DWORD *)(a1 + 40) |= 1u;
  v2 = 0;
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v4 = (__int64 *)gpWinEventHooks;
    v5 = (_QWORD *)gpWinEventHooks;
    for ( i = gpWinEventHooks; i; i = *(_QWORD *)(i + 24) )
    {
      if ( i == a1 )
      {
        *v5 = *(_QWORD *)(a1 + 24);
        v4 = (__int64 *)gpWinEventHooks;
        break;
      }
      v5 = (_QWORD *)(i + 24);
    }
    v7 = *v4;
    while ( v7 )
    {
      v8 = &unk_1C031F344;
      v9 = 0;
      LODWORD(v10) = 0;
      do
      {
        if ( *(v8 - 1) > *(_DWORD *)(v7 + 36) )
          break;
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)(*((_DWORD *)&unk_1C031F340 + 2 * v10) - 1) >= *(_DWORD *)(v7 + 32) )
          v9 |= *v8;
        v8 += 2;
      }
      while ( (unsigned int)v10 < 0xF );
      v7 = *(_QWORD *)(v7 + 24);
      v2 |= v9;
    }
    *(_DWORD *)(gpsi + 1876LL) = v2;
    v11 = *(_DWORD *)(a1 + 72);
    if ( v11 >= 0 )
      RemoveHmodDependency(v11);
    return HMFreeObject(a1);
  }
  return result;
}
