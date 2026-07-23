/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x18006233C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800478E0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureImageInformation @ 0x180065038 (PsspCaptureImageInformation.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformation @ 0x1800A5780 (NtQuerySystemInformation.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
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
  NTSTATUS v12; // eax
  ULONG_PTR v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rcx
  NTSTATUS v16; // edi
  void *v17; // r14
  unsigned int v18; // r12d
  int v19; // r13d
  unsigned __int16 *v20; // rdi
  unsigned int v21; // r15d
  NTSTATUS VirtualMemory; // esi
  bool v23; // zf
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned __int16 *v26; // rsi
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int16 v29; // ax
  NTSTATUS v30; // eax
  size_t v31; // r8
  unsigned __int16 v32; // r14
  unsigned int v33; // ecx
  __int64 v34; // rcx
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
LABEL_21:
    v15 = 72LL * v7;
    if ( v15 <= 0xFFFFFFFF )
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
        goto LABEL_29;
      if ( (int)v15 + (int)v9 >= (unsigned int)v15 )
      {
        LODWORD(v15) = v15 + v9;
LABEL_29:
        MaximumSize.QuadPart = (unsigned int)v15;
        result = NtCreateSection(
                   &SectionHandle,
                   0xF0007u,
                   (POBJECT_ATTRIBUTES)&stru_180102558,
                   &MaximumSize,
                   4u,
                   0x8000000u,
                   0LL);
        if ( result < 0 )
          return result;
        BaseAddress = 0LL;
        ViewSize = 0LL;
        v16 = ZwMapViewOfSection(
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
        if ( v16 < 0 )
        {
          NtClose(SectionHandle);
          return v16;
        }
        v17 = 0LL;
        v18 = ViewSize;
        v19 = 0;
        v20 = (unsigned __int16 *)BaseAddress;
        v21 = 0;
        if ( !v47 )
        {
LABEL_55:
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v20);
          v34 = v43;
          *(_QWORD *)(v43 + 920) = SectionHandle;
          *(_DWORD *)(v34 + 912) = v19;
          *(_DWORD *)(v34 + 916) = v21;
          *(_QWORD *)(v34 + 928) = MEMORY[0x7FFE0014];
          return 0;
        }
        while ( 1 )
        {
          if ( v21 + 72 < v21 || v21 + 72 > v18 )
          {
LABEL_54:
            v20 = (unsigned __int16 *)BaseAddress;
            goto LABEL_55;
          }
          memset(MemoryInformation, 0, sizeof(MemoryInformation));
          VirtualMemory = ZwQueryVirtualMemory(
                            ProcessHandle,
                            v17,
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
          memset(v20, 0, 0x48uLL);
          v23 = (v40 & 0x1000) == 0;
          v24 = 72;
          *(_QWORD *)v20 = MemoryInformation[0];
          *((_QWORD *)v20 + 1) = MemoryInformation[1];
          *((_DWORD *)v20 + 4) = MemoryInformation[2];
          *((_QWORD *)v20 + 3) = MemoryInformation[3];
          *((_QWORD *)v20 + 4) = MemoryInformation[4];
          *((_DWORD *)v20 + 10) = MemoryInformation[5];
          if ( !v23 )
          {
            if ( LODWORD(MemoryInformation[5]) == 0x1000000 )
            {
              PsspCaptureImageInformation(v20 + 24, ProcessHandle, MemoryInformation[1]);
LABEL_38:
              if ( v21 + 76 < v21 || v21 + 76 > v18 )
                goto LABEL_54;
              if ( !v35 )
              {
                v25 = v21 + 92;
                if ( v21 + 92 < v21 + 76 || v25 > v18 )
                {
                  v35 = 1;
                }
                else
                {
                  v26 = v20 + 36;
                  v35 = 0;
                  v20[36] = 0;
                  v27 = v18 - v25;
                  v28 = v9;
                  if ( v27 < (unsigned int)v9 )
                    v28 = v27;
                  v29 = -1;
                  if ( v28 < 0xFFFF )
                    v29 = v28;
                  v20[37] = v29;
                  *((_QWORD *)v20 + 10) = v20 + 44;
                  ReturnLength = 0LL;
                  v30 = ZwQueryVirtualMemory(
                          ProcessHandle,
                          v17,
                          MemoryMappedFilenameInformation,
                          v20 + 36,
                          v28,
                          &ReturnLength);
                  if ( v30 < 0 && v30 != -1073741820 && v30 != -1073741789 && v30 != -2147483643
                    || !HIDWORD(ReturnLength) )
                  {
                    goto LABEL_49;
                  }
                }
              }
              v30 = -1073741675;
              v26 = 0LL;
LABEL_49:
              if ( v30 < 0 )
              {
                v20[36] = 0;
                LODWORD(v9) = v9 - 2;
                v24 = 80;
              }
              else
              {
                v31 = *v26;
                if ( v31 + 2 > 0xFFFF )
                {
                  v32 = 0;
                }
                else
                {
                  v32 = v31 + 2;
                  memmove(v26 + 1, *((const void **)v26 + 1), v31);
                  *(unsigned __int16 *)((char *)v26 + *v26 + 2) = 0;
                }
                *v26 = v32;
                LODWORD(v9) = v9 - ((v32 + 9) & 0xFFFFFFF8);
                v24 = (v32 + 81) & 0xFFFFFFF8;
              }
              goto LABEL_53;
            }
            if ( LODWORD(MemoryInformation[5]) == 0x40000 )
              goto LABEL_38;
          }
LABEL_53:
          v17 = (void *)(MemoryInformation[0] + MemoryInformation[3]);
          v33 = (v24 + 7) & 0xFFFFFFF8;
          v21 += v33;
          v20 = (unsigned __int16 *)((char *)v20 + v33);
          ++v19;
          if ( MemoryInformation[0] + MemoryInformation[3] >= v47 )
            goto LABEL_54;
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
      v12 = ZwQueryVirtualMemory(a2, v6, MemoryMappedFilenameInformation, v45, 0x10uLL, &ReturnLength);
      if ( v12 >= 0 || v12 == -2147483643 || v12 == -1073741820 || v12 == -1073741789 )
      {
        v13 = ReturnLength;
        if ( HIDWORD(ReturnLength) )
          v13 = 0LL;
        ReturnLength = v13;
      }
      else
      {
        LODWORD(v13) = ReturnLength;
      }
      if ( (unsigned int)v13 > 0x10 && (v12 >= 0 || v12 == -2147483643 || v12 == -1073741820 || v12 == -1073741789) )
        v14 = (v13 - 5) & 0xFFFFFFF8;
      else
        v14 = 8;
      if ( v14 + (int)v9 < (unsigned int)v9 )
      {
        v10 = 1;
        LODWORD(v9) = -1;
        v35 = 1;
      }
      else
      {
        LODWORD(v9) = v14 + v9;
      }
    }
    ++v7;
    v6 = (void *)(MemoryInformation[0] + MemoryInformation[3]);
    if ( MemoryInformation[0] + MemoryInformation[3] >= v47 )
      goto LABEL_21;
  }
}
