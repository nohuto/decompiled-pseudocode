/*
 * XREFs of RtlpChangeQueryDebugBufferTarget @ 0x180069678
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180068A40 (RtlQueryProcessDebugInformation.c)
 *     RtlDestroyQueryDebugBuffer @ 0x180069640 (RtlDestroyQueryDebugBuffer.c)
 *     RtlSetProcessDebugInformation @ 0x1800C3D20 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenProcess @ 0x180093B60 (NtOpenProcess.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlpChangeQueryDebugBufferTarget(_QWORD *a1, __int64 a2, int a3, HANDLE *a4)
{
  __int64 v4; // rax
  char *v5; // rsi
  __int64 v10; // rcx
  HANDLE v11; // rdx
  _QWORD *v12; // rdi
  __int128 v13; // xmm0
  _OWORD *v14; // rbx
  __int64 result; // rax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // r14d
  HANDLE v19; // rdx
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  __int64 v21; // [rsp+60h] [rbp-31h] BYREF
  __int64 v22; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v24[2]; // [rsp+80h] [rbp-11h] BYREF
  int v25; // [rsp+90h] [rbp-1h] BYREF
  __int64 v26; // [rsp+98h] [rbp+7h]
  __int64 v27; // [rsp+A0h] [rbp+Fh]
  int v28; // [rsp+A8h] [rbp+17h]
  __int128 v29; // [rsp+B0h] [rbp+1Fh]
  HANDLE v30; // [rsp+F8h] [rbp+67h] BYREF

  v4 = a1[6];
  v5 = (char *)a1 + a1[11];
  v25 = 48;
  v26 = 0LL;
  v28 = 0;
  v27 = 0LL;
  v29 = 0LL;
  if ( v4 )
  {
    v23[0] = v4;
    v23[1] = 0LL;
    result = NtOpenProcess(&Handle, 0x1FFFFFLL, &v25, v23);
    if ( (int)result < 0 )
      return result;
    v10 = (__int64)Handle;
  }
  else
  {
    v10 = -1LL;
    Handle = (HANDLE)-1LL;
  }
  if ( a2 )
  {
    v24[0] = a2;
    v24[1] = 0LL;
    v16 = NtOpenProcess(&v30, 0x1FFFFFLL, &v25, v24);
    v10 = (__int64)Handle;
    v17 = v16;
    if ( v16 < 0 )
    {
      if ( Handle != (HANDLE)-1LL )
        NtClose(Handle);
      return v17;
    }
    v11 = v30;
  }
  else
  {
    v11 = 0LL;
    v30 = 0LL;
  }
  v12 = a1 + 2;
  if ( v10 == -1 )
  {
    *v12 = a1[11] + a1[1];
  }
  else
  {
    if ( *v12 )
    {
      NtUnmapViewOfSection(v10);
      v10 = (__int64)Handle;
      *v12 = 0LL;
    }
    NtClose((HANDLE)v10);
    v11 = v30;
  }
  v21 = a1[11];
  v22 = v21;
  if ( v11 )
  {
    v18 = ZwMapViewOfSection(*a1, v11, a1 + 2, 0LL, 0LL, &v22, &v21, 2, 0, 4);
    if ( v18 == -1073741800 )
    {
      v19 = v30;
      *v12 = 0LL;
      v18 = ZwMapViewOfSection(*a1, v19, a1 + 2, 0LL, 0LL, &v22, &v21, 2, 0, 4);
    }
    if ( v18 < 0 )
    {
      NtClose(v30);
      return (unsigned int)v18;
    }
    if ( a4 )
      *a4 = v30;
    else
      NtClose(v30);
  }
  a1[6] = a2;
  a1[3] = (char *)a1 - *v12;
  if ( a3 == 1 )
  {
    *(_DWORD *)v5 = 0;
    *((_DWORD *)v5 + 1) = *(_DWORD *)v12;
    *((_DWORD *)v5 + 2) = *(_DWORD *)v12;
    *((_DWORD *)v5 + 3) = *((_DWORD *)a1 + 6);
    *((_DWORD *)v5 + 4) = *((_DWORD *)a1 + 8);
    *((_DWORD *)v5 + 5) = *((_DWORD *)a1 + 10);
    *((_DWORD *)v5 + 6) = *((_DWORD *)a1 + 12);
    *((_DWORD *)v5 + 7) = *((_DWORD *)a1 + 14);
    *((_DWORD *)v5 + 8) = *((_DWORD *)a1 + 16);
    *((_DWORD *)v5 + 9) = *((_DWORD *)a1 + 18);
    *((_DWORD *)v5 + 10) = *((_DWORD *)a1 + 20);
    *((_DWORD *)v5 + 11) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v5 + 20) = *((_DWORD *)a1 + 40);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)a1;
    *((_OWORD *)v5 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)v5 + 2) = *((_OWORD *)a1 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)a1 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)a1 + 4);
    *((_OWORD *)v5 + 5) = *((_OWORD *)a1 + 5);
    *((_OWORD *)v5 + 6) = *((_OWORD *)a1 + 6);
    v13 = *((_OWORD *)a1 + 7);
    v14 = a1 + 16;
    *((_OWORD *)v5 + 7) = v13;
    *((_OWORD *)v5 + 8) = *v14;
    *((_OWORD *)v5 + 9) = v14[1];
    *((_OWORD *)v5 + 10) = v14[2];
    *((_OWORD *)v5 + 11) = v14[3];
    *((_OWORD *)v5 + 12) = v14[4];
    *((_QWORD *)v5 + 1) = *((_QWORD *)v5 + 2);
    *(_QWORD *)v5 = 0LL;
  }
  return 0LL;
}
