/*
 * XREFs of sub_140010040 @ 0x140010040
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

char sub_140010040()
{
  unsigned __int64 v0; // rbp
  unsigned int *Heap; // rax
  unsigned __int64 v2; // rsi
  ULONG v3; // edi
  SIZE_T i; // r8
  NTSTATUS v5; // edi
  unsigned int *v6; // rbx
  __int64 v7; // rdi
  unsigned int *v8; // rcx
  __int64 j; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  int v14; // ecx
  int v15; // edx
  ULONG ReturnLength; // [rsp+30h] [rbp-F8h] BYREF
  char SystemInformation[8]; // [rsp+38h] [rbp-F0h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v20; // [rsp+50h] [rbp-D8h]
  char v21[168]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+108h] [rbp-20h]

  v0 = qword_140020480 / (unsigned __int64)(unsigned int)dword_140020188;
  LODWORD(Heap) = NtQuerySystemInformation(
                    MaxSystemInfoClass|SystemFullMemoryInformation,
                    SystemInformation,
                    0x20u,
                    0LL);
  if ( (int)Heap >= 0 )
  {
    v2 = v19;
    if ( v20 > qword_1400204C8 )
    {
      qword_1400204C8 = v20;
      v2 = v20;
    }
    LODWORD(Heap) = NtQuerySystemInformation(SystemMemoryListInformation, v21, 0xB0u, &ReturnLength);
    if ( (int)Heap >= 0 )
    {
      v3 = 256;
      for ( i = 256LL; ; i = ReturnLength )
      {
        Heap = (unsigned int *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, i);
        v6 = Heap;
        if ( !Heap )
          break;
        v5 = NtQuerySystemInformation(SystemPageFileInformation, Heap, v3, &ReturnLength);
        if ( v5 >= 0 )
        {
          v7 = 0LL;
          if ( ReturnLength )
          {
            v7 = v6[2];
            v8 = v6;
            for ( j = *v6; (_DWORD)j; j = *v8 )
            {
              v8 = (unsigned int *)((char *)v8 + j);
              v7 += v8[2];
            }
          }
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v6);
          v10 = v7 + v22;
          v11 = 10 * v2 / 9;
          v12 = 0x400000000uLL / (unsigned int)dword_140020188;
          if ( v11 > v12 + v2 )
            v11 = v12 + v2;
          if ( v11 > v0 )
          {
            v13 = v11 - v0;
            if ( v13 > v10 )
              v10 = v13;
          }
          if ( v10 > 0xFFFFFFFF )
            LODWORD(v10) = -1;
          dword_1400204D4[(unsigned int)Data % 0xF0] = v10;
          v14 = 7;
          LODWORD(Data) = Data + 1;
          v15 = dword_1400204C0 + 1;
          dword_1400204C0 = v15;
          LOBYTE(Heap) = v15 - 1;
          if ( (unsigned int)(v15 - 1) < 7 )
            v14 = v15 - 1;
          if ( (v14 & v15) == 0 )
            LOBYTE(Heap) = NtSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_14001ABE8, 0, 3u, &Data, 0x3C4u);
          return (char)Heap;
        }
        LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v6);
        if ( v5 != -1073741820 )
          return (char)Heap;
        v3 = ReturnLength;
      }
    }
  }
  return (char)Heap;
}
