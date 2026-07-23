/*
 * XREFs of RtlpComputePath @ 0x18000CD74
 * Callers:
 *     RtlpComputeExePath @ 0x180008F00 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x180009100 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18000BB20 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18000CC20 (RtlpComputeDllPathWithOptions.c)
 * Callees:
 *     RtlpGetDirPath @ 0x18000C588 (RtlpGetDirPath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800196C0 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpAddForwarderPath @ 0x1800DA238 (RtlpAddForwarderPath.c)
 */

int *__fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  __int16 v4; // r14
  size_t v5; // rdi
  bool v6; // r13
  SIZE_T v7; // rbx
  int *v8; // rsi
  int v9; // r15d
  unsigned int v10; // r12d
  _DWORD *v11; // r14
  _WORD *v12; // rax
  _WORD *v13; // rdi
  __int128 *v14; // rbx
  unsigned int v15; // r14d
  unsigned int v16; // r8d
  unsigned int v17; // r12d
  size_t v18; // r13
  ULONG_PTR v19; // r15
  _DWORD *v20; // rdx
  wchar_t *DirPath; // rax
  size_t v23; // rax
  PVOID Heap; // rax
  NTSTATUS v25; // eax
  __int64 Length; // rax
  int v27; // eax
  void **v28; // rbx
  NTSTATUS v29; // [rsp+30h] [rbp-48h]
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-40h] BYREF
  __int128 *v31; // [rsp+40h] [rbp-38h]
  size_t Size; // [rsp+48h] [rbp-30h] BYREF
  size_t v33; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-20h]
  void *Src; // [rsp+60h] [rbp-18h]
  void *v36; // [rsp+68h] [rbp-10h]
  _DWORD *v37; // [rsp+C0h] [rbp+48h]
  wchar_t *v39; // [rsp+D0h] [rbp+58h]
  char v40; // [rsp+D8h] [rbp+60h]

  v40 = a4;
  v39 = a3;
  v37 = a1;
  v4 = a2;
  v36 = 0LL;
  v33 = 0LL;
  Src = 0LL;
  Size = 0LL;
  BaseAddress = 0LL;
  v5 = 0LL;
  ReturnLength = 0LL;
  v6 = (LdrSystemDllInitBlock.Wow64SharedInformation[8] & 0x3000000000000000LL) == 0x1000000000000000LL;
  v29 = 0;
  v31 = 0LL;
  v7 = 112LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( a2 )
  {
    v11 = a1;
    while ( 1 )
    {
      if ( *v11 )
      {
        switch ( *v11 )
        {
          case 1:
            goto LABEL_67;
          case 2:
            v7 += RtlpSystemDirs.Length;
            if ( v6 )
              v31 = (__int128 *)&RtlpSystemDirs;
            break;
          case 3:
            RtlEnterCriticalSection(&FastPebLock);
            v29 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &ReturnLength);
            v9 = v29;
            if ( v29 == -1073741789 )
            {
              Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * ReturnLength);
              BaseAddress = Heap;
              if ( !Heap )
              {
                RtlLeaveCriticalSection(&FastPebLock);
                return v8;
              }
              v25 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, (PWSTR)Heap, ReturnLength, &ReturnLength);
              v5 = Size;
              v9 = v25;
              v29 = v25;
            }
            RtlLeaveCriticalSection(&FastPebLock);
            if ( v9 == -1073741568 )
            {
              ReturnLength = 0LL;
              v9 = 0;
              v29 = 0;
            }
            else
            {
              if ( v9 < 0 )
                goto LABEL_38;
              v7 += 2 * ReturnLength + 2;
            }
            break;
          case 4:
            v7 += 4LL;
            break;
          case 5:
            if ( a3 )
            {
              DirPath = (wchar_t *)RtlpGetDirPath(a3, &Size);
              v5 = Size;
              Src = DirPath;
            }
            if ( v5 )
            {
              v7 += v5 + 2;
              break;
            }
LABEL_67:
            v36 = (void *)RtlpGetDirPath(0LL, &v33);
            v7 += v33 + 2;
            break;
          case 6:
            Length = (unsigned __int16)word_18014C3E8;
            goto LABEL_70;
          case 7:
            v7 += (unsigned __int16)RtlpSystem32Dirs;
            if ( a4 )
              v7 += (unsigned __int16)RtlpSystem32Dirs + 22LL;
            if ( v6 )
              v31 = &RtlpSystem32Dirs;
            break;
          default:
            Length = LdrpAppPackagesPath.Length;
LABEL_69:
            v7 += 2LL;
LABEL_70:
            v7 += Length;
            break;
        }
      }
      else if ( LdrpDllDirectory.Length )
      {
        Length = LdrpDllDirectory.Length;
        goto LABEL_69;
      }
      ++v10;
      ++v11;
      if ( v10 >= a2 )
      {
        v4 = a2;
        break;
      }
      a3 = v39;
      a4 = v40;
    }
  }
  if ( v7 - 112 > 0xFFFE )
  {
    v9 = -1073741562;
  }
  else
  {
    v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v8 = (int *)v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 24) = v7;
      v13 = v12 + 56;
      v14 = v31;
      v12[36] = v4;
      v15 = 0;
      *((_QWORD *)v12 + 13) = 0LL;
      if ( v14 )
      {
        *((_QWORD *)v12 + 3) = v13;
        v27 = 2;
        if ( &RtlpSystem32Dirs == v14 )
          v27 = 7;
        *v8 = v27;
        memmove(v13, *((const void **)v14 + 1), *(unsigned __int16 *)v14);
        v15 = 1;
        v13 += (unsigned __int64)*(unsigned __int16 *)v14 >> 1;
        if ( v40 )
          v13 = (_WORD *)RtlpAddForwarderPath(v13);
      }
      v16 = a2;
      v17 = 0;
      if ( a2 )
      {
        v18 = Size;
        v19 = ReturnLength;
        v20 = v37;
        while ( 1 )
        {
          if ( v14 && (*v20 == 7 || *v20 == 2) )
            goto LABEL_35;
          v8[v15] = *v20;
          *(_QWORD *)&v8[2 * v15 + 6] = v13;
          if ( *v20 )
          {
            switch ( *v20 )
            {
              case 1:
                goto LABEL_51;
              case 2:
                memmove(v13, RtlpSystemDirs.Buffer, RtlpSystemDirs.Length);
                v13 += (unsigned __int64)RtlpSystemDirs.Length >> 1;
                goto LABEL_33;
              case 3:
                if ( !v19 )
                  goto LABEL_34;
                memmove(v13, BaseAddress, 2 * v19);
                v13 += v19 + 1;
                v14 = v31;
                goto LABEL_53;
              case 4:
                *((_QWORD *)v8 + 13) = v13;
                *v13 = 46;
                v13 += 2;
                *(v13 - 1) = 59;
                goto LABEL_34;
            }
            if ( *v20 != 5 )
            {
              if ( *v20 == 6 )
              {
                v28 = (void **)LdrpUserDllDirectories;
                if ( LdrpUserDllDirectories == (_UNKNOWN *)&LdrpUserDllDirectories )
                {
                  v14 = v31;
                  goto LABEL_34;
                }
                do
                {
                  memmove(v13, (char *)v28 + 18, *((unsigned __int16 *)v28 + 8));
                  v13 += ((unsigned __int64)*((unsigned __int16 *)v28 + 8) >> 1) + 1;
                  *(v13 - 1) = 59;
                  v28 = (void **)*v28;
                }
                while ( v28 != (void **)&LdrpUserDllDirectories );
                v18 = Size;
                v19 = ReturnLength;
                v14 = v31;
              }
              else if ( *v20 == 7 )
              {
                memmove(v13, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs);
                v13 += (unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1;
                if ( v40 )
                  v13 = (_WORD *)RtlpAddForwarderPath(v13);
              }
              else
              {
                *(v13 - 1) = 0;
                memmove(v13, LdrpAppPackagesPath.Buffer, LdrpAppPackagesPath.Length);
                *((_QWORD *)v8 + 11) = v13;
                v13 += ((unsigned __int64)LdrpAppPackagesPath.Length >> 1) + 1;
              }
              goto LABEL_33;
            }
            if ( !v18 )
            {
LABEL_51:
              memmove(v13, v36, v33);
              v23 = v33;
            }
            else
            {
              memmove(v13, Src, v18);
              v23 = v18;
            }
          }
          else
          {
            if ( !LdrpDllDirectory.Length )
              goto LABEL_34;
            memmove(v13, LdrpDllDirectory.Buffer, LdrpDllDirectory.Length);
            v23 = LdrpDllDirectory.Length;
          }
          v13 += (v23 >> 1) + 1;
LABEL_53:
          *(v13 - 1) = 59;
LABEL_33:
          v20 = v37;
          v16 = a2;
LABEL_34:
          ++v15;
LABEL_35:
          ++v20;
          ++v17;
          v37 = v20;
          if ( v17 >= v16 )
          {
            v9 = v29;
            break;
          }
        }
      }
      *(v13 - 1) = 0;
    }
    else
    {
      v9 = -1073741801;
    }
  }
LABEL_38:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v8 && v9 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  return v8;
}
