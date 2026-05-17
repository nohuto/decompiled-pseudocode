/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x180044644
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800478E0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x1800A58A0 (ZwReadVirtualMemory.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall PsspCaptureAuxiliaryPages(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v6; // ebx
  int v8; // edi
  int Section; // esi
  _OWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int64 result; // rax
  void *Heap; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  _OWORD *v17; // [rsp+60h] [rbp-20h] BYREF
  HANDLE Handle[3]; // [rsp+68h] [rbp-18h] BYREF

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
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (0x1000 * (unsigned __int128)1uLL) >> 64, 64LL);
    if ( !Heap )
      return 3221225626LL;
  }
  Handle[1] = (HANDLE)4096;
  Section = NtCreateSection(Handle, 983047LL, L"0");
  if ( Section >= 0 )
  {
    v17 = 0LL;
    v16 = 0LL;
    Section = ZwMapViewOfSection(Handle[0], -1LL, &v17, 0LL, 0LL, 0LL, &v16, 1, 0, 4);
    if ( Section >= 0 )
    {
      v10 = v17;
      memset(Heap, 0, 0x40uLL);
      v11 = 2147352576LL;
      if ( *a4 == 2147352576LL )
      {
        v12 = 14LL;
        do
        {
          *v10 = *(_OWORD *)v11;
          v10[1] = *(_OWORD *)(v11 + 16);
          v10[2] = *(_OWORD *)(v11 + 32);
          v10[3] = *(_OWORD *)(v11 + 48);
          v10[4] = *(_OWORD *)(v11 + 64);
          v10[5] = *(_OWORD *)(v11 + 80);
          v10[6] = *(_OWORD *)(v11 + 96);
          v10 += 8;
          v13 = *(_OWORD *)(v11 + 112);
          v11 += 128LL;
          *(v10 - 1) = v13;
          --v12;
        }
        while ( v12 );
        *(_QWORD *)v10 = *(_QWORD *)v11;
      }
      else if ( (int)ZwReadVirtualMemory(a2, *a4, v10, 4096LL, 0LL) < 0 )
      {
LABEL_12:
        NtUnmapViewOfSection(-1LL, v17);
        *(_DWORD *)(a1 + 888) = v6;
        *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
        *(HANDLE *)(a1 + 896) = Handle[0];
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
    NtClose(Handle[0]);
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
  return (unsigned int)Section;
}
