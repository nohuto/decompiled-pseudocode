/*
 * XREFs of AudioServerGetStreamVpoContext @ 0x180004930
 * Callers:
 *     <none>
 * Callees:
 *     ??0CVpoContextProxy@@QEAA@PEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x180004B18 (--0CVpoContextProxy@@QEAA@PEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z.c)
 *     ??_GCVpoContextProxy@@QEAAPEAXI@Z @ 0x180004BA8 (--_GCVpoContextProxy@@QEAAPEAXI@Z.c)
 *     ?GetVpoContext@CBaseStreamGroupProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x180004C40 (-GetVpoContext@CBaseStreamGroupProxy@@UEAAJPEAPEAUIVpoContext@@@Z.c)
 *     ?GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180004DA0 (-GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180026630 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetStreamVpoContext(CVADServer *a1, __int64 a2, CVpoContextProxy **a3)
{
  __int64 v3; // rax
  CVpoContextProxy *v4; // rdi
  int (*v7)(CVADServer *__hidden, struct IStreamGroupProxy **); // rsi
  int StreamGroup; // eax
  unsigned int v9; // edx
  int v10; // r14d
  __int64 (__fastcall *v11)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **); // rsi
  int v12; // eax
  __int64 (__fastcall *v13)(CBaseStreamGroupProxy *__hidden, struct IVpoContext **); // rsi
  int VpoContext; // eax
  CVpoContextProxy *v15; // rax
  CVpoContextProxy *v16; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  CVpoContextProxy *v22; // rax
  struct IVpoContext *v23; // [rsp+20h] [rbp-20h] BYREF
  CBaseStreamGroupProxy *v24; // [rsp+28h] [rbp-18h] BYREF
  struct ISaDeviceProxy *v25[2]; // [rsp+30h] [rbp-10h] BYREF
  struct ISaDeviceProxy *v26; // [rsp+70h] [rbp+30h] BYREF
  __int64 v27; // [rsp+88h] [rbp+48h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = 0LL;
  v24 = 0LL;
  v25[0] = 0LL;
  v23 = 0LL;
  v7 = *(int (**)(CVADServer *__hidden, struct IStreamGroupProxy **))(v3 + 24);
  if ( v7 == CVADServer::GetStreamGroup )
    StreamGroup = CVADServer::GetStreamGroup(a1, &v24);
  else
    StreamGroup = ((__int64 (__fastcall *)(CVADServer *, CBaseStreamGroupProxy **))v7)(a1, &v24);
  v10 = StreamGroup;
  if ( StreamGroup < 0 )
    goto LABEL_28;
  v11 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **))(*(_QWORD *)v24 + 152LL);
  v12 = v11 == CBaseStreamGroupProxy::GetConnectedSaDevice
      ? CBaseStreamGroupProxy::GetConnectedSaDevice(v24, v25)
      : v11(v24, v25);
  v10 = v12;
  if ( v12 < 0 )
    goto LABEL_28;
  if ( !v25[0] )
  {
    v26 = 0LL;
    v27 = 0LL;
    v18 = *(_QWORD *)g_DeviceGraphStore;
    v19 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v24 + 48LL))(v24);
    v20 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, __int64, __int64 *))(v18 + 24))(g_DeviceGraphStore, v19, &v27);
    v21 = v27;
    v10 = v20;
    if ( v20 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v27 + 40LL))(v27, &v26);
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(*(_QWORD *)v26 + 96LL))(
                v26,
                &v23);
        if ( v10 >= 0 )
        {
          v22 = (CVpoContextProxy *)operator new(0x18uLL);
          if ( v22 )
            v4 = CVpoContextProxy::CVpoContextProxy(v22, 0LL, v26, v23);
          if ( !v4 )
          {
            v10 = -2147024882;
            if ( v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            if ( v26 )
              (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v26 + 16LL))(v26);
            goto LABEL_28;
          }
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          if ( v26 )
            (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v26 + 16LL))(v26);
          goto LABEL_14;
        }
      }
      v21 = v27;
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v26 )
      (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_16:
    if ( v10 >= 0 )
      goto LABEL_17;
    goto LABEL_28;
  }
  v13 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct IVpoContext **))(*(_QWORD *)v24 + 176LL);
  if ( v13 == CBaseStreamGroupProxy::GetVpoContext )
    VpoContext = CBaseStreamGroupProxy::GetVpoContext(v24, &v23);
  else
    VpoContext = v13(v24, &v23);
  v10 = VpoContext;
  if ( VpoContext < 0 )
    goto LABEL_28;
  v15 = (CVpoContextProxy *)operator new(0x18uLL);
  if ( v15 )
    v4 = CVpoContextProxy::CVpoContextProxy(v15, v24, v25[0], v23);
  if ( !v4 )
  {
    v10 = -2147024882;
    goto LABEL_28;
  }
LABEL_14:
  v10 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v23 + 32LL))(v23, a2);
  if ( v10 >= 0 )
  {
    v16 = v4;
    v4 = 0LL;
    *a3 = v16;
    goto LABEL_16;
  }
LABEL_28:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      86LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)v10);
  }
  if ( v4 )
    CVpoContextProxy::`scalar deleting destructor'(v4, v9);
LABEL_17:
  if ( v23 )
    (*(void (__fastcall **)(struct IVpoContext *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v25[0] )
    (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
  if ( v24 )
    (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v10;
}
