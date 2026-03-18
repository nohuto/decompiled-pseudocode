/*
 * XREFs of Usbh_FDO_WaitPnpAdd @ 0x1C0009B70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSetFdoPnpState @ 0x1C000A3F0 (UsbhSetFdoPnpState.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     Usbh_PnpRemove @ 0x1C004BD60 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpAdd(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  int v4; // esi
  char *v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  struct _KSEMAPHORE *v7; // rbx
  int v9; // eax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  v4 = 0;
  do
  {
    v5 = (char *)&HubModule + 56 * v2;
    if ( v5 )
    {
      v6 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v5 + 1);
      if ( v6 )
      {
        v9 = v6(v1, a1);
        if ( v9 < 0 )
          v4 = v9;
      }
    }
    ++v2;
  }
  while ( v2 < 0xA );
  FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  if ( v4 < 0 )
  {
    Usbh_PnpRemove(a1, 6LL);
  }
  else
  {
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 2LL, 1LL);
    v7 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8));
    FdoExt(*(_QWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 48) = 1734964085;
    v7[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v7 + 155, 16, 1, 0);
  }
  return (unsigned int)v4;
}
