/*
 * XREFs of VrpTranslatePath @ 0x140616A6C
 * Callers:
 *     VrpHandleIoctlGetComRootKey @ 0x140613638 (VrpHandleIoctlGetComRootKey.c)
 *     VrpPreOpenOrCreate @ 0x140616498 (VrpPreOpenOrCreate.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     VrpFindBestMatchNamespaceNode @ 0x140614D34 (VrpFindBestMatchNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x140617B98 (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x140617D80 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x140617E24 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpTranslatePath(__int64 a1, UNICODE_STRING *a2, __int64 a3, _QWORD *a4, int a5, int *a6)
{
  __int64 v9; // rsi
  __int64 BestMatchNamespaceNode; // rax
  UNICODE_STRING *v11; // r13
  NTSTATUS v12; // ebx
  int *v13; // r11
  unsigned __int64 v14; // r14
  int v15; // ebx
  bool v16; // zf
  __int64 v17; // rax
  unsigned __int64 Length; // rdx
  unsigned __int64 v19; // rcx
  __int64 i; // rax
  __int16 v21; // dx
  wchar_t *Buffer; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING Object; // [rsp+50h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF

  ObjectAttributes.Length = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  KeyHandle = 0LL;
  v9 = 0LL;
  v25[0] = 0LL;
  *(_QWORD *)&Object.Length = 0LL;
  BestMatchNamespaceNode = VrpFindBestMatchNamespaceNode(a5, a1, (__int64)v25);
  v11 = (UNICODE_STRING *)BestMatchNamespaceNode;
  if ( BestMatchNamespaceNode )
  {
    v13 = a6;
    if ( a6 )
      *a6 = *(_DWORD *)(BestMatchNamespaceNode + 48) & 2;
    v14 = v25[0];
    v15 = 0;
    if ( v25[0] )
    {
      do
      {
        VrpGetNextToken(a1, &Object, v25);
        ++v15;
      }
      while ( v15 < v14 );
      v9 = *(_QWORD *)&Object.Length;
    }
    v16 = *(_WORD *)a1 == (unsigned __int16)(2 * v9);
    v17 = *(_QWORD *)(a1 + 8);
    Object.MaximumLength = *(_WORD *)a1 - 2 * v9;
    Object.Length = Object.MaximumLength;
    Object.Buffer = (wchar_t *)(v17 + 2 * v9);
    if ( v16 && v13 )
      *v13 |= 1u;
    v12 = VrpBuildKeyPath(v11 + 1, &Object, a2);
    if ( v12 >= 0 )
    {
      VrpStripTrailingCharacters(a2);
      if ( a3 )
      {
        Length = a2->Length;
        v19 = (unsigned __int64)v11[1].Length >> 1;
        for ( i = v19; 2 * v19 < Length; i = v19 )
        {
          if ( a2->Buffer[i] != 92 )
            break;
          ++v19;
        }
        v21 = Length - 2 * v19;
        *(_WORD *)a3 = v21;
        *(_WORD *)(a3 + 2) = v21;
        *(_QWORD *)(a3 + 8) = &a2->Buffer[v19];
      }
      if ( a4 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = v11 + 1;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
        if ( v12 >= 0 )
        {
          v12 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, (PVOID *)&Object, 0LL);
          *a4 = *(_QWORD *)&Object.Length;
        }
      }
    }
  }
  else
  {
    v12 = -1073741772;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v12 < 0 )
  {
    Buffer = a2->Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0x67655256u);
      a2->Buffer = 0LL;
    }
  }
  return (unsigned int)v12;
}
