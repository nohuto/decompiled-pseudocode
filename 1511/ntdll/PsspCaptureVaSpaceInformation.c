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
  unsigned __int16 *v23; // rsi
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int16 v26; // ax
  int v27; // eax
  size_t v28; // r8
  unsigned __int16 v29; // r14
  unsigned int v30; // ecx
  __int64 v31; // rcx
  char v32; // [rsp+50h] [rbp-B0h]
  void *v33; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  int v36; // [rsp+78h] [rbp-88h]
  _QWORD v37[6]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  _QWORD v41[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE SystemInformation[40]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v43; // [rsp+108h] [rbp+8h]

  v36 = a3;
  v3 = a3;
  v35 = a2;
  v39 = a1;
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result < 0 )
    return result;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  LODWORD(v9) = 0;
  v10 = 0;
  v32 = 0;
  if ( !v43 )
  {
LABEL_12:
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
        goto LABEL_20;
      if ( (int)v12 + (int)v9 >= (unsigned int)v12 )
      {
        LODWORD(v12) = v12 + v9;
LABEL_20:
        v40 = (unsigned int)v12;
        result = NtCreateSection(&Handle, 983047LL, &unk_180102558);
        if ( result < 0 )
          return result;
        v33 = 0LL;
        v38 = 0LL;
        v13 = ZwMapViewOfSection(Handle, -1LL, &v33, 0LL, 0LL, 0LL, &v38, 1, 0, 4);
        if ( v13 < 0 )
        {
          NtClose(Handle);
          return v13;
        }
        v14 = 0LL;
        v15 = v38;
        v16 = 0;
        v17 = (unsigned __int16 *)v33;
        v18 = 0;
        if ( !v43 )
        {
LABEL_45:
          NtUnmapViewOfSection(-1LL, v17);
          v31 = v39;
          *(_QWORD *)(v39 + 920) = Handle;
          *(_DWORD *)(v31 + 912) = v16;
          *(_DWORD *)(v31 + 916) = v18;
          *(_QWORD *)(v31 + 928) = MEMORY[0x7FFE0014];
          return 0;
        }
        while ( 1 )
        {
          if ( v18 + 72 < v18 || v18 + 72 > v15 )
          {
LABEL_44:
            v17 = (unsigned __int16 *)v33;
            goto LABEL_45;
          }
          memset(v37, 0, sizeof(v37));
          VirtualMemory = ZwQueryVirtualMemory(v35, v14, 0LL, v37);
          if ( VirtualMemory < 0 )
          {
            NtUnmapViewOfSection(-1LL, v33);
            NtClose(Handle);
            return VirtualMemory;
          }
          memset(v17, 0, 0x48uLL);
          v20 = (v36 & 0x1000) == 0;
          v21 = 72;
          *(_QWORD *)v17 = v37[0];
          *((_QWORD *)v17 + 1) = v37[1];
          *((_DWORD *)v17 + 4) = v37[2];
          *((_QWORD *)v17 + 3) = v37[3];
          *((_QWORD *)v17 + 4) = v37[4];
          *((_DWORD *)v17 + 10) = v37[5];
          if ( !v20 )
          {
            if ( LODWORD(v37[5]) == 0x1000000 )
            {
              PsspCaptureImageInformation(v17 + 24, v35, v37[1]);
LABEL_29:
              if ( v18 + 76 < v18 || v18 + 76 > v15 )
                goto LABEL_44;
              if ( !v32 )
              {
                v22 = v18 + 92;
                if ( v18 + 92 >= v18 + 76 && v22 <= v15 )
                {
                  v23 = v17 + 36;
                  v32 = 0;
                  v17[36] = 0;
                  v24 = v15 - v22;
                  v25 = v9;
                  if ( v24 < (unsigned int)v9 )
                    v25 = v24;
                  v26 = -1;
                  if ( v25 < 0xFFFF )
                    v26 = v25;
                  v17[37] = v26;
                  *((_QWORD *)v17 + 10) = v17 + 44;
                  v27 = ZwQueryVirtualMemory(v35, v14, 2LL, v17 + 36);
                  goto LABEL_39;
                }
                v32 = 1;
              }
              v27 = -1073741675;
              v23 = 0LL;
LABEL_39:
              if ( v27 < 0 )
              {
                v17[36] = 0;
                LODWORD(v9) = v9 - 2;
                v21 = 80;
              }
              else
              {
                v28 = *v23;
                if ( v28 + 2 > 0xFFFF )
                {
                  v29 = 0;
                }
                else
                {
                  v29 = v28 + 2;
                  memmove(v23 + 1, *((const void **)v23 + 1), v28);
                  *(unsigned __int16 *)((char *)v23 + *v23 + 2) = 0;
                }
                *v23 = v29;
                LODWORD(v9) = v9 - ((v29 + 9) & 0xFFFFFFF8);
                v21 = (v29 + 81) & 0xFFFFFFF8;
              }
              goto LABEL_43;
            }
            if ( LODWORD(v37[5]) == 0x40000 )
              goto LABEL_29;
          }
LABEL_43:
          v14 = v37[0] + v37[3];
          v30 = (v21 + 7) & 0xFFFFFFF8;
          v18 += v30;
          v17 = (unsigned __int16 *)((char *)v17 + v30);
          ++v16;
          if ( v37[0] + v37[3] >= v43 )
            goto LABEL_44;
        }
      }
    }
    return -1073741675;
  }
  while ( 1 )
  {
    memset(v37, 0, sizeof(v37));
    result = ZwQueryVirtualMemory(a2, v6, 0LL, v37);
    if ( result < 0 )
      return result;
    if ( LODWORD(v37[5]) == 0x1000000 || (v11 = 0, LODWORD(v37[5]) == 0x40000) )
      v11 = 1;
    v8 += v11;
    if ( (v3 & 0x1000) != 0 && !v10 && (LODWORD(v37[5]) == 0x1000000 || LODWORD(v37[5]) == 0x40000) )
    {
      v41[0] = 0LL;
      v41[1] = 0LL;
      ZwQueryVirtualMemory(a2, v6, 2LL, v41);
      if ( (int)v9 + 8 < (unsigned int)v9 )
      {
        v10 = 1;
        LODWORD(v9) = -1;
        v32 = 1;
      }
      else
      {
        LODWORD(v9) = v9 + 8;
      }
    }
    ++v7;
    v6 = v37[0] + v37[3];
    if ( v37[0] + v37[3] >= v43 )
      goto LABEL_12;
  }
}
