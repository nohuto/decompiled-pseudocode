/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x180076848
 * Callers:
 *     EtwpSwitchBuffer @ 0x180011254 (EtwpSwitchBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800766E0 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // r14d
  unsigned __int32 v6; // eax
  _DWORD *v7; // rbx
  _QWORD *v8; // rdx
  char *v9; // rax
  _DWORD *v10; // rdx
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  v13 = *(unsigned int *)(a1 + 216);
  if ( a2 )
  {
    while ( 1 )
    {
      v12 = 0LL;
      v6 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      if ( v6 > *(_DWORD *)(a1 + 220) )
        break;
      v12 = (void *)(*(_QWORD *)(a1 + 432) + v13 * (v6 - 1));
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v13, 4096, 4) < 0 )
        break;
      v7 = v12;
      memset(v12, 0, 0x48uLL);
      v7[2] = 72;
      *v7 = *(_DWORD *)(a1 + 208);
      *((_WORD *)v7 + 21) = *(_WORD *)(a1 + 20) | 0x8000;
      RtlEnterCriticalSection(a1 + 88);
      v8 = *(_QWORD **)(a1 + 248);
      v9 = (char *)v12 + 56;
      *((_QWORD *)v12 + 7) = a1 + 240;
      *((_QWORD *)v9 + 1) = v8;
      if ( *v8 != a1 + 240 )
        __fastfail(3u);
      *v8 = v9;
      v10 = v12;
      *(_QWORD *)(a1 + 248) = v9;
      v10[11] = 0;
      *((_QWORD *)v10 + 4) = 0LL;
      *((_QWORD *)v10 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 424));
      **(_QWORD **)(a1 + 264) = v10 + 8;
      *(_QWORD *)(a1 + 264) = v10 + 8;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 232));
      RtlLeaveCriticalSection(a1 + 88);
      ++v2;
      if ( ++v3 >= a2 )
        return v2;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
  }
  return v2;
}
