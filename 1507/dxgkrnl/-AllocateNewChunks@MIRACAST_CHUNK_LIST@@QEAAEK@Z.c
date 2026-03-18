/*
 * XREFs of ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C0023CC0
 * Callers:
 *     DpiProcessMiracastNotifyDpc @ 0x1C0009000 (DpiProcessMiracastNotifyDpc.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MIRACAST_CHUNK_LIST::AllocateNewChunks(MIRACAST_CHUNK_LIST *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // edi
  SIZE_T v6; // rbp
  MIRACAST_CHUNK_LIST *PoolWithTag; // rax
  MIRACAST_CHUNK_LIST **v8; // rcx

  v2 = *((_DWORD *)this + 5);
  if ( v2 + 44 >= v2 )
  {
    v5 = 0;
    if ( !a2 )
      return 1;
    v6 = v2 + 44;
    while ( 1 )
    {
      PoolWithTag = (MIRACAST_CHUNK_LIST *)ExAllocatePoolWithTag((POOL_TYPE)512, v6, 0x4B677844u);
      if ( !PoolWithTag )
        break;
      v8 = (MIRACAST_CHUNK_LIST **)*((_QWORD *)this + 1);
      *(_QWORD *)PoolWithTag = this;
      *((_QWORD *)PoolWithTag + 1) = v8;
      if ( *v8 != this )
        __fastfail(3u);
      *v8 = PoolWithTag;
      ++v5;
      *((_QWORD *)this + 1) = PoolWithTag;
      ++*((_DWORD *)this + 4);
      if ( v5 >= a2 )
        return 1;
    }
  }
  return 0;
}
