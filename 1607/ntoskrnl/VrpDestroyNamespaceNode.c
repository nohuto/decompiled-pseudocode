/*
 * XREFs of VrpDestroyNamespaceNode @ 0x140614A2C
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14061318C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140613440 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140614240 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpDestroyNamespaceNodeList @ 0x140614CB4 (VrpDestroyNamespaceNodeList.c)
 *     VrpPostUnloadKey @ 0x140615C7C (VrpPostUnloadKey.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x14015BAF0 (ZwDeleteKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ULongLongMult @ 0x1401B7468 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     VrpFindExactNamespaceNode @ 0x140614D50 (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpDestroyNamespaceNode(ULONGLONG *a1, __int64 a2)
{
  unsigned int v4; // r15d
  __int64 v5; // r9
  char *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r9
  const void *v9; // rdx
  unsigned __int64 v10; // r8
  ULONGLONG v11; // rcx
  ULONGLONG v12; // rdx
  ULONGLONG v13; // r12
  void *v14; // r13
  PVOID PoolWithTag; // rax
  void *v16; // rdi
  size_t v17; // r14
  PVOID v18; // rax
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  ULONGLONG ullMultiplier; // [rsp+98h] [rbp+48h] BYREF
  ULONGLONG pullResult; // [rsp+A0h] [rbp+50h] BYREF

  v4 = 0;
  if ( VrpFindExactNamespaceNode(a1, a2, &ullMultiplier) != a2 )
    goto LABEL_26;
  v4 = 1;
  if ( ullMultiplier >= a1[6] )
    goto LABEL_26;
  if ( ULongLongMult(a1[5], ullMultiplier, &ullMultiplier) < 0 )
    goto LABEL_26;
  v6 = (char *)(a1[9] + ullMultiplier);
  if ( (unsigned __int64)v6 < a1[9] )
    goto LABEL_26;
  v7 = a1[6] - v5 - 1;
  ullMultiplier = v7;
  if ( v7 )
  {
    if ( ULongLongMult(v7, a1[5], &ullMultiplier) < 0 )
      goto LABEL_26;
    if ( ULongLongMult(a1[5], v8 + 1, &pullResult) < 0 )
      goto LABEL_26;
    v9 = (const void *)(a1[9] + pullResult);
    if ( (unsigned __int64)v9 < a1[9] )
      goto LABEL_26;
    v7 = ullMultiplier;
    memmove(v6, v9, ullMultiplier);
  }
  memset(&v6[v7], 0, a1[5]);
  v10 = --a1[6];
  if ( v10 <= 0x10 )
    goto LABEL_26;
  v11 = a1[7];
  v12 = a1[5];
  if ( v12 * v11 < 0x400 )
    goto LABEL_26;
  if ( v10 >= v11 >> 2 )
    goto LABEL_26;
  v13 = v11 >> 1;
  if ( ULongLongMult(v11, v12, &pullResult) < 0 || ULongLongMult(v13, a1[5], &ullMultiplier) < 0 )
    goto LABEL_26;
  v14 = (void *)a1[9];
  if ( !v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ullMultiplier, 0x72615452u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, ullMultiplier);
LABEL_24:
    if ( v16 )
    {
      a1[9] = (ULONGLONG)v16;
      a1[7] = v13;
    }
    goto LABEL_26;
  }
  v17 = ullMultiplier;
  v18 = ExAllocatePoolWithTag(PagedPool, ullMultiplier, 0x72615452u);
  v16 = v18;
  if ( v18 )
    memset(v18, 0, v17);
  if ( v16 )
  {
    if ( pullResult < v17 )
      v17 = pullResult;
    memmove(v16, v14, v17);
    ExFreePoolWithTag(v14, 0x72615452u);
    goto LABEL_24;
  }
LABEL_26:
  if ( (*(_BYTE *)(a2 + 48) & 5) == 5 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a2 + 32);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey((PHANDLE)&ullMultiplier, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      ZwDeleteKey((HANDLE)ullMultiplier);
      ZwClose((HANDLE)ullMultiplier);
    }
  }
  v19 = *(void **)(a2 + 8);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x67655256u);
  v20 = *(void **)(a2 + 24);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x67655256u);
  v21 = *(void **)(a2 + 40);
  if ( v21 )
    ExFreePoolWithTag(v21, 0x67655256u);
  ExFreePoolWithTag((PVOID)a2, 0x67655256u);
  return v4;
}
