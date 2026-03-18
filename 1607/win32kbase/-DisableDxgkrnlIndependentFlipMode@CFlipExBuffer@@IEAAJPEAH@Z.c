/*
 * XREFs of ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C00F3D90
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C001E6C8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z @ 0x1C00F4010 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z.c)
 * Callees:
 *     GreDxgkSetIndependentFlipMode @ 0x1C00C3C50 (GreDxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(CFlipExBuffer *this, int *a2)
{
  __int64 v3; // r8
  unsigned int v5; // eax
  void *v6; // rcx
  unsigned int v7; // esi
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 2);
  v9 = *((_QWORD *)this + 1);
  v5 = GreDxgkSetIndependentFlipMode(*((_QWORD *)this + 46), (__int64)&v9, v3, 0LL);
  v6 = (void *)*((_QWORD *)this + 46);
  *((_DWORD *)this + 89) = 0;
  v7 = v5;
  ObCloseHandle(v6, 0);
  *((_QWORD *)this + 46) = 0LL;
  if ( a2 )
    *a2 = 0;
  return v7;
}
