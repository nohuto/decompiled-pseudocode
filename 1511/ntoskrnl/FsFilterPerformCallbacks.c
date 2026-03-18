/*
 * XREFs of FsFilterPerformCallbacks @ 0x14003B050
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14002FED0 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14003079C (FsRtlReleaseFileForModWrite.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1403F9340 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404556F4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall FsFilterPerformCallbacks(__int64 a1, char a2, char a3, _BYTE *a4)
{
  __int64 v4; // rbx
  bool v9; // zf
  bool v10; // bp
  __int64 (__fastcall *v11)(__int64, _QWORD *); // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ecx
  unsigned __int16 v15; // ax
  _QWORD *v16; // rdi
  _QWORD *v17; // rdx
  __int64 result; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx

  v4 = *(_QWORD *)(a1 + 8);
  *a4 = 0;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL) == 0LL;
    *(_QWORD *)(a1 + 8) = v4;
    v10 = !v9;
    v11 = 0LL;
    v12 = 0LL;
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 48LL) + 48LL);
    if ( !v13 )
      goto LABEL_29;
    v14 = *(unsigned __int8 *)(a1 + 4);
    if ( v14 == 254 )
    {
      if ( *(_DWORD *)v13 >= 0x20u && *(_QWORD *)(v13 + 24) )
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v13 + 24);
      if ( *(_DWORD *)v13 >= 0x28u && *(_QWORD *)(v13 + 32) )
        v12 = *(_QWORD *)(v13 + 32);
    }
    else if ( v14 == 255 )
    {
      if ( *(_DWORD *)v13 >= 0x10u && *(_QWORD *)(v13 + 8) )
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v13 + 8);
      if ( *(_DWORD *)v13 >= 0x18u && *(_QWORD *)(v13 + 16) )
        v12 = *(_QWORD *)(v13 + 16);
    }
    else
    {
      v19 = v14 - 250;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
              goto LABEL_29;
            if ( *(_DWORD *)v13 >= 0x50u && *(_QWORD *)(v13 + 72) )
              v11 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v13 + 72);
            if ( *(_DWORD *)v13 >= 0x58u && *(_QWORD *)(v13 + 80) )
              v12 = *(_QWORD *)(v13 + 80);
          }
          else
          {
            if ( *(_DWORD *)v13 >= 0x60u && *(_QWORD *)(v13 + 88) )
              v11 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v13 + 88);
            if ( *(_DWORD *)v13 >= 0x68u && *(_QWORD *)(v13 + 96) )
              v12 = *(_QWORD *)(v13 + 96);
          }
        }
        else
        {
          if ( *(_DWORD *)v13 >= 0x30u && *(_QWORD *)(v13 + 40) )
            v11 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v13 + 40);
          if ( *(_DWORD *)v13 >= 0x38u && *(_QWORD *)(v13 + 48) )
            v12 = *(_QWORD *)(v13 + 48);
        }
      }
      else
      {
        if ( *(_DWORD *)v13 >= 0x40u && *(_QWORD *)(v13 + 56) )
          v11 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v13 + 56);
        if ( *(_DWORD *)v13 >= 0x48u && *(_QWORD *)(v13 + 64) )
          v12 = *(_QWORD *)(v13 + 64);
      }
    }
    if ( v11 )
    {
      if ( !v12 )
      {
        v16 = 0LL;
        goto LABEL_22;
      }
    }
    else if ( !v12 )
    {
      goto LABEL_29;
    }
    v15 = *(_WORD *)(a1 + 74);
    if ( v15 >= *(_WORD *)(a1 + 72) )
      break;
    v16 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL * v15);
    *(_WORD *)(a1 + 74) = v15 + 1;
    if ( !v16 )
      break;
    *v16 = v4;
    v16[1] = *(_QWORD *)(a1 + 16);
    v16[2] = 0LL;
    v16[3] = v12;
LABEL_22:
    if ( v11 )
    {
      if ( v16 )
        v17 = v16 + 2;
      else
        v17 = 0LL;
      result = v11(a1, v17);
      if ( (int)result < 0 )
      {
        if ( a2 || !v10 )
        {
          if ( a3 )
          {
            if ( !v10 )
              *a4 = 1;
          }
          else if ( !v10 )
          {
            KeBugCheckEx(0x22u, (int)result, 0LL, 0x377uLL, 0LL);
          }
LABEL_37:
          if ( v16 )
            --*(_WORD *)(a1 + 74);
          return result;
        }
      }
      else if ( (_DWORD)result )
      {
        goto LABEL_37;
      }
    }
    if ( v4 != *(_QWORD *)(a1 + 8) )
    {
      *(_DWORD *)(a1 + 64) |= 4u;
      v4 = *(_QWORD *)(a1 + 8);
      goto LABEL_30;
    }
    if ( !v10 )
    {
      if ( v16 )
        --*(_WORD *)(a1 + 74);
    }
LABEL_29:
    v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
LABEL_30:
    if ( !v4 )
      return 0LL;
  }
  if ( !a2 )
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  return 3221225626LL;
}
