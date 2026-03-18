/*
 * XREFs of DxgkGetAdapter @ 0x1C00CCB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000D6DC (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
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
  struct DXGADAPTER *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[8]; // [rsp+20h] [rbp-50h] BYREF
  char v26; // [rsp+28h] [rbp-48h]
  _BYTE v27[64]; // [rsp+30h] [rbp-40h] BYREF
  struct DXGADAPTER *v28; // [rsp+A8h] [rbp+38h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v9 = SessionData;
  if ( SessionData )
    v10 = *((_BYTE *)SessionData + 18512);
  else
    v10 = 0;
  v28 = 0LL;
  if ( !v10
    || (v11 = DXGGLOBAL::GetGlobal(v8),
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v11,
          (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
          (__int64)&v28,
          2),
        !v28)
    && (v18 = WdLogNewEntry5_WdError(v12), *(_QWORD *)(v18 + 24) = 2450LL, WdLogEvent5_WdError(v18), !v28) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v25);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    v20 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19) + 89);
    v28 = v20;
    if ( !v20 )
    {
      v21 = WdLogNewEntry5_WdError(0LL);
      v16 = -1073741275;
      *(_QWORD *)(v21 + 24) = -1073741275LL;
      WdLogEvent5_WdError(v21);
      if ( v26 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
      return v16;
    }
    DXGADAPTER::AcquireReference(v20);
    if ( v26 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v28, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27);
  v14 = (PDEVICE_OBJECT *)v28;
  if ( v13 < 0 )
  {
    DXGADAPTER::ReleaseReference(v28);
    v23 = WdLogNewEntry5_WdError(v22);
    v16 = -1073741275;
    *(_QWORD *)(v23 + 24) = -1073741275LL;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    *a2 = *(struct _LUID *)((char *)v28 + 252);
    if ( a1 )
    {
      if ( !a3 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v24 + 24) = 2493LL;
        WdLogEvent5_WdAssertion(v24);
        v14 = (PDEVICE_OBJECT *)v28;
      }
      *a1 = v14;
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v14[22]);
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
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
  return v16;
}
