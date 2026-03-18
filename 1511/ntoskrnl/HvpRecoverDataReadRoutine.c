/*
 * XREFs of HvpRecoverDataReadRoutine @ 0x1405ECF1C
 * Callers:
 *     HvApplyLegacyLogFile @ 0x1405ED680 (HvApplyLegacyLogFile.c)
 *     HvApplyLogFile @ 0x1405ED860 (HvApplyLogFile.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvpRecoverDataReadRoutine(__int64 a1, char **a2, unsigned int a3, int a4, char **a5)
{
  char *PoolWithTag; // rbx
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  char *v12; // rcx
  unsigned int v13; // ebp
  char *v14; // rcx
  int v16; // [rsp+60h] [rbp+18h] BYREF

  PoolWithTag = 0LL;
  if ( a3 + a4 < a3 && a3 + a4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 120) << 9;
    v11 = (~(v10 - 1) & (a3 + v10 + a4 - 1)) - (a3 & ~(v10 - 1));
    v16 = a3 & ~(v10 - 1);
    v12 = *a2;
    v13 = v11;
    if ( v11 < 0x10000 )
      v13 = 0x10000;
    if ( !v12 )
      goto LABEL_11;
    if ( *((_DWORD *)a2 + 2) < v13 )
    {
      ExFreePoolWithTag(v12, 0);
    }
    else
    {
      PoolWithTag = *a2;
      v13 = *((_DWORD *)a2 + 2);
    }
    *a2 = 0LL;
    *((_DWORD *)a2 + 2) = 0;
    if ( !PoolWithTag )
    {
LABEL_11:
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x6F494D43u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v13 = v11;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, char *, unsigned int))(a1 + 48))(
           a1,
           *((unsigned int *)a2 + 3),
           &v16,
           PoolWithTag,
           v11) )
    {
      *a2 = PoolWithTag;
      *((_DWORD *)a2 + 2) = v13;
      v14 = &PoolWithTag[a3 % (*(_DWORD *)(a1 + 120) << 9)];
      PoolWithTag = 0LL;
      v9 = 0;
      *a5 = v14;
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
