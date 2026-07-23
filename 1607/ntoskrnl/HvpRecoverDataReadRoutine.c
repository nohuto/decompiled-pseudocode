/*
 * XREFs of HvpRecoverDataReadRoutine @ 0x1406115C8
 * Callers:
 *     HvApplyLegacyLogFile @ 0x140612000 (HvApplyLegacyLogFile.c)
 *     HvApplyLogFile @ 0x1406121E0 (HvApplyLogFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HvpRecoverDataReadRoutine(__int64 a1, char **a2, unsigned int a3, unsigned int a4, char **a5)
{
  char *PoolWithTag; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  char *v13; // rcx
  unsigned int v14; // ebp
  char *v15; // rcx
  int v17; // [rsp+60h] [rbp+18h] BYREF

  PoolWithTag = 0LL;
  if ( a3 + a4 < a3 && a3 + a4 )
    return (unsigned int)-1073741811;
  v10 = *(_DWORD *)(a1 + 120) << 9;
  v11 = ~(v10 - 1);
  v12 = (v11 & (a3 + v10 + a4 - 1)) - (a3 & v11);
  v17 = a3 & v11;
  if ( v12 < a4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v13 = *a2;
    v14 = (v11 & (a3 + v10 + a4 - 1)) - (a3 & v11);
    if ( v12 < 0x10000 )
      v14 = 0x10000;
    if ( !v13 )
      goto LABEL_12;
    if ( *((_DWORD *)a2 + 2) < v14 )
    {
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      PoolWithTag = *a2;
      v14 = *((_DWORD *)a2 + 2);
    }
    *a2 = 0LL;
    *((_DWORD *)a2 + 2) = 0;
    if ( !PoolWithTag )
    {
LABEL_12:
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x6F494D43u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v14 = v12;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, char *, unsigned int))(a1 + 48))(
           a1,
           *((unsigned int *)a2 + 3),
           &v17,
           PoolWithTag,
           v12) )
    {
      *a2 = PoolWithTag;
      *((_DWORD *)a2 + 2) = v14;
      v15 = &PoolWithTag[a3 % (*(_DWORD *)(a1 + 120) << 9)];
      PoolWithTag = 0LL;
      v9 = 0;
      *a5 = v15;
    }
    else
    {
      v9 = -1073741823;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v9;
}
