/*
 * XREFs of vCleanupRimClientWorker @ 0x1C0144CB4
 * Callers:
 *     vCleanupRimClient @ 0x1C0131370 (vCleanupRimClient.c)
 *     xxxDesktopThread @ 0x1C0142CC0 (xxxDesktopThread.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 *     vRemoveAndCleanupRimClient @ 0x1C0144C58 (vRemoveAndCleanupRimClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vCleanupRimClientWorker(int a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  __int64 result; // rax
  void *v25; // rcx

  v1 = 0;
  v2 = 0LL;
  do
  {
    if ( v1 == a1 || a1 == -1 )
    {
      if ( *(_DWORD *)(v2 + aDeviceTemplate[0] + 96) && *(_QWORD *)(v2 + aDeviceTemplate[0] + 104) != -1LL )
      {
        RIMUnregisterForInput();
        ObCloseHandle(*(HANDLE *)(v2 + aDeviceTemplate[0] + 104), 1);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 104) = -1LL;
        ObfDereferenceObject(*(PVOID *)(v2 + aDeviceTemplate[0] + 112));
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 112) = 0LL;
      }
      v4 = *(void **)(v2 + aDeviceTemplate[0] + 120);
      if ( v4 != (void *)-1LL )
      {
        ObCloseHandle(v4, 1);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 120) = -1LL;
      }
      v5 = *(void **)(v2 + aDeviceTemplate[0] + 128);
      if ( v5 != (void *)-1LL )
      {
        ZwClose(v5);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 128) = -1LL;
      }
      v6 = *(void **)(v2 + aDeviceTemplate[0] + 136);
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 136) = 0LL;
      }
      v7 = *(void **)(v2 + aDeviceTemplate[0] + 160);
      if ( v7 != (void *)-1LL )
      {
        ObCloseHandle(v7, 1);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 160) = -1LL;
      }
      v8 = *(void **)(v2 + aDeviceTemplate[0] + 168);
      if ( v8 != (void *)-1LL )
      {
        ZwClose(v8);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 168) = -1LL;
      }
      v9 = *(void **)(v2 + aDeviceTemplate[0] + 176);
      if ( v9 )
      {
        ObfDereferenceObject(v9);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 176) = 0LL;
      }
      v10 = *(void **)(v2 + aDeviceTemplate[0] + 200);
      if ( v10 != (void *)-1LL )
      {
        ObCloseHandle(v10, 1);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 200) = -1LL;
      }
      v11 = *(void **)(v2 + aDeviceTemplate[0] + 208);
      if ( v11 != (void *)-1LL )
      {
        ZwClose(v11);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 208) = -1LL;
      }
      v12 = *(void **)(v2 + aDeviceTemplate[0] + 240);
      if ( v12 != (void *)-1LL )
      {
        ObCloseHandle(v12, 1);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 240) = -1LL;
      }
      v13 = *(void **)(v2 + aDeviceTemplate[0] + 248);
      if ( v13 != (void *)-1LL )
      {
        ZwClose(v13);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 248) = -1LL;
      }
      v14 = *(void **)(v2 + aDeviceTemplate[0] + 216);
      if ( v14 )
      {
        ObfDereferenceObject(v14);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 216) = 0LL;
      }
      v15 = *(void **)(v2 + aDeviceTemplate[0] + 256);
      if ( v15 )
      {
        ObfDereferenceObject(v15);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 256) = 0LL;
      }
      v16 = *(void **)(v2 + aDeviceTemplate[0] + 304);
      if ( v16 != (void *)-1LL )
      {
        ObCloseHandle(v16, 1);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 304) = -1LL;
      }
      v17 = *(void **)(v2 + aDeviceTemplate[0] + 312);
      if ( v17 != (void *)-1LL )
      {
        ZwClose(v17);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 312) = -1LL;
      }
      v18 = *(void **)(v2 + aDeviceTemplate[0] + 320);
      if ( v18 )
      {
        ObfDereferenceObject(v18);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 320) = 0LL;
      }
      v19 = *(void **)(v2 + aDeviceTemplate[0] + 352);
      if ( v19 != (void *)-1LL )
      {
        ObCloseHandle(v19, 1);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 352) = -1LL;
      }
      v20 = *(void **)(v2 + aDeviceTemplate[0] + 360);
      if ( v20 != (void *)-1LL )
      {
        ZwClose(v20);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 360) = -1LL;
      }
      v21 = *(void **)(v2 + aDeviceTemplate[0] + 368);
      if ( v21 )
      {
        ObfDereferenceObject(v21);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 368) = 0LL;
      }
      v22 = *(void **)(v2 + aDeviceTemplate[0] + 400);
      if ( v22 != (void *)-1LL )
      {
        ObCloseHandle(v22, 1);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 400) = -1LL;
      }
      v23 = *(void **)(v2 + aDeviceTemplate[0] + 408);
      if ( v23 != (void *)-1LL )
      {
        ZwClose(v23);
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 408) = -1LL;
      }
      result = aDeviceTemplate[0];
      v25 = *(void **)(v2 + aDeviceTemplate[0] + 416);
      if ( v25 )
      {
        ObfDereferenceObject(v25);
        result = aDeviceTemplate[0];
        *(_QWORD *)(v2 + aDeviceTemplate[0] + 416) = 0LL;
      }
    }
    ++v1;
    v2 += 568LL;
  }
  while ( v1 <= 2 );
  return result;
}
