/*
 * XREFs of ProcessLoadTable @ 0x1C005FDA0
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 *     HeapFree @ 0x1C001B8A0 (HeapFree.c)
 *     RtlStringCchCopyNA @ 0x1C0024278 (RtlStringCchCopyNA.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 */

__int64 __fastcall ProcessLoadTable(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3)
{
  const char *v3; // r12
  void *v4; // rbp
  int v5; // ebx
  __int64 v6; // r13
  unsigned int v9; // edi
  int v10; // eax
  const char *v11; // r14
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // rbp
  char *PoolWithTag; // r14
  unsigned int v17; // ebx
  char *v18; // rax
  int NameSpaceObject; // eax
  __int64 v20; // rcx
  int v22; // eax
  void *v23; // [rsp+38h] [rbp-40h]
  const char *pszSrc; // [rsp+88h] [rbp+10h]
  unsigned int v25; // [rsp+90h] [rbp+18h]

  v3 = 0LL;
  v4 = (void *)a2[4];
  v5 = a3;
  v6 = a2[5];
  v23 = v4;
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
    v10 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v6 + 80) + 120LL, 0, (__int64)"Z");
    v5 = v10;
    if ( v10 )
    {
      LogError(v10);
      AcpiDiagTraceAmlError(BugCheckParameter2, v5);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v9 = 5;
      goto LABEL_44;
    }
    v11 = *(const char **)(*(_QWORD *)(v6 + 80) + 152LL);
  }
  pszSrc = v11;
  if ( *(_DWORD *)(v6 + 76) >= 5u )
  {
    v12 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v6 + 80) + 160LL, 0, (__int64)"Z");
    v5 = v12;
    if ( v12 )
    {
      LogError(v12);
      AcpiDiagTraceAmlError(BugCheckParameter2, v5);
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
      AcpiDiagTraceAmlError(BugCheckParameter2, -1072431098);
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
      v25 = v14 + v15 + 2;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x496C6D41u);
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
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
        PoolWithTag[(unsigned int)v15] = 46;
        LODWORD(v15) = v15 + 1;
      }
      RtlStringCchCopyNA(&PoolWithTag[(unsigned int)v15], v25 - (unsigned int)v15, v3, (unsigned int)v14);
      PoolWithTag[(unsigned int)(v14 + v15)] = 0;
    }
    else
    {
      do
        ++v14;
      while ( v3[v14] );
      v17 = v14 + 1;
      v18 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x496C6D41u);
      PoolWithTag = v18;
      if ( !v18 )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
        PrintDebugMessage(92, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_25;
      }
      RtlStringCchCopyNA(v18, v17, v3, v17 - 1);
    }
    NameSpaceObject = GetNameSpaceObject(PoolWithTag);
    v5 = NameSpaceObject;
    if ( NameSpaceObject )
    {
      LogError(NameSpaceObject);
      AcpiDiagTraceAmlError(BugCheckParameter2, v5);
      PrintDebugMessage(92, PoolWithTag, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      v9 = 2;
LABEL_43:
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
LABEL_44:
      KeBugCheckEx(0xA5u, 0x15uLL, BugCheckParameter2, v9, v5);
    }
    if ( gpnsNameSpaceRoot )
    {
      FreeObjData(64LL);
      v22 = DupObjData(gpheapGlobal, 64LL, *(_QWORD *)(v6 + 80) + 200LL);
      v5 = v22;
      if ( v22 )
      {
        LogError(v22);
        AcpiDiagTraceAmlError(BugCheckParameter2, v5);
        PrintDebugMessage(88, 0LL, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        v9 = 3;
        goto LABEL_43;
      }
    }
    else
    {
      LogError(0);
      AcpiDiagTraceAmlError(BugCheckParameter2, 0);
      PrintDebugMessage(97, 0LL, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    v4 = v23;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v20 = *(_QWORD *)(BugCheckParameter2 + 416);
  *(_QWORD *)(BugCheckParameter2 + 416) = *(_QWORD *)(v20 + 8);
  HeapFree(v20);
  return (unsigned int)v5;
}
