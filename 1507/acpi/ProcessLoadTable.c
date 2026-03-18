/*
 * XREFs of ProcessLoadTable @ 0x1C0048AC0
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     RtlStringCchCopyNA @ 0x1C001DD04 (RtlStringCchCopyNA.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ProcessLoadTable(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3)
{
  const char *v3; // r12
  void *v4; // r14
  int v5; // ebx
  __int64 v6; // r15
  ULONG_PTR v8; // r13
  unsigned int v9; // edi
  int v10; // eax
  const char *v11; // rsi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // r14
  char *PoolWithTag; // rax
  char *v17; // rsi
  unsigned int v18; // ebx
  char *v19; // rax
  int NameSpaceObject; // eax
  __int64 v21; // rcx
  int v23; // eax
  void *v24; // [rsp+30h] [rbp-58h]
  const char *pszSrc; // [rsp+98h] [rbp+10h]
  unsigned int v27; // [rsp+A0h] [rbp+18h]

  v3 = 0LL;
  v4 = (void *)a2[4];
  v5 = a3;
  v6 = a2[5];
  v24 = v4;
  v8 = BugCheckParameter2;
  if ( a3 )
  {
    v9 = 1;
    goto LABEL_44;
  }
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  if ( *(_DWORD *)(v6 + 76) < 4u )
  {
    v11 = "\\";
  }
  else
  {
    v10 = ValidateArgTypes(*(_QWORD *)(v6 + 80) + 120LL, 0, (__int64)"Z");
    v5 = v10;
    if ( v10 )
    {
      LogError(v10);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v9 = 5;
      goto LABEL_44;
    }
    v11 = *(const char **)(*(_QWORD *)(v6 + 80) + 152LL);
  }
  pszSrc = v11;
  if ( *(_DWORD *)(v6 + 76) >= 5u )
  {
    v12 = ValidateArgTypes(*(_QWORD *)(v6 + 80) + 160LL, 0, (__int64)"Z");
    v5 = v12;
    if ( v12 )
    {
      LogError(v12);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v9 = 6;
      goto LABEL_44;
    }
    v3 = *(const char **)(*(_QWORD *)(v6 + 80) + 192LL);
  }
  v13 = *(_DWORD *)(v6 + 76);
  if ( v13 >= 5 && v3 && *v3 )
  {
    if ( v13 < 6 )
    {
      v5 = -1072431098;
      LogError(-1072431098);
      PrintDebugMessage(150, 0LL, 0LL, 0LL, 0LL);
      v9 = 7;
      goto LABEL_44;
    }
    v14 = -1LL;
    if ( ((*v3 - 92) & 0xFD) != 0 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v11[v15] );
      do
        ++v14;
      while ( v3[v14] );
      v27 = v14 + v15 + 2;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v27, 0x496C6D41u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        PrintDebugMessage(86, 0LL, 0LL, 0LL, 0LL);
LABEL_25:
        *(_WORD *)(a2[6] + 2LL) = 1;
        v9 = 4;
        *(_QWORD *)(a2[6] + 16LL) = 0LL;
        goto LABEL_44;
      }
      RtlStringCchCopyNA(PoolWithTag, (unsigned int)(v14 + v15 + 2), pszSrc, (unsigned int)v15);
      if ( pszSrc[(unsigned int)v15 - 1] != 92 )
      {
        v17[(unsigned int)v15] = 46;
        LODWORD(v15) = v15 + 1;
      }
      RtlStringCchCopyNA(&v17[(unsigned int)v15], v27 - (unsigned int)v15, v3, (unsigned int)v14);
      v8 = BugCheckParameter2;
      v17[(unsigned int)(v14 + v15)] = 0;
    }
    else
    {
      do
        ++v14;
      while ( v3[v14] );
      v18 = v14 + 1;
      v19 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x496C6D41u);
      v17 = v19;
      if ( !v19 )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        PrintDebugMessage(92, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_25;
      }
      RtlStringCchCopyNA(v19, v18, v3, v18 - 1);
    }
    NameSpaceObject = GetNameSpaceObject(v17);
    v5 = NameSpaceObject;
    if ( NameSpaceObject )
    {
      LogError(NameSpaceObject);
      PrintDebugMessage(92, v17, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      v9 = 2;
LABEL_43:
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
LABEL_44:
      KeBugCheckEx(0xA5u, 0x15uLL, v8, v9, v5);
    }
    if ( gpnsNameSpaceRoot )
    {
      FreeObjData(56LL);
      v23 = DupObjData(gpheapGlobal, 56LL, *(_QWORD *)(v6 + 80) + 200LL);
      v5 = v23;
      if ( v23 )
      {
        LogError(v23);
        PrintDebugMessage(88, 0LL, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        v9 = 3;
        goto LABEL_43;
      }
    }
    else
    {
      LogError(0);
      PrintDebugMessage(97, 0LL, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
    }
    ExFreePoolWithTag(v17, 0);
    v4 = v24;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v21 = *(_QWORD *)(v8 + 416);
  *(_QWORD *)(v8 + 416) = *(_QWORD *)(v21 + 8);
  HeapFree(v21);
  return (unsigned int)v5;
}
