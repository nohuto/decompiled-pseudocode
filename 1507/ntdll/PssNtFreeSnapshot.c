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
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 848);
      if ( v4 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
        *(_QWORD *)(a1 + 848) = 0LL;
      }
      *(_DWORD *)(a1 + 4) &= ~2u;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 848);
      if ( v3 )
      {
        v12 = 0LL;
        v13 = v3;
        ZwFreeVirtualMemory(-1LL, &v13, &v12, 0x8000LL);
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
      v12 = 0LL;
      v13 = a1;
      ZwFreeVirtualMemory(-1LL, &v13, &v12, 0x8000LL);
    }
    return 0LL;
  }
  return result;
}
