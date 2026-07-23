/*
 * XREFs of PnpInitializeTargetDeviceRemoveEvent @ 0x1404866BC
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x140484C7C (PnpSetTargetDeviceRemove.c)
 *     PnpShutdownDevices @ 0x140629AD4 (PnpShutdownDevices.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
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
        int a9,
        __int64 a10,
        void *a11,
        __int64 a12,
        __int64 a13)
{
  size_t v14; // r15
  __int64 v17; // rbp
  unsigned int v18; // edi
  void *result; // rax
  GUID v20; // xmm0

  v14 = (unsigned int)Size;
  ObfReferenceObject(Object);
  if ( Object )
    v17 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v17 = 0LL;
  v18 = *(unsigned __int16 *)(v17 + 40) >> 1;
  memset(a1, 0, v14);
  *((_QWORD *)a1 + 3) = a10;
  *((_DWORD *)a1 + 4) = a8;
  *((_DWORD *)a1 + 5) = a9;
  *((_QWORD *)a1 + 6) = a12;
  *((_QWORD *)a1 + 7) = a13;
  *((_DWORD *)a1 + 16) = 1;
  *((_DWORD *)a1 + 35) = 2 * v18 + 82;
  result = a11;
  *((_QWORD *)a1 + 16) = a11;
  *((_QWORD *)a1 + 18) = Object;
  *((_DWORD *)a1 + 30) = 1;
  if ( a6 )
    v20 = GUID_DEVICE_EJECT;
  else
    v20 = GUID_DEVICE_QUERY_AND_REMOVE;
  *(GUID *)(a1 + 104) = v20;
  if ( a5 )
    *((_DWORD *)a1 + 34) |= 2u;
  if ( a4 )
    *((_DWORD *)a1 + 34) |= 4u;
  if ( a7 )
    *((_DWORD *)a1 + 34) |= 8u;
  if ( v18 )
    result = memmove(a1 + 152, *(const void **)(v17 + 48), 2LL * v18);
  *(_WORD *)&a1[2 * v18 + 152] = 0;
  return result;
}
