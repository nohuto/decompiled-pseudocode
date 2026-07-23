/*
 * XREFs of FsFilterPerformCallbacks @ 0x140025E60
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14008E914 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009E320 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042CEE0 (FsRtlAcquireFileExclusiveCommon.c)
 * Callees:
 *     FsFilterGetCallbacks @ 0x140025FA0 (FsFilterGetCallbacks.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall FsFilterPerformCallbacks(__int64 a1, char a2, char a3, _BYTE *a4)
{
  __int64 v4; // rbx
  __int64 v9; // rcx
  bool v10; // zf
  bool v11; // bp
  __int64 (__fastcall *v12)(__int64, _QWORD *); // r8
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  __int64 result; // rax
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall *v19)(__int64, _QWORD *); // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  *a4 = 0;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(a1 + 4);
    v10 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL) == 0LL;
    *(_QWORD *)(a1 + 8) = v4;
    v11 = !v10;
    FsFilterGetCallbacks(v9, v4, &v19, &v18);
    v12 = v19;
    v13 = v18;
    if ( v19 )
    {
      if ( !v18 )
      {
        v15 = 0LL;
        goto LABEL_7;
      }
    }
    else if ( !v18 )
    {
      goto LABEL_14;
    }
    v14 = *(_WORD *)(a1 + 74);
    if ( v14 >= *(_WORD *)(a1 + 72) )
      break;
    v15 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL * v14);
    *(_WORD *)(a1 + 74) = v14 + 1;
    if ( !v15 )
      break;
    *v15 = v4;
    v15[1] = *(_QWORD *)(a1 + 16);
    v15[2] = 0LL;
    v15[3] = v13;
LABEL_7:
    if ( v12 )
    {
      if ( v15 )
        v16 = v15 + 2;
      else
        v16 = 0LL;
      result = v12(a1, v16);
      if ( (int)result < 0 )
      {
        if ( a2 || !v11 )
        {
          if ( a3 )
          {
            if ( !v11 )
              *a4 = 1;
          }
          else if ( !v11 )
          {
            KeBugCheckEx(0x22u, (int)result, 0LL, 0x377uLL, 0LL);
          }
LABEL_22:
          if ( v15 )
            --*(_WORD *)(a1 + 74);
          return result;
        }
      }
      else if ( (_DWORD)result )
      {
        goto LABEL_22;
      }
    }
    if ( v4 != *(_QWORD *)(a1 + 8) )
    {
      *(_DWORD *)(a1 + 64) |= 4u;
      v4 = *(_QWORD *)(a1 + 8);
      goto LABEL_15;
    }
    if ( !v11 )
    {
      if ( v15 )
        --*(_WORD *)(a1 + 74);
    }
LABEL_14:
    v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
LABEL_15:
    if ( !v4 )
      return 0LL;
  }
  if ( !a2 )
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  return 3221225626LL;
}
