/*
 * XREFs of vCleanupRimClientWorker @ 0x1C011ADFC
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     xxxDesktopThread @ 0x1C00DF620 (xxxDesktopThread.c)
 *     vCleanupRimClient @ 0x1C011AC20 (vCleanupRimClient.c)
 *     vRemoveAndCleanupRimClient @ 0x1C011AD94 (vRemoveAndCleanupRimClient.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall vCleanupRimClientWorker(int a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rdx
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rsi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  _UNKNOWN **v13; // rcx
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
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = aDeviceTemplate[0];
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  do
  {
    if ( a1 == -1 || v3 == a1 )
    {
      if ( *(_QWORD *)(v4 + v2 + 96) != -1LL )
      {
        RIMUnregisterForInput();
        ObCloseHandle(*(HANDLE *)(v4 + aDeviceTemplate[0] + 96), 1);
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 96) = -1LL;
        ObfDereferenceObject(*(PVOID *)(v4 + aDeviceTemplate[0] + 104));
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 104) = 0LL;
        v2 = aDeviceTemplate[0];
      }
      v7 = *(void **)(v4 + v2 + 112);
      if ( v7 != (void *)-1LL )
      {
        ObCloseHandle(v7, 1);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 112) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v8 = *(void **)(v4 + v2 + 120);
      if ( v8 != (void *)-1LL )
      {
        ZwClose(v8);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 120) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v9 = *(void **)(v4 + v2 + 128);
      if ( v9 )
      {
        ObfDereferenceObject(v9);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 128) = 0LL;
        v2 = aDeviceTemplate[0];
      }
      v10 = *(void **)(v4 + v2 + 152);
      if ( v10 != (void *)-1LL )
      {
        ObCloseHandle(v10, 1);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 152) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v11 = *(void **)(v4 + v2 + 160);
      if ( v11 != (void *)-1LL )
      {
        ZwClose(v11);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 160) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v12 = *(void **)(v4 + v2 + 168);
      if ( v12 )
      {
        ObfDereferenceObject(v12);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 168) = 0LL;
        v2 = aDeviceTemplate[0];
      }
      v13 = *(_UNKNOWN ***)(v4 + v2 + 488);
      if ( v13 )
      {
        result = (_UNKNOWN **)(v5 + v2 + 496);
        if ( v13 != result )
        {
          RIMFreeKernelMem(v13);
          result = (_UNKNOWN **)aDeviceTemplate[0];
          *(_QWORD *)(v4 + aDeviceTemplate[0] + 488) = 0LL;
          v2 = aDeviceTemplate[0];
        }
      }
      v14 = *(void **)(v4 + v2 + 192);
      if ( v14 != (void *)-1LL )
      {
        ObCloseHandle(v14, 1);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 192) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v15 = *(void **)(v4 + v2 + 200);
      if ( v15 != (void *)-1LL )
      {
        ZwClose(v15);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 200) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v16 = *(void **)(v4 + v2 + 232);
      if ( v16 != (void *)-1LL )
      {
        ObCloseHandle(v16, 1);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 232) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v17 = *(void **)(v4 + v2 + 240);
      if ( v17 != (void *)-1LL )
      {
        ZwClose(v17);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 240) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v18 = *(void **)(v4 + v2 + 208);
      if ( v18 )
      {
        ObfDereferenceObject(v18);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 208) = 0LL;
        v2 = aDeviceTemplate[0];
      }
      v19 = *(void **)(v4 + v2 + 248);
      if ( v19 )
      {
        ObfDereferenceObject(v19);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 248) = 0LL;
        v2 = aDeviceTemplate[0];
      }
      v20 = *(void **)(v4 + v2 + 296);
      if ( v20 != (void *)-1LL )
      {
        ObCloseHandle(v20, 1);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 296) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v21 = *(void **)(v4 + v2 + 304);
      if ( v21 != (void *)-1LL )
      {
        ZwClose(v21);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 304) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v22 = *(void **)(v4 + v2 + 312);
      if ( v22 )
      {
        ObfDereferenceObject(v22);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 312) = 0LL;
        v2 = aDeviceTemplate[0];
      }
      v23 = *(void **)(v4 + v2 + 344);
      if ( v23 != (void *)-1LL )
      {
        ObCloseHandle(v23, 1);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 344) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v24 = *(void **)(v4 + v2 + 352);
      if ( v24 != (void *)-1LL )
      {
        ZwClose(v24);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 352) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v25 = *(void **)(v4 + v2 + 360);
      if ( v25 )
      {
        ObfDereferenceObject(v25);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 360) = 0LL;
        v2 = aDeviceTemplate[0];
      }
      v26 = *(void **)(v4 + v2 + 392);
      if ( v26 != (void *)-1LL )
      {
        ObCloseHandle(v26, 1);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 392) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v27 = *(void **)(v4 + v2 + 400);
      if ( v27 != (void *)-1LL )
      {
        ZwClose(v27);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 400) = -1LL;
        v2 = aDeviceTemplate[0];
      }
      v28 = *(void **)(v4 + v2 + 408);
      if ( v28 )
      {
        ObfDereferenceObject(v28);
        result = (_UNKNOWN **)aDeviceTemplate[0];
        *(_QWORD *)(v4 + aDeviceTemplate[0] + 408) = 0LL;
        v2 = aDeviceTemplate[0];
      }
    }
    ++v3;
    v5 += 560LL;
    v4 += 560LL;
  }
  while ( v3 <= 2 );
  return result;
}
