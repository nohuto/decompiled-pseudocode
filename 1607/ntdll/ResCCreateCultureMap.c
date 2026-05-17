/*
 * XREFs of ResCCreateCultureMap @ 0x180105644
 * Callers:
 *     ResCRuntimeViewLoadCultureMap @ 0x1800FF784 (ResCRuntimeViewLoadCultureMap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _ResCDupString @ 0x180103814 (_ResCDupString.c)
 *     _ResGetFileAttributesEx @ 0x180104948 (_ResGetFileAttributesEx.c)
 *     ResCFreeCultureMap @ 0x1801058E8 (ResCFreeCultureMap.c)
 */

__int64 __fastcall ResCCreateCultureMap(_WORD *Src)
{
  __int64 Heap; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  BOOL v8; // eax
  char *v9; // rax
  __int64 result; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-38h] BYREF

  Heap = 0LL;
  if ( !Src )
  {
    RtlSetLastWin32Error(0x57u);
LABEL_13:
    if ( Heap )
      ResCFreeCultureMap(Heap);
    return 0LL;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
    *(_QWORD *)(Heap + 8) = v3;
    if ( v3 )
    {
      v4 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x50uLL);
      *(_QWORD *)(Heap + 16) = v4;
      if ( v4 )
      {
        v5 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x400uLL);
        *(_QWORD *)(Heap + 24) = v5;
        if ( v5 )
        {
          v7 = *(_QWORD *)(Heap + 8);
          *(_DWORD *)Heap = 6;
          *(_DWORD *)(v7 + 8) = 0;
          *(_DWORD *)(v7 + 20) = 0;
          *(_DWORD *)(v7 + 24) = 0;
          *(_QWORD *)v7 = 0x4C554343534552LL;
          *(_DWORD *)(v7 + 12) = 10;
          *(_DWORD *)(v7 + 16) = 512;
          v8 = (unsigned int)ResGetFileAttributesEx((int)Src, v6, (__int64)v11) || NtCurrentTeb()->LastErrorValue != 2;
          *(_DWORD *)(Heap + 32) = v8;
          v9 = ResCDupString(Src);
          *(_QWORD *)(Heap + 40) = v9;
          if ( v9 )
          {
            *(_QWORD *)(Heap + 56) = 0LL;
            result = Heap;
            *(_DWORD *)(Heap + 48) = 0;
            return result;
          }
        }
      }
    }
    goto LABEL_13;
  }
  return 0LL;
}
