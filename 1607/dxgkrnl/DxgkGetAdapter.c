/*
 * XREFs of DxgkGetAdapter @ 0x1C00E2E20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000F0E4 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetAdapter(PDEVICE_OBJECT **a1, struct _LUID *a2, PDEVICE_OBJECT *a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rcx
  DXGSESSIONDATA *v9; // rbx
  char v10; // r9
  struct DXGGLOBAL *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  PDEVICE_OBJECT *v14; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  volatile signed __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGADAPTER *v25; // [rsp+28h] [rbp-19h] BYREF
  __int64 v26; // [rsp+30h] [rbp-11h]
  _BYTE v27[8]; // [rsp+38h] [rbp-9h] BYREF
  char v28; // [rsp+40h] [rbp-1h]
  _BYTE v29[80]; // [rsp+48h] [rbp+7h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v9 = SessionData;
  if ( SessionData )
    v10 = *((_BYTE *)SessionData + 18489);
  else
    v10 = 0;
  v25 = 0LL;
  v26 = 0LL;
  if ( v10 )
  {
    v11 = DXGGLOBAL::GetGlobal(v8);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v11,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)&v25,
      2);
    if ( v25 )
    {
LABEL_5:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v25, 0LL);
      v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29);
      v14 = (PDEVICE_OBJECT *)v25;
      if ( v13 < 0 )
      {
        DXGADAPTER::ReleaseReference(v25);
        v23 = WdLogNewEntry5_WdError(v22);
        v16 = -1073741275;
        *(_QWORD *)(v23 + 24) = -1073741275LL;
        WdLogEvent5_WdError(v23);
      }
      else
      {
        *a2 = *(struct _LUID *)((char *)v25 + 268);
        if ( a1 )
        {
          if ( !a3 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v14);
            *(_QWORD *)(v24 + 24) = 2287LL;
            WdLogEvent5_WdAssertion(v24);
            v14 = (PDEVICE_OBJECT *)v25;
          }
          *a1 = v14;
          DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v14[24]);
          *a3 = DeviceAttachmentBaseRef;
          ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( v9 )
            DXGSESSIONDATA::SetAdapterLuidInRemoteSession(v9, a2);
        }
        else
        {
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
        }
        v16 = 0;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
      return v16;
    }
    v18 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v18 + 24) = 2244LL;
    WdLogEvent5_WdError(v18);
  }
  if ( v25 )
    goto LABEL_5;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v27);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  v20 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19) + 70);
  v25 = (struct DXGADAPTER *)v20;
  if ( v20 )
  {
    _InterlockedIncrement64(v20 + 3);
    v26 = -1LL;
    if ( v28 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
    goto LABEL_5;
  }
  v21 = WdLogNewEntry5_WdError(0LL);
  v16 = -1073741275;
  *(_QWORD *)(v21 + 24) = -1073741275LL;
  WdLogEvent5_WdError(v21);
  if ( v28 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  return v16;
}
