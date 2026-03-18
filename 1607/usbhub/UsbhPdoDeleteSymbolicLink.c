/*
 * XREFs of UsbhPdoDeleteSymbolicLink @ 0x1C0054760
 * Callers:
 *     UsbhPdoRemoveCleanup @ 0x1C0054ED8 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

void __fastcall UsbhPdoDeleteSymbolicLink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v5; // edi
  _DWORD *v6; // rbx
  NTSTATUS v7; // eax
  void *v8; // rcx

  v5 = 0;
  v6 = PdoExt(a1, a2, a3, a4);
  if ( (v6[353] & 8) != 0 )
  {
    v7 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v6 + 298), 0);
    v8 = (void *)*((_QWORD *)v6 + 150);
    v5 = v7;
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)v6 + 150) = 0LL;
    }
    v6[353] &= ~8u;
  }
  Log(*((_QWORD *)v6 + 147), 256, 1937337676, v5, a1);
}
