/*
 * XREFs of ResCCreateCultureMap @ 0x1800FAC98
 * Callers:
 *     ResCRuntimeViewLoadCultureMap @ 0x1800F7628 (ResCRuntimeViewLoadCultureMap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _ResCDupString @ 0x1800F8E80 (_ResCDupString.c)
 *     _ResGetFileAttributesEx @ 0x1800F9F9C (_ResGetFileAttributesEx.c)
 *     ResCFreeCultureMap @ 0x1800FAF48 (ResCFreeCultureMap.c)
 */

_DWORD *__fastcall ResCCreateCultureMap(WCHAR *Src)
{
  _DWORD *Heap; // rbx
  PVOID v3; // rax
  PVOID v4; // rax
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  BOOL v8; // eax
  char *v9; // rax
  _DWORD *result; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-38h] BYREF

  Heap = 0LL;
  if ( !Src )
  {
    RtlSetLastWin32Error(87);
LABEL_13:
    if ( Heap )
      ResCFreeCultureMap(Heap);
    return 0LL;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
    *((_QWORD *)Heap + 1) = v3;
    if ( v3 )
    {
      v4 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x50uLL);
      *((_QWORD *)Heap + 2) = v4;
      if ( v4 )
      {
        v5 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x400uLL);
        *((_QWORD *)Heap + 3) = v5;
        if ( v5 )
        {
          v7 = *((_QWORD *)Heap + 1);
          *Heap = 6;
          *(_DWORD *)(v7 + 8) = 0;
          *(_DWORD *)(v7 + 20) = 0;
          *(_DWORD *)(v7 + 24) = 0;
          *(_QWORD *)v7 = 0x4C554343534552LL;
          *(_DWORD *)(v7 + 12) = 10;
          *(_DWORD *)(v7 + 16) = 512;
          v8 = (unsigned int)ResGetFileAttributesEx(Src, v6, (__int64)v11) || NtCurrentTeb()->LastErrorValue != 2;
          Heap[8] = v8;
          v9 = ResCDupString(Src);
          *((_QWORD *)Heap + 5) = v9;
          if ( v9 )
          {
            *((_QWORD *)Heap + 7) = 0LL;
            result = Heap;
            Heap[12] = 0;
            return result;
          }
        }
      }
    }
    goto LABEL_13;
  }
  return 0LL;
}
