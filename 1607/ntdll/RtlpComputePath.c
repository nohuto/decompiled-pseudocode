/*
 * XREFs of RtlpComputePath @ 0x18000CD84
 * Callers:
 *     RtlpComputeExePath @ 0x180008F10 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x180009110 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18000BB30 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18000CC30 (RtlpComputeDllPathWithOptions.c)
 * Callees:
 *     RtlpGetDirPath @ 0x18000C598 (RtlpGetDirPath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800196D0 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpAddForwarderPath @ 0x1800DA178 (RtlpAddForwarderPath.c)
 */

__int64 __fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  __int16 v4; // r14
  size_t v5; // rdi
  bool v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // r15d
  unsigned int v10; // r12d
  _DWORD *v11; // r14
  __int64 v12; // rax
  _WORD *v13; // rdi
  __int128 *v14; // rbx
  unsigned int v15; // r14d
  unsigned int v16; // r8d
  unsigned int v17; // r12d
  size_t v18; // r13
  _DWORD *v19; // rdx
  wchar_t *DirPath; // rax
  size_t v22; // rax
  int v23; // eax
  __int64 Length; // rax
  int v25; // eax
  void **v26; // rbx
  int EnvironmentVariable; // [rsp+30h] [rbp-48h]
  __int128 *v28; // [rsp+40h] [rbp-38h]
  size_t Size; // [rsp+48h] [rbp-30h] BYREF
  size_t v30; // [rsp+50h] [rbp-28h] BYREF
  void *Heap; // [rsp+58h] [rbp-20h]
  void *Src; // [rsp+60h] [rbp-18h]
  void *v33; // [rsp+68h] [rbp-10h]
  _DWORD *v34; // [rsp+C0h] [rbp+48h]
  wchar_t *v36; // [rsp+D0h] [rbp+58h]
  char v37; // [rsp+D8h] [rbp+60h]

  v37 = a4;
  v36 = a3;
  v34 = a1;
  v4 = a2;
  v33 = 0LL;
  v30 = 0LL;
  Src = 0LL;
  Size = 0LL;
  Heap = 0LL;
  v5 = 0LL;
  v6 = (qword_180163308 & 0x3000000000000000LL) == 0x1000000000000000LL;
  EnvironmentVariable = 0;
  v28 = 0LL;
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
            goto LABEL_65;
          case 2:
            v7 += (unsigned __int16)RtlpSystemDirs;
            if ( v6 )
              v28 = &RtlpSystemDirs;
            break;
          case 3:
            RtlEnterCriticalSection(&FastPebLock);
            EnvironmentVariable = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL);
            v9 = EnvironmentVariable;
            if ( EnvironmentVariable == -1073741789 )
            {
              Heap = (void *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(NtdllBaseTag + 1572864), 0LL);
              if ( !Heap )
              {
                RtlLeaveCriticalSection(&FastPebLock);
                return v8;
              }
              v23 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL);
              v5 = Size;
              v9 = v23;
              EnvironmentVariable = v23;
            }
            RtlLeaveCriticalSection(&FastPebLock);
            if ( v9 == -1073741568 )
            {
              v9 = 0;
              EnvironmentVariable = 0;
            }
            else
            {
              if ( v9 < 0 )
                goto LABEL_38;
              v7 += 2LL;
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
LABEL_65:
            v33 = (void *)RtlpGetDirPath(0LL, &v30);
            v7 += v30 + 2;
            break;
          case 6:
            Length = (unsigned __int16)word_18014C3E8;
            goto LABEL_68;
          case 7:
            v7 += (unsigned __int16)RtlpSystem32Dirs;
            if ( a4 )
              v7 += (unsigned __int16)RtlpSystem32Dirs + 22LL;
            if ( v6 )
              v28 = &RtlpSystem32Dirs;
            break;
          default:
            Length = LdrpAppPackagesPath.Length;
LABEL_67:
            v7 += 2LL;
LABEL_68:
            v7 += Length;
            break;
        }
      }
      else if ( (_WORD)LdrpDllDirectory )
      {
        Length = (unsigned __int16)LdrpDllDirectory;
        goto LABEL_67;
      }
      ++v10;
      ++v11;
      if ( v10 >= a2 )
      {
        v4 = a2;
        break;
      }
      a3 = v36;
      a4 = v37;
    }
  }
  if ( (unsigned __int64)(v7 - 112) > 0xFFFE )
  {
    v9 = -1073741562;
  }
  else
  {
    v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
    v8 = v12;
    if ( v12 )
    {
      *(_DWORD *)(v12 + 96) = v7;
      v13 = (_WORD *)(v12 + 112);
      v14 = v28;
      *(_WORD *)(v12 + 72) = v4;
      v15 = 0;
      *(_QWORD *)(v12 + 104) = 0LL;
      if ( v28 )
      {
        *(_QWORD *)(v12 + 24) = v13;
        v25 = 2;
        if ( &RtlpSystem32Dirs == v28 )
          v25 = 7;
        *(_DWORD *)v8 = v25;
        memmove(v13, *((const void **)v28 + 1), *(unsigned __int16 *)v28);
        v15 = 1;
        v13 += (unsigned __int64)*(unsigned __int16 *)v28 >> 1;
        if ( v37 )
          v13 = (_WORD *)RtlpAddForwarderPath(v13);
      }
      v16 = a2;
      v17 = 0;
      if ( a2 )
      {
        v18 = Size;
        v19 = v34;
        while ( 1 )
        {
          if ( v14 && (*v19 == 7 || *v19 == 2) )
            goto LABEL_35;
          *(_DWORD *)(v8 + 4LL * v15) = *v19;
          *(_QWORD *)(v8 + 8LL * v15 + 24) = v13;
          if ( *v19 )
          {
            switch ( *v19 )
            {
              case 1:
                goto LABEL_51;
              case 2:
                memmove(v13, *((const void **)&RtlpSystemDirs + 1), (unsigned __int16)RtlpSystemDirs);
                v13 += (unsigned __int64)(unsigned __int16)RtlpSystemDirs >> 1;
                goto LABEL_33;
              case 3:
                goto LABEL_34;
              case 4:
                *(_QWORD *)(v8 + 104) = v13;
                *v13 = 46;
                v13 += 2;
                *(v13 - 1) = 59;
                goto LABEL_34;
            }
            if ( *v19 != 5 )
            {
              if ( *v19 == 6 )
              {
                v26 = (void **)LdrpUserDllDirectories;
                if ( LdrpUserDllDirectories == (_UNKNOWN *)&LdrpUserDllDirectories )
                {
                  v14 = v28;
                  goto LABEL_34;
                }
                do
                {
                  memmove(v13, (char *)v26 + 18, *((unsigned __int16 *)v26 + 8));
                  v13 += ((unsigned __int64)*((unsigned __int16 *)v26 + 8) >> 1) + 1;
                  *(v13 - 1) = 59;
                  v26 = (void **)*v26;
                }
                while ( v26 != (void **)&LdrpUserDllDirectories );
                v18 = Size;
                v14 = v28;
              }
              else if ( *v19 == 7 )
              {
                memmove(v13, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs);
                v13 += (unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1;
                if ( v37 )
                  v13 = (_WORD *)RtlpAddForwarderPath(v13);
              }
              else
              {
                *(v13 - 1) = 0;
                memmove(v13, LdrpAppPackagesPath.Buffer, LdrpAppPackagesPath.Length);
                *(_QWORD *)(v8 + 88) = v13;
                v13 += ((unsigned __int64)LdrpAppPackagesPath.Length >> 1) + 1;
              }
              goto LABEL_33;
            }
            if ( !v18 )
            {
LABEL_51:
              memmove(v13, v33, v30);
              v22 = v30;
            }
            else
            {
              memmove(v13, Src, v18);
              v22 = v18;
            }
          }
          else
          {
            if ( !(_WORD)LdrpDllDirectory )
              goto LABEL_34;
            memmove(v13, *((const void **)&LdrpDllDirectory + 1), (unsigned __int16)LdrpDllDirectory);
            v22 = (unsigned __int16)LdrpDllDirectory;
          }
          v13 += (v22 >> 1) + 1;
          *(v13 - 1) = 59;
LABEL_33:
          v19 = v34;
          v16 = a2;
LABEL_34:
          ++v15;
LABEL_35:
          ++v19;
          ++v17;
          v34 = v19;
          if ( v17 >= v16 )
          {
            v9 = EnvironmentVariable;
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
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  if ( v8 && v9 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
    return 0LL;
  }
  return v8;
}
