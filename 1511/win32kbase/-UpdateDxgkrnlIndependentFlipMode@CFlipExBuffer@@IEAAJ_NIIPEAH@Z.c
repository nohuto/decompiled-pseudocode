/*
 * XREFs of ?UpdateDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJ_NIIPEAH@Z @ 0x1C00E1920
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003E52C (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z @ 0x1C00E1890 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z.c)
 * Callees:
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z @ 0x1C004D56C (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z.c)
 *     GreDxgkSetIndependentFlipMode @ 0x1C00B8850 (GreDxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::UpdateDxgkrnlIndependentFlipMode(CFlipExBuffer *this, char a2, int a3)
{
  char *v3; // r14
  char *v4; // rdi
  int v8; // ebx
  int v9; // edx
  __int64 v10; // r8
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v3 = (char *)this + 272;
  v4 = (char *)*((_QWORD *)this + 34);
  v8 = -1073741275;
  while ( v4 != v3 )
  {
    v9 = *((_DWORD *)this + 45);
    Handle = 0LL;
    v8 = CBufferRealization::OpenDxSurfaceHandle((CBufferRealization *)(v4 - 8), v9, &Handle);
    if ( v8 >= 0 )
    {
      v10 = *((_QWORD *)this + 2);
      v12 = *((_QWORD *)this + 1);
      v8 = GreDxgkSetIndependentFlipMode((__int64)Handle, (__int64)&v12, v10);
      ObCloseHandle(Handle, 1);
      break;
    }
    v4 = *(char **)v4;
  }
  if ( a2 && v8 >= 0 )
    *((_DWORD *)this + 98) = a3;
  return (unsigned int)v8;
}
