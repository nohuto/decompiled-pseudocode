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
  unsigned __int64 v3; // r8
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 904);
      if ( v3 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
        *(_QWORD *)(a1 + 904) = 0LL;
      }
      *(_DWORD *)(a1 + 4) &= ~2u;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 904);
      if ( v10 )
      {
        v12 = 0LL;
        v13 = v10;
        ZwFreeVirtualMemory(-1LL, &v13, &v12, 0x8000LL);
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
      v12 = 0LL;
      v13 = a1;
      ZwFreeVirtualMemory(-1LL, &v13, &v12, 0x8000LL);
    }
    return 0LL;
  }
  return result;
}
