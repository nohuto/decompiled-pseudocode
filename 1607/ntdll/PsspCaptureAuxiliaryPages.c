/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x180067344
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180059160 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x1800A6C00 (ZwReadVirtualMemory.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall PsspCaptureAuxiliaryPages(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v6; // ebx
  int v8; // edi
  __int64 result; // rax
  int v10; // esi
  _OWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  void *Heap; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  _OWORD *v17; // [rsp+60h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return 3221225621LL;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    v16 = 64LL;
    result = ZwAllocateVirtualMemory(-1LL, &Heap, 0LL, &v16, 4096, 4);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
    if ( !Heap )
      return 3221225626LL;
  }
  v19 = 4096LL;
  v10 = NtCreateSection(&Handle, 983047LL, "0", &v19, 4, 0x8000000, 0LL);
  if ( v10 >= 0 )
  {
    v17 = 0LL;
    v16 = 0LL;
    v10 = ZwMapViewOfSection(Handle, -1LL, &v17, 0LL, 0LL, 0LL, &v16, 1, 0, 4);
    if ( v10 >= 0 )
    {
      v11 = v17;
      memset(Heap, 0, 0x40uLL);
      v12 = 2147352576LL;
      if ( *a4 == 2147352576LL )
      {
        v13 = 14LL;
        do
        {
          *v11 = *(_OWORD *)v12;
          v11[1] = *(_OWORD *)(v12 + 16);
          v11[2] = *(_OWORD *)(v12 + 32);
          v11[3] = *(_OWORD *)(v12 + 48);
          v11[4] = *(_OWORD *)(v12 + 64);
          v11[5] = *(_OWORD *)(v12 + 80);
          v11[6] = *(_OWORD *)(v12 + 96);
          v11 += 8;
          v14 = *(_OWORD *)(v12 + 112);
          v12 += 128LL;
          *(v11 - 1) = v14;
          --v13;
        }
        while ( v13 );
        *(_QWORD *)v11 = *(_QWORD *)v12;
      }
      else if ( (int)ZwReadVirtualMemory(a2, *a4, v11, 4096LL, 0LL) < 0 )
      {
LABEL_12:
        NtUnmapViewOfSection(-1LL, v17);
        *(_DWORD *)(a1 + 888) = v6;
        *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
        *(_QWORD *)(a1 + 896) = Handle;
        *(_QWORD *)(a1 + 904) = Heap;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      if ( (int)ZwQueryVirtualMemory(a2, *a4, 0LL, (char *)Heap + 8) >= 0 )
      {
        v6 = 1;
        *(_QWORD *)Heap = *a4;
        *((_QWORD *)Heap + 7) = MEMORY[0x7FFE0014];
      }
      goto LABEL_12;
    }
    NtClose(Handle);
  }
  if ( v8 )
  {
    v16 = 0LL;
    ZwFreeVirtualMemory(-1LL, &Heap, &v16, 0x8000LL);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  }
  return (unsigned int)v10;
}
