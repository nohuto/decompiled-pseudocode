/*
 * XREFs of RtlpCreateUserProcess @ 0x180088688
 * Callers:
 *     RtlCreateUserProcess @ 0x180088590 (RtlCreateUserProcess.c)
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtCreateUserProcess @ 0x1800A6810 (NtCreateUserProcess.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __fastcall RtlpCreateUserProcess(
        unsigned __int16 *a1,
        void *a2,
        void *a3,
        void *a4,
        ULONG_PTR a5,
        __int16 a6,
        ULONG a7,
        ULONG ThreadFlags,
        ULONG_PTR a9,
        ULONG_PTR a10,
        void *a11)
{
  HANDLE *v11; // r14
  unsigned int v16; // ecx
  __int64 v17; // rax
  ULONG_PTR v18; // rdx
  __int64 v19; // rax
  ULONG_PTR v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  ULONG ProcessFlags; // r8d
  __int64 v24; // rax
  unsigned int v26; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ProcessObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ThreadObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _PS_CREATE_INFO CreateInfo; // [rsp+D0h] [rbp-30h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+130h] [rbp+30h] BYREF
  __int64 v31; // [rsp+158h] [rbp+58h]
  __int64 v32; // [rsp+160h] [rbp+60h]
  char *v33; // [rsp+168h] [rbp+68h]
  __int64 v34; // [rsp+170h] [rbp+70h]
  __int64 v35; // [rsp+178h] [rbp+78h]
  __int64 v36; // [rsp+180h] [rbp+80h]
  __int64 v37; // [rsp+188h] [rbp+88h]
  __int64 v38; // [rsp+190h] [rbp+90h]
  __int64 v39; // [rsp+198h] [rbp+98h]
  __int64 v40; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v41; // [rsp+1A8h] [rbp+A8h]
  __int64 v42; // [rsp+1B0h] [rbp+B0h]

  v11 = (HANDLE *)a11;
  memset(a11, 0, 0x68uLL);
  ProcessObjectAttributes.SecurityDescriptor = a3;
  ProcessObjectAttributes.Length = 48;
  ThreadObjectAttributes.Length = 48;
  *(_DWORD *)v11 = 104;
  ProcessObjectAttributes.Attributes = 512;
  ProcessObjectAttributes.RootDirectory = 0LL;
  ProcessObjectAttributes.ObjectName = 0LL;
  ProcessObjectAttributes.SecurityQualityOfService = 0LL;
  ThreadObjectAttributes.RootDirectory = 0LL;
  ThreadObjectAttributes.Attributes = 512;
  ThreadObjectAttributes.ObjectName = 0LL;
  ThreadObjectAttributes.SecurityDescriptor = a4;
  ThreadObjectAttributes.SecurityQualityOfService = 0LL;
  memset(&CreateInfo, 0, sizeof(CreateInfo));
  *(_BYTE *)&CreateInfo.InitState.1 |= 4u;
  AttributeList.Attributes[0].Value = (ULONG_PTR)(v11 + 3);
  v33 = (char *)(v11 + 5);
  CreateInfo.Size = 88LL;
  v16 = 2;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  v31 = 6LL;
  v32 = 64LL;
  v34 = 0LL;
  if ( a1 )
  {
    v16 = 4;
    v36 = *a1;
    v37 = *((_QWORD *)a1 + 1);
    v35 = 131077LL;
    v38 = 0LL;
    v26 = v26 & 0xFFFFFFE0 | 2;
    v41 = &v26;
    v39 = 131082LL;
    v40 = 8LL;
    v42 = 0LL;
  }
  if ( a5 )
  {
    v17 = v16++;
    AttributeList.Attributes[v17].Attribute = 393216LL;
    AttributeList.Attributes[v17].Size = 8LL;
    AttributeList.Attributes[v17].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v17 * 32) = a5;
  }
  v18 = a9;
  if ( a9 )
  {
    v19 = v16++;
    AttributeList.Attributes[v19].Attribute = 393217LL;
    AttributeList.Attributes[v19].Size = 8LL;
    AttributeList.Attributes[v19].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v19 * 32) = v18;
  }
  v20 = a10;
  if ( a10 )
  {
    v21 = v16++;
    AttributeList.Attributes[v21].Attribute = 393218LL;
    AttributeList.Attributes[v21].Size = 8LL;
    AttributeList.Attributes[v21].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v21 * 32) = v20;
  }
  if ( a6 )
  {
    --a6;
    v22 = v16++;
    AttributeList.Attributes[v22].Size = 2LL;
    ProcessFlags = a7;
    AttributeList.Attributes[v22].Attribute = 131085LL;
    AttributeList.Attributes[v22].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v22 * 32) = (ULONG_PTR)&a6;
  }
  else
  {
    ProcessFlags = a7 | 0x100;
  }
  if ( (ProcessFlags & 0x40) != 0 )
  {
    v24 = v16++;
    AttributeList.Attributes[v24].Attribute = 393233LL;
    AttributeList.Attributes[v24].Size = 1LL;
    AttributeList.Attributes[v24].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v24 * 32) = 97LL;
  }
  AttributeList.TotalLength = 32LL * v16 + 8;
  return NtCreateUserProcess(
           v11 + 1,
           v11 + 2,
           0x2000000u,
           0x2000000u,
           &ProcessObjectAttributes,
           &ThreadObjectAttributes,
           ProcessFlags,
           ThreadFlags,
           a2,
           &CreateInfo,
           &AttributeList);
}
