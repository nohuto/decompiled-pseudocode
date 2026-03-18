/*
 * XREFs of ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IPEBU_LUID@@_KIPEAH@Z @ 0x1C00DF9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z @ 0x1C001FD8C (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z.c)
 *     GreDxgkSetIndependentFlipMode @ 0x1C00B6090 (GreDxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::SetIndependentFlip(
        CFlipExBuffer *this,
        char a2,
        char a3,
        __int64 a4,
        const struct _LUID *a5,
        unsigned __int64 a6)
{
  char *v7; // r14
  int v8; // esi
  char *i; // rdi
  int v10; // edx
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  if ( a2 )
  {
    *((_DWORD *)this + 101) = (a3 != 0) + 1;
  }
  else
  {
    *((_DWORD *)this + 101) = 0;
    *((_BYTE *)this + 408) = 0;
  }
  v7 = (char *)this + 264;
  v8 = 0;
  for ( i = (char *)*((_QWORD *)this + 33); i != v7; i = *(char **)i )
  {
    if ( *((_DWORD *)i + 4) == 2 )
    {
      v10 = *((_DWORD *)this + 44);
      Handle = 0LL;
      v8 = CBufferRealization::OpenDxSurfaceHandle((CBufferRealization *)(i - 8), v10, &Handle);
      if ( v8 >= 0 )
      {
        v8 = GreDxgkSetIndependentFlipMode((__int64)Handle, (__int64)a5, a6);
        ObCloseHandle(Handle, 1);
        return (unsigned int)v8;
      }
    }
  }
  return (unsigned int)v8;
}
