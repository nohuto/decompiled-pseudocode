/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1C00016C0
 * Callers:
 *     RaidNormalizeDeviceQueue @ 0x1C0001670 (RaidNormalizeDeviceQueue.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C00030BC (RiGetEnqueueReason.c)
 *     RiPeekDeviceQueue @ 0x1C000317C (RiPeekDeviceQueue.c)
 */

__int64 __fastcall RiNormalizeDeviceQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // r8
  __int64 v6; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  bool v11; // zf

  LOBYTE(a3) = a2;
  v3 = RiPeekDeviceQueue(a1, a2, a3);
  v6 = v3;
  if ( v3 )
  {
    *(_BYTE *)(v3 + 22) ^= (*(_BYTE *)(v3 + 22) ^ (16 * v5)) & 0x10;
    if ( (unsigned int)RiGetEnqueueReason(v4, v3, 0LL, v3) )
    {
      return 0LL;
    }
    else
    {
      v9 = *(_QWORD *)v6;
      v10 = *(_QWORD **)(v6 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || *v10 != v6 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      ++*(_DWORD *)(v8 + 76);
      if ( (*(_BYTE *)(v6 + 22) & 6) != 0 )
        --*(_DWORD *)(v8 + 20);
      else
        --*(_DWORD *)(v8 + 16);
      if ( (*(_BYTE *)(v6 + 22) & 8) != 0 )
        --*(_DWORD *)(v8 + 24);
      v11 = (*(_BYTE *)(v6 + 22) & 1) == 0;
      *(_BYTE *)(v6 + 20) = 0;
      if ( !v11 )
        *(_BYTE *)(v8 + 38) = 1;
    }
  }
  return v6;
}
