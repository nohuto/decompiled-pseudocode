/*
 * XREFs of CmpGetValueData @ 0x140422DD0
 * Callers:
 *     CmAddLogForAction @ 0x1403D5EAC (CmAddLogForAction.c)
 *     CmpCommitSetValueKeyUoW @ 0x1403D7548 (CmpCommitSetValueKeyUoW.c)
 *     CmpGetValueDataFromCache @ 0x1403F4358 (CmpGetValueDataFromCache.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpQueryKeyValueData @ 0x140422850 (CmpQueryKeyValueData.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     CmpCopyValue @ 0x14050F7B0 (CmpCopyValue.c)
 *     CmpValueToData @ 0x140523DB4 (CmpValueToData.c)
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x1405E9330 (CmpGetValueForAudit.c)
 *     CmpFindTagIndex @ 0x140754654 (CmpFindTagIndex.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

bool __fastcall CmpGetValueData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 *a5,
        _BYTE *a6,
        __int64 a7)
{
  _BYTE *v7; // r14
  unsigned __int16 v8; // bp
  __int64 *v9; // rsi
  unsigned int v12; // eax
  __int64 v13; // rax
  bool result; // al
  __int64 v15; // r8
  __int64 v16; // rdx
  char *PoolWithTag; // r15
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r12
  unsigned int v21; // edi
  const void *v22; // rax
  size_t v23; // r8
  char v24; // di
  int v25; // [rsp+60h] [rbp+18h] BYREF

  v7 = a6;
  v8 = 0;
  v9 = a5;
  *a6 = 0;
  *v9 = 0LL;
  v12 = *(_DWORD *)(a3 + 4);
  if ( v12 >= 0x80000000 )
  {
    v15 = a7;
    *a4 = v12 + 0x80000000;
    if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 8))(a1, a2, v15) )
    {
      *v9 = a3 + 8;
      return 1;
    }
    return 0;
  }
  *a4 = v12;
  if ( *(_DWORD *)(a1 + 196) < 4u || v12 - 16345 > 0x7FFFC026 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, *(unsigned int *)(a3 + 8), a7);
    *v9 = v13;
    return v13 != 0;
  }
  v16 = *(unsigned int *)(a3 + 8);
  PoolWithTag = 0LL;
  v25 = -1;
  LODWORD(a6) = -1;
  LODWORD(a5) = -1;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v16, &v25);
  v19 = v18;
  if ( !v18 )
    return 0;
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(a1 + 8))(a1, *(unsigned int *)(v18 + 4), &a5);
  if ( v20 )
  {
    v21 = *(_DWORD *)(a3 + 4);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v21, 0x64764D43u);
    if ( PoolWithTag )
    {
      if ( !*(_WORD *)(v19 + 2) )
      {
LABEL_16:
        v24 = 1;
LABEL_17:
        (*(void (__fastcall **)(__int64, __int64 **))(a1 + 16))(a1, &a5);
        goto LABEL_18;
      }
      while ( 1 )
      {
        v22 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE **))(a1 + 8))(
                              a1,
                              *(unsigned int *)(v20 + 4LL * v8),
                              &a6);
        if ( !v22 )
          break;
        v23 = v21;
        if ( v21 > 0x3FD8 )
          v23 = 16344LL;
        memmove(&PoolWithTag[16344 * v8], v22, v23);
        v21 -= 16344;
        (*(void (__fastcall **)(__int64, _BYTE **))(a1 + 16))(a1, &a6);
        if ( ++v8 >= *(_WORD *)(v19 + 2) )
          goto LABEL_16;
      }
    }
    v24 = 0;
    goto LABEL_17;
  }
  v24 = 0;
LABEL_18:
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v25);
  if ( !v24 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 0;
  }
  *v9 = (__int64)PoolWithTag;
  result = 1;
  *v7 = 1;
  return result;
}
