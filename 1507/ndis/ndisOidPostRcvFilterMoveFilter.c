/*
 * XREFs of ndisOidPostRcvFilterMoveFilter @ 0x1C0038550
 * Callers:
 *     <none>
 * Callees:
 *     ndisFindReceiveFilterByFilterId @ 0x1C0038168 (ndisFindReceiveFilterByFilterId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0065540 (ndisIovFindVPortByVPortId.c)
 */

__int64 __fastcall ndisOidPostRcvFilterMoveFilter(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned int v5; // r14d
  __int64 *ReceiveFilterByFilterId; // rax
  __int64 *v7; // r14
  KIRQL v8; // r10
  __int64 VPortByVPortId; // rax
  __int64 v10; // r10
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8

  result = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(result + 40);
  v5 = *(_DWORD *)(v4 + 4);
  if ( *(_QWORD *)a1 )
  {
    result = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)result || (_DWORD)result == 65539 && (result = *(unsigned int *)(v3 + 120), (result & 4) != 0) )
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2691291;
      ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v3, v5);
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      v7 = ReceiveFilterByFilterId;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v8);
      VPortByVPortId = ndisIovFindVPortByVPortId(v3, *(unsigned int *)(v4 + 20));
      v11 = v7 + 4;
      v12 = VPortByVPortId;
      v13 = v7[4];
      v14 = (__int64 *)v7[5];
      if ( *(__int64 **)(v13 + 8) != v7 + 4 || (_QWORD *)*v14 != v11 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      --*(_DWORD *)(v10 + 864);
      v15 = *(_QWORD *)(v10 + 88);
      if ( *(_DWORD *)(v10 + 124) )
        --*(_DWORD *)(v15 + 652);
      else
        --*(_DWORD *)(v15 + 648);
      v16 = *(_QWORD *)(v12 + 872);
      *v11 = v16;
      v7[5] = v12 + 872;
      if ( *(_QWORD *)(v16 + 8) != v12 + 872 )
        __fastfail(3u);
      *(_QWORD *)(v16 + 8) = v11;
      *(_QWORD *)(v12 + 872) = v11;
      ++*(_DWORD *)(v12 + 864);
      result = *(_QWORD *)(v12 + 88);
      if ( *(_DWORD *)(v12 + 124) )
        ++*(_DWORD *)(result + 652);
      else
        ++*(_DWORD *)(result + 648);
      v7[22] = v12;
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  return result;
}
