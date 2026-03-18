/*
 * XREFs of TransformForInputMagnification @ 0x1C01C3680
 * Callers:
 *     TransformPhysicalPointToScreen @ 0x1C01C37E4 (TransformPhysicalPointToScreen.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C000D61C (AcquireMagInputLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ConvertPointCoordinates @ 0x1C01C32DC (ConvertPointCoordinates.c)
 *     MagInputTransform @ 0x1C01FAEF4 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C01FAFBC (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _OWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int128 v27; // [rsp+20h] [rbp-28h] BYREF
  int v28[6]; // [rsp+30h] [rbp-18h] BYREF

  AcquireMagInputLock();
  v6 = MagInputTransform();
  if ( v6 && PtInRect((_DWORD *)(v6 + 16), *a3) )
  {
    MagnificationTransformPoint(v7, a3);
    if ( (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 408)
        ? (v13 = 0LL)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v12,
                                                       v14,
                                                       v15)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v13) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 408)
          ? (v23 = 0)
          : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v20,
                                                         v21,
                                                         v22)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v23) )
      {
        v16 = (_OWORD *)(*(_QWORD *)(a1 + 280) + 60LL);
      }
      else
      {
        v16 = (_OWORD *)(*(_QWORD *)(a1 + 280) + 28LL);
      }
    }
    else
    {
      v16 = (_OWORD *)(*(_QWORD *)(a1 + 280) + 44LL);
    }
    v24 = *a3;
    v25 = *(_OWORD *)(a1 + 140);
    *(_OWORD *)v28 = *v16;
    v27 = v25;
    if ( !(unsigned int)ConvertPointCoordinates(v24, v28, (int *)&v27, a2) )
      *a2 = 0LL;
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
