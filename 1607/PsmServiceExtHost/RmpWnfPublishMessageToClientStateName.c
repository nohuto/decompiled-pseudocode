/*
 * XREFs of RmpWnfPublishMessageToClientStateName @ 0x1800385C4
 * Callers:
 *     ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x180029578 (-SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpWnfPublishMessageToClientStateName(_QWORD *a1, _OWORD *a2, int a3, __int64 a4)
{
  unsigned int v7; // ebx
  char *Heap; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  RtlAcquireSRWLockExclusive(a4 + 24);
  v7 = 0;
  if ( *(_BYTE *)(a4 + 32)
    || (RmWnfTestFlags & 1) != 0
    || (int)RtlQueryWnfMetaNotification(&v13, 2LL, *a1, 0LL) >= 0 && !v13 )
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x2CuLL);
    v9 = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 2) = *a1;
      *(_OWORD *)(Heap + 28) = *a2;
      *((_DWORD *)Heap + 6) = 16;
      v10 = *(_QWORD **)(a4 + 8);
      if ( *v10 != a4 )
        __fastfail(3u);
      *v9 = a4;
      v9[1] = v10;
      *v10 = v9;
      *(_QWORD *)(a4 + 8) = v9;
      if ( !*(_BYTE *)(a4 + 32) )
      {
        v11 = *(_QWORD *)(a4 + 16);
        *(_BYTE *)(a4 + 32) = 1;
        TpPostWork(v11);
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = RtlPublishWnfStateData(*a1, 0LL, a2, 16LL, 0LL);
  }
  RtlReleaseSRWLockExclusive(a4 + 24);
  return v7;
}
