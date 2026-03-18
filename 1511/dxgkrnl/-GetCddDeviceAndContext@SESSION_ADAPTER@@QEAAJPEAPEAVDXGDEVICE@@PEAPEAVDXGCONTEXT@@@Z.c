/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C009F75C
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C009F874 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        SESSION_ADAPTER *this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3)
{
  __int64 v6; // r14
  __int64 v7; // rbp
  struct DXGDEVICE *v8; // rax
  unsigned int CddDevice; // ebx
  volatile signed __int64 *v11; // rax

  v6 = *(_QWORD *)(*(_QWORD *)this + 18600LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6 + 160, 0LL);
  *(_QWORD *)(v6 + 168) = KeGetCurrentThread();
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 1992LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 40, 0LL);
  *(_QWORD *)(v7 + 48) = KeGetCurrentThread();
  v8 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
  if ( v8 )
  {
    if ( a2 )
    {
      *a2 = v8;
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 7) + 64LL));
    }
    if ( a3 )
    {
      v11 = (volatile signed __int64 *)*((_QWORD *)this + 8);
      if ( *((_DWORD *)this + 13) != 1 )
        v11 = (volatile signed __int64 *)*v11;
      *a3 = (struct DXGCONTEXT *)v11;
      _InterlockedIncrement64(v11 + 4);
    }
    CddDevice = 0;
  }
  else
  {
    CddDevice = SESSION_ADAPTER::CreateCddDevice(this, a2, a3);
  }
  *(_QWORD *)(v7 + 48) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 40, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v6 + 168) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 160, 0LL);
  KeLeaveCriticalRegion();
  return CddDevice;
}
