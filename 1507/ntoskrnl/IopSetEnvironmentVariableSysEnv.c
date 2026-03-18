/*
 * XREFs of IopSetEnvironmentVariableSysEnv @ 0x140679BBC
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140679794 (IopIssueSystemEnvironmentRequest.c)
 */

__int64 __fastcall IopSetEnvironmentVariableSysEnv(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        _WORD *a3,
        _OWORD *a4,
        void *Src,
        unsigned int Size,
        int a7)
{
  __int64 v7; // rax
  unsigned int v11; // esi
  SIZE_T v12; // rdx
  _DWORD *PoolWithTagPriority; // rax
  _DWORD *InputBuffer; // rdi
  unsigned int v15; // ebx

  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v11 = 2 * v7 + 2;
  v12 = v11 + Size + 32;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            PagedPool,
                            v12,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v12, 0x20206F49u);
  InputBuffer = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    *((_OWORD *)PoolWithTagPriority + 1) = *a4;
    PoolWithTagPriority[3] = a7;
    *PoolWithTagPriority = 0;
    memmove(PoolWithTagPriority + 8, a3, v11);
    memmove((char *)InputBuffer + v11 + 32, Src, Size);
    InputBuffer[1] = v11 + 32;
    InputBuffer[2] = Size;
    v15 = IopIssueSystemEnvironmentRequest(0x520008u, 1u, 0LL, a2, InputBuffer, v11 + Size + 32, 0LL, 0, 0LL);
    ExFreePoolWithTag(InputBuffer, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v15;
}
