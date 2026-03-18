/*
 * XREFs of KiActivateWaiterKQueue @ 0x140094338
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x140094210 (KiActivateWaiterQueueWithNoLocks.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 */

char __fastcall KiActivateWaiterKQueue(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 *v5; // rcx
  __int64 **v6; // rax

  LODWORD(v1) = *(_DWORD *)(a1 + 40);
  if ( (unsigned int)v1 < *(_DWORD *)(a1 + 44) )
  {
    v3 = (__int64 *)(a1 + 24);
    v4 = *(__int64 **)(a1 + 24);
    if ( v4 != (__int64 *)(a1 + 24) )
    {
      LOBYTE(v1) = a1 + 8;
      if ( *(_QWORD *)(a1 + 16) != a1 + 8 )
      {
        v5 = (__int64 *)*v4;
        v6 = (__int64 **)v4[1];
        if ( *(__int64 **)(*v4 + 8) != v4 || *v6 != v4 )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = (__int64)v6;
        *v4 = 0LL;
        LOBYTE(v1) = KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), a1, (__int64)v4);
        if ( (_BYTE)v1 )
        {
          --*(_DWORD *)(a1 + 4);
        }
        else
        {
          v1 = *v3;
          *v4 = *v3;
          v4[1] = (__int64)v3;
          if ( *(__int64 **)(v1 + 8) != v3 )
            __fastfail(3u);
          *(_QWORD *)(v1 + 8) = v4;
          *v3 = (__int64)v4;
        }
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v1;
}
