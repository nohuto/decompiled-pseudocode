/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x1404038C0
 * Callers:
 *     ObQuerySecurityDescriptorInfo @ 0x1404030FC (ObQuerySecurityDescriptorInfo.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x140403860 (CmpQuerySecurityDescriptorInfo.c)
 *     CmpCheckSecurityCellAccess @ 0x1404CC9B8 (CmpCheckSecurityCellAccess.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlpFilterSacl @ 0x140403D34 (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  unsigned int v6; // r13d
  ULONG v7; // ecx
  unsigned int *v8; // rax
  __int16 v9; // r8
  __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int8 *v12; // r15
  __int64 v13; // rdx
  unsigned __int8 *v14; // r12
  __int64 v15; // rdx
  unsigned __int16 *v16; // r14
  char *v17; // r11
  __int16 v18; // dx
  unsigned int v19; // ebx
  char v20; // al
  DWORD v21; // r9d
  int v22; // eax
  char *v23; // rbx
  __int64 v24; // rcx
  DWORD v26; // ecx
  size_t Size; // [rsp+24h] [rbp-84h]
  char *v28; // [rsp+38h] [rbp-70h]
  ULONG v29; // [rsp+48h] [rbp-60h]
  __int128 v30; // [rsp+50h] [rbp-58h]
  int v31; // [rsp+B8h] [rbp+10h] BYREF
  PULONG v32; // [rsp+C0h] [rbp+18h]

  v32 = Length;
  v6 = 0;
  Size = 0LL;
  v31 = 0;
  v7 = *Length;
  v29 = *Length;
  v8 = (unsigned int *)*ObjectsSecurityDescriptor;
  if ( !*ObjectsSecurityDescriptor )
  {
    *Length = 20;
    if ( v7 < 0x14 )
      return -1073741789;
    *(_QWORD *)SecurityDescriptor = 0LL;
    *((_QWORD *)SecurityDescriptor + 1) = 0LL;
    *((_DWORD *)SecurityDescriptor + 4) = 0;
    *(_BYTE *)SecurityDescriptor = 1;
    *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
    return 0;
  }
  v30 = *(_OWORD *)v8;
  v9 = *((_WORD *)v8 + 1);
  v10 = v9 & 0x8000;
  if ( v9 >= 0 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)v8 + 1);
  }
  else
  {
    v11 = v8[1];
    if ( (_DWORD)v11 )
      v12 = (unsigned __int8 *)v8 + v11;
    else
      v12 = 0LL;
  }
  if ( v10 )
  {
    v13 = v8[2];
    if ( (_DWORD)v13 )
      v14 = (unsigned __int8 *)v8 + v13;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = (unsigned __int8 *)*((_QWORD *)v8 + 2);
  }
  if ( (v9 & 4) != 0 )
  {
    if ( v10 )
    {
      v15 = v8[4];
      if ( (_DWORD)v15 )
        v16 = (unsigned __int16 *)((char *)v8 + v15);
      else
        v16 = 0LL;
    }
    else
    {
      v16 = (unsigned __int16 *)*((_QWORD *)v8 + 4);
    }
  }
  else
  {
    v16 = 0LL;
  }
  if ( (v9 & 0x10) == 0 )
  {
    v17 = 0LL;
    v28 = 0LL;
    goto LABEL_14;
  }
  if ( !v10 )
  {
    v17 = (char *)*((_QWORD *)v8 + 3);
    goto LABEL_45;
  }
  v24 = v8[3];
  if ( (_DWORD)v24 )
  {
    v17 = (char *)v8 + v24;
LABEL_45:
    v28 = v17;
    goto LABEL_14;
  }
  v17 = 0LL;
  v28 = 0LL;
LABEL_14:
  v18 = WORD1(v30) & 0x7FFF;
  v19 = 20;
  v20 = *(_BYTE *)SecurityInformation & 0x80;
  if ( (*SecurityInformation & 0x10000) != 0 )
  {
    v26 = *SecurityInformation | 0xFF;
    *SecurityInformation = v26;
    if ( !v20 )
      *SecurityInformation = v26 & 0xFFFFFF7F;
  }
  v21 = *SecurityInformation;
  if ( (*SecurityInformation & 1) != 0 && v12 )
  {
    v22 = v12[1];
    v6 = 4 * v22 + 8;
    v19 = ((4 * v22 + 11) & 0xFFFFFFFC) + 20;
  }
  if ( (v21 & 2) != 0 && v14 )
  {
    LODWORD(Size) = 4 * v14[1] + 8;
    v19 += (4 * v14[1] + 11) & 0xFFFFFFFC;
  }
  if ( (v21 & 4) != 0 && (BYTE2(v30) & 4) != 0 && v16 )
  {
    HIDWORD(Size) = (v16[1] + 3) & 0xFFFFFFFC;
    v19 += HIDWORD(Size);
  }
  if ( (v21 & 0xF8) != 0 && (BYTE2(v30) & 0x10) != 0 && v17 )
  {
    RtlpFilterSacl(v17, 0LL, &v31);
    v19 += v31;
    v18 = WORD1(v30) & 0x7FFF;
  }
  *v32 = v19;
  if ( v19 > v29 )
    return -1073741789;
  *(_QWORD *)SecurityDescriptor = 0LL;
  *((_QWORD *)SecurityDescriptor + 1) = 0LL;
  *((_DWORD *)SecurityDescriptor + 4) = 0;
  *(_BYTE *)SecurityDescriptor = 1;
  *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
  v23 = (char *)(((unsigned __int64)SecurityDescriptor + 23) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (*SecurityInformation & 1) != 0 && v12 )
  {
    memmove((void *)(((unsigned __int64)SecurityDescriptor + 23) & 0xFFFFFFFFFFFFFFFCuLL), v12, v6);
    *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v23 - (_DWORD)SecurityDescriptor;
    v18 = WORD1(v30) & 0x7FFF;
    *((_WORD *)SecurityDescriptor + 1) |= BYTE2(v30) & 1;
    v23 += (v6 + 3) & 0xFFFFFFFC;
  }
  if ( (*SecurityInformation & 2) != 0 && v14 )
  {
    memmove(v23, v14, (unsigned int)Size);
    *((_DWORD *)SecurityDescriptor + 2) = (_DWORD)v23 - (_DWORD)SecurityDescriptor;
    v18 = WORD1(v30) & 0x7FFF;
    *((_WORD *)SecurityDescriptor + 1) |= BYTE2(v30) & 2;
    v23 += ((_DWORD)Size + 3) & 0xFFFFFFFC;
  }
  if ( (*SecurityInformation & 4) != 0 )
  {
    *((_WORD *)SecurityDescriptor + 1) |= v18 & 0x140C;
    if ( (BYTE2(v30) & 4) != 0 )
    {
      if ( v16 )
      {
        memmove(v23, v16, v16[1]);
        *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v23 - (_DWORD)SecurityDescriptor;
        v23 += HIDWORD(Size);
      }
    }
  }
  if ( (*SecurityInformation & 0xF8) != 0 )
  {
    *((_WORD *)SecurityDescriptor + 1) |= WORD1(v30) & 0x2830;
    if ( (BYTE2(v30) & 0x10) != 0 )
    {
      if ( v28 )
      {
        RtlpFilterSacl(v28, v23, &v31);
        *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v23 - (_DWORD)SecurityDescriptor;
      }
    }
  }
  return 0;
}
