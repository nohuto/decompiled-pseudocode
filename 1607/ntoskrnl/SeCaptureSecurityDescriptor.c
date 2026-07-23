/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x14041FD80
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     NtCreateWnfStateName @ 0x1403F5A04 (NtCreateWnfStateName.c)
 *     AlpcpConnectPort @ 0x140406F90 (AlpcpConnectPort.c)
 *     ObpCaptureObjectCreateInformation @ 0x140418630 (ObpCaptureObjectCreateInformation.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140479C84 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404A0ABC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404D3FA4 (PipGetRegistrySecurityWithFallback.c)
 *     NtSetSecurityObject @ 0x140503BA4 (NtSetSecurityObject.c)
 *     CmpCopySaclToVirtualKey @ 0x140602258 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     SepCheckAcl @ 0x140479BC4 (SepCheckAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, POOL_TYPE a3, char a4, _QWORD *a5)
{
  char v5; // r10
  int v6; // r11d
  __int64 v7; // r14
  __int16 v8; // dx
  __int16 v9; // ax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdi
  unsigned __int16 *v12; // r8
  unsigned __int16 *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int v18; // r13d
  unsigned int v19; // r15d
  unsigned int v20; // r12d
  unsigned int v21; // r8d
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  ULONG v26; // ebx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  SIZE_T v32; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v34; // rdi
  ACL *v35; // rbx
  char v36; // si
  __int64 v38; // rax
  __int64 v39; // rax
  size_t Size; // [rsp+20h] [rbp-B8h]
  ULONG v41; // [rsp+28h] [rbp-B0h]
  UCHAR v42; // [rsp+30h] [rbp-A8h]
  UCHAR v43; // [rsp+34h] [rbp-A4h]
  UCHAR v44; // [rsp+38h] [rbp-A0h]
  unsigned int v45; // [rsp+40h] [rbp-98h]
  unsigned int v46; // [rsp+44h] [rbp-94h]
  unsigned int v47; // [rsp+48h] [rbp-90h]
  unsigned __int16 *v48; // [rsp+50h] [rbp-88h]
  void *v49; // [rsp+58h] [rbp-80h]
  void *v50; // [rsp+60h] [rbp-78h]
  unsigned int v51; // [rsp+68h] [rbp-70h]
  __int128 v52; // [rsp+70h] [rbp-68h]
  int v53; // [rsp+80h] [rbp-58h]
  unsigned __int16 *v54; // [rsp+88h] [rbp-50h]
  unsigned __int16 *Src; // [rsp+90h] [rbp-48h]

  v5 = a2;
  v6 = 0;
  v42 = 0;
  v44 = 0;
  v41 = 0;
  v43 = 0;
  Size = 0LL;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v52 = *(_OWORD *)a1;
    v7 = *(_QWORD *)a1;
    if ( (WORD1(*(_OWORD *)a1) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v42 = 0;
    v43 = 0;
    Size = 0LL;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    v52 = *(_OWORD *)a1;
    v7 = *(_QWORD *)a1;
  }
  if ( (_BYTE)v52 != 1 )
    return 3221225560LL;
  v8 = *(_WORD *)(a1 + 2);
  v9 = v8 & 0x8000;
  if ( (v8 & 0x8000) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 8);
LABEL_13:
    v49 = (void *)v10;
    goto LABEL_14;
  }
  v17 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v17 )
  {
    v10 = a1 + v17;
    goto LABEL_13;
  }
  v10 = 0LL;
  v49 = 0LL;
LABEL_14:
  *((_QWORD *)&v52 + 1) = v10;
  if ( !v9 )
  {
    v11 = *(_QWORD *)(a1 + 16);
LABEL_16:
    v50 = (void *)v11;
    goto LABEL_17;
  }
  v14 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v14 )
  {
    v11 = a1 + v14;
    goto LABEL_16;
  }
  v11 = 0LL;
  v50 = 0LL;
LABEL_17:
  v53 = v11;
  if ( (v8 & 0x10) == 0 )
  {
    v12 = 0LL;
    v48 = 0LL;
    goto LABEL_19;
  }
  if ( !v9 )
  {
    v12 = *(unsigned __int16 **)(a1 + 24);
    goto LABEL_29;
  }
  v16 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v16 )
  {
    v12 = (unsigned __int16 *)(a1 + v16);
LABEL_29:
    v48 = v12;
    goto LABEL_19;
  }
  v12 = 0LL;
  v48 = 0LL;
LABEL_19:
  v54 = v12;
  if ( (v8 & 4) != 0 )
  {
    if ( v9 )
    {
      v15 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v15 )
        v13 = (unsigned __int16 *)(a1 + v15);
      else
        v13 = 0LL;
    }
    else
    {
      v13 = *(unsigned __int16 **)(a1 + 32);
    }
  }
  else
  {
    v13 = 0LL;
  }
  Src = v13;
  v18 = 0;
  v45 = 0;
  v19 = 0;
  v46 = 0;
  v51 = 0;
  v20 = 0;
  v21 = 0;
  v47 = 0;
  if ( (v7 & 0x100000) != 0 && v48 )
  {
    if ( v5 )
    {
      v38 = (__int64)(v48 + 1);
      if ( (unsigned __int64)(v48 + 1) >= 0x7FFFFFFF0000LL )
        v38 = 0x7FFFFFFF0000LL;
      v39 = *(unsigned __int16 *)v38;
      v18 = v39;
      v45 = v39;
      if ( (_DWORD)v39 )
      {
        if ( ((unsigned __int8)v54 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v48 = v54;
        if ( (unsigned __int64)v54 + v39 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)v54 + v39) < v54 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v48 = v54;
        v21 = 0;
      }
      v42 = 0;
      v43 = 0;
      Size = 0LL;
      v50 = (void *)v11;
      v49 = (void *)v10;
      v19 = 0;
    }
    else
    {
      v18 = v48[1];
      v45 = v18;
    }
    v51 = (v18 + 3) & 0xFFFFFFFC;
    if ( v51 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v48 = 0LL;
    v54 = 0LL;
  }
  if ( (v7 & 0x40000) != 0 && v13 )
  {
    if ( v5 )
    {
      v22 = (unsigned __int64)(v13 + 1);
      if ( v22 >= 0x7FFFFFFF0000LL )
        v22 = 0x7FFFFFFF0000LL;
      v23 = *(unsigned __int16 *)v22;
      v19 = *(unsigned __int16 *)v22;
      v46 = v19;
      if ( *(_WORD *)v22 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = Src;
        if ( (unsigned __int64)Src + v23 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)Src + v23) < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v13 = Src;
      }
      v42 = 0;
      v43 = 0;
      Size = 0LL;
      v48 = v54;
      v50 = (void *)v11;
      v49 = (void *)v10;
      v18 = v45;
      v21 = 0;
    }
    else
    {
      v19 = v13[1];
      v46 = v19;
    }
    v20 = (v19 + 3) & 0xFFFFFFFC;
    if ( v20 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v13 = 0LL;
    Src = 0LL;
  }
  if ( v10 )
  {
    if ( v5 )
    {
      v24 = v10 + 1;
      if ( v10 + 1 >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      v25 = *(unsigned __int8 *)v24;
      v42 = v25;
      v44 = v25;
      v26 = 4 * v25 + 8;
      HIDWORD(Size) = v26;
      v41 = v26;
      if ( 4 * v25 == -8 )
      {
        v49 = (void *)v10;
      }
      else
      {
        if ( (v10 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v49 = (void *)v10;
        v27 = v10 + v26;
        if ( v27 > 0x7FFFFFFF0000LL || v27 < v10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v43 = 0;
      LODWORD(Size) = 0;
      v13 = Src;
      v48 = v54;
      v50 = (void *)v11;
      v18 = v45;
      v19 = v46;
    }
    else
    {
      v42 = *(_BYTE *)(v10 + 1);
      v44 = v42;
      v26 = RtlLengthRequiredSid(v42);
      HIDWORD(Size) = v26;
      v41 = v26;
      v5 = a2;
      v6 = 0;
    }
    v21 = (v26 + 3) & 0xFFFFFFFC;
    v47 = v21;
  }
  if ( v11 )
  {
    if ( v5 )
    {
      v28 = v11 + 1;
      if ( v11 + 1 >= 0x7FFFFFFF0000LL )
        v28 = 0x7FFFFFFF0000LL;
      v29 = *(unsigned __int8 *)v28;
      v43 = v29;
      v30 = (unsigned int)(4 * v29 + 8);
      LODWORD(Size) = 4 * v29 + 8;
      if ( 4 * v29 == -8 )
      {
        v50 = (void *)v11;
      }
      else
      {
        if ( (v11 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v50 = (void *)v11;
        v31 = v11 + v30;
        if ( v31 > 0x7FFFFFFF0000LL || v31 < v11 )
          MEMORY[0x7FFFFFFF0000] = 0;
        LODWORD(v30) = 4 * v29 + 8;
      }
      v42 = v44;
      HIDWORD(Size) = v41;
      v13 = Src;
      v48 = v54;
      v49 = (void *)*((_QWORD *)&v52 + 1);
      v18 = v45;
      v19 = v46;
    }
    else
    {
      v43 = *(_BYTE *)(v11 + 1);
      LODWORD(v30) = RtlLengthRequiredSid(v43);
      LODWORD(Size) = v30;
    }
    v6 = (v30 + 3) & 0xFFFFFFFC;
    v21 = v47;
  }
  v32 = v51 + 20 + v20 + v21 + v6;
  PoolWithTag = ExAllocatePoolWithTag(a3, v32, 0x63536553u);
  v34 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v32);
  WORD1(v52) = WORD1(v7) & 0x7FFF;
  *(_OWORD *)v34 = v52;
  v34[4] = v53;
  v35 = (ACL *)(v34 + 5);
  *((_WORD *)v34 + 1) |= 0x8000u;
  if ( (v7 & 0x100000) != 0 && v48 )
  {
    memmove(v34 + 5, v48, v18);
    if ( a2 && !(unsigned __int8)SepCheckAcl(v34 + 5, v18) )
      goto LABEL_137;
    v34[3] = 20;
    *((_WORD *)v34 + 11) = v51;
    v35 = (ACL *)((char *)v35 + v51);
  }
  else
  {
    v34[3] = 0;
  }
  if ( (v7 & 0x40000) != 0 && v13 )
  {
    memmove(v35, v13, v19);
    v36 = a2;
    if ( !a2 || v19 >= 8 && v19 == v35->AclSize && RtlValidAcl(v35) )
    {
      v34[4] = (_DWORD)v35 - (_DWORD)v34;
      v35->AclSize = v20;
      v35 = (ACL *)((char *)v35 + v20);
      goto LABEL_93;
    }
LABEL_137:
    ExFreePoolWithTag(v34, 0);
    return 3221225591LL;
  }
  v34[4] = 0;
  v36 = a2;
LABEL_93:
  if ( !v49 )
  {
    v34[1] = 0;
    goto LABEL_97;
  }
  memmove(v35, v49, HIDWORD(Size));
  v35->Sbz1 = v42;
  if ( !v36 || RtlValidSid(v35) )
  {
    v34[1] = (_DWORD)v35 - (_DWORD)v34;
    v35 = (ACL *)((char *)v35 + v47);
LABEL_97:
    if ( !v50 )
    {
      v34[2] = 0;
      goto LABEL_101;
    }
    memmove(v35, v50, (unsigned int)Size);
    v35->Sbz1 = v43;
    if ( !v36 || RtlValidSid(v35) )
    {
      v34[2] = (_DWORD)v35 - (_DWORD)v34;
LABEL_101:
      *a5 = v34;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v34, 0);
  return 3221225592LL;
}
