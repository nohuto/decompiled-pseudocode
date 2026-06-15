/*
 * XREFs of ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x18003CB00
 * Callers:
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x18003C8FC (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x18009E5A4 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall KsNotifications_ProcessPnpInterface(struct IMMDevice *a1, char *a2, const unsigned __int16 *a3)
{
  unsigned int v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // rdi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // r14
  __int64 v10; // r12
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rbx
  SIZE_T v14; // rbx
  char *v15; // rax
  char *v16; // r8
  SIZE_T v17; // rbx
  SIZE_T v18; // rdx
  __int16 v19; // cx
  __int64 v20; // rsi
  HANDLE v21; // rax
  _QWORD *v22; // rax
  __int64 (__fastcall *v23)(CKsNotificationsMonitor *); // rbx
  unsigned int (__fastcall *v24)(CKsNotificationsMonitor *__hidden); // rbx
  signed __int32 v25; // eax
  volatile signed __int32 *v26; // rbx
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v30; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v32[5]; // [rsp+58h] [rbp-28h] BYREF
  char v33; // [rsp+C0h] [rbp+40h] BYREF
  const unsigned __int16 *v34; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+58h] BYREF

  v34 = a3;
  v32[2] = -2LL;
  v29 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a1->lpVtbl->Activate)(
         a1,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         23LL,
         0LL,
         &v29) >= 0
    && (*(int (__fastcall **)(__int64, const unsigned __int16 **))(*(_QWORD *)v29 + 24LL))(v29, &v34) >= 0 )
  {
    v4 = 0;
    if ( (_DWORD)v34 )
    {
      while ( 1 )
      {
        v32[0] = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v29 + 32LL))(v29, v4, v32) >= 0
          && (*(int (__fastcall **)(_QWORD, char *))(*(_QWORD *)v32[0] + 24LL))(v32[0], &v33) >= 0 )
        {
          break;
        }
LABEL_59:
        if ( v32[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 16LL))(v32[0]);
        if ( ++v4 >= (unsigned int)v34 )
          goto LABEL_62;
      }
      v31 = v29;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      v32[1] = &v31;
      v5 = v32[0];
      v35 = v32[0];
      if ( v32[0] )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 8LL))(v32[0]);
        v5 = v35;
      }
      v32[3] = &v35;
      v6 = 0LL;
      v28 = 0LL;
      if ( v5 )
      {
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v5)(v5, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v28);
        v5 = v35;
        v6 = v28;
      }
      if ( !v6 )
      {
LABEL_53:
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          v5 = v35;
        }
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        goto LABEL_59;
      }
      ProcessHeap = GetProcessHeap();
      v8 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
      v9 = v8;
      v30 = v8;
      if ( !v8 )
      {
LABEL_52:
        v5 = v35;
        v6 = v28;
        goto LABEL_53;
      }
      *((_DWORD *)v8 + 3) = 0;
      *((_QWORD *)v8 + 2) = 0LL;
      *((_DWORD *)v8 + 6) = 1;
      *((_QWORD *)v8 + 4) = 0LL;
      ++CKsNotificationsMonitor::m_cRefAll;
      *(_QWORD *)v8 = &CKsSoftwareNotificationsMonitor::`vftable';
      v30 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 **))(*(_QWORD *)v28 + 104LL))(
             v28,
             23LL,
             &GUID_fbe4a6da_1a5e_4633_a491_9a9ff7f97a30,
             &v30) >= 0
        && (*(int (__fastcall **)(volatile signed __int32 *, void *, __int64))(*(_QWORD *)v30 + 24LL))(
             v30,
             &gConnectorEnablingInfo,
             2LL) < 0 )
      {
        v26 = v30;
        if ( !v30 )
          goto LABEL_52;
        goto LABEL_51;
      }
      v10 = v28;
      v27 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, GUID *, volatile signed __int32 *))(*(_QWORD *)v28 + 112LL))(
              v28,
              &CKsNotificationsMonitor::m_ctx,
              v9);
      if ( v11 < 0 )
      {
LABEL_38:
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        if ( v11 >= 0 )
        {
          EnterCriticalSection(&g_csKsNotificationMonitors);
          v21 = GetProcessHeap();
          v22 = HeapAlloc(v21, 0, 0x18uLL);
          if ( v22 )
          {
            *v22 = 0LL;
            v22[1] = 0LL;
            v22[2] = v9;
            v22[1] = qword_1800E88C0;
            *v22 = 0LL;
            if ( qword_1800E88C0 )
              *(_QWORD *)qword_1800E88C0 = v22;
            else
              g_lstKsNotificationMonitors = v22;
            qword_1800E88C0 = (__int64)v22;
            ++dword_1800E88C8;
            v23 = *(__int64 (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v9 + 8LL);
            if ( v23 == CKsNotificationsMonitor::AddRef )
            {
              _InterlockedIncrement(v9 + 6);
              ++CKsNotificationsMonitor::m_cRefAll;
            }
            else
            {
              v23((CKsNotificationsMonitor *)v9);
            }
          }
          LeaveCriticalSection(&g_csKsNotificationMonitors);
        }
        v24 = *(unsigned int (__fastcall **)(CKsNotificationsMonitor *__hidden))(*(_QWORD *)v9 + 16LL);
        if ( v24 == CKsNotificationsMonitor::Release )
        {
          v25 = _InterlockedExchangeAdd(v9 + 6, 0xFFFFFFFF);
          --CKsNotificationsMonitor::m_cRefAll;
          if ( v25 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
        }
        else
        {
          v24((CKsNotificationsMonitor *)v9);
        }
        v26 = v30;
        if ( !v30 )
          goto LABEL_52;
LABEL_51:
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        goto LABEL_52;
      }
      if ( *((_QWORD *)v9 + 4) != v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v12 = *((_QWORD *)v9 + 4);
        if ( v12 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*((_QWORD *)v9 + 4));
        *((_QWORD *)v9 + 4) = v10;
      }
      *((_DWORD *)v9 + 3) = 1;
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)&a2[2 * v13] );
      v14 = 2 * v13 + 2;
      v15 = (char *)CoTaskMemAlloc(v14);
      *((_QWORD *)v9 + 2) = v15;
      if ( !v15 )
      {
        v11 = -2147024882;
        goto LABEL_38;
      }
      v17 = v14 >> 1;
      if ( v17 - 1 > 0x7FFFFFFE )
      {
        if ( !v17 )
          goto LABEL_32;
      }
      else
      {
        v18 = 2147483646 - v17;
        v16 = (char *)(a2 - v15);
        while ( v18 + v17 )
        {
          v19 = *(_WORD *)&v15[(_QWORD)v16];
          if ( !v19 )
            break;
          *(_WORD *)v15 = v19;
          v15 += 2;
          if ( !--v17 )
            goto LABEL_69;
        }
        if ( v17 )
          goto LABEL_31;
LABEL_69:
        v15 -= 2;
      }
LABEL_31:
      *(_WORD *)v15 = 0;
LABEL_32:
      v20 = v27;
      if ( v27 != v10 )
      {
        v27 = 0LL;
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
          v10,
          &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
          &v27);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v20 = v27;
      }
      v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v20 + 32LL))(v20, (_DWORD *)v9 + 2, v16);
      if ( v11 >= 0 )
        v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v27 + 24LL))(v27, (_DWORD *)v9 + 7);
      goto LABEL_38;
    }
  }
LABEL_62:
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
}
