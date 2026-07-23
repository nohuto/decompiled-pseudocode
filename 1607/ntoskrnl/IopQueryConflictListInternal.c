/*
 * XREFs of IopQueryConflictListInternal @ 0x14064E6DC
 * Callers:
 *     IopQueryConflictList @ 0x14064E648 (IopQueryConflictList.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x14055684C (IopFreeReqList.c)
 *     IopResourceRequirementsListToReqList @ 0x140556FA0 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x1405579B4 (IopCallArbiter.c)
 *     PnpCmResourcesToIoResources @ 0x140557F1C (PnpCmResourcesToIoResources.c)
 *     IopQueryConflictFillConflicts @ 0x14064E154 (IopQueryConflictFillConflicts.c)
 */

__int64 __fastcall IopQueryConflictListInternal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned int a5)
{
  __int64 v7; // r8
  unsigned int ConflictFillConflicts; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // eax
  int v13; // eax
  char *v14; // rsi
  int v15; // eax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rcx
  char v21; // al
  int v22; // eax
  unsigned int v24; // [rsp+30h] [rbp-69h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  PVOID v26[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v27[8]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v28[4]; // [rsp+90h] [rbp-9h] BYREF

  v26[0] = 0LL;
  a4[2] = 0;
  a4[3] = 0;
  a4[4] = 32;
  if ( a1 )
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v7 = 0LL;
  if ( !v7 )
    return (unsigned int)-1073741810;
  if ( *(_BYTE *)(a2 + 20) != 1 )
  {
    if ( *(_BYTE *)(a2 + 20) == 2 )
      goto LABEL_14;
    if ( *(_BYTE *)(a2 + 20) != 3 )
    {
      if ( *(_BYTE *)(a2 + 20) == 4 )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 20) != 7 )
        return (unsigned int)-1073741811;
    }
  }
  if ( !*(_DWORD *)(a2 + 32) )
    return 0;
LABEL_14:
  v9 = *(_DWORD *)(v7 + 456);
  v10 = *(_QWORD *)(v7 + 440);
  v11 = PnpDefaultInterfaceType;
  if ( v9 == -1 && (!v10 || (v9 = *(_DWORD *)(v10 + 4), v9 == -1)) )
    *(_DWORD *)(a2 + 4) = PnpDefaultInterfaceType;
  else
    *(_DWORD *)(a2 + 4) = v9;
  v12 = *(_DWORD *)(a2 + 4);
  if ( v12 == 8 )
    v12 = v11;
  *(_DWORD *)(a2 + 4) = v12;
  v13 = *(_DWORD *)(v7 + 460);
  if ( v13 == -1 && (!v10 || (v13 = *(_DWORD *)(v10 + 8), v13 == -1)) )
    *(_DWORD *)(a2 + 8) = 0;
  else
    *(_DWORD *)(a2 + 8) = v13;
  v14 = PnpCmResourcesToIoResources(v10, (unsigned int *)a2, 0);
  if ( !v14 )
    return (unsigned int)-1073741811;
  memset(v27, 0, sizeof(v27));
  HIDWORD(v27[1]) = -1;
  v27[0] = a1;
  v27[3] = v14;
  v15 = IopResourceRequirementsListToReqList((__int64)v27, v26);
  v16 = v26[0];
  ConflictFillConflicts = v15;
  if ( v15 >= 0 )
  {
    if ( v26[0]
      && (v17 = *((_QWORD *)v26[0] + 5), *((_QWORD *)v26[0] + 2) = (char *)v26[0] + 40, *(_DWORD *)(v17 + 20) == 1)
      && (v18 = *(_QWORD *)(v17 + 24), *(_BYTE *)(v18 + 8)) )
    {
      v19 = *(_QWORD *)(v18 + 288);
      v20 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 64LL);
      v21 = *(_BYTE *)(v20 + 1);
      if ( v21 == (char)0x80 || v21 == -16 )
        v20 += 32LL;
      v24 = 0;
      P = 0LL;
      v28[2] = &v24;
      v28[1] = v20;
      v28[3] = &P;
      v28[0] = a1;
      v22 = IopCallArbiter(v19, 6LL, (__int64)v28);
      ConflictFillConflicts = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073741172 )
          ConflictFillConflicts = IopQueryConflictFillConflicts(0LL, 0, 0LL, (__int64)a4, a5, 4);
      }
      else
      {
        ConflictFillConflicts = IopQueryConflictFillConflicts(a1, v24, P, (__int64)a4, a5, 0);
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
    }
    else
    {
      ConflictFillConflicts = -1073741811;
    }
  }
  ExFreePoolWithTag(v14, 0);
  if ( v16 )
    IopFreeReqList(v16);
  return ConflictFillConflicts;
}
