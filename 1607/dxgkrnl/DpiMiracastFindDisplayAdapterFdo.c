/*
 * XREFs of DpiMiracastFindDisplayAdapterFdo @ 0x1C0197174
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x1C000EB0C (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DF204 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00DF444 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 */

__int64 __fastcall DpiMiracastFindDisplayAdapterFdo(struct _DEVICE_OBJECT *Object, __int64 *a2, _BYTE *a3)
{
  struct _DEVICE_OBJECT *v3; // r13
  __int64 *v5; // r12
  __int64 v6; // rsi
  int MiracastSupportInternal; // r14d
  char v8; // al
  int DisplayAdapterFdoIhv; // eax
  __int64 v10; // r15
  __int64 v11; // rdi
  bool i; // zf
  int v13; // ecx
  struct _DEVICE_OBJECT *LowerDeviceObject; // r12
  struct _DEVICE_OBJECT *v15; // r13
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  int v20; // [rsp+48h] [rbp-8h]
  char v23; // [rsp+A8h] [rbp+58h] BYREF

  v3 = Object;
  v5 = a2;
  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)&v23);
  v18 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v20 = 0;
  v17 = 0LL;
  MiracastSupportInternal = DxgkMiracastQueryMiracastSupportInternal((__int64)&v18);
  if ( MiracastSupportInternal >= 0 )
  {
    v8 = v19;
    if ( a3 )
      *a3 = v19;
    if ( v8 )
    {
      DisplayAdapterFdoIhv = DpiMiracastFindDisplayAdapterFdoIhv(&v17);
      v6 = v17;
      MiracastSupportInternal = DisplayAdapterFdoIhv;
LABEL_39:
      if ( MiracastSupportInternal < 0 )
      {
        if ( v6 )
        {
          if ( *(_BYTE *)(v6 + 483) )
            DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
          KeLeaveCriticalRegion();
        }
        goto LABEL_44;
      }
    }
    else
    {
      v10 = qword_1C0056EB8;
      MiracastSupportInternal = -1073741275;
      if ( *(_QWORD *)v10 == v10 )
      {
LABEL_44:
        *v5 = 0LL;
        goto LABEL_45;
      }
      while ( MiracastSupportInternal < 0 )
      {
        KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
        v11 = *(_QWORD *)(v10 + 56);
        for ( i = *(_QWORD *)v11 == v11; !i && MiracastSupportInternal < 0LL; i = *(_QWORD *)v11 == *(_QWORD *)(v10 + 56) )
        {
          i = *(_DWORD *)(v11 + 16) == 1953656900;
          v6 = v11;
          v17 = v11;
          if ( i && *(_DWORD *)(v11 + 20) == 2 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v11 + 483) )
              DpiCheckForOutstandingD3Requests(v11);
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
            v13 = *(_DWORD *)(v11 + 236);
            if ( (v13 == 2 || *(_DWORD *)(v11 + 240) == 2 && ((v13 - 3) & 0xFFFFFFFC) == 0 && v13 != 4)
              && *(_DWORD *)(v11 + 3032) != -1
              && *(_DWORD *)(v11 + 3768) != 1
              && *(_DWORD *)(v11 + 284) == 1
              && *(_QWORD *)(v11 + 4504) )
            {
              LowerDeviceObject = v3;
              ObfReferenceObject(v3);
              if ( v3 )
              {
                do
                {
                  if ( LowerDeviceObject == *(struct _DEVICE_OBJECT **)(v11 + 24) )
                    break;
                  v15 = LowerDeviceObject;
                  LowerDeviceObject = IoGetLowerDeviceObject(LowerDeviceObject);
                  if ( v15 )
                    ObfDereferenceObject(v15);
                }
                while ( LowerDeviceObject );
                if ( LowerDeviceObject )
                  ObfDereferenceObject(LowerDeviceObject);
                v3 = Object;
              }
              if ( LowerDeviceObject == *(struct _DEVICE_OBJECT **)(v11 + 24) )
              {
                MiracastSupportInternal = 0;
                break;
              }
            }
            if ( *(_BYTE *)(v11 + 483) )
              DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
            KeLeaveCriticalRegion();
            v6 = 0LL;
            v17 = 0LL;
          }
          v11 = *(_QWORD *)v11;
        }
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
        v10 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 == qword_1C0056EB8 )
        {
          v5 = a2;
          goto LABEL_39;
        }
      }
      v5 = a2;
    }
    *v5 = v6;
    MiracastSupportInternal = 0;
  }
LABEL_45:
  if ( v23 )
  {
    _InterlockedExchange64(&qword_1C0056EC8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)MiracastSupportInternal;
}
