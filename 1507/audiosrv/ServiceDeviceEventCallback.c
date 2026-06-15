/*
 * XREFs of ServiceDeviceEventCallback @ 0x18009DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180004284 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002E51C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ServiceDeviceEvent @ 0x18009DD20 (ServiceDeviceEvent.c)
 */

__int64 __fastcall ServiceDeviceEventCallback(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbp
  HANDLE ProcessHeap; // rax
  unsigned int v8; // ebx
  char *v9; // rax
  struct _DEV_BROADCAST_DEVICEINTERFACE_W *v10; // rsi
  unsigned int v11; // ecx
  HANDLE v12; // rax
  unsigned __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( (int)StringCbLengthW((const unsigned __int16 *)(a4 + 24), 0xFFFFFFFEuLL, &v14) < 0 )
    return 13;
  v6 = (unsigned int)(v14 + 32);
  if ( (unsigned int)v6 < (unsigned int)v14 )
    return 13;
  ProcessHeap = GetProcessHeap();
  v8 = 8;
  v9 = (char *)HeapAlloc(ProcessHeap, 8u, (unsigned int)v6);
  v10 = (struct _DEV_BROADCAST_DEVICEINTERFACE_W *)v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    *(_DWORD *)v9 = v6;
    *((_DWORD *)v9 + 1) = 5;
    *(_OWORD *)(v9 + 12) = *(_OWORD *)(a4 + 8);
    if ( (int)StringCchCopyW((unsigned __int16 *)v9 + 14, v6 - 30, (size_t *)(a4 + 24)) >= 0 )
    {
      if ( a3 )
      {
        if ( a3 != 1 )
          goto LABEL_7;
        v11 = 32772;
      }
      else
      {
        v11 = 0x8000;
      }
      v8 = ServiceDeviceEvent(v11, v10);
      goto LABEL_11;
    }
LABEL_7:
    v8 = 13;
LABEL_11:
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v10);
  }
  return v8;
}
