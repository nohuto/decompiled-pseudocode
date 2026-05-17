/*
 * XREFs of RtlpComputePath @ 0x180067D58
 * Callers:
 *     RtlpComputeExePath @ 0x180067A80 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x180067AD0 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x180067B60 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x180067C30 (RtlpComputeDllPathWithOptions.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlQueryEnvironmentVariable @ 0x1800353E0 (RtlQueryEnvironmentVariable.c)
 *     RtlpGetDirPath @ 0x180068268 (RtlpGetDirPath.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

unsigned __int64 __fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3)
{
  __int16 v3; // r15
  size_t v5; // rdi
  unsigned __int64 v6; // rsi
  int v7; // r14d
  __int64 v8; // rbx
  unsigned int v9; // r12d
  _DWORD *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  _WORD *v13; // rdi
  unsigned int v14; // r15d
  _DWORD *v15; // rcx
  _QWORD *v16; // r12
  __int64 v17; // r14
  __int64 v18; // r13
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  _WORD *v26; // rdi
  void *DirPath; // rax
  size_t v29; // rax
  __int64 Length; // rax
  void *Heap; // rax
  int v32; // eax
  void **v33; // rbx
  __int64 v34; // [rsp+30h] [rbp-40h] BYREF
  size_t v35; // [rsp+38h] [rbp-38h]
  size_t v36; // [rsp+40h] [rbp-30h]
  void *v37; // [rsp+48h] [rbp-28h]
  size_t Size; // [rsp+50h] [rbp-20h]
  void *v39; // [rsp+58h] [rbp-18h]
  void *Src; // [rsp+60h] [rbp-10h]
  __int64 v41; // [rsp+68h] [rbp-8h]
  _DWORD *v42; // [rsp+B0h] [rbp+40h]
  int v44; // [rsp+C8h] [rbp+58h]

  v42 = a1;
  v3 = a2;
  Src = 0LL;
  v5 = 0LL;
  v36 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  v7 = 0;
  v35 = 0LL;
  v8 = 112LL;
  v37 = 0LL;
  v9 = 0;
  v34 = 0LL;
  v44 = 0;
  Size = 0LL;
  if ( a2 )
  {
    v10 = a1;
    while ( *v10 )
    {
      if ( *v10 != 1 )
      {
        switch ( *v10 )
        {
          case 2:
            Length = (unsigned __int16)RtlpSystemDirs;
            goto LABEL_48;
          case 3:
            RtlEnterCriticalSection((__int64)&FastPebLock);
            v44 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &v34);
            v7 = v44;
            if ( v44 == -1073741789 )
            {
              Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * v34);
              v37 = Heap;
              if ( !Heap )
              {
                RtlLeaveCriticalSection((__int64)&FastPebLock);
                return v6;
              }
              v32 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, (__int64)Heap, v34, &v34);
              v5 = v35;
              v7 = v32;
              v44 = v32;
            }
            RtlLeaveCriticalSection((__int64)&FastPebLock);
            if ( v7 == -1073741568 )
            {
              v34 = 0LL;
              v7 = 0;
              v44 = 0;
            }
            else
            {
              if ( v7 < 0 )
                goto LABEL_33;
              v8 += 2 * v34 + 2;
            }
            goto LABEL_14;
          case 4:
            v8 += 4LL;
            goto LABEL_14;
        }
        if ( *v10 != 5 )
        {
          if ( *v10 != 6 )
          {
            if ( *v10 == 7 )
            {
              v11 = -1LL;
              do
                ++v11;
              while ( *(_WORD *)(2 * v11 + 0x7FFE0030) );
              Size = 2 * v11;
              v8 += 2 * v11 + 20;
              goto LABEL_14;
            }
            Length = LdrpAppPackagesPath.Length;
            goto LABEL_61;
          }
          Length = (unsigned __int16)word_180143068;
LABEL_48:
          v8 += Length;
          goto LABEL_14;
        }
        if ( a3 )
        {
          DirPath = (void *)RtlpGetDirPath(a3);
          v5 = v35;
          v39 = DirPath;
        }
        if ( v5 )
        {
          v8 += v5 + 2;
          goto LABEL_14;
        }
      }
      Src = (void *)RtlpGetDirPath(0LL);
      v8 += v36 + 2;
LABEL_14:
      ++v9;
      ++v10;
      if ( v9 >= a2 )
      {
        v3 = a2;
        goto LABEL_16;
      }
    }
    if ( !(_WORD)LdrpDllDirectory )
      goto LABEL_14;
    Length = (unsigned __int16)LdrpDllDirectory;
LABEL_61:
    v8 += 2LL;
    goto LABEL_48;
  }
LABEL_16:
  if ( (unsigned __int64)(v8 - 112) > 0xFFFE )
  {
    v7 = -1073741562;
    goto LABEL_33;
  }
  v12 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  v6 = v12;
  if ( !v12 )
  {
    v7 = -1073741801;
    goto LABEL_33;
  }
  v13 = (_WORD *)(v12 + 112);
  *(_WORD *)(v12 + 72) = v3;
  v14 = 0;
  *(_DWORD *)(v12 + 96) = v8;
  *(_QWORD *)(v12 + 104) = 0LL;
  if ( !a2 )
    goto LABEL_32;
  v15 = v42;
  v16 = (_QWORD *)(v12 + 24);
  v17 = v34;
  v18 = v12 - (_QWORD)v42;
  v41 = v12 - (_QWORD)v42;
  do
  {
    *(_DWORD *)((char *)v15 + v18) = *v15;
    *v16 = v13;
    v19 = *v15;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_45;
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( !v24 )
            {
              if ( v35 )
              {
                memmove(v13, v39, v35);
                v29 = v35;
              }
              else
              {
LABEL_45:
                memmove(v13, Src, v36);
                v29 = v36;
              }
LABEL_46:
              v13 += (v29 >> 1) + 1;
LABEL_29:
              *(v13 - 1) = 59;
              goto LABEL_30;
            }
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 == 1 )
              {
                memmove(v13, (const void *)0x7FFE0030, Size);
                v26 = &v13[Size >> 1];
                *(_OWORD *)v26 = *(_OWORD *)L"\\SYSTEM32\\";
                *((_DWORD *)v26 + 4) = *(_DWORD *)L"2\\";
                v13 = v26 + 10;
                goto LABEL_29;
              }
              *(v13 - 1) = 0;
              memmove(v13, LdrpAppPackagesPath.Buffer, LdrpAppPackagesPath.Length);
              *(_QWORD *)(v6 + 88) = v13;
              v13 += ((unsigned __int64)LdrpAppPackagesPath.Length >> 1) + 1;
            }
            else
            {
              v33 = (void **)LdrpUserDllDirectories;
              if ( LdrpUserDllDirectories != (_UNKNOWN *)&LdrpUserDllDirectories )
              {
                do
                {
                  memmove(v13, (char *)v33 + 18, *((unsigned __int16 *)v33 + 8));
                  v13 += ((unsigned __int64)*((unsigned __int16 *)v33 + 8) >> 1) + 1;
                  *(v13 - 1) = 59;
                  v33 = (void **)*v33;
                }
                while ( v33 != (void **)&LdrpUserDllDirectories );
                v18 = v41;
                v17 = v34;
              }
            }
          }
          else
          {
            *(_QWORD *)(v6 + 104) = v13;
            *v13 = 46;
            v13 += 2;
            *(v13 - 1) = 59;
          }
        }
        else if ( v17 )
        {
          memmove(v13, v37, 2 * v17);
          v13 += v17 + 1;
          goto LABEL_29;
        }
      }
      else
      {
        memmove(v13, *((const void **)&RtlpSystemDirs + 1), (unsigned __int16)RtlpSystemDirs);
        v13 += (unsigned __int64)(unsigned __int16)RtlpSystemDirs >> 1;
      }
    }
    else if ( (_WORD)LdrpDllDirectory )
    {
      memmove(v13, *((const void **)&LdrpDllDirectory + 1), (unsigned __int16)LdrpDllDirectory);
      v29 = (unsigned __int16)LdrpDllDirectory;
      goto LABEL_46;
    }
LABEL_30:
    ++v14;
    v15 = v42 + 1;
    ++v16;
    ++v42;
  }
  while ( v14 < a2 );
  v7 = v44;
LABEL_32:
  *(v13 - 1) = 0;
LABEL_33:
  if ( v37 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v37);
  if ( v6 && v7 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    return 0LL;
  }
  return v6;
}
