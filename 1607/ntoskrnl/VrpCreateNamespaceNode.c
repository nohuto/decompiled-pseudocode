/*
 * XREFs of VrpCreateNamespaceNode @ 0x1406146FC
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14061318C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140613440 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     VrpFindBestMatchNamespaceNode @ 0x140614D34 (VrpFindBestMatchNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x140617B98 (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x140617D80 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x140617E24 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpCreateNamespaceNode(__int64 a1, const void **a2, const void **a3, int a4, _QWORD *a5)
{
  int v9; // ebx
  __int16 *PoolWithTag; // rax
  __int16 *v11; // rdi
  PVOID v12; // rax
  void *v13; // rcx
  __int16 v14; // ax
  PVOID v15; // rax
  void *v16; // rcx
  __int16 v17; // ax
  __int64 BestMatchNamespaceNode; // rax
  const UNICODE_STRING *v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  int v22; // r11d
  __int16 v23; // ax
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  unsigned __int64 v28; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-18h] BYREF
  __int64 v31; // [rsp+80h] [rbp+30h] BYREF

  Source.Length = 0;
  *(_QWORD *)&Source.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Source.Buffer + 2) = 0;
  HIWORD(Source.Buffer) = 0;
  String1.Length = 0;
  *(_QWORD *)&String1.MaximumLength = 0LL;
  *(_DWORD *)((char *)&String1.Buffer + 2) = 0;
  HIWORD(String1.Buffer) = 0;
  v31 = 0LL;
  v28 = 0LL;
  if ( *(_DWORD *)(a1 + 84) )
    return (unsigned int)-1073741738;
  if ( (a4 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741811;
  VrpStripTrailingCharacters(a2);
  VrpStripTrailingCharacters(a3);
  VrpGetNextToken(a2, &v31, &String1);
  if ( !RtlEqualUnicodeString(&String1, &gRegistryString, 1u) )
    return (unsigned int)-1073741811;
  VrpGetNextToken(a2, &v31, &String1);
  PoolWithTag = (__int16 *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x67655256u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x38uLL);
  *((_DWORD *)v11 + 12) = a4;
  v12 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a2 + 1), 0x67655256u);
  *((_QWORD *)v11 + 1) = v12;
  v13 = v12;
  if ( v12 )
  {
    v14 = *(_WORD *)a2;
    v11[1] = *(_WORD *)a2;
    *v11 = v14;
    memmove(v13, a2[1], *(unsigned __int16 *)a2);
    v15 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a3 + 1), 0x67655256u);
    *((_QWORD *)v11 + 3) = v15;
    v16 = v15;
    if ( v15 )
    {
      v17 = *(_WORD *)a3;
      v11[8] = *(_WORD *)a3;
      v11[9] = v17;
      memmove(v16, a3[1], *(unsigned __int16 *)a3);
      VrpGetNextToken(a2, &v31, &String1);
      if ( String1.Length )
      {
        BestMatchNamespaceNode = VrpFindBestMatchNamespaceNode(a1, v11, &v28);
        v19 = (const UNICODE_STRING *)BestMatchNamespaceNode;
        if ( !BestMatchNamespaceNode )
        {
          v9 = -1073741811;
          goto LABEL_18;
        }
        v20 = 0LL;
        v21 = v28;
        *((_DWORD *)v11 + 12) |= *(_DWORD *)(BestMatchNamespaceNode + 48) & 2;
        v31 = 0LL;
        if ( v21 )
        {
          do
            VrpGetNextToken(v11, &v31, &String1);
          while ( v22 + 1 < v21 );
          v20 = v31;
        }
        v23 = *v11;
        Source.Buffer = (wchar_t *)(*((_QWORD *)v11 + 1) + 2 * v20);
        Source.Length = v23 - 2 * v20;
        Source.MaximumLength = Source.Length;
        v9 = VrpBuildKeyPath(v19 + 1, &Source, (PUNICODE_STRING)v11 + 2);
        if ( v9 < 0 )
          goto LABEL_18;
      }
      v9 = 0;
      *a5 = v11;
      return (unsigned int)v9;
    }
  }
  v9 = -1073741670;
LABEL_18:
  v24 = (void *)*((_QWORD *)v11 + 1);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x67655256u);
  v25 = (void *)*((_QWORD *)v11 + 3);
  if ( v25 )
    ExFreePoolWithTag(v25, 0x67655256u);
  v26 = (void *)*((_QWORD *)v11 + 5);
  if ( v26 )
    ExFreePoolWithTag(v26, 0x67655256u);
  ExFreePoolWithTag(v11, 0x67655256u);
  return (unsigned int)v9;
}
