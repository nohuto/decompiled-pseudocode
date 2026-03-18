/*
 * XREFs of PnpInitializeTargetDeviceRemoveEvent @ 0x1405354EC
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x1405353A4 (PnpSetTargetDeviceRemove.c)
 *     PnpShutdownDevices @ 0x14067A594 (PnpShutdownDevices.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void *__fastcall PnpInitializeTargetDeviceRemoveEvent(
        char *a1,
        size_t Size,
        PVOID Object,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12)
{
  size_t v13; // r15
  __int64 v16; // rbp
  unsigned int v17; // edi
  void *result; // rax
  GUID v19; // xmm0

  v13 = (unsigned int)Size;
  ObfReferenceObject(Object);
  if ( Object )
    v16 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v16 = 0LL;
  v17 = *(unsigned __int16 *)(v16 + 40) >> 1;
  memset(a1, 0, v13);
  *((_QWORD *)a1 + 3) = a9;
  *((_DWORD *)a1 + 4) = a8;
  *((_QWORD *)a1 + 6) = a11;
  *((_QWORD *)a1 + 7) = a12;
  *((_DWORD *)a1 + 16) = 1;
  *((_DWORD *)a1 + 35) = 2 * v17 + 82;
  result = a10;
  *((_QWORD *)a1 + 16) = a10;
  *((_QWORD *)a1 + 18) = Object;
  *((_DWORD *)a1 + 30) = 1;
  if ( a6 )
    v19 = GUID_DEVICE_EJECT;
  else
    v19 = GUID_DEVICE_QUERY_AND_REMOVE;
  *(GUID *)(a1 + 104) = v19;
  if ( a5 )
    *((_DWORD *)a1 + 34) |= 2u;
  if ( a4 )
    *((_DWORD *)a1 + 34) |= 4u;
  if ( a7 )
    *((_DWORD *)a1 + 34) |= 8u;
  if ( v17 )
    result = memmove(a1 + 152, *(const void **)(v16 + 48), 2LL * v17);
  *(_WORD *)&a1[2 * v17 + 152] = 0;
  return result;
}
