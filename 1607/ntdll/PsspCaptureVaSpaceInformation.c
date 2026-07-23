/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x180005CA4
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180059150 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureImageInformation @ 0x180006638 (PsspCaptureImageInformation.c)
 *     RtlULongLongAdd @ 0x180039184 (RtlULongLongAdd.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall PsspCaptureVaSpaceInformation(__int64 a1, void *a2, __int16 a3)
{
  void *v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rbx
  char v8; // r15
  int v10; // ecx
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rdx
  int v13; // eax
  NTSTATUS result; // eax
  unsigned __int64 v15; // rcx
  NTSTATUS v16; // edi
  unsigned int v17; // r12d
  void *v18; // r14
  int v19; // r13d
  unsigned int v20; // r15d
  unsigned __int16 *v21; // rsi
  __int64 v22; // r9
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned __int16 *v25; // rdi
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int16 v28; // ax
  NTSTATUS v29; // eax
  size_t v30; // r8
  unsigned __int16 v31; // r14
  __int64 v32; // rax
  ULONG_PTR ReturnLength; // [rsp+58h] [rbp-59h] BYREF
  void *v34; // [rsp+60h] [rbp-51h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-49h] BYREF
  HANDLE SectionHandle; // [rsp+70h] [rbp-41h] BYREF
  _QWORD MemoryInformation[6]; // [rsp+78h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-9h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B0h] [rbp-1h] BYREF
  _QWORD v40[10]; // [rsp+B8h] [rbp+7h] BYREF
  char v44; // [rsp+130h] [rbp+7Fh]

  v4 = 0LL;
  v34 = 0LL;
  v5 = 0;
  v44 = 0;
  v6 = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  while ( 1 )
  {
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    if ( ZwQueryVirtualMemory(a2, v4, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) < 0 )
      break;
    if ( (void *)MemoryInformation[0] != v4 )
      return -1073741503;
    if ( LODWORD(MemoryInformation[5]) == 0x1000000 || (v10 = 0, LODWORD(MemoryInformation[5]) == 0x40000) )
      v10 = 1;
    v6 += v10;
    if ( (a3 & 0x1000) != 0
      && !v8
      && (LODWORD(MemoryInformation[5]) == 0x1000000 || LODWORD(MemoryInformation[5]) == 0x40000) )
    {
      ReturnLength = 0LL;
      v40[0] = 0LL;
      v40[1] = 0LL;
      v11 = ZwQueryVirtualMemory(a2, v4, MemoryMappedFilenameInformation, v40, 0x10uLL, &ReturnLength);
      if ( v11 >= 0 || v11 == -1073741820 || v11 == -1073741789 || v11 == -2147483643 )
      {
        v12 = ReturnLength;
        if ( HIDWORD(ReturnLength) )
          v12 = 0LL;
        ReturnLength = v12;
      }
      else
      {
        LODWORD(v12) = ReturnLength;
      }
      if ( (unsigned int)v12 > 0x10 && (v11 >= 0 || v11 == -1073741820 || v11 == -1073741789 || v11 == -2147483643) )
        v13 = (v12 - 5) & 0xFFFFFFF8;
      else
        v13 = 8;
      if ( v13 + (int)v7 < (unsigned int)v7 )
      {
        v8 = 1;
        LODWORD(v7) = -1;
        v44 = 1;
      }
      else
      {
        LODWORD(v7) = v13 + v7;
      }
    }
    ++v5;
    if ( (int)RtlULongLongAdd(MemoryInformation[0], MemoryInformation[3], &v34, 0LL) < 0 )
      break;
    v4 = v34;
  }
  v15 = 72LL * v5;
  if ( v15 > 0xFFFFFFFF )
    return -1073741675;
  if ( v8 )
  {
    v7 = 8LL * v6;
    if ( v7 > 0xFFFFFFFF )
      return -1073741675;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    if ( (int)v7 + 16 < (unsigned int)v7 )
      return -1073741675;
    LODWORD(v7) = v7 + 16;
  }
  if ( (_DWORD)v7 )
  {
    if ( (int)v15 + (int)v7 < (unsigned int)v15 )
      return -1073741675;
    LODWORD(v15) = v15 + v7;
  }
  MaximumSize.QuadPart = (unsigned int)v15;
  result = NtCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&stru_180111650,
             &MaximumSize,
             4u,
             0x8000000u,
             0LL);
  if ( result >= 0 )
  {
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
    v17 = ViewSize;
    v18 = 0LL;
    v34 = 0LL;
    v19 = 0;
    v20 = 0;
    v21 = (unsigned __int16 *)BaseAddress;
    while ( 1 )
    {
      if ( v20 + 72 < v20
        || v20 + 72 > v17
        || (memset(MemoryInformation, 0, sizeof(MemoryInformation)),
            ZwQueryVirtualMemory(a2, v18, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) < 0) )
      {
LABEL_81:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        *(_QWORD *)(a1 + 920) = SectionHandle;
        *(_DWORD *)(a1 + 912) = v19;
        *(_DWORD *)(a1 + 916) = v20;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0;
      }
      if ( (void *)MemoryInformation[0] != v18 )
        return -1073741503;
      memset(v21, 0, 0x48uLL);
      v23 = 72;
      *(_QWORD *)v21 = MemoryInformation[0];
      *((_QWORD *)v21 + 1) = MemoryInformation[1];
      *((_DWORD *)v21 + 4) = MemoryInformation[2];
      *((_QWORD *)v21 + 3) = MemoryInformation[3];
      *((_QWORD *)v21 + 4) = MemoryInformation[4];
      *((_DWORD *)v21 + 10) = MemoryInformation[5];
      if ( (a3 & 0x1000) != 0 )
        break;
LABEL_79:
      ++v19;
      v32 = (v23 + 7) & 0xFFFFFFF8;
      v20 += v32;
      v21 = (unsigned __int16 *)((char *)v21 + v32);
      if ( (int)RtlULongLongAdd(MemoryInformation[0], MemoryInformation[3], &v34, v22) < 0 )
        goto LABEL_81;
      v18 = v34;
    }
    if ( LODWORD(MemoryInformation[5]) == 0x1000000 )
    {
      PsspCaptureImageInformation(v21 + 24, a2, MemoryInformation[1]);
    }
    else if ( LODWORD(MemoryInformation[5]) != 0x40000 )
    {
      goto LABEL_79;
    }
    if ( v20 + 76 < v20 || v20 + 76 > v17 )
      goto LABEL_81;
    if ( !v44 )
    {
      v24 = v20 + 92;
      if ( v20 + 92 < v20 + 76 || v24 > v17 )
      {
        v44 = 1;
      }
      else
      {
        v25 = v21 + 36;
        v44 = 0;
        v21[36] = 0;
        v26 = v17 - v24;
        v27 = v7;
        if ( v26 < (unsigned int)v7 )
          v27 = v26;
        v28 = -1;
        if ( v27 < 0xFFFF )
          v28 = v27;
        v21[37] = v28;
        *((_QWORD *)v21 + 10) = v21 + 44;
        ReturnLength = 0LL;
        v29 = ZwQueryVirtualMemory(a2, v18, MemoryMappedFilenameInformation, v21 + 36, v27, &ReturnLength);
        if ( v29 < 0 && v29 != -1073741820 && v29 != -1073741789 && v29 != -2147483643 || !HIDWORD(ReturnLength) )
          goto LABEL_73;
      }
    }
    v29 = -1073741675;
    v25 = 0LL;
LABEL_73:
    if ( v29 < 0 )
    {
      v21[36] = 0;
      LODWORD(v7) = v7 - 2;
      v23 = 80;
    }
    else
    {
      v30 = *v25;
      if ( v30 + 2 > 0xFFFF )
      {
        v31 = 0;
      }
      else
      {
        v31 = v30 + 2;
        memmove(v25 + 1, *((const void **)v25 + 1), v30);
        *(unsigned __int16 *)((char *)v25 + *v25 + 2) = 0;
      }
      *v25 = v31;
      LODWORD(v7) = v7 - ((v31 + 9) & 0xFFFFFFF8);
      v23 = (v31 + 81) & 0xFFFFFFF8;
    }
    goto LABEL_79;
  }
  return result;
}
