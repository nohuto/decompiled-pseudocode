/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x180005CB4
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180059160 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureImageInformation @ 0x180006648 (PsspCaptureImageInformation.c)
 *     RtlULongLongAdd @ 0x180039194 (RtlULongLongAdd.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall PsspCaptureVaSpaceInformation(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rbx
  char v8; // r15
  int v10; // ecx
  int VirtualMemory; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  int v16; // edi
  unsigned int v17; // r12d
  __int64 v18; // r14
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
  int v29; // eax
  size_t v30; // r8
  unsigned __int16 v31; // r14
  __int64 v32; // rax
  __int64 v33; // [rsp+28h] [rbp-89h]
  __int64 v34; // [rsp+28h] [rbp-89h]
  __int64 *v35; // [rsp+30h] [rbp-81h]
  __int64 *v36; // [rsp+30h] [rbp-81h]
  __int64 v37; // [rsp+58h] [rbp-59h] BYREF
  __int64 v38; // [rsp+60h] [rbp-51h] BYREF
  void *v39; // [rsp+68h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v41[6]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-1h] BYREF
  _QWORD v44[10]; // [rsp+B8h] [rbp+7h] BYREF
  char v48; // [rsp+130h] [rbp+7Fh]

  v4 = 0LL;
  v38 = 0LL;
  v5 = 0;
  v48 = 0;
  v6 = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  while ( 1 )
  {
    memset(v41, 0, sizeof(v41));
    v35 = 0LL;
    v33 = 48LL;
    if ( (int)ZwQueryVirtualMemory(a2, v4, 0LL, v41) < 0 )
      break;
    if ( v41[0] != v4 )
      return 3221225793LL;
    if ( LODWORD(v41[5]) == 0x1000000 || (v10 = 0, LODWORD(v41[5]) == 0x40000) )
      v10 = 1;
    v6 += v10;
    if ( (a3 & 0x1000) != 0 && !v8 && (LODWORD(v41[5]) == 0x1000000 || LODWORD(v41[5]) == 0x40000) )
    {
      v37 = 0LL;
      v44[0] = 0LL;
      v44[1] = 0LL;
      v35 = &v37;
      v33 = 16LL;
      VirtualMemory = ZwQueryVirtualMemory(a2, v4, 2LL, v44);
      if ( VirtualMemory >= 0
        || VirtualMemory == -1073741820
        || VirtualMemory == -1073741789
        || VirtualMemory == -2147483643 )
      {
        v12 = v37;
        if ( HIDWORD(v37) )
          v12 = 0LL;
        v37 = v12;
      }
      else
      {
        LODWORD(v12) = v37;
      }
      if ( (unsigned int)v12 > 0x10
        && (VirtualMemory >= 0
         || VirtualMemory == -1073741820
         || VirtualMemory == -1073741789
         || VirtualMemory == -2147483643) )
      {
        v13 = (v12 - 5) & 0xFFFFFFF8;
      }
      else
      {
        v13 = 8;
      }
      if ( v13 + (int)v7 < (unsigned int)v7 )
      {
        v8 = 1;
        LODWORD(v7) = -1;
        v48 = 1;
      }
      else
      {
        LODWORD(v7) = v13 + v7;
      }
    }
    ++v5;
    if ( (int)RtlULongLongAdd(v41[0], v41[3], &v38, 0LL, v33, v35) < 0 )
      break;
    v4 = v38;
  }
  v15 = 72LL * v5;
  if ( v15 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( v8 )
  {
    v7 = 8LL * v6;
    if ( v7 > 0xFFFFFFFF )
      return 3221225621LL;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    if ( (int)v7 + 16 < (unsigned int)v7 )
      return 3221225621LL;
    LODWORD(v7) = v7 + 16;
  }
  if ( (_DWORD)v7 )
  {
    if ( (int)v15 + (int)v7 < (unsigned int)v15 )
      return 3221225621LL;
    LODWORD(v15) = v15 + v7;
  }
  v43 = (unsigned int)v15;
  result = NtCreateSection(&Handle, 983047LL, "0", &v43, 4, 0x8000000, 0LL);
  if ( (int)result >= 0 )
  {
    v39 = 0LL;
    v42 = 0LL;
    v16 = ZwMapViewOfSection(Handle, -1LL, &v39, 0LL, 0LL, 0LL, &v42, 1, 0, 4);
    if ( v16 < 0 )
    {
      NtClose(Handle);
      return (unsigned int)v16;
    }
    v17 = v42;
    v18 = 0LL;
    v38 = 0LL;
    v19 = 0;
    v20 = 0;
    v21 = (unsigned __int16 *)v39;
    while ( 1 )
    {
      if ( v20 + 72 < v20
        || v20 + 72 > v17
        || (memset(v41, 0, sizeof(v41)), v36 = 0LL, v34 = 48LL, (int)ZwQueryVirtualMemory(a2, v18, 0LL, v41) < 0) )
      {
LABEL_81:
        NtUnmapViewOfSection(-1LL, v39);
        *(_QWORD *)(a1 + 920) = Handle;
        *(_DWORD *)(a1 + 912) = v19;
        *(_DWORD *)(a1 + 916) = v20;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      if ( v41[0] != v18 )
        return 3221225793LL;
      memset(v21, 0, 0x48uLL);
      v23 = 72;
      *(_QWORD *)v21 = v41[0];
      *((_QWORD *)v21 + 1) = v41[1];
      *((_DWORD *)v21 + 4) = v41[2];
      *((_QWORD *)v21 + 3) = v41[3];
      *((_QWORD *)v21 + 4) = v41[4];
      *((_DWORD *)v21 + 10) = v41[5];
      if ( (a3 & 0x1000) != 0 )
        break;
LABEL_79:
      ++v19;
      v32 = (v23 + 7) & 0xFFFFFFF8;
      v20 += v32;
      v21 = (unsigned __int16 *)((char *)v21 + v32);
      if ( (int)RtlULongLongAdd(v41[0], v41[3], &v38, v22, v34, v36) < 0 )
        goto LABEL_81;
      v18 = v38;
    }
    if ( LODWORD(v41[5]) == 0x1000000 )
    {
      PsspCaptureImageInformation(v21 + 24, a2, v41[1]);
    }
    else if ( LODWORD(v41[5]) != 0x40000 )
    {
      goto LABEL_79;
    }
    if ( v20 + 76 < v20 || v20 + 76 > v17 )
      goto LABEL_81;
    if ( !v48 )
    {
      v24 = v20 + 92;
      if ( v20 + 92 < v20 + 76 || v24 > v17 )
      {
        v48 = 1;
      }
      else
      {
        v25 = v21 + 36;
        v48 = 0;
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
        v36 = &v37;
        v37 = 0LL;
        v34 = v27;
        v29 = ZwQueryVirtualMemory(a2, v18, 2LL, v21 + 36);
        if ( v29 < 0 && v29 != -1073741820 && v29 != -1073741789 && v29 != -2147483643 || !HIDWORD(v37) )
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
