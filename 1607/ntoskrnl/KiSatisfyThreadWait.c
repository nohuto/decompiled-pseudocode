/*
 * XREFs of KiSatisfyThreadWait @ 0x1401DA7B8
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiExitThreadWait @ 0x1400F06F0 (KiExitThreadWait.c)
 */

__int64 __fastcall KiSatisfyThreadWait(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  char v6; // r14
  __int64 v8; // r12
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rax

  v5 = a4;
  *(_BYTE *)(a2 + 388) = 2;
  v6 = (char)a3;
  *(_QWORD *)(a2 + 64) = 0LL;
  v8 = *(_QWORD *)(a2 + 200);
  if ( a5 )
  {
    v10 = a4 + 48LL * (unsigned __int8)a5;
    do
    {
      if ( *(_BYTE *)(v5 + 17) < 5u )
      {
        v11 = *(volatile signed __int32 **)(v5 + 32);
        KiAcquireKobjectLockSafe(v11);
        if ( *(_BYTE *)(v5 + 17) == 4 )
        {
          v12 = *(_QWORD *)v5;
          v13 = *(_QWORD **)(v5 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v13 != v5 )
            __fastfail(3u);
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
        }
        _InterlockedAnd(v11, 0xFFFFFF7F);
      }
      v5 += 48LL;
    }
    while ( v5 != v10 );
  }
  LOBYTE(a3) = v6;
  KiExitThreadWait(a1, a2, a3, a4);
  return v8;
}
