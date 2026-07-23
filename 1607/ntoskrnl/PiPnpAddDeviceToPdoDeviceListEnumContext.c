/*
 * XREFs of PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1404874F8
 * Callers:
 *     PiPnpPdoDeviceListEnumCallback @ 0x1404874C0 (PiPnpPdoDeviceListEnumCallback.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpAddDeviceToPdoDeviceListEnumContext(unsigned int *a1, __int64 a2)
{
  _DWORD *v4; // rcx
  __int64 v6; // rsi
  _DWORD *PoolWithTag; // rax
  void *v8; // rdi
  const void *v9; // rdx

  v4 = (_DWORD *)*((_QWORD *)a1 + 1);
  if ( v4 && *v4 != *a1 )
  {
LABEL_3:
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL * (unsigned int)(**((_DWORD **)a1 + 1))++ + 8) = a2;
    return 0LL;
  }
  v6 = *a1 + 256;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v6 + 8, 0x20207050u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    memset(&PoolWithTag[2 * *a1 + 2], 0, 0x800uLL);
    v9 = (const void *)*((_QWORD *)a1 + 1);
    if ( v9 )
    {
      memmove(v8, v9, 8LL * *a1 + 8);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    *a1 = v6;
    *((_QWORD *)a1 + 1) = v8;
    goto LABEL_3;
  }
  return 3221225626LL;
}
