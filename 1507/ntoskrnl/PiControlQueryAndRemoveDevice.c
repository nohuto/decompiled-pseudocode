/*
 * XREFs of PiControlQueryAndRemoveDevice @ 0x140694958
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14058AA90 (PnpQueueQueryAndRemoveEvent.c)
 */

__int64 __fastcall PiControlQueryAndRemoveDevice(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  int v7; // eax
  unsigned int v8; // eax
  void *v9; // rdi
  size_t v10; // rsi
  PVOID PoolWithQuotaTag; // rax
  int UserModeCallersCopy; // esi
  int v13; // eax
  unsigned __int16 v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v16; // [rsp+32h] [rbp-Eh]
  PVOID P; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+68h] [rbp+28h] BYREF

  v16 = *(_WORD *)a2;
  v4 = v16;
  v15 = v16;
  if ( (unsigned __int16)(v16 - 1) > 0x18Fu || (v16 & 1) != 0 )
    return 3221225485LL;
  P = 0LL;
  v7 = *(_DWORD *)(a2 + 32);
  if ( v7 && *(_QWORD *)(a2 + 24) )
  {
    v8 = 2 * v7;
  }
  else
  {
    v8 = 0;
    *(_DWORD *)(a2 + 32) = 0;
  }
  v18 = v8;
  if ( !v8 )
  {
    v9 = 0LL;
    goto LABEL_14;
  }
  if ( !a4 )
  {
    v9 = *(void **)(a2 + 24);
    goto LABEL_14;
  }
  v10 = v8;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v8, 0x20207050u);
  v9 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    memset(PoolWithQuotaTag, 0, v10);
    v4 = v15;
LABEL_14:
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&P, *(void **)(a2 + 8), v4, 2u, a4, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      UserModeCallersCopy = PnpQueueQueryAndRemoveEvent(
                              &v15,
                              (_DWORD *)(a2 + 20),
                              v9,
                              (__int64)&v18,
                              *(_DWORD *)(a2 + 16),
                              0);
      if ( v9 )
      {
        v13 = PiControlMakeUserModeCallersCopy((void **)(a2 + 24), v9, 2 * *(_DWORD *)(a2 + 32), 2u, a4, 0);
        if ( v13 < 0 )
          UserModeCallersCopy = v13;
      }
      *(_DWORD *)(a2 + 32) = v18 >> 1;
    }
    goto LABEL_19;
  }
  UserModeCallersCopy = -1073741670;
LABEL_19:
  if ( a4 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  return (unsigned int)UserModeCallersCopy;
}
