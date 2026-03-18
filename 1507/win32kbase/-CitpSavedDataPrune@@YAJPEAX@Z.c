/*
 * XREFs of ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00E3FD8
 * Callers:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0058854 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0079F80 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitIsBufferSmallStatus@@YAEJ@Z @ 0x1C007A96C (-CitIsBufferSmallStatus@@YAEJ@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpSaveKeyFromString@@YAXPEAU_CIT_SAVE_KEY@@PEAG@Z @ 0x1C00E3398 (-CitpSaveKeyFromString@@YAXPEAU_CIT_SAVE_KEY@@PEAG@Z.c)
 */

__int64 __fastcall CitpSavedDataPrune(HANDLE KeyHandle)
{
  unsigned int v2; // r12d
  unsigned __int64 v3; // r13
  NTSTATUS Key; // eax
  int v5; // ebx
  const char *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  ULONG v9; // ebx
  __int64 v10; // rsi
  const char *v11; // rdx
  union _LARGE_INTEGER v12; // r15
  __int64 v13; // r14
  unsigned __int8 *v14; // rdi
  HANDLE v15; // rdi
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  LONGLONG v19; // rdx
  _QWORD *v20; // rax
  LONGLONG *v21; // rax
  LONGLONG *v22; // rcx
  int v23; // r8d
  int v24; // r14d
  _QWORD *v25; // rax
  NTSTATUS v26; // eax
  const char *v27; // rdx
  NTSTATUS v28; // r15d
  __int64 v29; // rax
  _QWORD *v31; // [rsp+38h] [rbp-D0h] BYREF
  LONGLONG *v32; // [rsp+40h] [rbp-C8h]
  union _LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandlea; // [rsp+58h] [rbp-B0h]
  union _LARGE_INTEGER LocalTime; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-90h]
  unsigned __int64 v39; // [rsp+80h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  _DWORD KeyInformation[12]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR SourceString[40]; // [rsp+D8h] [rbp-30h] BYREF

  v38 = (__int64)dword_1C0101FBC << 10;
  v2 = 0;
  KeyHandlea = KeyHandle;
  v3 = 0LL;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  v39 = LocalTime.QuadPart - 10000000LL * (unsigned int)dword_1C0101FB8;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  Key = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength[1]);
  v5 = Key;
  if ( Key >= 0 || CitIsBufferSmallStatus(Key) )
  {
    if ( KeyInformation[8] )
    {
      v8 = 64;
      if ( KeyInformation[9] > 0x40u )
        v8 = KeyInformation[9];
      v9 = v8 + 24;
      ResultLength[0] = v8 + 24;
      v10 = Win32AllocPool();
      SystemTime.QuadPart = (LONGLONG)CitAllocZero(40LL * KeyInformation[8]);
      v12 = SystemTime;
      if ( SystemTime.QuadPart && v10 )
      {
        v13 = 0LL;
        v14 = (unsigned __int8 *)&v31;
        v32 = (LONGLONG *)&v31;
        v31 = &v31;
        if ( KeyInformation[8] )
        {
          v15 = KeyHandlea;
          while ( 1 )
          {
            v16 = ZwEnumerateValueKey(v15, v13, KeyValueFullInformation, (PVOID)v10, v9, &ResultLength[1]);
            v5 = v16;
            if ( v16 < 0 && !CitIsBufferSmallStatus(v16) )
            {
              v23 = 4193;
              goto LABEL_49;
            }
            if ( *(_DWORD *)(v10 + 16) <= KeyInformation[9] )
            {
              ValueName.Length = *(_WORD *)(v10 + 16);
              ValueName.MaximumLength = ValueName.Length;
              ValueName.Buffer = (PWSTR)(v10 + 20);
              if ( (ValueName.Length & 0xFFFE) == 0x40
                && (CitpSaveKeyFromString((struct _CIT_SAVE_KEY *)&v42, (unsigned __int16 *)(v10 + 20)),
                    *((_QWORD *)&v42 + 1) >= v39)
                && *((_QWORD *)&v42 + 1) <= LocalTime.QuadPart )
              {
                v18 = v42;
                v19 = v12.QuadPart + 40 * v13;
                *(_QWORD *)(v19 + 8) = v19;
                *(_QWORD *)v19 = v19;
                *(_OWORD *)(v19 + 16) = v18;
                *(_DWORD *)(v19 + 32) = *(_DWORD *)(v10 + 12);
                v20 = v31;
                if ( v31 == &v31 )
                {
LABEL_21:
                  v21 = v32;
                  *(_QWORD *)v19 = &v31;
                  *(_QWORD *)(v19 + 8) = v21;
                  if ( (_QWORD **)*v21 != &v31 )
                    __fastfail(3u);
                  *v21 = v19;
                  v32 = (LONGLONG *)(v12.QuadPart + 40 * v13);
                }
                else
                {
                  while ( *(_QWORD *)(v19 + 24) >= v20[3] )
                  {
                    v20 = (_QWORD *)*v20;
                    if ( v20 == &v31 )
                      goto LABEL_21;
                  }
                  v22 = (LONGLONG *)v20[1];
                  *(_QWORD *)v19 = v20;
                  *(_QWORD *)(v19 + 8) = v22;
                  if ( (_QWORD *)*v22 != v20 )
                    __fastfail(3u);
                  *v22 = v19;
                  v20[1] = v19;
                }
                v3 += *(unsigned int *)(v19 + 32);
                ++v2;
              }
              else
              {
                ZwDeleteValueKey(v15, &ValueName);
              }
            }
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= KeyInformation[8] )
              break;
            v9 = ResultLength[0];
          }
          v14 = (unsigned __int8 *)v31;
        }
        v5 = 0;
        v24 = 0;
        while ( v14 != (unsigned __int8 *)&v31 && (v2 > dword_1C0101FB4 || v3 > v38) )
        {
          v25 = *(_QWORD **)v14;
          if ( *((_QWORD ***)v14 + 1) != &v31 || (unsigned __int8 *)v25[1] != v14 )
            __fastfail(3u);
          v31 = *(_QWORD **)v14;
          v25[1] = &v31;
          CitpBytesToString(v14 + 16, 0x10u, SourceString);
          RtlInitUnicodeString(&DestinationString, SourceString);
          v26 = ZwDeleteValueKey(KeyHandlea, &DestinationString);
          v28 = v26;
          if ( v26 < 0 )
          {
            CitpLogFailureWorker((unsigned int)v26, v27, 4295);
            ++v24;
            v5 = v28;
          }
          v29 = *((unsigned int *)v14 + 8);
          --v2;
          v14 = (unsigned __int8 *)v31;
          v3 -= v29;
        }
        v12 = SystemTime;
        if ( v24 )
        {
          if ( v5 >= 0 )
            v5 = -1073741823;
        }
        else
        {
          v5 = 0;
        }
      }
      else
      {
        v5 = -1073741670;
        v23 = 4180;
        v17 = 3221225626LL;
LABEL_49:
        CitpLogFailureWorker(v17, v11, v23);
      }
      if ( v10 )
        Win32FreePool();
      if ( v12.QuadPart )
        Win32FreePool();
    }
    else
    {
      return 0;
    }
  }
  else
  {
    CitpLogFailureWorker(v7, v6, 4160);
  }
  return (unsigned int)v5;
}
