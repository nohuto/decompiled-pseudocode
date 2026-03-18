/*
 * XREFs of UsbhDeleteOrphanPdo @ 0x1C00537EC
 * Callers:
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 * Callees:
 *     SET_PDO_HWPNPSTATE @ 0x1C000D0D4 (SET_PDO_HWPNPSTATE.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0054E24 (UsbhRemoveAndDeletePdo.c)
 */

_DWORD *__fastcall UsbhDeleteOrphanPdo(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx

  v5 = PdoExt(BugCheckParameter4, a2, a3, a4);
  result = PdoExt(BugCheckParameter4, v6, v7, v8);
  if ( result[281] != 6 )
  {
    SET_PDO_HWPNPSTATE(BugCheckParameter4, 6, 6);
    KeWaitForSingleObject(v5 + 322, Executive, 0, 0, 0LL);
    v12 = (void *)*((_QWORD *)v5 + 142);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)v5 + 142) = 0LL;
    }
    v13 = (void *)*((_QWORD *)v5 + 279);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)v5 + 279) = 0LL;
    }
    v14 = (void *)*((_QWORD *)v5 + 352);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)v5 + 352) = 0LL;
    }
    v15 = (void *)*((_QWORD *)v5 + 298);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      *((_QWORD *)v5 + 298) = 0LL;
    }
    v16 = (void *)*((_QWORD *)v5 + 299);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *((_QWORD *)v5 + 299) = 0LL;
    }
    v17 = (void *)*((_QWORD *)v5 + 313);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *((_QWORD *)v5 + 313) = 0LL;
    }
    v18 = (void *)*((_QWORD *)v5 + 106);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *((_QWORD *)v5 + 106) = 0LL;
    }
    if ( (v5[354] & 1) != 0 )
    {
      UsbhDecPdoIoCount(BugCheckParameter4, BugCheckParameter4, v10, v11);
      KeWaitForSingleObject(v5 + 308, Executive, 0, 0, 0LL);
    }
    v5[354] = 16;
    return (_DWORD *)UsbhRemoveAndDeletePdo(BugCheckParameter4);
  }
  return result;
}
