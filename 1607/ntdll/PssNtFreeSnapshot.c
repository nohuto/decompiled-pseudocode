/*
 * XREFs of PssNtFreeSnapshot @ 0x180007C40
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D44 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 *     PssNtCaptureSnapshot @ 0x180059160 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PssNtValidateDescriptor @ 0x180008280 (PssNtValidateDescriptor.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PssNtFreeSnapshot(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 904);
      if ( v10 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
        *(_QWORD *)(a1 + 904) = 0LL;
      }
      *(_DWORD *)(a1 + 4) &= ~2u;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 904);
      if ( v9 )
      {
        v12 = 0LL;
        v13 = v9;
        ZwFreeVirtualMemory(-1LL, &v13, &v12, 0x8000LL);
        *(_QWORD *)(a1 + 904) = 0LL;
        *(_DWORD *)(a1 + 4) &= ~4u;
      }
    }
    v3 = *(void **)(a1 + 1008);
    if ( v3 )
    {
      NtClose(v3);
      *(_QWORD *)(a1 + 1008) = 0LL;
    }
    v4 = *(void **)(a1 + 976);
    if ( v4 )
    {
      NtClose(v4);
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    v5 = *(void **)(a1 + 920);
    if ( v5 )
    {
      NtClose(v5);
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    v6 = *(void **)(a1 + 944);
    if ( v6 )
    {
      NtClose(v6);
      *(_QWORD *)(a1 + 944) = 0LL;
    }
    v7 = *(void **)(a1 + 896);
    if ( v7 )
    {
      NtClose(v7);
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    v8 = *(void **)(a1 + 872);
    if ( v8 )
    {
      NtClose(v8);
      *(_QWORD *)(a1 + 872) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v12 = 0LL;
      v13 = a1;
      ZwFreeVirtualMemory(-1LL, &v13, &v12, 0x8000LL);
    }
    return 0LL;
  }
  return result;
}
