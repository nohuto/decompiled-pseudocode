/*
 * XREFs of RtlInitializeRXact @ 0x18007F4C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpNtQueryValueKey @ 0x180071620 (RtlpNtQueryValueKey.c)
 *     RtlAbortRXact @ 0x18007E2F0 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x18007E334 (RXactpCommit.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 *     ZwCreateKey @ 0x180093AD0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x180093F00 (ZwSetValueKey.c)
 *     NtDeleteKey @ 0x180094550 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x180094580 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlInitializeRXact(__int64 a1, char a2, __int64 **a3)
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v8; // rcx
  HANDLE v9; // rax
  int v10; // ebx
  unsigned __int64 v11; // rbx
  int v12; // esi
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v17; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  int v20; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  UNICODE_STRING *v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+A0h] [rbp-60h]
  __int128 v24; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING v25; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v26[6]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v27[128]; // [rsp+E0h] [rbp-20h] BYREF

  v15 = 12;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v25, L"RXACT");
  v20 = 48;
  v22 = &v25;
  v21 = a1;
  v23 = 192;
  v24 = 0LL;
  result = ZwCreateKey(&Handle, 196639LL, &v20, 0LL, 0LL, 0, &v16);
  if ( (int)result < 0 )
    return result;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 32LL);
  *a3 = (__int64 *)Heap;
  v8 = Heap;
  if ( !Heap )
  {
    NtDeleteKey(Handle);
    NtClose(Handle);
    return 3221225495LL;
  }
  v9 = Handle;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 8) = v9;
  *(_QWORD *)v8 = a1;
  *(_BYTE *)(v8 + 16) = 1;
  if ( v16 == 1 )
  {
    v26[0] = 1;
    v10 = ZwSetValueKey(Handle, &DestinationString, 0LL, 0LL, v26, 12);
    if ( v10 >= 0 )
      return 1073741828LL;
    NtDeleteKey(Handle);
    goto LABEL_16;
  }
  v10 = RtlpNtQueryValueKey((__int64)Handle, &v18, v26, &v15);
  if ( v10 < 0 )
  {
LABEL_16:
    NtClose(Handle);
    goto LABEL_18;
  }
  if ( v15 != 12 || v26[0] != 1 )
  {
    v10 = -1073741736;
    goto LABEL_16;
  }
  RtlInitUnicodeString(&v17, L"Log");
  if ( (int)NtQueryValueKey(Handle, &v17, 0LL, v27, 128, &v14) < 0 )
    return 0LL;
  if ( !a2 )
    return 2147483672LL;
  result = NtQueryValueKey(Handle, &v17, 1LL, 0LL, 0, &v14);
  if ( (_DWORD)result == -1073741789 )
  {
    v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
    if ( v11 )
    {
      v12 = NtQueryValueKey(Handle, &v17, 1LL, v11, v14, &v14);
      if ( v12 >= 0 )
      {
        (*a3)[3] = v11 + *(unsigned int *)(v11 + 8);
        *((_BYTE *)*a3 + 16) = 0;
        v12 = RXactpCommit(*a3);
        if ( v12 >= 0 )
        {
          ZwDeleteValueKey(Handle, &v17);
          (*a3)[3] = v11;
          return RtlAbortRXact((__int64)*a3);
        }
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      v10 = v12;
LABEL_18:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)*a3);
      return (unsigned int)v10;
    }
    return 3221225495LL;
  }
  return result;
}
