/*
 * XREFs of ndisAddReceiveQueueToList @ 0x1C0038510
 * Callers:
 *     ndisAllocateReceiveQueue @ 0x1C0038570 (ndisAllocateReceiveQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAddReceiveQueueToList(__int64 a1, __int64 a2)
{
  __int64 *v2; // r9
  unsigned int v3; // r8d
  __int64 *v4; // rax
  unsigned int v6; // r11d
  unsigned int v7; // ecx
  __int64 *v8; // rcx
  __int64 v9; // rax

  v2 = (__int64 *)(a1 + 3512);
  v3 = 0;
  v4 = *(__int64 **)(a1 + 3512);
  if ( v4 == (__int64 *)(a1 + 3512) )
  {
LABEL_6:
    v8 = (__int64 *)v4[1];
    v9 = *v8;
    *(_QWORD *)a2 = *v8;
    *(_QWORD *)(a2 + 8) = v8;
    if ( *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = a2;
    *v8 = a2;
    ++*(_DWORD *)(a1 + 3540);
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 48);
    while ( 1 )
    {
      v7 = *((_DWORD *)v4 + 12);
      if ( v7 == v6 )
        return (unsigned int)-1073741270;
      if ( v7 <= v6 )
      {
        v4 = (__int64 *)*v4;
        if ( v4 != v2 )
          continue;
      }
      goto LABEL_6;
    }
  }
  return v3;
}
