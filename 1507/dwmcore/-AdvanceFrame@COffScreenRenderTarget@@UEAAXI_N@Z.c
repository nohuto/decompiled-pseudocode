/*
 * XREFs of ?AdvanceFrame@COffScreenRenderTarget@@UEAAXI_N@Z @ 0x1800EC000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180005478 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::AdvanceFrame(COffScreenRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  __int64 i; // rsi
  int v4; // eax
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v6; // rcx
  struct _LUID v7; // [rsp+30h] [rbp-18h] BYREF
  struct CD3DDeviceLevel1 *v8; // [rsp+38h] [rbp-10h] BYREF
  CDisplaySet *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v9);
  if ( CurrentDisplaySet >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 46); i = (unsigned int)(i + 1) )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 20) + 8 * i)
                                                                     + 104LL))(
             *(_QWORD *)(*((_QWORD *)this + 20) + 8 * i),
             &v7,
             0LL);
      if ( v4 >= 0 )
      {
        ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                           (CD3DDeviceManager *)&g_D3DDeviceManager,
                           (const struct _GUID *)(*((_QWORD *)this - 3) + 252LL),
                           v7,
                           &v8);
        if ( ExistingDevice >= 0 )
        {
          v6 = v8;
          if ( *((int *)v8 + 209) >= 0 )
            *((_BYTE *)v8 + 1071) = 1;
          CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v6 + 392));
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ExistingDevice, 0xDEu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xD6u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xCFu);
  }
  if ( v9 )
    CDisplaySet::Release(v9);
}
