/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x140421240
 * Callers:
 *     ObQuerySecurityDescriptorInfo @ 0x140420A4C (ObQuerySecurityDescriptorInfo.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     CmpCheckSecurityCellAccess @ 0x1404BFEE8 (CmpCheckSecurityCellAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     RtlpFilterSacl @ 0x1404216D0 (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  _QWORD *v4; // r11
  unsigned int v6; // r15d
  ULONG v7; // ecx
  unsigned int *v8; // rax
  __int16 v9; // r8
  __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int8 *v12; // r14
  __int64 v13; // rdx
  unsigned __int8 *v14; // rsi
  __int64 v15; // rdx
  unsigned __int16 *v16; // rdi
  __int64 v17; // rcx
  char *v18; // rcx
  unsigned __int64 v19; // rdx
  ULONG v20; // ebx
  char v21; // al
  DWORD v22; // r9d
  int v23; // eax
  char v24; // r12
  char *v25; // rbx
  int v26; // r15d
  DWORD v28; // ecx
  int v29; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-90h]
  _DWORD Size[3]; // [rsp+2Ch] [rbp-8Ch]
  char *v32; // [rsp+38h] [rbp-80h]
  unsigned __int64 v33; // [rsp+40h] [rbp-78h]
  ULONG v34; // [rsp+48h] [rbp-70h]
  __int128 v35; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v36; // [rsp+60h] [rbp-58h]
  char *v37; // [rsp+68h] [rbp-50h]
  unsigned __int16 *v38; // [rsp+70h] [rbp-48h]

  v4 = SecurityDescriptor;
  v6 = 0;
  Size[0] = 0;
  v30 = 0;
  v29 = 0;
  v7 = *Length;
  v34 = *Length;
  v8 = (unsigned int *)*ObjectsSecurityDescriptor;
  if ( *ObjectsSecurityDescriptor )
  {
    v35 = *(_OWORD *)v8;
    LODWORD(v36) = v8[4];
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
    *((_QWORD *)&v35 + 1) = v12;
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
    v36 = v14;
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
    v38 = v16;
    if ( (v9 & 0x10) != 0 )
    {
      if ( v10 )
      {
        v17 = v8[3];
        if ( (_DWORD)v17 )
          v18 = (char *)v8 + v17;
        else
          v18 = 0LL;
      }
      else
      {
        v18 = (char *)*((_QWORD *)v8 + 3);
      }
    }
    else
    {
      v18 = 0LL;
    }
    *(_QWORD *)&Size[1] = v18;
    v37 = v18;
    v19 = (unsigned __int64)v35 >> 16;
    LODWORD(v19) = ((unsigned __int64)v35 >> 16) & 0xFFFF7FFF;
    v33 = v19;
    WORD1(v35) &= ~0x8000u;
    v20 = 20;
    v21 = *(_BYTE *)SecurityInformation & 0x80;
    if ( (*SecurityInformation & 0x10000) != 0 )
    {
      v28 = *SecurityInformation | 0xFF;
      *SecurityInformation = v28;
      if ( !v21 )
        *SecurityInformation = v28 & 0xFFFFFF7F;
    }
    v22 = *SecurityInformation;
    if ( (*SecurityInformation & 1) != 0 && v12 )
    {
      v23 = v12[1];
      v6 = 4 * v23 + 8;
      v20 = ((4 * v23 + 11) & 0xFFFFFFFC) + 20;
    }
    if ( (v22 & 2) != 0 && v14 )
    {
      Size[0] = 4 * v14[1] + 8;
      v20 += (Size[0] + 3) & 0xFFFFFFFC;
    }
    v24 = BYTE2(v35);
    if ( (v22 & 4) != 0 && (BYTE2(v35) & 4) != 0 && v16 )
    {
      v30 = (v16[1] + 3) & 0xFFFFFFFC;
      v20 += v30;
    }
    if ( (v22 & 0xF8) != 0 && (BYTE2(v35) & 0x10) != 0 && *(_QWORD *)&Size[1] )
    {
      RtlpFilterSacl(*(_QWORD *)&Size[1], 0LL, &v29);
      v20 += v29;
      LOWORD(v19) = v33;
      v4 = SecurityDescriptor;
    }
    *Length = v20;
    if ( v20 > v34 )
    {
      return -1073741789;
    }
    else
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      *((_DWORD *)v4 + 4) = 0;
      *(_BYTE *)v4 = 1;
      *((_WORD *)v4 + 1) |= 0x8000u;
      v25 = (char *)(((unsigned __int64)v4 + 23) & 0xFFFFFFFFFFFFFFFCuLL);
      v32 = v25;
      if ( (*SecurityInformation & 1) != 0 && v12 )
      {
        memmove((void *)(((unsigned __int64)v4 + 23) & 0xFFFFFFFFFFFFFFFCuLL), v12, v6);
        v4 = SecurityDescriptor;
        *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v25 - (_DWORD)SecurityDescriptor;
        LOWORD(v19) = v33;
        *((_WORD *)SecurityDescriptor + 1) |= v33 & 1;
        v25 += (v6 + 3) & 0xFFFFFFFC;
        v32 = v25;
      }
      if ( (*SecurityInformation & 2) != 0 && v14 )
      {
        v26 = Size[0];
        memmove(v25, v14, Size[0]);
        v4 = SecurityDescriptor;
        *((_DWORD *)SecurityDescriptor + 2) = (_DWORD)v25 - (_DWORD)SecurityDescriptor;
        LOWORD(v19) = v33;
        *((_WORD *)SecurityDescriptor + 1) |= v33 & 2;
        v25 += (v26 + 3) & 0xFFFFFFFC;
        v32 = v25;
      }
      if ( (*SecurityInformation & 4) != 0 )
      {
        *((_WORD *)v4 + 1) |= v19 & 0x140C;
        if ( (v24 & 4) != 0 )
        {
          if ( v16 )
          {
            memmove(v25, v16, v16[1]);
            v4 = SecurityDescriptor;
            *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v25 - (_DWORD)SecurityDescriptor;
            v25 += v30;
            v32 = v25;
          }
        }
      }
      if ( (*SecurityInformation & 0xF8) != 0 )
      {
        *((_WORD *)v4 + 1) |= v33 & 0x2830;
        if ( (v24 & 0x10) != 0 )
        {
          if ( *(_QWORD *)&Size[1] )
          {
            RtlpFilterSacl(*(_QWORD *)&Size[1], v25, &v29);
            *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v25 - (_DWORD)SecurityDescriptor;
            v32 = &v25[v29];
          }
        }
      }
      return 0;
    }
  }
  else
  {
    *Length = 20;
    if ( v7 < 0x14 )
    {
      return -1073741789;
    }
    else
    {
      *(_QWORD *)SecurityDescriptor = 0LL;
      *((_QWORD *)SecurityDescriptor + 1) = 0LL;
      *((_DWORD *)SecurityDescriptor + 4) = 0;
      *(_BYTE *)SecurityDescriptor = 1;
      *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
      return 0;
    }
  }
}
