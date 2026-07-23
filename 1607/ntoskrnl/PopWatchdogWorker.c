/*
 * XREFs of PopWatchdogWorker @ 0x14020B648
 * Callers:
 *     <none>
 * Callees:
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PopResolveWatchdogParam @ 0x14020B2E4 (PopResolveWatchdogParam.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14020B5AC (PopUpdateWatchdogNoWorkersEvent.c)
 */

void __fastcall PopWatchdogWorker(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // ecx
  ULONG_PTR SessionById; // rax
  ULONG_PTR v7; // rsi
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rbx
  ULONG_PTR BugCheckParameter4; // rax
  __int128 v11; // [rsp+48h] [rbp-19h]
  __int128 v12; // [rsp+58h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp+7h]
  __m128i v14; // [rsp+70h] [rbp+Fh]

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 216) && MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(a1 + 208) )
  {
    v14 = *(__m128i *)(a1 + 224);
    v11 = *(_OWORD *)(a1 + 240);
    v12 = *(_OWORD *)(a1 + 256);
    v13 = *(_QWORD *)(a1 + 272);
    KeReleaseSpinLock(&PopWatchdogLock, v2);
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
    if ( v5 == -1 )
      SessionById = 0LL;
    else
      SessionById = MmGetSessionById(v5, v3, v4);
    if ( SessionById )
      MmAttachSession(SessionById);
    v7 = PopResolveWatchdogParam(v11, v13);
    v8 = PopResolveWatchdogParam(*((__int64 *)&v11 + 1), SBYTE1(v13));
    v9 = PopResolveWatchdogParam(v12, SBYTE2(v13));
    BugCheckParameter4 = PopResolveWatchdogParam(*((__int64 *)&v12 + 1), SBYTE3(v13));
    KeBugCheckEx(v14.m128i_u32[2], v7, v8, v9, BugCheckParameter4);
  }
  *(_BYTE *)(a1 + 21) = 0;
  PopUpdateWatchdogNoWorkersEvent(a1);
  KeReleaseSpinLock(&PopWatchdogLock, v2);
}
