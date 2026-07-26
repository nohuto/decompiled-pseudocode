/*
 * XREFs of ndisOidPreRcvFilterClearFilter @ 0x1C00387E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C0038168 (ndisFindReceiveFilterByFilterId.c)
 */

char __fastcall ndisOidPreRcvFilterClearFilter(__int64 a1)
{
  char v2; // si
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned int v6; // r15d
  _BYTE *OidSourceHandle; // rax
  _BYTE *v8; // rbp
  __int64 *ReceiveFilterByFilterId; // rax
  __int64 *v10; // r15
  KIRQL v11; // r10

  v2 = 1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(v3 + 40);
  if ( *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_15;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x10u )
  {
    *(_DWORD *)(v3 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( !v4 )
      return 0;
    v6 = *(_DWORD *)(v5 + 12);
    if ( !v6 )
    {
LABEL_8:
      *(_DWORD *)(a1 + 40) = -1073741811;
      return v2;
    }
    OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v3);
    v8 = OidSourceHandle;
    if ( OidSourceHandle && *OidSourceHandle == 18 )
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
      *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v4 + 1856) = 2689854;
      ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v4, v6);
      *(_QWORD *)(v4 + 520) = 0LL;
      *(_DWORD *)(v4 + 1856) = 0;
      v10 = ReceiveFilterByFilterId;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v11);
      if ( v10 && (_BYTE *)v10[8] == v8 && *(_DWORD *)(v5 + 8) == *((_DWORD *)v10 + 36) )
        return 0;
      goto LABEL_8;
    }
LABEL_15:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
