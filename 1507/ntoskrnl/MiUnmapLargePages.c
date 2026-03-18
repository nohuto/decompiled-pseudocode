/*
 * XREFs of MiUnmapLargePages @ 0x14015D84C
 * Callers:
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 *     MiReleaseLargePteMappings @ 0x14014C0D4 (MiReleaseLargePteMappings.c)
 *     MiUnmapLargeDriver @ 0x1406A1198 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r13d
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  _KPROCESS *Process; // rcx
  char *v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+20h] [rbp-128h]
  __int64 v18; // [rsp+28h] [rbp-120h]
  char *v19; // [rsp+30h] [rbp-118h]
  int v20; // [rsp+40h] [rbp-108h] BYREF
  __int16 v21; // [rsp+44h] [rbp-104h]
  __int64 v22; // [rsp+48h] [rbp-100h]
  __int64 v23; // [rsp+50h] [rbp-F8h]
  __int64 v24; // [rsp+58h] [rbp-F0h]

  v22 = 20LL;
  v3 = a3;
  if ( a3 == 9 )
    v3 = 15;
  v4 = a2 >> 21;
  v20 = 0;
  v5 = a2;
  v21 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v18 = a2 >> 21;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v7 = v4 << 9;
    v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = v8 + 8 * (((a1 & 0xFFF) + a2 + 4095) >> 12);
    Process = (_KPROCESS *)(v4 << 12);
    v17 = v9;
    v11 = (char *)((v4 << 12) + v8);
    v19 = v11;
    v12 = (unsigned __int64)v11;
    if ( (unsigned __int64)v11 < v9 )
    {
      v13 = (unsigned __int64)(v11 + 0x90482413000LL);
      do
      {
        v14 = *(_QWORD *)v12;
        if ( v13 <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow(Process, v14) && (v14 & 1) != 0 && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v15 = *(_QWORD *)&Process[2].ProcessLock;
            if ( v15 )
            {
              v16 = *(_QWORD *)(v15 + 8 * ((v12 >> 3) & 0x1FF));
              if ( (v16 & 0x20) != 0 )
                v14 |= 0x20uLL;
              if ( (v16 & 0x42) != 0 )
                v14 |= 0x42uLL;
            }
          }
          v9 = v17;
        }
        if ( !v14 )
          break;
        *(_QWORD *)v12 = 0LL;
        if ( v13 <= 0x7F8 )
        {
          MiWritePteShadow(v12, 0LL);
          v9 = v17;
        }
        v12 += 8LL;
        v13 += 8LL;
      }
      while ( v12 < v9 );
      v4 = v18;
      v11 = v19;
      Process = (_KPROCESS *)(8 * v7);
    }
    if ( (char *)v12 != v11 )
      MiInsertTbFlushEntry(
        (__int64)&v20,
        ((v7 << 28) + (v8 << 25)) >> 16,
        (__int64)(v12 - (_QWORD)Process - v8) >> 3,
        0);
    v5 = (v5 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  MiInsertTbFlushEntry((__int64)&v20, a1, v4, 1);
  MiReturnSystemVa(a1, v5 + a1, v3, (__int64)&v20);
}
