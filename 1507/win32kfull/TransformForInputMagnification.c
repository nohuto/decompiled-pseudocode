/*
 * XREFs of TransformForInputMagnification @ 0x1C01C2810
 * Callers:
 *     ApplyTransforms @ 0x1C01C1EC0 (ApplyTransforms.c)
 *     TransformPhysicalPointToScreen @ 0x1C01C2998 (TransformPhysicalPointToScreen.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C0008428 (AcquireMagInputLock.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     ConvertPointCoordinates @ 0x1C01C2018 (ConvertPointCoordinates.c)
 *     MagInputTransform @ 0x1C0203834 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C02038FC (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  int v11; // ecx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  int v16[6]; // [rsp+30h] [rbp-18h] BYREF

  AcquireMagInputLock();
  v6 = MagInputTransform();
  if ( v6 && PtInRect((_DWORD *)(v6 + 16), *a3) )
  {
    MagnificationTransformPoint(v7, a3);
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v9 = 0LL)
        : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
          !(_DWORD)v9) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v11 = 0)
          : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v11) )
      {
        v10 = (_OWORD *)(*(_QWORD *)(a1 + 264) + 60LL);
      }
      else
      {
        v10 = (_OWORD *)(*(_QWORD *)(a1 + 264) + 28LL);
      }
    }
    else
    {
      v10 = (_OWORD *)(*(_QWORD *)(a1 + 264) + 44LL);
    }
    v12 = *a3;
    v13 = *(_OWORD *)(a1 + 140);
    *(_OWORD *)v16 = *v10;
    v15 = v13;
    if ( !(unsigned int)ConvertPointCoordinates(v12, v16, (int *)&v15, a2) )
      *a2 = 0LL;
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
