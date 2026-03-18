/*
 * XREFs of DxgkGetAdapter @ 0x1C00BDD00
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000CAD8 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkGetAdapter(PDEVICE_OBJECT **a1, struct _LUID *a2, PDEVICE_OBJECT *a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  DXGSESSIONDATA *v16; // rbx
  struct DXGGLOBAL *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PDEVICE_OBJECT *v23; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  unsigned int v25; // ebx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DXGADAPTER *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  _BYTE v37[8]; // [rsp+20h] [rbp-50h] BYREF
  char v38; // [rsp+28h] [rbp-48h]
  _BYTE v39[64]; // [rsp+30h] [rbp-40h] BYREF
  struct DXGADAPTER *v40; // [rsp+A8h] [rbp+38h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, (__int64)a3, a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v8, v9, v10);
  v16 = SessionData;
  if ( SessionData )
    LOBYTE(v15) = *((_BYTE *)SessionData + 18488);
  else
    LOBYTE(v15) = 0;
  v40 = 0LL;
  if ( !(_BYTE)v15
    || (v17 = DXGGLOBAL::GetGlobal(v13, v12, v14, v15),
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v17,
          (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
          (__int64)&v40,
          2LL),
        !v40)
    && (v27 = WdLogNewEntry5_WdError(v18), *(_QWORD *)(v27 + 24) = 2472LL, WdLogEvent5_WdError(v27), !v40) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
    v32 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal(v29, v28, v30, v31) + 71);
    v40 = v32;
    if ( !v32 )
    {
      v33 = WdLogNewEntry5_WdError(0LL);
      v25 = -1073741275;
      *(_QWORD *)(v33 + 24) = -1073741275LL;
      WdLogEvent5_WdError(v33);
      if ( v38 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
      return v25;
    }
    DXGADAPTER::AcquireReference(v32);
    if ( v38 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v40, 0LL);
  v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39);
  v23 = (PDEVICE_OBJECT *)v40;
  if ( v19 < 0 )
  {
    DXGADAPTER::ReleaseReference(v40);
    v35 = WdLogNewEntry5_WdError(v34);
    v25 = -1073741275;
    *(_QWORD *)(v35 + 24) = -1073741275LL;
    WdLogEvent5_WdError(v35);
  }
  else
  {
    *a2 = *(struct _LUID *)((char *)v40 + 252);
    if ( a1 )
    {
      if ( !a3 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v23, v20, v21, v22);
        *(_QWORD *)(v36 + 24) = 2515LL;
        WdLogEvent5_WdAssertion(v36);
        v23 = (PDEVICE_OBJECT *)v40;
      }
      *a1 = v23;
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v23[22]);
      *a3 = DeviceAttachmentBaseRef;
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      if ( v16 )
        DXGSESSIONDATA::SetAdapterLuidInRemoteSession(v16, a2);
    }
    else
    {
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v23);
    }
    v25 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  return v25;
}
