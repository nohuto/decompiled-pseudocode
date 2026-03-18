/*
 * XREFs of ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z @ 0x180055E64
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18004A190 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x180015AFC (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x180018E98 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AreActiveResources@CD3DResourceManager@@QEAA_NXZ @ 0x18008ABD8 (-AreActiveResources@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18008B180 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18008B4C0 (-ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18008BAE0 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z @ 0x18008BB7C (-RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EndFrame@CD3DResourceManager@@QEAAXXZ @ 0x1800E0A64 (-EndFrame@CD3DResourceManager@@QEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleAdvanceFrame(CD3DDeviceManager *this, int a2, char a3)
{
  unsigned int v3; // r12d
  unsigned int i; // ebp
  char v7; // r14
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rbp
  struct ID3D11Device1 *v13; // rbx

  v3 = 0;
  EnterCriticalSection(&CriticalSection);
  for ( i = 0; i < dword_180195E08; ++i )
  {
    v7 = 0;
    v8 = *(_QWORD *)(32LL * i + qword_180195DE8);
    if ( *(_DWORD *)(v8 + 1064) != a2 )
    {
      *(_DWORD *)(v8 + 1064) = a2;
      *(_BYTE *)(v8 + 1068) = 0;
      if ( *(_QWORD *)(v8 + 792) && (unsigned int)(a2 - *(_DWORD *)(v8 + 812)) > 0x20 )
      {
        CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap((CD3DDeviceLevel1 *)v8);
        *(_QWORD *)(v8 + 800) = 0LL;
        *(_BYTE *)(v8 + 808) = 0;
      }
      if ( a3 )
        CD3DDeviceLevel1::ProcessUnpinResources((CD3DDeviceLevel1 *)v8);
      CD3DResourceManager::EndFrame((CD3DResourceManager *)(v8 + 896));
      CD3DDeviceLevel1::ResetStateAndDeleteFreedResources((CD3DDeviceLevel1 *)v8);
      v7 = 1;
    }
    if ( *(_BYTE *)(v8 + 1071) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 552) + 888LL))(*(_QWORD *)(v8 + 552));
      *(_BYTE *)(v8 + 1071) = 0;
    }
    if ( v7 && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 544) + 312LL))(*(_QWORD *)(v8 + 544)) < 0 )
    {
      v3 = -2003304307;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x1AFu);
    }
  }
  EnterCriticalSection(&CriticalSection);
  v9 = dword_180195E00;
  if ( dword_180195E00 )
  {
    v10 = 32LL * (unsigned int)(dword_180195E00 - 1);
    do
    {
      v11 = *(_QWORD *)(v10 + qword_180195DE8);
      if ( (*(_BYTE *)(*(_QWORD *)(v11 + 568) + 348LL) & 0x10) != 0 )
      {
        CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DResourceManager *)(v11 + 896));
        if ( !CD3DResourceManager::AreActiveResources((CD3DResourceManager *)(v11 + 896))
          && **(_QWORD **)(v11 + 8) == *(_QWORD *)(v11 + 8) )
        {
          v13 = *(struct ID3D11Device1 **)(v11 + 544);
          CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v9 - 1);
          CD3DDeviceTable::RemoveDeviceFromTable((CD3DDeviceTable *)&g_deviceTable, v13);
        }
      }
      v10 -= 32LL;
      --v9;
    }
    while ( v9 );
  }
  LeaveCriticalSection(&CriticalSection);
  LeaveCriticalSection(&CriticalSection);
  return v3;
}
