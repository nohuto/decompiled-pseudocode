/*
 * XREFs of ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEAH@Z @ 0x1C00F3E30
 * Callers:
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z @ 0x1C00F4010 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z.c)
 * Callees:
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C004B3A8 (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     GreDxgkSetIndependentFlipMode @ 0x1C00C3C50 (GreDxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(CFlipExBuffer *this, int a2, int a3, int *a4)
{
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  v7 = -1073741275;
  if ( *((_DWORD *)this + 62) )
  {
    v8 = *((_QWORD *)this + 29);
    Handle = 0LL;
    v7 = CBufferRealization::OpenDxSurfaceHandle((CBufferRealization *)(v8 - 8), 0, 1, &Handle);
    if ( v7 >= 0 )
    {
      v9 = *((_QWORD *)this + 2);
      v11 = *((_QWORD *)this + 1);
      v7 = GreDxgkSetIndependentFlipMode((__int64)Handle, (__int64)&v11, v9, 1LL);
      if ( v7 < 0 )
      {
        ObCloseHandle(Handle, 0);
      }
      else
      {
        *((_QWORD *)this + 46) = Handle;
        *((_DWORD *)this + 89) = 1;
        *((_DWORD *)this + 94) = a2;
        *((_DWORD *)this + 95) = a3;
      }
    }
  }
  return (unsigned int)v7;
}
