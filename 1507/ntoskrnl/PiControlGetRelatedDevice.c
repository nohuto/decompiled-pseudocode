/*
 * XREFs of PiControlGetRelatedDevice @ 0x1404E11FC
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     PiGetRelatedDevice @ 0x1404E1314 (PiGetRelatedDevice.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  void *v7; // rbx
  int v8; // eax
  unsigned int v9; // eax
  int UserModeCallersCopy; // edi
  int v11; // eax
  size_t v13; // rdi
  PVOID PoolWithQuotaTag; // rax
  unsigned __int16 v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v16; // [rsp+32h] [rbp-Eh]
  PVOID P; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+38h] BYREF

  v16 = *a2;
  v4 = v16;
  v15 = v16;
  if ( (unsigned __int16)(v16 - 1) > 0x18Fu || (v16 & 1) != 0 )
    return 3221225485LL;
  P = 0LL;
  v7 = (void *)*((_QWORD *)a2 + 3);
  if ( v7 && (v8 = *((_DWORD *)a2 + 8)) != 0 )
    v9 = 2 * v8;
  else
    v9 = 0;
  v18 = v9;
  if ( !v9 )
  {
    v7 = 0LL;
    goto LABEL_8;
  }
  if ( !a4 )
    goto LABEL_8;
  v13 = v9;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v9, 0x20207050u);
  v7 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    memset(PoolWithQuotaTag, 0, v13);
    v4 = v15;
LABEL_8:
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&P, *((void **)a2 + 1), v4, 2u, a4, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      UserModeCallersCopy = PiGetRelatedDevice(&v15, v7, &v18, *((unsigned int *)a2 + 4));
      if ( v7 )
      {
        v11 = PiControlMakeUserModeCallersCopy((void **)a2 + 3, v7, 2 * *((_DWORD *)a2 + 8), 2u, a4, 0);
        if ( v11 < 0 )
          UserModeCallersCopy = v11;
      }
      *((_DWORD *)a2 + 8) = v18 >> 1;
    }
    goto LABEL_13;
  }
  UserModeCallersCopy = -1073741670;
LABEL_13:
  if ( a4 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  return (unsigned int)UserModeCallersCopy;
}
