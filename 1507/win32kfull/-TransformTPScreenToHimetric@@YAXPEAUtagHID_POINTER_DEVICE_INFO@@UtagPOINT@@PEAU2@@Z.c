/*
 * XREFs of ?TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01F2714
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1330 (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1474 (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

void __fastcall TransformTPScreenToHimetric(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  __int64 v5; // rcx
  __m128i *v6; // rax
  int v7; // ecx
  __m128i v8; // xmm6

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v5 = 0LL)
      : (v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1),
        !(_DWORD)v5) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v7 = 0)
        : (v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
          v7) )
    {
      v6 = (__m128i *)(*((_QWORD *)a1 + 33) + 60LL);
    }
    else
    {
      v6 = (__m128i *)(*((_QWORD *)a1 + 33) + 28LL);
    }
  }
  else
  {
    v6 = (__m128i *)(*((_QWORD *)a1 + 33) + 44LL);
  }
  v8 = *v6;
  a3->x = EngMulDiv(a2.x, *((_DWORD *)a1 + 37), _mm_cvtsi128_si32(_mm_srli_si128(*v6, 8)) - _mm_cvtsi128_si32(*v6));
  a3->y = EngMulDiv(
            a2.y,
            *((_DWORD *)a1 + 38),
            _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)));
}
