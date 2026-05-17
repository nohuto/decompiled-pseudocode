/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x180042E90
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800CD730 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 */

HANDLE *__fastcall RtlCreateQueryDebugBuffer(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  HANDLE *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm0
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v11; // [rsp+78h] [rbp-8h] BYREF
  HANDLE *v12; // [rsp+B0h] [rbp+30h] BYREF
  char *v13; // [rsp+B8h] [rbp+38h] BYREF

  Handle = 0LL;
  v1 = 0x400000LL;
  v13 = 0LL;
  v12 = 0LL;
  v10[0] = 0LL;
  if ( a1 )
    v1 = a1;
  v2 = (v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 <= 0xFFFFFFFF && is_mul_ok(v2, 2uLL) )
  {
    v11 = 2 * v2;
    v10[1] = 2 * v2;
    if ( (int)NtCreateSection(&Handle, 983071LL, 0LL) >= 0
      && (int)ZwMapViewOfSection(Handle, -1LL, v10, 0LL, 0LL, 0LL, &v11, 2, 0, 4) >= 0 )
    {
      v12 = (HANDLE *)v10[0];
      v8 = 208LL;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v8, 4096, 4) >= 0 )
      {
        v13 = (char *)v12 + v2;
        v9 = 208LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v9, 4096, 4) >= 0 )
        {
          *v12 = Handle;
          v12[1] = v12;
          v12[9] = (HANDLE)208;
          v12[10] = (HANDLE)v8;
          v12[11] = (HANDLE)v2;
          v3 = v12;
          v4 = v13;
          *(_OWORD *)v13 = *(_OWORD *)v12;
          v4[1] = *((_OWORD *)v3 + 1);
          v4[2] = *((_OWORD *)v3 + 2);
          v4[3] = *((_OWORD *)v3 + 3);
          v4[4] = *((_OWORD *)v3 + 4);
          v4[5] = *((_OWORD *)v3 + 5);
          v4[6] = *((_OWORD *)v3 + 6);
          v4 += 8;
          v5 = *((_OWORD *)v3 + 7);
          v3 += 16;
          *(v4 - 1) = v5;
          *v4 = *(_OWORD *)v3;
          v4[1] = *((_OWORD *)v3 + 1);
          v4[2] = *((_OWORD *)v3 + 2);
          v4[3] = *((_OWORD *)v3 + 3);
          v4[4] = *((_OWORD *)v3 + 4);
          *((_QWORD *)v13 + 1) = v13;
          *((_QWORD *)v13 + 10) = v9;
          *(_QWORD *)v13 = 0LL;
          return v12;
        }
      }
    }
    if ( v12 )
      ZwFreeVirtualMemory(-1LL, &v12, &v8, 0x8000LL);
    if ( v13 )
      ZwFreeVirtualMemory(-1LL, &v13, &v9, 0x8000LL);
    if ( v10[0] )
      NtUnmapViewOfSection(-1LL, v10[0]);
    if ( Handle )
      NtClose(Handle);
  }
  return 0LL;
}
