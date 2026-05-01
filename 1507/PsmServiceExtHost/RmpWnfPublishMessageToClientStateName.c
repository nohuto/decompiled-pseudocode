/*
 * XREFs of RmpWnfPublishMessageToClientStateName @ 0x180001E90
 * Callers:
 *     ?SendData@WnfStateRegistration@ExecutionModel@@QEAAJ_KPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180001DC8 (-SendData@WnfStateRegistration@ExecutionModel@@QEAAJ_KPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK.c)
 *     ?SendData@ResourceSetServerProxy@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180033494 (-SendData@ResourceSetServerProxy@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_RE.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 */

__int64 __fastcall RmpWnfPublishMessageToClientStateName(_QWORD *a1, _OWORD *a2, int a3, __int64 a4)
{
  unsigned int v7; // ebx
  __int64 Heap; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  RtlAcquireSRWLockExclusive(a4 + 24);
  v7 = 0;
  if ( *(_BYTE *)(a4 + 32)
    || (*((_BYTE *)RmSvcGlobals + 2096) & 1) != 0
    || (int)RtlQueryWnfMetaNotification(&v13, 2LL, *a1, 0LL) >= 0 && !v13 )
  {
    Heap = RmpAllocateHeap(0x4CuLL);
    v10 = (_QWORD *)Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 16) = *a1;
      *(_OWORD *)(Heap + 28) = *a2;
      *(_OWORD *)(Heap + 44) = a2[1];
      *(_OWORD *)(Heap + 60) = a2[2];
      *(_DWORD *)(Heap + 24) = 48;
      v11 = *(_QWORD **)(a4 + 8);
      *v10 = a4;
      v10[1] = v11;
      if ( *v11 != a4 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(a4 + 8) = v10;
      if ( !*(_BYTE *)(a4 + 32) )
      {
        v12 = *(_QWORD *)(a4 + 16);
        *(_BYTE *)(a4 + 32) = 1;
        TpPostWork(v12);
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = RtlPublishWnfStateData(*a1, 0LL, a2, 48LL, 0LL);
  }
  RtlReleaseSRWLockExclusive(a4 + 24);
  return v7;
}
