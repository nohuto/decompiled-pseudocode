/*
 * XREFs of Usbh_FDO_WaitPnpAdd @ 0x1C00217F0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSetFdoPnpState @ 0x1C0021CB0 (UsbhSetFdoPnpState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     Usbh_PnpRemove @ 0x1C004BDB0 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  int v7; // esi
  char *v8; // rdx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KSEMAPHORE *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // eax

  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v7 = 0;
  do
  {
    v8 = (char *)&HubModule + 56 * v5;
    if ( v8 )
    {
      v9 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v8 + 1);
      if ( v9 )
      {
        v21 = v9(v4, a1);
        if ( v21 < 0 )
          v7 = v21;
      }
    }
    ++v5;
  }
  while ( v5 < 0xA );
  FdoExt(*(_QWORD *)(a1 + 8), (__int64)v8, a3, a4);
  FdoExt(*(_QWORD *)(a1 + 8), v10, v11, v12);
  if ( v7 < 0 )
  {
    Usbh_PnpRemove(a1, 6LL);
  }
  else
  {
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 2LL, 1LL);
    v16 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8), v13, v14, v15);
    FdoExt(*(_QWORD *)(a1 + 8), v17, v18, v19);
    *(_DWORD *)(a1 + 48) = 1734964085;
    v16[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v16 + 155, 16, 1, 0);
  }
  return (unsigned int)v7;
}
