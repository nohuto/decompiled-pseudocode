/*
 * XREFs of RtlpLookupSafeCurDirList @ 0x1800C941C
 * Callers:
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 * Callees:
 *     RtlExpandEnvironmentStrings_U @ 0x18000F480 (RtlExpandEnvironmentStrings_U.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180046AD0 (RtlQueryEnvironmentVariable_U.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x180093A30 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800C9384 (RtlpEnsureTailingSlashAndAddToList.c)
 */

__int64 RtlpLookupSafeCurDirList()
{
  __int64 result; // rax
  __int64 **Heap; // rax
  __int64 **v2; // rbx
  signed __int64 v3; // rdi
  int v4; // eax
  signed __int64 v5; // rcx
  int v6; // eax
  int i; // edi
  __int64 *v8; // rdx
  int v9; // eax
  signed __int64 v10; // rdi
  __int64 *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  char *v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  char *v19; // [rsp+60h] [rbp-A8h]
  __int64 v20; // [rsp+68h] [rbp-A0h]
  char *v21; // [rsp+70h] [rbp-98h]
  int v22; // [rsp+84h] [rbp-84h]
  int v23; // [rsp+8Ch] [rbp-7Ch]
  int v24; // [rsp+90h] [rbp-78h]
  char v25; // [rsp+94h] [rbp-74h] BYREF
  int v26; // [rsp+29Ch] [rbp+194h]
  char v27; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v28; // [rsp+4B8h] [rbp+3B0h] BYREF

  result = qword_180143168;
  LODWORD(v18) = 34078720;
  v19 = 0LL;
  LODWORD(v16) = 34078720;
  v17 = 0LL;
  LODWORD(v20) = 0x2000000;
  v21 = 0LL;
  if ( qword_180143168 == -1 )
  {
    v21 = &v25;
    v17 = &v27;
    v19 = &v28;
    Heap = (__int64 **)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 16LL);
    v2 = Heap;
    if ( Heap )
    {
      Heap[1] = (__int64 *)Heap;
      *Heap = (__int64 *)Heap;
      Handle = (HANDLE)qword_180147158;
      v3 = qword_180147158;
      if ( !qword_180147158 )
      {
        v4 = NtOpenKey();
        v5 = 0LL;
        if ( v4 < 0 )
          v5 = -1LL;
        Handle = (HANDLE)v5;
        v3 = _InterlockedCompareExchange64(&qword_180147158, v5, 0LL);
        if ( v3 )
        {
          if ( v4 >= 0 )
            NtClose((HANDLE)v5);
          Handle = (HANDLE)v3;
        }
        else
        {
          v3 = v5;
        }
      }
      if ( v3 != -1 && (int)NtQueryValueKey() >= 0 && v14 == 16 )
      {
        v6 = v22;
        if ( v22 )
        {
          if ( v22 != 1 )
            v6 = 0;
          if ( v6 )
            goto LABEL_20;
        }
      }
      if ( (int)RtlQueryEnvironmentVariable_U(0LL, &qword_180105448, (__int64)&v16) >= 0
        && (int)RtlpEnsureTailingSlashAndAddToList((__int64)v2, (__int64)&v16) >= 0 )
      {
LABEL_20:
        if ( Handle != (HANDLE)-1LL )
        {
          for ( i = 0; ; ++i )
          {
            v9 = ZwEnumerateValueKey();
            if ( v9 == -2147483622 )
              break;
            if ( v9 != -2147483643 )
            {
              if ( v9 < 0 )
                break;
              if ( v24 )
              {
                if ( (unsigned int)(v23 - 1) <= 1 )
                {
                  LOWORD(v20) = v24;
                  if ( (int)NtQueryValueKey() >= 0 && (unsigned int)(v23 - 1) <= 1 )
                  {
                    v8 = &v16;
                    LOWORD(v16) = 2 * (((unsigned int)(v14 - 12) >> 1) - 1);
                    if ( v26 == 2 )
                    {
                      if ( (int)RtlExpandEnvironmentStrings_U(0, (unsigned __int16 *)&v16, (__int64)&v18, 0LL) < 0 )
                        continue;
                      v8 = &v18;
                    }
                    RtlpEnsureTailingSlashAndAddToList((__int64)v2, (__int64)v8);
                  }
                }
              }
            }
          }
        }
      }
    }
    v10 = _InterlockedCompareExchange64(&qword_180143168, (signed __int64)v2, 0LL);
    if ( v10 == -1 )
    {
      return (__int64)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v11 = *v2;
          if ( *v2 == (__int64 *)v2 )
            break;
          v12 = *v11;
          if ( (__int64 **)v11[1] != v2 || *(__int64 **)(v12 + 8) != v11 )
            __fastfail(3u);
          v13 = LdrpHeap;
          *v2 = (__int64 *)v12;
          *(_QWORD *)(v12 + 8) = v2;
          RtlFreeHeap(v13, 0, (unsigned __int64)v11);
        }
        RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v2);
      }
      return v10;
    }
  }
  return result;
}
