/*
 * XREFs of sub_140007470 @ 0x140007470
 * Callers:
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 * Callees:
 *     sub_1400050C0 @ 0x1400050C0 (sub_1400050C0.c)
 *     sub_140006ED0 @ 0x140006ED0 (sub_140006ED0.c)
 *     sub_140008D78 @ 0x140008D78 (sub_140008D78.c)
 */

__int64 sub_140007470()
{
  int v0; // ebx
  int v1; // eax
  HANDLE v2; // r12
  HANDLE v3; // r15
  HANDLE v4; // r14
  BOOL v5; // edi
  int v6; // eax
  HANDLE v7; // rsi
  PVOID *v8; // rdi
  struct _UNICODE_STRING *v9; // rbx
  _QWORD *v10; // rcx
  void **Buffer; // rax
  void *v12; // r8
  __int64 *v13; // rbx
  __int64 *v15; // rcx
  struct _UNICODE_STRING v16; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING v17; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+48h] BYREF
  HANDLE v19; // [rsp+98h] [rbp+50h] BYREF
  HANDLE v20; // [rsp+A0h] [rbp+58h] BYREF
  HANDLE v21; // [rsp+A8h] [rbp+60h] BYREF

  *(_DWORD *)&v16.Length = 1441812;
  v16.Buffer = L"\\KnownDlls";
  *(_DWORD *)&v17.Length = 1703960;
  v17.Buffer = L"\\KnownDlls32";
  Handle = 0LL;
  v19 = 0LL;
  v0 = sub_1400050C0(&v16, 1, &v21, &v20);
  if ( v0 >= 0 )
  {
    v1 = sub_1400050C0(&v17, 0, &v19, &Handle);
    v2 = v20;
    v0 = v1;
    v3 = v21;
    if ( v1 >= 0 )
    {
      v4 = v19;
      v5 = v19 != 0LL;
      v6 = sub_140006ED0((__int64)v21, v20, 0, v5);
      v7 = Handle;
      v0 = v6;
      if ( v6 >= 0 )
      {
        if ( !v5 || (v0 = sub_140006ED0((__int64)v4, Handle, 1, v5), v0 >= 0) )
        {
          v8 = (PVOID *)qword_140020110;
          if ( qword_140020110 != &qword_140020110 )
          {
            do
            {
              v9 = (struct _UNICODE_STRING *)v8;
              v8 = (PVOID *)*v8;
              v10 = *(_QWORD **)&v9->Length;
              Buffer = (void **)v9->Buffer;
              if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v9->Length + 8LL) != v9 || *Buffer != v9 )
                __fastfail(3u);
              *Buffer = v10;
              v10[1] = Buffer;
              RtlFreeUnicodeString(v9 + 2);
              v12 = *(void **)&v9[3].Length;
              if ( v12 )
                RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v12);
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v9);
            }
            while ( v8 != &qword_140020110 );
            v7 = Handle;
            v4 = v19;
            v2 = v20;
            v3 = v21;
          }
          v13 = (__int64 *)qword_140020120;
          while ( v13 != &qword_140020120 )
          {
            v15 = v13;
            v13 = (__int64 *)*v13;
            sub_140008D78(v15);
          }
          v0 = 0;
        }
      }
      if ( v7 )
        NtClose(v7);
      if ( v4 )
        NtClose(v4);
    }
    if ( v2 )
      NtClose(v2);
    if ( v3 )
      NtClose(v3);
  }
  return (unsigned int)v0;
}
