/*
 * XREFs of GreGetBrushColor @ 0x1C00BD440
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005B574 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005B5A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 */

__int64 __fastcall GreGetBrushColor(HBRUSH a1, int a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1;
  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v7, a1);
  if ( v7[0] && (unsigned int)(*(_DWORD *)(v7[0] + 24LL) - 6) <= 1 )
    v4 = *(_DWORD *)(v7[0] + 84LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v7);
  GreReleaseHmgrSemaphore(v5);
  return v4;
}
