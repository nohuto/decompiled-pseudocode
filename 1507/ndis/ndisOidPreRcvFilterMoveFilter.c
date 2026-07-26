/*
 * XREFs of ndisOidPreRcvFilterMoveFilter @ 0x1C0038F90
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C0038168 (ndisFindReceiveFilterByFilterId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0065540 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisOidPreRcvFilterMoveFilter(__int64 a1)
{
  char v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rsi
  _DWORD *v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // r12d
  _BYTE *OidSourceHandle; // rax
  _BYTE *v9; // r15
  __int64 *ReceiveFilterByFilterId; // rax
  __int64 *v11; // r13
  KIRQL v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rdx

  v2 = 1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD **)(v3 + 40);
  if ( *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_2;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x18u )
  {
    *(_DWORD *)(v3 + 56) = 24;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( !v4 )
      return 0;
    v6 = *(_QWORD *)(v4 + 4672);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 8) & 3) == 3 )
      {
        if ( *(_QWORD *)(v4 + 4744) )
        {
          v7 = v5[1];
          if ( v7 )
          {
            OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v3);
            v9 = OidSourceHandle;
            if ( !OidSourceHandle || *OidSourceHandle != 18 )
            {
LABEL_2:
              *(_DWORD *)(a1 + 40) = -1073741637;
              return v2;
            }
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
            *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v4 + 1856) = 2691198;
            ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v4, v7);
            *(_QWORD *)(v4 + 520) = 0LL;
            *(_DWORD *)(v4 + 1856) = 0;
            v11 = ReceiveFilterByFilterId;
            KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v12);
            if ( v11 )
            {
              if ( (_BYTE *)v11[8] == v9 )
              {
                v13 = v11[22];
                if ( v13 )
                {
                  if ( v5[2] == *((_DWORD *)v11 + 36) && *(_QWORD *)(v5 + 3) == *(_DWORD *)(v13 + 124) )
                  {
                    v14 = (unsigned int)v5[5];
                    if ( v5[3] != (_DWORD)v14 )
                    {
                      if ( ndisIovFindVPortByVPortId(v4, v14) )
                        return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(_DWORD *)(a1 + 40) = -1073741811;
  }
  return v2;
}
