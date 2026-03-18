/*
 * XREFs of ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C001E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C004B3A8 (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall CFlipExBuffer::OpenSwapChainHandles(CFlipExBuffer *this, struct CSM_SWAPCHAIN_HANDLE_INFO *a2)
{
  int v4; // r15d
  __int64 v5; // rbx
  CFlipExBuffer *i; // rdi
  HANDLE *v8; // rsi
  void *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  memset(a2, 0, 0x100uLL);
  if ( *((_DWORD *)this + 62) )
  {
    v5 = 0LL;
    for ( i = (CFlipExBuffer *)*((_QWORD *)this + 29); ; i = *(CFlipExBuffer **)i )
    {
      if ( i == (CFlipExBuffer *)((char *)this + 232) )
      {
        *(_DWORD *)a2 = v5;
        return (unsigned int)v4;
      }
      v4 = CBufferRealization::OpenDxSurfaceHandle(
             (CFlipExBuffer *)((char *)i - 8),
             (*((_DWORD *)this + 41) & 0x200) != 0,
             0,
             &v9);
      if ( v4 < 0 )
        break;
      *((_QWORD *)a2 + v5 + 1) = v9;
      v5 = (unsigned int)(v5 + 1);
    }
    if ( (_DWORD)v5 )
    {
      v8 = (HANDLE *)((char *)a2 + 8);
      do
      {
        ObCloseHandle(*v8++, 1);
        --v5;
      }
      while ( v5 );
    }
  }
  return (unsigned int)v4;
}
