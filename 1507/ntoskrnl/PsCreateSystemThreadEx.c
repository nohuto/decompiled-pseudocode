/*
 * XREFs of PsCreateSystemThreadEx @ 0x1404F927C
 * Callers:
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     ExpCreateSystemThreadForNode @ 0x1404FA334 (ExpCreateSystemThreadForNode.c)
 *     KiStartDpcThread @ 0x14059A1D4 (KiStartDpcThread.c)
 *     MiStartZeroPageWorkers @ 0x1407C97DC (MiStartZeroPageWorkers.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspCreateThread @ 0x140450CE0 (PspCreateThread.c)
 */

NTSTATUS __fastcall PsCreateSystemThreadEx(
        _QWORD *a1,
        int a2,
        __m128i *a3,
        void *a4,
        _OWORD *a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8,
        _DWORD *a9)
{
  __int64 v10; // r9
  _OWORD *v12; // r8
  struct _EX_RUNDOWN_REF *v14; // r12
  void *v15; // r15
  int v16; // eax
  int ActiveGroupCount; // ecx
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  unsigned __int8 *v20; // rdx
  _QWORD *v22; // [rsp+78h] [rbp-88h]
  __m128i v23; // [rsp+88h] [rbp-78h] BYREF
  __m128i v24; // [rsp+98h] [rbp-68h]
  __m128i v25; // [rsp+A8h] [rbp-58h]
  _QWORD v26[50]; // [rsp+C0h] [rbp-40h] BYREF

  v10 = a7;
  v12 = a5;
  v22 = a1;
  if ( a4 )
  {
    v15 = a4;
    v14 = 0LL;
  }
  else
  {
    v14 = (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess;
    v15 = 0LL;
    memset(v26, 0, 0x188uLL);
    v16 = 4096;
    HIDWORD(v26[0]) = 4096;
    if ( a8 )
    {
      *(_OWORD *)&v26[39] = *a8;
    }
    else
    {
      ActiveGroupCount = KeQueryActiveGroupCount();
      LOWORD(v26[40]) = _InterlockedIncrement(&PspSystemThreadAssignment) % ActiveGroupCount;
      v26[39] = qword_1403D15E8[LOWORD(v26[40])];
      v16 = HIDWORD(v26[0]);
    }
    a1 = v22;
    v12 = a5;
    v10 = a7;
    if ( a9 )
    {
      HIDWORD(v26[0]) = v16 | 0x4000;
      HIDWORD(v26[30]) = *a9;
    }
  }
  if ( a3 )
  {
    v18 = a3[1];
    v23 = *a3;
    v19 = a3[2];
    v24 = v18;
    v24.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) | 0x200;
    v25 = v19;
  }
  else
  {
    v23.m128i_i32[0] = 48;
    v25 = 0LL;
    v23.m128i_i64[1] = 0LL;
    v24.m128i_i32[2] = 512;
    v24.m128i_i64[0] = 0LL;
  }
  v20 = (unsigned __int8 *)v26;
  if ( a4 )
    v20 = 0LL;
  return PspCreateThread(a1, a2, (__int64)&v23, v15, v14, v20, v12, 0LL, 0LL, 0, a6, v10, 0LL);
}
