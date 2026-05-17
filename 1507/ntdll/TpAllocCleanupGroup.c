/*
 * XREFs of TpAllocCleanupGroup @ 0x1800738F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocCleanupGroup(_QWORD *a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  __int64 Heap; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 result; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h]
  unsigned __int64 v9; // [rsp+40h] [rbp+8h]

  if ( !a1 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3);
    return 3221225485LL;
  }
  else
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag | 8u, 80LL);
    v5 = (_QWORD *)Heap;
    v9 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *(_DWORD *)(Heap + 4) = 0;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_QWORD *)(Heap + 56) = 0LL;
      v6 = (_QWORD *)(Heap + 16);
      v6[1] = v6;
      *v6 = v6;
      v5[9] = v5 + 8;
      v5[8] = v5 + 8;
      result = 0LL;
      v5[4] = 0LL;
      v5[5] = 0LL;
      v5[6] = 0LL;
      v8 = 0;
      *a1 = v5;
    }
    else
    {
      result = 3221225495LL;
      v8 = -1073741801;
    }
    if ( (int)result < 0 )
    {
      if ( v5 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag, v9);
        return v8;
      }
    }
  }
  return result;
}
