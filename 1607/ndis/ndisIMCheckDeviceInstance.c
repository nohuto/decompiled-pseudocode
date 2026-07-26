/*
 * XREFs of ndisIMCheckDeviceInstance @ 0x1C00CCE50
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C009EAEC (ndisStartDeviceSynchronous.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00CCAA0 (NdisIMCancelInitializeDeviceInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     WPP_SF_qZq @ 0x1C0050180 (WPP_SF_qZq.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00A84A4 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A866C (ndisInitializeNetPnPEvent.c)
 */

char __fastcall ndisIMCheckDeviceInstance(__int64 a1, UNICODE_STRING *a2, wchar_t **a3)
{
  char v6; // r12
  UNICODE_STRING *v7; // r15
  UNICODE_STRING *i; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int (__fastcall *v12)(_QWORD, _QWORD *); // rax
  bool v13; // zf
  int v14; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  _QWORD v22[20]; // [rsp+110h] [rbp+10h] BYREF

  v6 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZ(0x28u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1, &a2->Length);
  KeWaitForSingleObject((PVOID)(a1 + 416), Executive, 0, 0, 0LL);
  v7 = (UNICODE_STRING *)(a1 + 96);
  *(_QWORD *)(a1 + 472) = KeGetCurrentThread();
  for ( i = *(UNICODE_STRING **)(a1 + 96); i; i = *(UNICODE_STRING **)&i->Length )
  {
    if ( RtlEqualUnicodeString(i + 1, a2, 1u) )
    {
      if ( a3 )
        *a3 = i->Buffer;
      *(_QWORD *)&v7->Length = *(_QWORD *)&i->Length;
      ExFreePoolWithTag(i, 0);
      v6 = 1;
      break;
    }
    v7 = i;
  }
  *(_QWORD *)(a1 + 472) = 0LL;
  KeReleaseMutex((PRKMUTEX)(a1 + 416), 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZq(v10, v9, a1, &a2->Length, a3);
  if ( !v6 )
  {
    if ( a3 )
    {
      v11 = *(_QWORD *)(a1 + 72);
      if ( v11 )
      {
        if ( *(_BYTE *)(v11 + 56) >= 6u )
          goto LABEL_24;
        if ( *(_QWORD *)(v11 + 128) )
        {
          memset(v22, 0, 0x98uLL);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          LODWORD(v22[0]) = 4;
          v22[3] = &Event;
          KeWaitForSingleObject((PVOID)(v11 + 360), Executive, 0, 0, 0LL);
          ++*(_DWORD *)(v11 + 424);
          *(_QWORD *)(v11 + 416) = KeGetCurrentThread();
          v12 = *(unsigned int (__fastcall **)(_QWORD, _QWORD *))(v11 + 128);
          *(_DWORD *)(v11 + 428) = 263744;
          if ( v12(0LL, v22) == 259 )
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v13 = (*(_DWORD *)(v11 + 424))-- == 1;
          *(_DWORD *)(v11 + 428) = 0;
          if ( v13 )
            *(_QWORD *)(v11 + 416) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v11 + 360), 0);
        }
        if ( *(_BYTE *)(v11 + 56) >= 6u )
        {
LABEL_24:
          ndisInitializeNetPnPEvent(&v18, &v17);
          v14 = a2->Length + 16;
          v19 = 12;
          v21 = v14;
          v20 = a2;
          KeWaitForSingleObject((PVOID)(v11 + 360), Executive, 0, 0, 0LL);
          ++*(_DWORD *)(v11 + 424);
          *(_QWORD *)(v11 + 416) = KeGetCurrentThread();
          *(_DWORD *)(v11 + 428) = 263777;
          ndisDeliverNetPnPEventSynchronously(v11, 0LL, (__int64)&v18);
          v13 = (*(_DWORD *)(v11 + 424))-- == 1;
          *(_DWORD *)(v11 + 428) = 0;
          if ( v13 )
            *(_QWORD *)(v11 + 416) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v11 + 360), 0);
        }
      }
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZ(0x2Au, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1, &a2->Length);
  return v6;
}
