/*
 * XREFs of InvalidateChildRelationsOnAdapterCallback @ 0x1C017A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 */

__int64 __fastcall InvalidateChildRelationsOnAdapterCallback(struct _DEVICE_OBJECT **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct _DEVICE_OBJECT *v4; // rcx
  __int64 v5; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 v7; // rax
  _BYTE v9[80]; // [rsp+20h] [rbp-58h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, (struct DXGADAPTER *const)a1, 0LL);
  v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v4);
      if ( !DeviceAttachmentBaseRef )
      {
        v7 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v7 + 24) = 2936LL;
        WdLogEvent5_WdAssertion(v7);
      }
      IoInvalidateDeviceRelations(DeviceAttachmentBaseRef, BusRelations);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
    }
    v3 = 0;
  }
  else if ( v2 == -1073741130 )
  {
    v3 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
  return v3;
}
