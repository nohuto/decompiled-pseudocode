/*
 * XREFs of ?Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800B34D8
 * Callers:
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x180037258 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800350D0 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceManager::AdapterInfo::Construct(
        CSurfaceManager::AdapterInfo *this,
        const struct _GUID *a2,
        struct CDXGIAdapterLimited *a3,
        struct CD3DDeviceManager *a4)
{
  _QWORD *v4; // r14
  struct CD3DDeviceLevel1 *v5; // rbx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_QWORD *)((char *)this + 8);
  v5 = 0LL;
  *(_QWORD *)this = *((_QWORD *)a3 + 42);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)a3 + 3);
  v15 = 0LL;
  v10 = (**v9)(v9, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, v4);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x25Du);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v4 + 24LL))(*v4, (char *)this + 16);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x25Fu);
      return v11;
    }
    ExistingDevice = CD3DDeviceManager::GetExistingDevice(a4, a2, *(struct _LUID *)this, &v15);
    v5 = v15;
    if ( ExistingDevice >= 0 )
    {
      *((_QWORD *)this + 3) = *((_QWORD *)v15 + 67);
      *((_QWORD *)this + 4) = *((_QWORD *)v5 + 68);
    }
  }
  if ( v5 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 408));
  return v11;
}
