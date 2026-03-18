/*
 * XREFs of Usbh_FDO_WaitPnpStart @ 0x1C00218F0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhHubStart @ 0x1C0021B28 (UsbhHubStart.c)
 *     UsbhSetFdoPnpState @ 0x1C0021CB0 (UsbhSetFdoPnpState.c)
 *     UsbhModuleDispatch @ 0x1C00262CC (UsbhModuleDispatch.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     Usbh_PnpRemove @ 0x1C004BDB0 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  _DWORD *v6; // rbp
  int v7; // r8d
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  int v10; // r10d
  char v11; // r12
  int v12; // eax
  __int64 v13; // r14
  void *v14; // rdx
  unsigned int i; // ebx
  int v16; // edi
  char *v17; // rcx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KSEMAPHORE *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9

  v5 = (int)a2;
  v6 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  Log(*(_QWORD *)(a1 + 8), 2, 2001949268, a1, 1LL);
  Log(*(_QWORD *)(a1 + 8), 2, v7, v5, 2LL);
  if ( (_DWORD)v5 == 2 )
    return Usbh_PnpRemove(a1, 2LL);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT");
  Log(v8, 2, 1767329861, v9, 0LL);
  if ( v10 >= 0 )
  {
    v11 = 1;
    v12 = 1;
  }
  else
  {
    v11 = 0;
    v12 = 0;
  }
  v6[640] ^= (v6[640] ^ (v12 << 27)) & 0x8000000;
  KeInitializeEvent((PRKEVENT)(v6 + 644), NotificationEvent, 0);
  v6[640] &= ~0x200u;
  KeResetEvent((PRKEVENT)(v6 + 650));
  v13 = *(_QWORD *)(a1 + 8);
  v14 = &HubModule;
  for ( i = 0; i < 0xA; ++i )
  {
    v16 = 0;
    v17 = (char *)&HubModule + 56 * i;
    if ( v17 )
    {
      v18 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v17 + 5);
      if ( v18 )
      {
        v16 = v18(v13, a1);
        if ( v16 < 0 )
          break;
        v14 = &HubModule;
      }
    }
  }
  if ( (v16 & 0xC0000000) == 0xC0000000
    || ((v6[640] & 1) == 0 || v11
      ? (UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 5LL, (unsigned int)v5), v19 = 0LL)
      : (UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 6LL, (unsigned int)v5), v19 = 1LL),
        v16 = UsbhHubStart(a1, v19),
        (v16 & 0xC0000000) == 0xC0000000) )
  {
    UsbhModuleDispatch(0, (_DWORD)v14, *(_QWORD *)(a1 + 8), 6, 0LL, a1);
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4LL, 7LL);
  }
  Log(*(_QWORD *)(a1 + 8), 2, 2001949268, v16, 3LL);
  v23 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8), v20, v21, v22);
  FdoExt(*(_QWORD *)(a1 + 8), v24, v25, v26);
  *(_DWORD *)(a1 + 48) = 1734964085;
  v23[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v23 + 155, 16, 1, 0);
  return (unsigned int)v16;
}
