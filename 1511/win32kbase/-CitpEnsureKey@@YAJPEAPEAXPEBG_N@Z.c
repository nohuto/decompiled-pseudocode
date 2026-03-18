/*
 * XREFs of ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C006675C
 * Callers:
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C00664A8 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C00666F4 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpEnsureKey(void **a1, const unsigned __int16 *a2, char a3)
{
  _BYTE *v3; // rbx
  struct _ACL *v4; // rdi
  NTSTATUS Acl; // eax
  const char *v9; // rdx
  unsigned int v10; // ebx
  void *v11; // rax
  NTSTATUS v13; // eax
  const char *v14; // rdx
  ULONG v15; // ebx
  struct _ACL *v16; // rax
  unsigned int v17; // r8d
  int v18; // ecx
  unsigned int v19; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  ULONG Disposition; // [rsp+F0h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  v4 = 0LL;
  KeyHandle = 0LL;
  if ( !a3 )
    goto LABEL_2;
  v13 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v10 = v13;
  if ( v13 < 0 )
  {
    v17 = 4590;
    v18 = v13;
LABEL_21:
    CitpLogFailureWorker(v18, v14, v17);
    goto LABEL_8;
  }
  v15 = RtlLengthSid(SeExports->SeLocalSystemSid) + 20;
  v16 = (struct _ACL *)Win32AllocPool();
  v4 = v16;
  if ( !v16 )
  {
    v10 = -1073741670;
    v17 = 4599;
    v18 = -1073741670;
    goto LABEL_21;
  }
  Acl = RtlCreateAcl(v16, v15, 2u);
  v10 = Acl;
  if ( Acl < 0 )
  {
    v19 = 4606;
    goto LABEL_26;
  }
  Acl = RtlAddAccessAllowedAce(v4, 2u, 0xF003Fu, SeExports->SeLocalSystemSid);
  v10 = Acl;
  if ( Acl < 0 )
  {
    v19 = 4616;
    goto LABEL_26;
  }
  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
  v10 = Acl;
  if ( Acl < 0 )
  {
    v19 = 4623;
    goto LABEL_26;
  }
  v3 = SecurityDescriptor;
LABEL_2:
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  Disposition = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v3;
  Acl = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  v10 = Acl;
  if ( Acl < 0 )
  {
    v19 = 4641;
  }
  else
  {
    if ( Disposition == 1 || !a3 || (Acl = ZwSetSecurityObject(KeyHandle, 4u, SecurityDescriptor), v10 = Acl, Acl >= 0) )
    {
      v11 = KeyHandle;
      KeyHandle = 0LL;
      v10 = 0;
      *a1 = v11;
      goto LABEL_6;
    }
    v19 = 4655;
  }
LABEL_26:
  CitpLogFailureWorker(Acl, v9, v19);
LABEL_6:
  if ( v4 )
    Win32FreePool();
LABEL_8:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v10;
}
