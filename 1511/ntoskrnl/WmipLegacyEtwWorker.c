/*
 * XREFs of WmipLegacyEtwWorker @ 0x1404C4D60
 * Callers:
 *     WmipAddDataSource @ 0x140501BD8 (WmipAddDataSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1403D39DC (WmipReferenceEntry.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
 *     WmipProcessLegacyEtwRegister @ 0x140544F90 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwCallback @ 0x14054EB74 (WmipProcessLegacyEtwCallback.c)
 */

__int64 __fastcall WmipLegacyEtwWorker(ULONG_PTR a1)
{
  __int64 v2; // rsi
  void **v3; // rsi
  void ***v4; // rdi
  void **v5; // rax
  int v6; // ecx
  int v8; // ecx
  REGHANDLE v9; // rbp

  WmipReferenceEntry(a1);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
    v3 = (void **)(v2 + 24);
  else
    v3 = (void **)(a1 + 136);
  while ( 1 )
  {
    v4 = (void ***)*v3;
    if ( *v3 == v3 )
      break;
    v5 = *v4;
    if ( v4[1] != v3 || v5[1] != v4 )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    KeReleaseMutex(&WmipSMMutex, 0);
    v6 = *((_DWORD *)v4 + 4);
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          WmipProcessLegacyEtwCallback(v4, a1);
      }
      else
      {
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        v9 = *(_QWORD *)(a1 + 104);
        *(_QWORD *)(a1 + 104) = 0LL;
        KeReleaseMutex(&WmipSMMutex, 0);
        if ( v9 )
          EtwUnregister(v9);
      }
    }
    else
    {
      WmipProcessLegacyEtwRegister(a1, v4);
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
    ExFreePoolWithTag(v4, 0x70696D57u);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  *(_QWORD *)(a1 + 128) = 0LL;
  KeReleaseMutex(&WmipSMMutex, 0);
  return WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
}
