/*
 * XREFs of Usbh_FDO_WaitPnpStart @ 0x1C000BBF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhModuleDispatch @ 0x1C0004C80 (UsbhModuleDispatch.c)
 *     UsbhHubStart @ 0x1C000AFA4 (UsbhHubStart.c)
 *     UsbhSetFdoPnpState @ 0x1C000B850 (UsbhSetFdoPnpState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     Usbh_PnpRemove @ 0x1C004C400 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStart(__int64 a1, int a2)
{
  __int64 v4; // rbp
  int v5; // r8d
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  int v8; // r10d
  char v9; // r12
  int v10; // eax
  __int64 v11; // r14
  void *v12; // rdx
  unsigned int i; // ebx
  int v14; // edi
  char *v15; // rcx
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  int v17; // edx
  struct _KSEMAPHORE *v18; // rbx

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 2001949268, a1, 1LL);
  Log(*(_QWORD *)(a1 + 8), 2, v5, a2, 2LL);
  if ( a2 == 2 )
    return Usbh_PnpRemove(a1, 2LL);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT");
  Log(v6, 2, 1767329861, v7, 0LL);
  if ( v8 >= 0 )
  {
    v9 = 1;
    v10 = 1;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  *(_DWORD *)(v4 + 2560) ^= (*(_DWORD *)(v4 + 2560) ^ (v10 << 27)) & 0x8000000;
  KeInitializeEvent((PRKEVENT)(v4 + 2576), NotificationEvent, 0);
  *(_DWORD *)(v4 + 2560) &= ~0x200u;
  KeResetEvent((PRKEVENT)(v4 + 2600));
  v11 = *(_QWORD *)(a1 + 8);
  v12 = &HubModule;
  for ( i = 0; i < 0xA; ++i )
  {
    v14 = 0;
    v15 = (char *)&HubModule + 56 * i;
    if ( v15 )
    {
      v16 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v15 + 5);
      if ( v16 )
      {
        v14 = v16(v11, a1);
        if ( v14 < 0 )
          break;
        v12 = &HubModule;
      }
    }
  }
  if ( (v14 & 0xC0000000) == 0xC0000000
    || ((*(_DWORD *)(v4 + 2560) & 1) == 0 || v9
      ? (UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 5, a2), v17 = 0)
      : (UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 6, a2), v17 = 1),
        v14 = UsbhHubStart(a1, v17),
        (v14 & 0xC0000000) == 0xC0000000) )
  {
    UsbhModuleDispatch(0, (__int64)v12, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4, 7);
  }
  Log(*(_QWORD *)(a1 + 8), 2, 2001949268, v14, 3LL);
  v18 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 48) = 1734964085;
  v18[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v18 + 155, 16, 1, 0);
  return (unsigned int)v14;
}
