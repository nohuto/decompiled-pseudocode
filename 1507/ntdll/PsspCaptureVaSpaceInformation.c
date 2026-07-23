/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x18004EB0C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180058F80 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureImageInformation @ 0x180051140 (PsspCaptureImageInformation.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __fastcall PsspCaptureVaSpaceInformation(__int64 a1, void *a2, int a3)
{
  __int16 v3; // r13
  NTSTATUS result; // eax
  void *v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // r14d
  unsigned __int64 v9; // rbx
  char v10; // r15
  int v11; // ecx
  unsigned __int64 v12; // rcx
  NTSTATUS v13; // edi
  void *v14; // r14
  unsigned int v15; // r12d
  int v16; // r13d
  unsigned __int16 *v17; // rdi
  unsigned int v18; // r15d
  NTSTATUS VirtualMemory; // esi
  bool v20; // zf
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  ULONG_PTR v25; // rdx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned __int16 *v28; // rsi
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int16 v31; // ax
  NTSTATUS v32; // eax
  size_t v33; // r8
  unsigned __int16 v34; // r14
  char v35; // [rsp+50h] [rbp-B0h]
  ULONG_PTR ReturnLength; // [rsp+58h] [rbp-A8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE ProcessHandle; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+78h] [rbp-88h]
  _QWORD MemoryInformation[6]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  LARGE_INTEGER MaximumSize; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v45[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE SystemInformation[40]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v47; // [rsp+108h] [rbp+8h]

  v40 = a3;
  v3 = a3;
  ProcessHandle = a2;
  v43 = a1;
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result < 0 )
    return result;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  LODWORD(v9) = 0;
  v10 = 0;
  v35 = 0;
  if ( !v47 )
  {
LABEL_11:
    v12 = 72LL * v7;
    if ( v12 <= 0xFFFFFFFF )
    {
      if ( v10 )
      {
        v9 = 8LL * v8;
        if ( v9 > 0xFFFFFFFF )
          return -1073741675;
      }
      else if ( (v3 & 0x1000) != 0 )
      {
        if ( (int)v9 + 16 < (unsigned int)v9 )
          return -1073741675;
        LODWORD(v9) = v9 + 16;
      }
      if ( !(_DWORD)v9 )
        goto LABEL_19;
      if ( (int)v12 + (int)v9 >= (unsigned int)v12 )
      {
        LODWORD(v12) = v12 + v9;
LABEL_19:
        MaximumSize.QuadPart = (unsigned int)v12;
        result = NtCreateSection(
                   &SectionHandle,
                   0xF0007u,
                   (POBJECT_ATTRIBUTES)&ObjectAttributes,
                   &MaximumSize,
                   4u,
                   0x8000000u,
                   0LL);
        if ( result < 0 )
          return result;
        BaseAddress = 0LL;
        ViewSize = 0LL;
        v13 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0LL,
                0LL,
                &ViewSize,
                ViewShare,
                0,
                4u);
        if ( v13 < 0 )
        {
          NtClose(SectionHandle);
          return v13;
        }
        v14 = 0LL;
        v15 = ViewSize;
        v16 = 0;
        v17 = (unsigned __int16 *)BaseAddress;
        v18 = 0;
        if ( !v47 )
        {
LABEL_30:
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v17);
          v23 = v43;
          *(_QWORD *)(v43 + 864) = SectionHandle;
          *(_DWORD *)(v23 + 856) = v16;
          *(_DWORD *)(v23 + 860) = v18;
          *(_QWORD *)(v23 + 872) = MEMORY[0x7FFE0014];
          return 0;
        }
        while ( 1 )
        {
          if ( v18 + 72 < v18 || v18 + 72 > v15 )
          {
LABEL_29:
            v17 = (unsigned __int16 *)BaseAddress;
            goto LABEL_30;
          }
          memset(MemoryInformation, 0, sizeof(MemoryInformation));
          VirtualMemory = ZwQueryVirtualMemory(
                            ProcessHandle,
                            v14,
                            MemoryBasicInformation,
                            MemoryInformation,
                            0x30uLL,
                            0LL);
          if ( VirtualMemory < 0 )
          {
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            NtClose(SectionHandle);
            return VirtualMemory;
          }
          memset(v17, 0, 0x48uLL);
          v20 = (v40 & 0x1000) == 0;
          v21 = 72;
          *(_QWORD *)v17 = MemoryInformation[0];
          *((_QWORD *)v17 + 1) = MemoryInformation[1];
          *((_DWORD *)v17 + 4) = MemoryInformation[2];
          *((_QWORD *)v17 + 3) = MemoryInformation[3];
          *((_QWORD *)v17 + 4) = MemoryInformation[4];
          *((_DWORD *)v17 + 10) = MemoryInformation[5];
          if ( !v20 )
          {
            if ( LODWORD(MemoryInformation[5]) == 0x1000000 )
            {
              PsspCaptureImageInformation(v17 + 24, ProcessHandle, MemoryInformation[1]);
LABEL_45:
              if ( v18 + 76 < v18 || v18 + 76 > v15 )
                goto LABEL_29;
              if ( !v35 )
              {
                v27 = v18 + 92;
                if ( v18 + 92 < v18 + 76 || v27 > v15 )
                {
                  v35 = 1;
                }
                else
                {
                  v28 = v17 + 36;
                  v35 = 0;
                  v17[36] = 0;
                  v29 = v15 - v27;
                  v30 = v9;
                  if ( v29 < (unsigned int)v9 )
                    v30 = v29;
                  v31 = -1;
                  if ( v30 < 0xFFFF )
                    v31 = v30;
                  v17[37] = v31;
                  *((_QWORD *)v17 + 10) = v17 + 44;
                  ReturnLength = 0LL;
                  v32 = ZwQueryVirtualMemory(
                          ProcessHandle,
                          v14,
                          MemoryMappedFilenameInformation,
                          v17 + 36,
                          v30,
                          &ReturnLength);
                  if ( v32 < 0 && v32 != -1073741820 && v32 != -1073741789 && v32 != -2147483643
                    || !HIDWORD(ReturnLength) )
                  {
                    goto LABEL_56;
                  }
                }
              }
              v32 = -1073741675;
              v28 = 0LL;
LABEL_56:
              if ( v32 < 0 )
              {
                v17[36] = 0;
                LODWORD(v9) = v9 - 2;
                v21 = 80;
              }
              else
              {
                v33 = *v28;
                if ( v33 + 2 > 0xFFFF )
                {
                  v34 = 0;
                }
                else
                {
                  v34 = v33 + 2;
                  memmove(v28 + 1, *((const void **)v28 + 1), v33);
                  *(unsigned __int16 *)((char *)v28 + *v28 + 2) = 0;
                }
                *v28 = v34;
                LODWORD(v9) = v9 - ((v34 + 9) & 0xFFFFFFF8);
                v21 = (v34 + 81) & 0xFFFFFFF8;
              }
              goto LABEL_28;
            }
            if ( LODWORD(MemoryInformation[5]) == 0x40000 )
              goto LABEL_45;
          }
LABEL_28:
          v14 = (void *)(MemoryInformation[0] + MemoryInformation[3]);
          v22 = (v21 + 7) & 0xFFFFFFF8;
          v18 += v22;
          v17 = (unsigned __int16 *)((char *)v17 + v22);
          ++v16;
          if ( MemoryInformation[0] + MemoryInformation[3] >= v47 )
            goto LABEL_29;
        }
      }
    }
    return -1073741675;
  }
  while ( 1 )
  {
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    result = ZwQueryVirtualMemory(a2, v6, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL);
    if ( result < 0 )
      return result;
    if ( LODWORD(MemoryInformation[5]) == 0x1000000 || (v11 = 0, LODWORD(MemoryInformation[5]) == 0x40000) )
      v11 = 1;
    v8 += v11;
    if ( (v3 & 0x1000) != 0
      && !v10
      && (LODWORD(MemoryInformation[5]) == 0x1000000 || LODWORD(MemoryInformation[5]) == 0x40000) )
    {
      ReturnLength = 0LL;
      v45[0] = 0LL;
      v45[1] = 0LL;
      v24 = ZwQueryVirtualMemory(a2, v6, MemoryMappedFilenameInformation, v45, 0x10uLL, &ReturnLength);
      if ( v24 >= 0 || v24 == -2147483643 || v24 == -1073741820 || v24 == -1073741789 )
      {
        v25 = ReturnLength;
        if ( HIDWORD(ReturnLength) )
          v25 = 0LL;
        ReturnLength = v25;
      }
      else
      {
        LODWORD(v25) = ReturnLength;
      }
      if ( (unsigned int)v25 > 0x10 && (v24 >= 0 || v24 == -2147483643 || v24 == -1073741820 || v24 == -1073741789) )
        v26 = (v25 - 5) & 0xFFFFFFF8;
      else
        v26 = 8;
      if ( v26 + (int)v9 < (unsigned int)v9 )
      {
        v10 = 1;
        LODWORD(v9) = -1;
        v35 = 1;
      }
      else
      {
        LODWORD(v9) = v26 + v9;
      }
    }
    ++v7;
    v6 = (void *)(MemoryInformation[0] + MemoryInformation[3]);
    if ( MemoryInformation[0] + MemoryInformation[3] >= v47 )
      goto LABEL_11;
  }
}
