/*
 * XREFs of ?AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z @ 0x18011E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800350D0 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COffScreenRenderTarget::AdvanceFrame(COffScreenRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 i; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v9; // rcx
  struct _LUID v10; // [rsp+30h] [rbp-18h] BYREF
  struct CD3DDeviceLevel1 *v11; // [rsp+38h] [rbp-10h] BYREF
  CDisplaySet *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v12);
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xD4u);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 40); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * i);
      v7 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, _QWORD, _QWORD))(*(_QWORD *)v6 + 104LL))(
             v6,
             &v10,
             0LL,
             0LL);
      if ( v7 >= 0 )
      {
        ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                           (CD3DDeviceManager *)&g_D3DDeviceManager,
                           (const struct _GUID *)(*((_QWORD *)this - 12) + 252LL),
                           v10,
                           &v11);
        if ( ExistingDevice >= 0 )
        {
          v9 = v11;
          if ( *((int *)v11 + 206) >= 0 )
            *((_BYTE *)v11 + 1078) = 1;
          CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v9 + 408));
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ExistingDevice, 0xE3u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xDBu);
      }
    }
  }
  if ( v12 )
    CDisplaySet::Release(v12, v3, v4);
}
