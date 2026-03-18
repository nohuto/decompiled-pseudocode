/*
 * XREFs of IopGetEnvironmentVariableSysEnv @ 0x1406793EC
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140679794 (IopIssueSystemEnvironmentRequest.c)
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
  unsigned int v10; // ebp
  ULONG InputBufferLength; // r15d
  char *PoolWithTagPriority; // rax
  _DWORD *InputBuffer; // rsi
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  ULONG v16; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // rdi
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF

  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v10 = 2 * v7 + 2;
  InputBufferLength = 2 * v7 + 22;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (char *)ExAllocatePoolWithTagPriority(
                                    PagedPool,
                                    InputBufferLength,
                                    0x20206F49u,
                                    (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (char *)ExAllocatePoolWithTag(PagedPool, InputBufferLength, 0x20206F49u);
  InputBuffer = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    memmove(PoolWithTagPriority + 20, a3, v10);
    v15 = *a4;
    InputBuffer[4] = v10;
    *(_OWORD *)InputBuffer = v15;
    v16 = *a6 + 8;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTag = ExAllocatePoolWithTagPriority(
                      PagedPool,
                      v16,
                      0x20206F49u,
                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x20206F49u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v14 = -1073741670;
LABEL_23:
      ExFreePoolWithTag(InputBuffer, 0);
      return v14;
    }
    v19 = IopIssueSystemEnvironmentRequest(0x520004u, InputBuffer, InputBufferLength, PoolWithTag, v16, (__int64)&v23);
    v14 = v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741789 )
      {
LABEL_22:
        ExFreePoolWithTag(v18, 0);
        goto LABEL_23;
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
    goto LABEL_22;
  }
  return (unsigned int)-1073741670;
}
