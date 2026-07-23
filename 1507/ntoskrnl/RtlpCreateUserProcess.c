/*
 * XREFs of RtlpCreateUserProcess @ 0x1407BC7DC
 * Callers:
 *     RtlCreateUserProcess @ 0x1407BC774 (RtlCreateUserProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x140180730 (ZwCreateUserProcess.c)
 *     memset @ 0x140195A80 (memset.c)
 */

NTSTATUS __fastcall RtlpCreateUserProcess(
        unsigned __int16 *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        HANDLE *a11)
{
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned int v16; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ThreadObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ProcessObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _PS_CREATE_INFO CreateInfo; // [rsp+D0h] [rbp-30h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+130h] [rbp+30h] BYREF
  __int64 v21; // [rsp+158h] [rbp+58h]
  __int64 v22; // [rsp+160h] [rbp+60h]
  HANDLE *v23; // [rsp+168h] [rbp+68h]
  __int64 v24; // [rsp+170h] [rbp+70h]
  __int64 v25; // [rsp+178h] [rbp+78h]
  __int64 v26; // [rsp+180h] [rbp+80h]
  __int64 v27; // [rsp+188h] [rbp+88h]
  __int64 v28; // [rsp+190h] [rbp+90h]
  __int64 v29; // [rsp+198h] [rbp+98h]
  __int64 v30; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v31; // [rsp+1A8h] [rbp+A8h]
  __int64 v32; // [rsp+1B0h] [rbp+B0h]

  memset(a11, 0, 0x68uLL);
  *(_DWORD *)a11 = 104;
  ProcessObjectAttributes.Length = 48;
  ThreadObjectAttributes.Length = 48;
  ProcessObjectAttributes.RootDirectory = 0LL;
  ProcessObjectAttributes.Attributes = 512;
  ProcessObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ProcessObjectAttributes.SecurityDescriptor = 0LL;
  ThreadObjectAttributes.RootDirectory = 0LL;
  ThreadObjectAttributes.Attributes = 512;
  ThreadObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ThreadObjectAttributes.SecurityDescriptor = 0LL;
  memset(&CreateInfo, 0, sizeof(CreateInfo));
  *(_BYTE *)&CreateInfo.InitState.1 |= 4u;
  AttributeList.Attributes[0].Value = (ULONG_PTR)(a11 + 3);
  v23 = a11 + 5;
  v13 = 2;
  CreateInfo.Size = 88LL;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  v21 = 6LL;
  v22 = 64LL;
  v24 = 0LL;
  if ( a1 )
  {
    v26 = *a1;
    v27 = *((_QWORD *)a1 + 1);
    v25 = 131077LL;
    v28 = 0LL;
    v16 = v16 & 0xFFFFFFE0 | 2;
    v13 = 4;
    v29 = 131082LL;
    v31 = &v16;
    v30 = 8LL;
    v32 = 0LL;
  }
  if ( (a7 & 0x40) != 0 )
  {
    v14 = v13++;
    AttributeList.Attributes[v14].Attribute = 393233LL;
    AttributeList.Attributes[v14].Size = 1LL;
    AttributeList.Attributes[v14].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v14 * 32) = 97LL;
  }
  AttributeList.TotalLength = 32LL * v13 + 8;
  return ZwCreateUserProcess(
           a11 + 1,
           a11 + 2,
           0x2000000u,
           0x2000000u,
           &ProcessObjectAttributes,
           &ThreadObjectAttributes,
           a7 | 0x100,
           1u,
           a2,
           &CreateInfo,
           &AttributeList);
}
