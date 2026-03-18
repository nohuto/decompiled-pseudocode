/*
 * XREFs of ?Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x18006D0F4
 * Callers:
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18006CE74 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18007256C (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceManager::AdapterInfo::Construct(
        CSurfaceManager::AdapterInfo *this,
        const struct _GUID *a2,
        struct CDXGIAdapterLimited *a3,
        struct CD3DDeviceManager *a4)
{
  __int64 v4; // rax
  _QWORD *v5; // r14
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v13; // rcx
  struct CD3DDeviceLevel1 *v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a3 + 42);
  v5 = (_QWORD *)((char *)this + 8);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v15 = 0LL;
  *(_QWORD *)this = v4;
  v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))a3 + 3))(
         *((_QWORD *)a3 + 3),
         &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
         (char *)this + 8);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x262u);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v5 + 24LL))(*v5, (char *)this + 16);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x264u);
    }
    else
    {
      ExistingDevice = CD3DDeviceManager::GetExistingDevice(a4, a2, *(struct _LUID *)this, &v15);
      v13 = v15;
      if ( ExistingDevice >= 0 )
      {
        *((_QWORD *)this + 3) = *((_QWORD *)v15 + 65);
        *((_QWORD *)this + 4) = *((_QWORD *)v13 + 66);
      }
      if ( v13 )
        CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v13 + 384));
    }
  }
  return v10;
}
