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

NTSTATUS __fastcall PsspCaptureVaSpaceInformation(__int64 a1, __int64 a2, int a3)
{
  __int16 v3; // r13
  NTSTATUS result; // eax
  __int64 v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // r14d
  unsigned __int64 v9; // rbx
  char v10; // r15
  int v11; // ecx
  unsigned __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // r14
  unsigned int v15; // r12d
  int v16; // r13d
  unsigned __int16 *v17; // rdi
  unsigned int v18; // r15d
  int VirtualMemory; // esi
  bool v20; // zf
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned __int16 *v28; // rsi
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int16 v31; // ax
  int v32; // eax
  size_t v33; // r8
  unsigned __int16 v34; // r14
  char v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  void *v37; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+78h] [rbp-88h]
  _QWORD v41[6]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v45[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE SystemInformation[40]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v47; // [rsp+108h] [rbp+8h]

  v40 = a3;
  v3 = a3;
  v39 = a2;
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
        v44 = (unsigned int)v12;
        result = NtCreateSection(&Handle, 983047LL, &unk_1801008B0, &v44, 4, 0x8000000, 0LL);
        if ( result < 0 )
          return result;
        v37 = 0LL;
        v42 = 0LL;
        v13 = ZwMapViewOfSection(Handle, -1LL, &v37, 0LL, 0LL, 0LL, &v42, 1, 0, 4);
        if ( v13 < 0 )
        {
          NtClose(Handle);
          return v13;
        }
        v14 = 0LL;
        v15 = v42;
        v16 = 0;
        v17 = (unsigned __int16 *)v37;
        v18 = 0;
        if ( !v47 )
        {
LABEL_29:
          NtUnmapViewOfSection(-1LL);
          v23 = v43;
          *(_QWORD *)(v43 + 864) = Handle;
          *(_DWORD *)(v23 + 856) = v16;
          *(_DWORD *)(v23 + 860) = v18;
          *(_QWORD *)(v23 + 872) = MEMORY[0x7FFE0014];
          return 0;
        }
        while ( 1 )
        {
          if ( v18 + 72 < v18 || v18 + 72 > v15 )
            goto LABEL_29;
          memset(v41, 0, sizeof(v41));
          VirtualMemory = ZwQueryVirtualMemory(v39, v14, 0LL, v41, 48LL, 0LL);
          if ( VirtualMemory < 0 )
          {
            NtUnmapViewOfSection(-1LL);
            NtClose(Handle);
            return VirtualMemory;
          }
          memset(v17, 0, 0x48uLL);
          v20 = (v40 & 0x1000) == 0;
          v21 = 72;
          *(_QWORD *)v17 = v41[0];
          *((_QWORD *)v17 + 1) = v41[1];
          *((_DWORD *)v17 + 4) = v41[2];
          *((_QWORD *)v17 + 3) = v41[3];
          *((_QWORD *)v17 + 4) = v41[4];
          *((_DWORD *)v17 + 10) = v41[5];
          if ( !v20 )
          {
            if ( LODWORD(v41[5]) == 0x1000000 )
            {
              PsspCaptureImageInformation(v17 + 24, v39, v41[1]);
LABEL_44:
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
                  v36 = 0LL;
                  v32 = ZwQueryVirtualMemory(v39, v14, 2LL, v17 + 36, v30, &v36);
                  if ( v32 < 0 && v32 != -1073741820 && v32 != -1073741789 && v32 != -2147483643 || !HIDWORD(v36) )
                    goto LABEL_55;
                }
              }
              v32 = -1073741675;
              v28 = 0LL;
LABEL_55:
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
            if ( LODWORD(v41[5]) == 0x40000 )
              goto LABEL_44;
          }
LABEL_28:
          v14 = v41[0] + v41[3];
          v22 = (v21 + 7) & 0xFFFFFFF8;
          v18 += v22;
          v17 = (unsigned __int16 *)((char *)v17 + v22);
          ++v16;
          if ( v41[0] + v41[3] >= v47 )
            goto LABEL_29;
        }
      }
    }
    return -1073741675;
  }
  while ( 1 )
  {
    memset(v41, 0, sizeof(v41));
    result = ZwQueryVirtualMemory(a2, v6, 0LL, v41, 48LL, 0LL);
    if ( result < 0 )
      return result;
    if ( LODWORD(v41[5]) == 0x1000000 || (v11 = 0, LODWORD(v41[5]) == 0x40000) )
      v11 = 1;
    v8 += v11;
    if ( (v3 & 0x1000) != 0 && !v10 && (LODWORD(v41[5]) == 0x1000000 || LODWORD(v41[5]) == 0x40000) )
    {
      v36 = 0LL;
      v45[0] = 0LL;
      v45[1] = 0LL;
      v24 = ZwQueryVirtualMemory(a2, v6, 2LL, v45, 16LL, &v36);
      if ( v24 >= 0 || v24 == -2147483643 || v24 == -1073741820 || v24 == -1073741789 )
      {
        v25 = v36;
        if ( HIDWORD(v36) )
          v25 = 0LL;
        v36 = v25;
      }
      else
      {
        LODWORD(v25) = v36;
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
    v6 = v41[0] + v41[3];
    if ( v41[0] + v41[3] >= v47 )
      goto LABEL_11;
  }
}
