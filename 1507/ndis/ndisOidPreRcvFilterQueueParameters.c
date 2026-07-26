/*
 * XREFs of ndisOidPreRcvFilterQueueParameters @ 0x1C0039320
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C0038194 (ndisFindReceiveQueueByQueueId.c)
 */

char __fastcall ndisOidPreRcvFilterQueueParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r9
  _BYTE *v4; // r13
  __int64 v5; // rdi
  char v6; // r14
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // rdx
  int v12; // eax
  unsigned __int16 v13; // cx
  unsigned __int64 v14; // rdx
  unsigned int v15; // ebx
  KIRQL v16; // r12
  __int64 *ReceiveQueueByQueueId; // rax
  unsigned int v18; // ecx
  const void *v19; // rdx
  unsigned int v20; // eax
  void *v21; // rcx
  _BYTE *OidSourceHandle; // rax
  __int64 v23; // r10
  __int64 v25; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)a1;
  v3 = 0LL;
  v25 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 1;
  v7 = *(_DWORD *)(v5 + 4);
  if ( v7 != 12 )
  {
    if ( v7 != 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
      return v6;
    }
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v5 + 48) < 0x43Cu )
    {
      *(_DWORD *)(v5 + 56) = 1084;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( *(_DWORD *)(a1 + 40) )
    {
      *(_DWORD *)(v5 + 52) = 0;
      return v6;
    }
LABEL_13:
    if ( !v1 )
      return 0;
    v8 = *(_DWORD *)(v5 + 4);
    if ( v8 == 12 )
    {
      v3 = *(_QWORD *)(v5 + 40);
      v9 = 1096;
      *(_DWORD *)(v5 + 60) = 0;
      v25 = v3;
      v10 = *(_WORD *)(v3 + 2);
      v11 = v10;
      if ( v10 >= 0x448u )
        v11 = 1096LL;
      if ( v11 >= *(unsigned int *)(v5 + 48) )
      {
        v9 = *(_DWORD *)(v5 + 48);
      }
      else if ( v10 < 0x448u )
      {
        v9 = v10;
      }
      *(_DWORD *)(v5 + 64) = v9;
    }
    else if ( v8 == 1 )
    {
      v3 = *(_QWORD *)(v5 + 40);
      v12 = 1096;
      v25 = v3;
      v13 = *(_WORD *)(v3 + 2);
      v14 = v13;
      if ( v13 >= 0x448u )
        v14 = 1096LL;
      if ( v14 >= *(unsigned int *)(v5 + 48) )
      {
        v12 = *(_DWORD *)(v5 + 48);
      }
      else if ( v13 < 0x448u )
      {
        v12 = v13;
      }
      *(_DWORD *)(v5 + 52) = v12;
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
    v15 = *(_DWORD *)(v3 + 12);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
    *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v1 + 1856) = 2688339;
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v1, v15);
    if ( !ReceiveQueueByQueueId )
    {
LABEL_32:
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v16);
      *(_DWORD *)(a1 + 40) = -1073741811;
      return v6;
    }
    if ( *(_DWORD *)(v5 + 4) == 12 )
    {
      v18 = *((unsigned __int16 *)ReceiveQueueByQueueId + 65);
      v19 = ReceiveQueueByQueueId + 16;
      v20 = *(_DWORD *)(v5 + 48);
      if ( v18 < v20 )
        v20 = v18;
      v21 = *(void **)(v5 + 40);
      *(_DWORD *)(v5 + 60) = v20;
      memmove(v21, v19, v20);
      *(_WORD *)(v25 + 2) = *(_WORD *)(v5 + 60);
      *(_DWORD *)(a1 + 40) = 0;
    }
    else
    {
      OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v5);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v4 = OidSourceHandle;
      if ( *(_BYTE **)(v23 + 72) != v4 )
        goto LABEL_32;
      v6 = 0;
    }
    *(_QWORD *)(v1 + 520) = 0LL;
    *(_DWORD *)(v1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v16);
    return v6;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v5 + 48) >= 0x43Cu )
  {
    if ( *(_DWORD *)(v5 + 52) < 0x43Cu )
    {
      *(_DWORD *)(v5 + 68) = 1084;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v5 + 68) = 1084;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
    goto LABEL_13;
  *(_QWORD *)(v5 + 60) = 0LL;
  return v6;
}
