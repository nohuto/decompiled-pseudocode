/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x180052F10
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800C40E0 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 */

HANDLE *__fastcall RtlCreateQueryDebugBuffer(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  HANDLE *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm0
  __int64 v7; // [rsp+30h] [rbp-50h]
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-20h] BYREF
  HANDLE *v11; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h] BYREF
  HANDLE *v14; // [rsp+B0h] [rbp+30h] BYREF
  char *v15; // [rsp+B8h] [rbp+38h] BYREF

  Handle = 0LL;
  v1 = 0x400000LL;
  v15 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  if ( a1 )
    v1 = a1;
  v2 = (v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 <= 0xFFFFFFFF && is_mul_ok(v2, 2uLL) )
  {
    v13 = 2 * v2;
    v12 = 2 * v2;
    if ( (int)NtCreateSection(&Handle, 983071LL, 0LL, &v12, 4, 0x4000000, ((v2 * (unsigned __int128)2uLL) >> 64) & v7) >= 0
      && (int)ZwMapViewOfSection(Handle, -1LL, &v11, 0LL, 0LL, 0LL, &v13, 2, 0, 4) >= 0 )
    {
      v14 = v11;
      v9 = 208LL;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &v9, 4096, 4) >= 0 )
      {
        v15 = (char *)v14 + v2;
        v10 = 208LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v10, 4096, 4) >= 0 )
        {
          *v14 = Handle;
          v14[1] = v14;
          v14[9] = (HANDLE)208;
          v14[10] = (HANDLE)v9;
          v14[11] = (HANDLE)v2;
          v3 = v14;
          v4 = v15;
          *(_OWORD *)v15 = *(_OWORD *)v14;
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
          *((_QWORD *)v15 + 1) = v15;
          *((_QWORD *)v15 + 10) = v10;
          *(_QWORD *)v15 = 0LL;
          return v14;
        }
      }
    }
    if ( v14 )
      ZwFreeVirtualMemory(-1LL, &v14, &v9, 0x8000LL);
    if ( v15 )
      ZwFreeVirtualMemory(-1LL, &v15, &v10, 0x8000LL);
    if ( v11 )
      NtUnmapViewOfSection(-1LL);
    if ( Handle )
      NtClose(Handle);
  }
  return 0LL;
}
