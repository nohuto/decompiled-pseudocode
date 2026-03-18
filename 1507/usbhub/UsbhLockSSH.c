/*
 * XREFs of UsbhLockSSH @ 0x1C002995C
 * Callers:
 *     Usbh_SSH_HubPendingResume @ 0x1C0019360 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C001BDCC (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056344 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 __fastcall UsbhLockSSH(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  _DWORD *v6; // rdi
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v5 = a2;
  v6 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  KeWaitForSingleObject(v6 + 782, Executive, 0, 0, 0LL);
  *((_QWORD *)v6 + 399) = a1;
  *(_DWORD *)(a1 + 120) = 2018005843;
  *(_DWORD *)(a1 + 124) = v5;
  *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
  v7 = v6[864];
  v8 = 8LL * (v7 & 7);
  if ( v6[v8 + 865] != v5 || v6[v8 + 866] != v6[781] )
  {
    v9 = ((_BYTE)v7 + 1) & 7;
    v6[864] = v9;
    v9 *= 32LL;
    *(_DWORD *)((char *)v6 + v9 + 3460) = v5;
    *(_DWORD *)((char *)v6 + v9 + 3464) = v6[781];
  }
  return (unsigned int)v6[781];
}
