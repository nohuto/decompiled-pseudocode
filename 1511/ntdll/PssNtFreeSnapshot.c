/*
 * XREFs of PssNtFreeSnapshot @ 0x180084150
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800478E0 (PssNtCaptureSnapshot.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18008BDD8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     PssNtValidateDescriptor @ 0x1800842D0 (PssNtValidateDescriptor.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PssNtFreeSnapshot(__int64 a1)
{
  __int64 result; // rax
  void *v3; // r8
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v3 = *(void **)(a1 + 904);
      if ( v3 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
        *(_QWORD *)(a1 + 904) = 0LL;
      }
      *(_DWORD *)(a1 + 4) &= ~2u;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
    {
      v10 = *(void **)(a1 + 904);
      if ( v10 )
      {
        RegionSize = 0LL;
        BaseAddress = v10;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        *(_QWORD *)(a1 + 904) = 0LL;
        *(_DWORD *)(a1 + 4) &= ~4u;
      }
    }
    v4 = *(void **)(a1 + 1008);
    if ( v4 )
    {
      NtClose(v4);
      *(_QWORD *)(a1 + 1008) = 0LL;
    }
    v5 = *(void **)(a1 + 976);
    if ( v5 )
    {
      NtClose(v5);
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    v6 = *(void **)(a1 + 920);
    if ( v6 )
    {
      NtClose(v6);
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    v7 = *(void **)(a1 + 944);
    if ( v7 )
    {
      NtClose(v7);
      *(_QWORD *)(a1 + 944) = 0LL;
    }
    v8 = *(void **)(a1 + 896);
    if ( v8 )
    {
      NtClose(v8);
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    v9 = *(void **)(a1 + 872);
    if ( v9 )
    {
      NtClose(v9);
      *(_QWORD *)(a1 + 872) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      RegionSize = 0LL;
      BaseAddress = (PVOID)a1;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    return 0LL;
  }
  return result;
}
