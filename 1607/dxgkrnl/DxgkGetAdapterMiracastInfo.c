/*
 * XREFs of DxgkGetAdapterMiracastInfo @ 0x1C002D048
 * Callers:
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C009326C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

void __fastcall DxgkGetAdapterMiracastInfo(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  int v4; // esi
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  memset(a2, 0, 0x20uLL);
  *((_DWORD *)a2 + 6) |= 0x80u;
  v4 = 0;
  v5 = *((_DWORD *)a2 + 6) ^ ((*(_DWORD *)(v2 + 3032) != -1) ^ (unsigned __int8)*((_DWORD *)a2 + 6)) & 1;
  *((_DWORD *)a2 + 6) = v5;
  if ( (v5 & 1) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
    *((_DWORD *)a2 + 6) ^= (*((_DWORD *)a2 + 6) ^ (2 * *(_DWORD *)(v2 + 3028))) & 2;
    LOBYTE(v4) = *(_QWORD *)(v2 + 3040) != 0LL;
    v6 = *((_DWORD *)a2 + 6) ^ (*((_DWORD *)a2 + 6) ^ (4 * v4)) & 4;
    *((_DWORD *)a2 + 6) = v6;
    if ( (v6 & 4) != 0 )
    {
      v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3040) + 616LL))) & 8;
      *((_DWORD *)a2 + 6) = v7;
      v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3040) + 616LL))) & 0x10;
      *((_DWORD *)a2 + 6) = v8;
      *((_DWORD *)a2 + 6) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3040) + 616LL))) & 0x20;
      *a2 = *(_QWORD *)(*(_QWORD *)(v2 + 3040) + 624LL);
      a2[1] = *(_QWORD *)(*(_QWORD *)(v2 + 3040) + 632LL);
      a2[2] = *(_QWORD *)(*(_QWORD *)(v2 + 3040) + 640LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    *((_DWORD *)a2 + 6) = v5 & 0xFFFFFFFD;
  }
}
