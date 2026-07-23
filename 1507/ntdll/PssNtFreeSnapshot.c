/*
 * XREFs of PssNtFreeSnapshot @ 0x1800597E0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180058F80 (PssNtCaptureSnapshot.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180083478 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     PssNtValidateDescriptor @ 0x180059950 (PssNtValidateDescriptor.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PssNtFreeSnapshot(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rax
  void *v4; // r8
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v4 = *(void **)(a1 + 848);
      if ( v4 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        *(_QWORD *)(a1 + 848) = 0LL;
      }
      *(_DWORD *)(a1 + 4) &= ~2u;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
    {
      v3 = *(void **)(a1 + 848);
      if ( v3 )
      {
        RegionSize = 0LL;
        BaseAddress = v3;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        *(_QWORD *)(a1 + 848) = 0LL;
        *(_DWORD *)(a1 + 4) &= ~4u;
      }
    }
    v5 = *(void **)(a1 + 952);
    if ( v5 )
    {
      NtClose(v5);
      *(_QWORD *)(a1 + 952) = 0LL;
    }
    v6 = *(void **)(a1 + 920);
    if ( v6 )
    {
      NtClose(v6);
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    v7 = *(void **)(a1 + 864);
    if ( v7 )
    {
      NtClose(v7);
      *(_QWORD *)(a1 + 864) = 0LL;
    }
    v8 = *(void **)(a1 + 888);
    if ( v8 )
    {
      NtClose(v8);
      *(_QWORD *)(a1 + 888) = 0LL;
    }
    v9 = *(void **)(a1 + 840);
    if ( v9 )
    {
      NtClose(v9);
      *(_QWORD *)(a1 + 840) = 0LL;
    }
    v10 = *(void **)(a1 + 816);
    if ( v10 )
    {
      NtClose(v10);
      *(_QWORD *)(a1 + 816) = 0LL;
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
