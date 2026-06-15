/*
 * XREFs of ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x18003D460
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x18003D1D0 (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CKsNotificationsMonitor::Initialize(CKsNotificationsMonitor *this, struct IPart *a2, char *a3)
{
  int v6; // esi
  __int64 v7; // rsi
  __int64 v8; // rbx
  SIZE_T v9; // rbx
  char *v10; // rax
  SIZE_T v11; // rbx
  SIZE_T v12; // rdx
  signed __int64 v13; // rdi
  __int16 v14; // cx
  struct IPart *v15; // rsi
  struct IPart *v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IPart *, GUID *, CKsNotificationsMonitor *))a2->lpVtbl->RegisterControlChangeCallback)(
         a2,
         &CKsNotificationsMonitor::m_ctx,
         this);
  if ( v6 < 0 )
    goto LABEL_23;
  if ( *((struct IPart **)this + 4) != a2 )
  {
    ((void (__fastcall *)(struct IPart *))a2->lpVtbl->AddRef)(a2);
    v7 = *((_QWORD *)this + 4);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = a2;
  }
  *((_DWORD *)this + 3) = 1;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&a3[2 * v8] );
  v9 = 2 * v8 + 2;
  v10 = (char *)CoTaskMemAlloc(v9);
  *((_QWORD *)this + 2) = v10;
  if ( !v10 )
  {
    v6 = -2147024882;
    goto LABEL_23;
  }
  v11 = v9 >> 1;
  if ( v11 - 1 > 0x7FFFFFFE )
  {
    if ( !v11 )
      goto LABEL_17;
  }
  else
  {
    v12 = 2147483646 - v11;
    v13 = a3 - v10;
    while ( v12 + v11 )
    {
      v14 = *(_WORD *)&v10[v13];
      if ( !v14 )
        break;
      *(_WORD *)v10 = v14;
      v10 += 2;
      if ( !--v11 )
        goto LABEL_27;
    }
    if ( v11 )
      goto LABEL_16;
LABEL_27:
    v10 -= 2;
  }
LABEL_16:
  *(_WORD *)v10 = 0;
LABEL_17:
  v15 = v17;
  if ( v17 != a2 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(struct IPart *, GUID *, struct IPart **))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
      &v17);
    if ( v15 )
      ((void (__fastcall *)(struct IPart *))v15->lpVtbl->Release)(v15);
    v15 = v17;
  }
  v6 = ((__int64 (__fastcall *)(struct IPart *, char *))v15->lpVtbl->GetLocalId)(v15, (char *)this + 8);
  if ( v6 >= 0 )
    v6 = ((__int64 (__fastcall *)(struct IPart *, char *))v17->lpVtbl->GetName)(v17, (char *)this + 28);
LABEL_23:
  if ( v17 )
    ((void (__fastcall *)(struct IPart *))v17->lpVtbl->Release)(v17);
  return (unsigned int)v6;
}
