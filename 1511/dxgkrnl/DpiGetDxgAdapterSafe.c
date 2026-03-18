/*
 * XREFs of DpiGetDxgAdapterSafe @ 0x1C00B9580
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00B9380 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000B7BC (DpiDisableD3Requests.c)
 *     DxgkAcquireAdapterReference @ 0x1C00B97DC (DxgkAcquireAdapterReference.c)
 */

__int64 __fastcall DpiGetDxgAdapterSafe(struct _DEVICE_OBJECT *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // rdi
  struct _DEVICE_OBJECT *v8; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  _QWORD *i; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  _QWORD *j; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax

  v2 = 0LL;
  *a2 = 0LL;
  v5 = -1073741811;
  AcquireMiniportListMutex();
  v6 = qword_1C0046CF8;
  if ( *(_QWORD *)v6 != v6 )
  {
    do
    {
      if ( v2 )
        break;
      KeWaitForSingleObject((PVOID)(v6 + 72), Executive, 0, 0, 0LL);
      v7 = *(_QWORD *)(v6 + 56);
      if ( *(_QWORD *)v7 != v7 )
      {
        do
        {
          if ( v2 )
            break;
          if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
          {
            v8 = *(struct _DEVICE_OBJECT **)(v7 + 24);
            if ( v8 == a1 )
            {
              v2 = v7;
            }
            else
            {
              AttachedDeviceReference = IoGetAttachedDeviceReference(v8);
              if ( a1 == AttachedDeviceReference )
                v2 = v7;
              ObfDereferenceObject(AttachedDeviceReference);
            }
            if ( v2 )
              goto LABEL_24;
            KeWaitForSingleObject((PVOID)(v7 + 2232), Executive, 0, 0, 0LL);
            v10 = *(_QWORD **)(v7 + 2216);
            v11 = v10;
            for ( i = (_QWORD *)*v10; i != v11; i = (_QWORD *)*i )
            {
              if ( (struct _DEVICE_OBJECT *)v10[3] == a1 )
                v2 = *(_QWORD *)(v10[4] + 64LL);
              v10 = i;
            }
            KeReleaseMutex((PRKMUTEX)(v7 + 2232), 0);
            if ( v2 )
              goto LABEL_24;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)(v7 + 1976), 1u);
            v13 = *(_QWORD **)(v7 + 2296);
            v14 = v13;
            for ( j = (_QWORD *)*v13; j != v14; j = (_QWORD *)*j )
            {
              if ( (struct _DEVICE_OBJECT *)v13[3] == a1 )
                v2 = *(_QWORD *)(v13[4] + 64LL);
              v13 = j;
            }
            ExReleaseResourceLite((PERESOURCE)(v7 + 1976));
            KeLeaveCriticalRegion();
            if ( v2 )
            {
LABEL_24:
              KeEnterCriticalRegion();
              if ( *(_BYTE *)(v2 + 483) )
                DpiDisableD3Requests(v2);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
              if ( *(_DWORD *)(v2 + 236) == 2 )
              {
                if ( *(_QWORD *)(v2 + 2544) )
                {
                  v5 = DxgkAcquireAdapterReference();
                  if ( v5 >= 0 )
                  {
                    v5 = 0;
                    *a2 = *(_QWORD *)(v2 + 2544);
                  }
                }
              }
              if ( *(_BYTE *)(v2 + 483) )
                DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
              ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
              KeLeaveCriticalRegion();
            }
          }
          v7 = *(_QWORD *)v7;
        }
        while ( *(_QWORD *)v7 != *(_QWORD *)(v6 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v6 + 72), 0);
      v6 = *(_QWORD *)v6;
    }
    while ( *(_QWORD *)v6 != qword_1C0046CF8 );
  }
  _InterlockedExchange64(&qword_1C0046D08, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( !*a2 )
  {
    v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v21 + 32) = 0LL;
    *(_QWORD *)(v21 + 24) = DpiGetDxgAdapterSafe;
    WdLogEvent5_WdWarning(v21);
  }
  return (unsigned int)v5;
}
