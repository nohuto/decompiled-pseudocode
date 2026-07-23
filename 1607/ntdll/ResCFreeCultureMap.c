/*
 * XREFs of ResCFreeCultureMap @ 0x180105828
 * Callers:
 *     ResCCloseRuntimeView @ 0x1800FEF5C (ResCCloseRuntimeView.c)
 *     ResCCreateCultureMap @ 0x180105584 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x1801059BC (ResCLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x180105A60 (ResCReloadCultureMap.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     _ResUnmapViewOfFile @ 0x180104D1C (_ResUnmapViewOfFile.c)
 */

__int64 __fastcall ResCFreeCultureMap(_QWORD *BaseAddress)
{
  void *v2; // r8
  void *v3; // r8
  void *v4; // r8
  void *v5; // r8
  void *v6; // rcx

  if ( BaseAddress )
  {
    v2 = (void *)BaseAddress[1];
    if ( v2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
      BaseAddress[1] = 0LL;
    }
    v3 = (void *)BaseAddress[5];
    if ( v3 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
      BaseAddress[5] = 0LL;
    }
    if ( (*(_BYTE *)BaseAddress & 4) != 0 )
    {
      v4 = (void *)BaseAddress[2];
      if ( v4 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        BaseAddress[2] = 0LL;
      }
      v5 = (void *)BaseAddress[3];
      if ( v5 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        BaseAddress[3] = 0LL;
      }
    }
    if ( (*(_BYTE *)BaseAddress & 1) != 0 )
    {
      v6 = (void *)BaseAddress[1];
      if ( v6 )
        ResUnmapViewOfFile(v6);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return 1LL;
}
