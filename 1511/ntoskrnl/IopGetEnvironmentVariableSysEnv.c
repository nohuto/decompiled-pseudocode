/*
 * XREFs of IopGetEnvironmentVariableSysEnv @ 0x1405FE968
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     sub_1401BD68C @ 0x1401BD68C (sub_1401BD68C.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1405FEC4C (IopIssueSystemEnvironmentRequest.c)
 */

__int64 __fastcall IopGetEnvironmentVariableSysEnv(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        __int128 *a4,
        void *a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v7; // rax
  unsigned int v10; // ebx
  ULONG InputBufferLength; // ebp
  char *v12; // rax
  _DWORD *InputBuffer; // rsi
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  ULONG v16; // ebx
  __int64 v17; // rcx
  _DWORD *v18; // rdi
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF

  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v10 = 2 * v7 + 2;
  InputBufferLength = 2 * v7 + 22;
  v12 = (char *)sub_1401BD68C(a1, InputBufferLength);
  InputBuffer = v12;
  if ( v12 )
  {
    memmove(v12 + 20, a3, v10);
    v15 = *a4;
    InputBuffer[4] = v10;
    *(_OWORD *)InputBuffer = v15;
    v16 = *a6 + 8;
    v18 = sub_1401BD68C(v17, v16);
    if ( !v18 )
    {
      v14 = -1073741670;
LABEL_17:
      ExFreePoolWithTag(InputBuffer, 0);
      return v14;
    }
    v19 = IopIssueSystemEnvironmentRequest(0x520004u, InputBuffer, InputBufferLength, v18, v16, (__int64)&v23);
    v14 = v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741789 )
      {
LABEL_16:
        ExFreePoolWithTag(v18, 0);
        goto LABEL_17;
      }
      v21 = v23 - 8;
    }
    else
    {
      if ( a7 )
        *a7 = *v18;
      v20 = v18[1];
      if ( *a6 < v20 )
        v20 = *a6;
      memmove(a5, v18 + 2, v20);
      v21 = v18[1];
    }
    *a6 = v21;
    goto LABEL_16;
  }
  return (unsigned int)-1073741670;
}
