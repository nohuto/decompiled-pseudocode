/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00181B0
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C00179A0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C0019104 (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 *     ??0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x1C0019678 (--0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C001A834 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@@Z @ 0x1C001AE9C (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  bool v6; // zf
  BOOL v7; // edi
  struct _ERESOURCE *v8; // rbx
  int v9; // ebp
  __int64 v10; // rbx
  DirectComposition::CCompositionFrame *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  struct DirectComposition::CBatch **v14; // r12
  struct DirectComposition::CBatch *v15; // rcx
  struct DirectComposition::CBatch *v16; // rdi
  struct DirectComposition::CBatch **v17; // r14
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  char *v21; // rcx
  struct DirectComposition::CBatch *v23; // rax
  struct DirectComposition::CBatch **v24; // rdx
  struct DirectComposition::CBatch *v25; // rax
  BOOL v26; // [rsp+60h] [rbp+8h]
  struct DirectComposition::CBatch *v27; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 *v28; // [rsp+70h] [rbp+18h]

  v28 = a3;
  v6 = PsGetCurrentProcess(this) == (_QWORD)g_pepDwm;
  *a3 = 0LL;
  v7 = v6;
  v8 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  DirectComposition::CConnection::s_minSafeFeatureLevel = *((_DWORD *)a2 + 7);
  v26 = v6;
  DirectComposition::CConnection::s_maxHardwareFeatureLevel = *((_DWORD *)a2 + 8);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v8, 1u);
  if ( v7 && !DirectComposition::CConnection::s_pDwmRenderThread )
    DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
  if ( *((_DWORD *)this + 37) )
  {
    v9 = -1073741801;
    v10 = 0LL;
    if ( (int)IsWin32AllocPoolImplSupported_0() < 0 )
      v11 = 0LL;
    else
      v11 = (DirectComposition::CCompositionFrame *)Win32AllocPoolImpl_0();
    if ( v11 )
      v12 = DirectComposition::CCompositionFrame::CCompositionFrame(v11, a2);
    else
      v12 = 0LL;
    if ( v12 )
    {
      v10 = v12;
      v9 = 0;
    }
    if ( v9 >= 0 )
    {
      v9 = 0;
      *((_QWORD *)this + 20) = *(_QWORD *)a2;
      v13 = *(_QWORD *)(v10 + 64);
      v27 = 0LL;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
      {
        v9 = -1073740024;
        DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)v10);
      }
      else
      {
        DirectComposition::CConnection::GetNewBatches(this, &v27);
        v14 = (struct DirectComposition::CBatch **)((char *)this + 136);
        v15 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
        if ( v15 )
        {
          do
          {
            v24 = (struct DirectComposition::CBatch **)v15;
            *(_BYTE *)(*((_QWORD *)v15 + 1) + 49LL) = 0;
            v15 = *(struct DirectComposition::CBatch **)v15;
          }
          while ( v15 );
          v16 = *v14;
          v25 = v27;
          *v14 = 0LL;
          *v24 = v25;
          v27 = v16;
        }
        else
        {
          v16 = v27;
        }
        v17 = &v27;
        if ( v16 )
        {
          do
          {
            if ( DirectComposition::CBatch::ShouldDefer(
                   v16,
                   *((_QWORD *)this + 20),
                   *((struct DirectComposition::CEvent **)this + 11)) )
            {
              *(_BYTE *)(*((_QWORD *)v16 + 1) + 49LL) = 1;
              v23 = *(struct DirectComposition::CBatch **)v16;
              *((_QWORD *)v16 + 7) = 0LL;
              *v17 = v23;
              *v14 = v16;
              v14 = (struct DirectComposition::CBatch **)v16;
              *(_QWORD *)v16 = 0LL;
            }
            else
            {
              if ( (*((_BYTE *)v16 + 32) & 8) != 0 )
                *(_BYTE *)(*((_QWORD *)v16 + 1) + 249LL) = 1;
              *((_QWORD *)v16 + 7) = v13;
              v17 = (struct DirectComposition::CBatch **)v16;
            }
            v16 = *v17;
          }
          while ( *v17 );
          v16 = v27;
        }
        *((_QWORD *)this + 21) = *((_QWORD *)a2 + 1);
        *((_DWORD *)this + 44) = *((_DWORD *)a2 + 5);
        *((_DWORD *)this + 45) = *((_DWORD *)a2 + 6);
        if ( v16 )
          *(_QWORD *)(v10 + 80) = v16;
        if ( v26 && g_pTokenManager )
          CTokenManager::ReleaseToFrameInternal(v15, (struct DirectComposition::CCompositionFrame *)v10);
        ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
        *((_BYTE *)this + 208) = 1;
        _InterlockedIncrement((volatile signed __int32 *)v10);
        v18 = (_QWORD *)((char *)this + 184);
        v19 = *((_QWORD *)this + 23);
        v20 = (_QWORD *)(v10 + 8);
        if ( *(DirectComposition::CConnection **)(v19 + 8) != (DirectComposition::CConnection *)((char *)this + 184) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v10 + 16) = v18;
        *(_QWORD *)(v19 + 8) = v20;
        *v18 = v20;
        v21 = (char *)this + 200;
        if ( *((_BYTE *)this + 208) )
          ExReleasePushLockExclusiveEx(v21, 0LL);
        else
          ExReleasePushLockSharedEx(v21);
        *v28 = *(_QWORD *)(v10 + 64);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
      {
        if ( *(_DWORD *)(v10 + 72) != 3 )
          DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)v10);
        Win32FreePool(v10);
      }
    }
  }
  else
  {
    v9 = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
