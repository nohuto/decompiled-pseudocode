/*
 * XREFs of RtlQuerySecurityObject @ 0x1800CCC60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlpFilterSacl @ 0x1800D8600 (RtlpFilterSacl.c)
 */

NTSTATUS __cdecl RtlQuerySecurityObject(
        PSECURITY_DESCRIPTOR ObjectDescriptor,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ResultantDescriptor,
        ULONG DescriptorLength,
        PULONG ReturnLength)
{
  char v5; // si
  unsigned int v6; // edx
  int v8; // ecx
  unsigned int v9; // r13d
  unsigned __int16 *v10; // r14
  char *v11; // rbx
  unsigned __int8 *v12; // r12
  unsigned int v14; // r15d
  char *v15; // rsi
  unsigned int v16; // ecx
  char *v17; // rsi
  __int64 v18; // rbx
  unsigned int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+24h] [rbp-64h]
  int v22; // [rsp+28h] [rbp-60h]
  void *Src; // [rsp+30h] [rbp-58h]
  unsigned int v24; // [rsp+90h] [rbp+8h] BYREF
  int v25; // [rsp+98h] [rbp+10h]
  size_t Size; // [rsp+A0h] [rbp+18h]
  ULONG v27; // [rsp+A8h] [rbp+20h]

  v27 = DescriptorLength;
  v20 = 0;
  v5 = SecurityInformation;
  v6 = 0;
  v8 = 0;
  v24 = 0;
  Src = 0LL;
  v9 = 0;
  LODWORD(Size) = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v22 = v5 & 2;
  if ( (v5 & 2) != 0 )
  {
    if ( (*((_WORD *)ObjectDescriptor + 1) & 0x8000) != 0 )
    {
      if ( !*((_DWORD *)ObjectDescriptor + 2) )
        goto LABEL_8;
      v12 = (unsigned __int8 *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 2);
    }
    else
    {
      v12 = (unsigned __int8 *)*((_QWORD *)ObjectDescriptor + 2);
    }
    if ( v12 )
      v20 = (4 * v12[1] + 11) & 0xFFFFFFFC;
  }
LABEL_8:
  v21 = v5 & 4;
  if ( (v5 & 4) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 4) != 0 )
  {
    if ( (*((_WORD *)ObjectDescriptor + 1) & 0x8000) != 0 )
    {
      if ( !*((_DWORD *)ObjectDescriptor + 4) )
        goto LABEL_16;
      v10 = (unsigned __int16 *)((char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 4));
    }
    else
    {
      v10 = (unsigned __int16 *)*((_QWORD *)ObjectDescriptor + 4);
    }
    if ( v10 )
      v9 = (v10[1] + 3) & 0xFFFFFFFC;
  }
LABEL_16:
  v14 = v5 & 0xF8;
  if ( (v5 & 0xF8) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 0x10) != 0 )
  {
    if ( (*((_WORD *)ObjectDescriptor + 1) & 0x8000) != 0 )
    {
      if ( !*((_DWORD *)ObjectDescriptor + 3) )
        goto LABEL_24;
      v11 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 3);
    }
    else
    {
      v11 = (char *)*((_QWORD *)ObjectDescriptor + 3);
    }
    if ( v11 )
    {
      RtlpFilterSacl(v11, 0LL, &v24, v5 & 0xF8);
      v6 = v24;
      v8 = Size;
      DescriptorLength = v27;
    }
  }
LABEL_24:
  v25 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    if ( (*((_WORD *)ObjectDescriptor + 1) & 0x8000) != 0 )
    {
      if ( !*((_DWORD *)ObjectDescriptor + 1) )
      {
        Src = 0LL;
        goto LABEL_32;
      }
      v15 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 1);
    }
    else
    {
      v15 = (char *)*((_QWORD *)ObjectDescriptor + 1);
    }
    Src = v15;
    if ( v15 )
    {
      v8 = (4 * (unsigned __int8)v15[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v8;
    }
  }
LABEL_32:
  v16 = v9 + v8 + v6 + v20 + 20;
  *ReturnLength = v16;
  if ( v16 > DescriptorLength || !ResultantDescriptor )
    return -1073741789;
  v17 = (char *)ResultantDescriptor + 20;
  *(_QWORD *)ResultantDescriptor = 0LL;
  *((_QWORD *)ResultantDescriptor + 1) = 0LL;
  *((_DWORD *)ResultantDescriptor + 4) = 0;
  *((_WORD *)ResultantDescriptor + 1) |= 0x8000u;
  *(_BYTE *)ResultantDescriptor = 1;
  if ( v14 )
  {
    if ( v6 )
    {
      RtlpFilterSacl(v11, (char *)ResultantDescriptor + 20, &v24, v14);
      *((_DWORD *)ResultantDescriptor + 3) = 20;
      v17 += v24;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 0x2830;
  }
  if ( v21 )
  {
    if ( v9 )
    {
      memmove(v17, v10, v9);
      *((_DWORD *)ResultantDescriptor + 4) = (_DWORD)v17 - (_DWORD)ResultantDescriptor;
      v17 += v9;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 0x140C;
  }
  if ( v25 )
  {
    if ( (_DWORD)Size )
    {
      v18 = (unsigned int)Size;
      memmove(v17, Src, (unsigned int)Size);
      *((_DWORD *)ResultantDescriptor + 1) = (_DWORD)v17 - (_DWORD)ResultantDescriptor;
      v17 += v18;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 1;
  }
  if ( v22 )
  {
    if ( v20 )
    {
      memmove(v17, v12, v20);
      *((_DWORD *)ResultantDescriptor + 2) = (_DWORD)v17 - (_DWORD)ResultantDescriptor;
    }
    *((_WORD *)ResultantDescriptor + 1) |= *((_WORD *)ObjectDescriptor + 1) & 2;
  }
  return 0;
}
