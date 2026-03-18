/*
 * XREFs of ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180005478
 * Callers:
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x180005028 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x1800055C0 (-UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 *     ?CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z @ 0x1800056D0 (-CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?AdvanceFrame@COffScreenRenderTarget@@UEAAXI_N@Z @ 0x1800EC000 (-AdvanceFrame@COffScreenRenderTarget@@UEAAXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetExistingDevice(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v8; // rax
  unsigned int v9; // r10d
  unsigned int v10; // edx
  unsigned int v11; // edi
  struct CD3DDeviceLevel1 **v12; // rcx
  __int64 v13; // r8
  struct CD3DDeviceLevel1 *v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-28h]

  *a4 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)((char *)this + 140);
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)((char *)this + 140) )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)((char *)this + 148);
  if ( !v8 )
  {
    v16 = 1806;
LABEL_18:
    v11 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, -2003304307, v16);
    goto LABEL_11;
  }
  if ( !*((_QWORD *)this + 10) )
  {
    v16 = 1819;
    goto LABEL_18;
  }
  v9 = *((_DWORD *)this + 34);
  v10 = 0;
  v11 = -2003304307;
  if ( v9 )
  {
    while ( 1 )
    {
      v12 = (struct CD3DDeviceLevel1 **)(*((_QWORD *)this + 13) + 32LL * v10);
      if ( *(struct CD3DDeviceLevel1 **)&a3 == v12[1] )
      {
        v13 = *(_QWORD *)&a2->Data1 - (_QWORD)v12[2];
        if ( *(struct CD3DDeviceLevel1 **)&a2->Data1 == v12[2] )
          v13 = *(_QWORD *)a2->Data4 - (_QWORD)v12[3];
        if ( !v13 )
          break;
      }
      if ( ++v10 >= v9 )
        goto LABEL_11;
    }
    v14 = *v12;
    _InterlockedIncrement((volatile signed __int32 *)*v12 + 100);
    *a4 = v14;
    v11 = 0;
  }
LABEL_11:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
