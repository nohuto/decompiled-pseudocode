/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x140434450
 * Callers:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     NtCreateWnfStateName @ 0x1403E262C (NtCreateWnfStateName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404107B0 (ObpCaptureObjectCreateInformation.c)
 *     AlpcpConnectPort @ 0x14046D59C (AlpcpConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     NtSetSecurityObject @ 0x140495070 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B9924 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1404C0094 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404E7700 (PipGetRegistrySecurityWithFallback.c)
 *     CmpCopySaclToVirtualKey @ 0x1405E2E88 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlValidAcl @ 0x140435170 (RtlValidAcl.c)
 *     SepCheckAcl @ 0x14043562C (SepCheckAcl.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, POOL_TYPE a3, char a4, _QWORD *a5)
{
  char v5; // r10
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int16 v8; // dx
  __int16 v9; // ax
  unsigned __int8 *v10; // rbx
  unsigned __int8 *v11; // rdi
  unsigned __int16 *v12; // r13
  unsigned __int16 *v13; // r14
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int v18; // r15d
  int v19; // r9d
  unsigned int v20; // r8d
  ULONG64 v21; // rdx
  __int16 v22; // si
  _WORD *v23; // r14
  __int64 v24; // rax
  unsigned __int8 *v25; // rax
  int v26; // eax
  ULONG v27; // ebx
  ULONG64 v28; // rcx
  ULONG64 v29; // rax
  UCHAR *v30; // rdi
  int v31; // eax
  __int64 v32; // rcx
  ULONG64 v33; // rcx
  SIZE_T v34; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v36; // rdi
  ACL *v37; // rbx
  char v38; // r13
  _WORD *v40; // r13
  __int64 v41; // rax
  unsigned int v42; // ecx
  size_t v43; // [rsp+20h] [rbp-B8h]
  unsigned int v44; // [rsp+28h] [rbp-B0h]
  UCHAR v45; // [rsp+2Ch] [rbp-ACh]
  UCHAR v46; // [rsp+30h] [rbp-A8h]
  ULONG v47; // [rsp+34h] [rbp-A4h]
  PVOID P; // [rsp+40h] [rbp-98h]
  UCHAR v49; // [rsp+48h] [rbp-90h]
  unsigned int Size; // [rsp+50h] [rbp-88h]
  unsigned int Size_4; // [rsp+54h] [rbp-84h]
  unsigned int v52; // [rsp+58h] [rbp-80h]
  void *v53; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v54; // [rsp+68h] [rbp-70h]
  __int128 v55; // [rsp+70h] [rbp-68h]
  ULONG64 v56; // [rsp+80h] [rbp-58h]
  unsigned __int16 *v57; // [rsp+88h] [rbp-50h]
  unsigned __int16 *Src; // [rsp+90h] [rbp-48h]
  unsigned int v59; // [rsp+98h] [rbp-40h]

  v5 = a2;
  v6 = 0;
  v45 = 0;
  v49 = 0;
  v43 = 0LL;
  v47 = 0;
  v46 = 0;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v55 = *(_OWORD *)a1;
    v7 = *(_QWORD *)a1;
    if ( (WORD1(*(_OWORD *)a1) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v45 = 0;
    v43 = 0LL;
    v46 = 0;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    v55 = *(_OWORD *)a1;
    v7 = *(_QWORD *)a1;
  }
  if ( (_BYTE)v55 != 1 )
    return 3221225560LL;
  v8 = *(_WORD *)(a1 + 2);
  v9 = v8 & 0x8000;
  if ( v8 < 0 )
  {
    v17 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v17 )
      v10 = (unsigned __int8 *)(a1 + v17);
    else
      v10 = 0LL;
  }
  else
  {
    v10 = *(unsigned __int8 **)(a1 + 8);
  }
  v54 = v10;
  *((_QWORD *)&v55 + 1) = v10;
  if ( !v9 )
  {
    v11 = *(unsigned __int8 **)(a1 + 16);
LABEL_15:
    v53 = v11;
    goto LABEL_16;
  }
  v14 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v14 )
  {
    v11 = (unsigned __int8 *)(a1 + v14);
    goto LABEL_15;
  }
  v11 = 0LL;
  v53 = 0LL;
LABEL_16:
  v56 = (ULONG64)v11;
  if ( (v8 & 0x10) != 0 )
  {
    if ( v9 )
    {
      v16 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v16 )
        v12 = (unsigned __int16 *)(a1 + v16);
      else
        v12 = 0LL;
    }
    else
    {
      v12 = *(unsigned __int16 **)(a1 + 24);
    }
  }
  else
  {
    v12 = 0LL;
  }
  v57 = v12;
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
  LOBYTE(v7) = BYTE2(v7);
  v44 = 0;
  Size_4 = 0;
  v18 = 0;
  Size = 0;
  v59 = 0;
  v19 = 0;
  v20 = 0;
  v52 = 0;
  if ( (v7 & 0x100000) == 0 || !v12 )
  {
    v12 = 0LL;
    v57 = 0LL;
    v21 = MmUserProbeAddress;
    P = (PVOID)MmUserProbeAddress;
    goto LABEL_38;
  }
  if ( v5 )
  {
    v40 = v12 + 1;
    if ( (unsigned __int64)v40 >= MmUserProbeAddress )
      v40 = (_WORD *)MmUserProbeAddress;
    v41 = (unsigned __int16)*v40;
    v42 = (unsigned __int16)*v40;
    v44 = v42;
    Size_4 = v42;
    if ( *v40 )
    {
      if ( ((unsigned __int8)v57 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = v57;
      v21 = MmUserProbeAddress;
      P = (PVOID)MmUserProbeAddress;
      if ( (unsigned __int64)v57 + v41 <= MmUserProbeAddress && (unsigned __int16 *)((char *)v57 + v41) >= v57 )
        goto LABEL_125;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      v12 = v57;
    }
    v21 = MmUserProbeAddress;
    P = (PVOID)MmUserProbeAddress;
LABEL_125:
    v45 = 0;
    v43 = 0LL;
    v46 = 0;
    v53 = v11;
    v54 = v10;
    LOBYTE(v7) = BYTE2(v7);
    v18 = 0;
    v20 = 0;
    goto LABEL_126;
  }
  v42 = v12[1];
  v44 = v42;
  Size_4 = v42;
  v21 = MmUserProbeAddress;
  P = (PVOID)MmUserProbeAddress;
LABEL_126:
  v59 = (v42 + 3) & 0xFFFFFFFC;
  if ( v59 - 8 > 0xFFF7 )
    return 3221225591LL;
LABEL_38:
  v22 = v7 & 4;
  if ( !v22 || !v13 )
  {
    v13 = 0LL;
    Src = 0LL;
    goto LABEL_54;
  }
  if ( v5 )
  {
    v23 = v13 + 1;
    if ( (unsigned __int64)v23 >= v21 )
      v23 = (_WORD *)v21;
    v24 = (unsigned __int16)*v23;
    v18 = (unsigned __int16)*v23;
    Size = v18;
    if ( *v23 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = Src;
      v21 = MmUserProbeAddress;
      P = (PVOID)MmUserProbeAddress;
      if ( (unsigned __int64)Src + v24 <= MmUserProbeAddress && (unsigned __int16 *)((char *)Src + v24) >= Src )
        goto LABEL_52;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      v13 = Src;
    }
    v21 = MmUserProbeAddress;
    P = (PVOID)MmUserProbeAddress;
LABEL_52:
    v45 = 0;
    v43 = 0LL;
    v46 = 0;
    v12 = v57;
    v53 = v11;
    v54 = v10;
    v44 = Size_4;
    goto LABEL_53;
  }
  v18 = v13[1];
  Size = v18;
LABEL_53:
  v6 = (v18 + 3) & 0xFFFFFFFC;
  if ( v6 - 8 > 0xFFF7 )
    return 3221225591LL;
LABEL_54:
  if ( v10 )
  {
    if ( v5 )
    {
      v25 = v10 + 1;
      if ( (unsigned __int64)(v10 + 1) >= v21 )
        v25 = (unsigned __int8 *)v21;
      v26 = *v25;
      v45 = v26;
      v49 = v26;
      v27 = 4 * v26 + 8;
      LODWORD(v43) = v27;
      v47 = v27;
      if ( 4 * v26 == -8 )
      {
        v54 = (unsigned __int8 *)*((_QWORD *)&v55 + 1);
        v29 = MmUserProbeAddress;
      }
      else
      {
        if ( (BYTE8(v55) & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v54 = (unsigned __int8 *)*((_QWORD *)&v55 + 1);
        v28 = *((_QWORD *)&v55 + 1) + v27;
        v29 = MmUserProbeAddress;
        if ( v28 > MmUserProbeAddress || v28 < *((_QWORD *)&v55 + 1) )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v29 = MmUserProbeAddress;
        }
      }
      v46 = 0;
      HIDWORD(v43) = 0;
      v13 = Src;
      v12 = v57;
      v53 = v11;
      v44 = Size_4;
      v18 = Size;
    }
    else
    {
      v45 = v10[1];
      v49 = v45;
      v27 = RtlLengthRequiredSid(v45);
      LODWORD(v43) = v27;
      v47 = v27;
      v29 = (ULONG64)P;
      v5 = a2;
      v19 = 0;
    }
    v20 = (v27 + 3) & 0xFFFFFFFC;
    v52 = v20;
  }
  else
  {
    v29 = (ULONG64)P;
  }
  if ( v11 )
  {
    if ( v5 )
    {
      v30 = v11 + 1;
      if ( (unsigned __int64)v30 >= v29 )
        v30 = (UCHAR *)v29;
      v31 = *v30;
      v46 = *v30;
      v32 = (unsigned int)(4 * v31 + 8);
      HIDWORD(v43) = 4 * v31 + 8;
      if ( 4 * v31 == -8 )
      {
        v53 = (void *)v56;
      }
      else
      {
        if ( (v56 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v53 = (void *)v56;
        v33 = v56 + v32;
        if ( v33 > MmUserProbeAddress || v33 < v56 )
          *(_BYTE *)MmUserProbeAddress = 0;
        LODWORD(v32) = 4 * v31 + 8;
      }
      v45 = v49;
      LODWORD(v43) = v47;
      v13 = Src;
      v12 = v57;
      v54 = (unsigned __int8 *)*((_QWORD *)&v55 + 1);
      v44 = Size_4;
      v18 = Size;
    }
    else
    {
      v46 = v11[1];
      LODWORD(v32) = RtlLengthRequiredSid(v46);
      HIDWORD(v43) = v32;
      v20 = v52;
    }
    v19 = (v32 + 3) & 0xFFFFFFFC;
  }
  v34 = v59 + 20 + v6 + v20 + v19;
  PoolWithTag = ExAllocatePoolWithTag(a3, v34, 0x63536553u);
  v36 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v34);
  WORD1(v55) = WORD1(v7) & 0x7FFF;
  *(_OWORD *)v36 = v55;
  v36[4] = v56;
  v37 = (ACL *)(v36 + 5);
  *((_WORD *)v36 + 1) |= 0x8000u;
  if ( (v7 & 0x100000) == 0 || !v12 )
  {
    v36[3] = 0;
    v38 = a2;
    goto LABEL_85;
  }
  memmove(v36 + 5, v12, v44);
  v38 = a2;
  if ( !a2 || (unsigned __int8)SepCheckAcl(v36 + 5, v44) )
  {
    v36[3] = 20;
    *((_WORD *)v36 + 11) = v59;
    v37 = (ACL *)((char *)v37 + v59);
LABEL_85:
    if ( !v22 || !v13 )
    {
      v36[4] = 0;
LABEL_92:
      if ( v54 )
      {
        memmove(v37, v54, (unsigned int)v43);
        v37->Sbz1 = v45;
        if ( v38 && ((unsigned __int64)v37 <= MmUserProbeAddress || v45 > 0xFu || (v37->AclRevision & 0xF) != 1) )
        {
LABEL_137:
          ExFreePoolWithTag(v36, 0);
          return 3221225592LL;
        }
        v36[1] = (_DWORD)v37 - (_DWORD)v36;
        v37 = (ACL *)((char *)v37 + v52);
      }
      else
      {
        v36[1] = 0;
      }
      if ( !v53 )
      {
        v36[2] = 0;
        goto LABEL_104;
      }
      memmove(v37, v53, HIDWORD(v43));
      v37->Sbz1 = v46;
      if ( !v38 || (unsigned __int64)v37 > MmUserProbeAddress && v46 <= 0xFu && (v37->AclRevision & 0xF) == 1 )
      {
        v36[2] = (_DWORD)v37 - (_DWORD)v36;
LABEL_104:
        *a5 = v36;
        return 0LL;
      }
      goto LABEL_137;
    }
    memmove(v37, v13, v18);
    if ( !v38 || v18 >= 8 && v18 == v37->AclSize && RtlValidAcl(v37) )
    {
      v36[4] = (_DWORD)v37 - (_DWORD)v36;
      v37->AclSize = v6;
      v37 = (ACL *)((char *)v37 + v6);
      goto LABEL_92;
    }
  }
  ExFreePoolWithTag(v36, 0);
  return 3221225591LL;
}
