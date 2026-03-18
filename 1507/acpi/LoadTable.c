/*
 * XREFs of LoadTable @ 0x1C0048080
 * Callers:
 *     <none>
 * Callees:
 *     LoadDDB @ 0x1C000623C (LoadDDB.c)
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     PushPost @ 0x1C00188D0 (PushPost.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall LoadTable(__int64 a1, __int64 a2)
{
  unsigned int DDB; // ebx
  PVOID PoolWithTag; // r12
  __int64 v5; // rbx
  int v6; // r13d
  const void *v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  unsigned __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  char *v15; // r15
  int v16; // eax
  const void *v17; // r13
  int v18; // ecx
  int NameSpaceObject; // eax
  int v20; // eax
  const void *v22; // [rsp+38h] [rbp-20h]
  const void *v23; // [rsp+40h] [rbp-18h]
  const void *v24; // [rsp+48h] [rbp-10h]
  SIZE_T NumberOfBytes; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp+60h]

  DDB = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"ZZZ");
  if ( DDB )
    return DDB;
  LODWORD(NumberOfBytes) = 0;
  PoolWithTag = 0LL;
  v5 = *(_QWORD *)(a2 + 80);
  v6 = *(_DWORD *)(v5 + 104);
  v7 = *(const void **)(v5 + 32);
  v23 = *(const void **)(v5 + 72);
  v22 = *(const void **)(v5 + 112);
  v8 = *(_DWORD *)(v5 + 64) - 1;
  v24 = v7;
  v9 = *(_DWORD *)(v5 + 24) - 1;
  v28 = v8;
  v10 = v6 - 1;
  if ( v9 > 4 )
  {
    LogError(-1072431098);
    v11 = v9;
    v12 = 100;
LABEL_4:
    PrintDebugMessage(v12, (const void *)v11, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431098;
  }
  v27 = 0;
  memmove(&v27, v7, v9);
  if ( v8 > 6 )
  {
    LogError(-1072431098);
    v11 = v28;
    v12 = 96;
    goto LABEL_4;
  }
  if ( v10 > 8 )
  {
    LogError(-1072431098);
    v11 = v10;
LABEL_9:
    v12 = 101;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 76) < 4u )
  {
    v15 = "\\";
  }
  else
  {
    v13 = ValidateArgTypes(v5 + 120, 0, (__int64)"Z");
    DDB = v13;
    if ( v13 )
    {
      LogError(v13);
      v14 = 99;
LABEL_13:
      PrintDebugMessage(v14, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_41;
    }
    v15 = *(char **)(*(_QWORD *)(a2 + 80) + 152LL);
  }
  if ( *(_DWORD *)(a2 + 76) >= 5u )
  {
    v16 = ValidateArgTypes(*(_QWORD *)(a2 + 80) + 160LL, 0, (__int64)"Z");
    DDB = v16;
    if ( v16 )
    {
      LogError(v16);
      v14 = 98;
      goto LABEL_13;
    }
    if ( *(_DWORD *)(a2 + 76) < 6u )
    {
      LogError(-1072431098);
      v11 = 0LL;
      goto LABEL_9;
    }
  }
  if ( ghMapTable )
  {
    v17 = v23;
    DDB = ghMapTable(v27, v23, v22, 0LL, &NumberOfBytes);
  }
  else
  {
    LogError(-1072431098);
    PrintDebugMessage(94, 0LL, 0LL, 0LL, 0LL);
    v17 = v23;
    DDB = -1072431098;
  }
  if ( DDB != -1073741789 )
  {
    if ( DDB == -1073741275 )
      DDB = -1073741772;
    goto LABEL_40;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x426C6D41u);
  if ( !PoolWithTag )
  {
    LogError(-1073741670);
    v18 = 87;
LABEL_27:
    PrintDebugMessage(v18, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
    LogError(DDB);
    PrintDebugMessage(89, v24, v17, v22, 0LL);
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    goto LABEL_41;
  }
  if ( ghMapTable )
    DDB = ghMapTable(v27, v17, v22, PoolWithTag, &NumberOfBytes);
  else
    DDB = -1072431098;
  if ( DDB )
  {
    LogError(-1072431098);
    v18 = 91;
    goto LABEL_27;
  }
  NameSpaceObject = GetNameSpaceObject(v15);
  DDB = NameSpaceObject;
  if ( NameSpaceObject )
  {
    LogError(NameSpaceObject);
    PrintDebugMessage(93, v15, 0LL, 0LL, 0LL);
  }
  else
  {
    v20 = PushPost(a1, (__int64)ProcessLoadTable, (__int64)PoolWithTag, a2, *(_QWORD *)(a2 + 88));
    DDB = v20;
    if ( v20 )
    {
      LogError(v20);
      PrintDebugMessage(90, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      DDB = LoadDDB(a1, (__int64)PoolWithTag, 0LL, *(_QWORD *)(a2 + 88));
      DereferenceObjectEx(0LL);
    }
  }
LABEL_41:
  if ( DDB && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return DDB;
}
