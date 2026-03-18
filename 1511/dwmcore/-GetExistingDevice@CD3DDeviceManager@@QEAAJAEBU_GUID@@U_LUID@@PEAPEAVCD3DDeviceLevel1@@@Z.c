/*
 * XREFs of ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18007256C
 * Callers:
 *     ?CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z @ 0x180011148 (-CloseFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAX@Z.c)
 *     ?UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180011230 (-UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18001BA58 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x18006D0F4 (-Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceM.c)
 *     ?AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z @ 0x1801079F0 (-AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDeviceManager::GetExistingDevice(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  __int64 v7; // rax
  unsigned int v8; // r10d
  unsigned int v9; // edx
  unsigned int v10; // edi
  struct CD3DDeviceLevel1 **v11; // rcx
  __int64 v12; // r8
  struct CD3DDeviceLevel1 *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-28h]
  char *v16; // [rsp+50h] [rbp+8h] BYREF
  struct _LUID v17; // [rsp+60h] [rbp+18h]

  v17 = a3;
  *a4 = 0LL;
  v16 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)((char *)this + 132);
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)((char *)this + 132) )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)((char *)this + 140);
  if ( !v7 )
  {
    v15 = 1818;
    goto LABEL_15;
  }
  if ( !*((_QWORD *)this + 9) )
  {
    v15 = 1831;
LABEL_15:
    v10 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, -2003304307, v15);
    goto LABEL_11;
  }
  v8 = *((_DWORD *)this + 32);
  v9 = 0;
  v10 = -2003304307;
  if ( v8 )
  {
    while ( 1 )
    {
      v11 = (struct CD3DDeviceLevel1 **)(*((_QWORD *)this + 12) + 32LL * v9);
      if ( *(struct CD3DDeviceLevel1 **)&v17 == v11[1] )
      {
        v12 = *(_QWORD *)&a2->Data1 - (_QWORD)v11[2];
        if ( *(struct CD3DDeviceLevel1 **)&a2->Data1 == v11[2] )
          v12 = *(_QWORD *)a2->Data4 - (_QWORD)v11[3];
        if ( !v12 )
          break;
      }
      if ( ++v9 >= v8 )
        goto LABEL_11;
    }
    v13 = *v11;
    _InterlockedIncrement((volatile signed __int32 *)*v11 + 98);
    *a4 = v13;
    v10 = 0;
  }
LABEL_11:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v10;
}
