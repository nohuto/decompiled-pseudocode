/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x14015AEB8
 * Callers:
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14026D9C8 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14026DA4C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpPermissionBitPosition @ 0x14026DEEC (AdtpPermissionBitPosition.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x140486820 (RtlLengthSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x14054FEC4 (AdtpEtwBuildDashString.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        _BYTE *a9)
{
  _WORD *v9; // r10
  void *v10; // rbx
  unsigned int v11; // edi
  char v12; // si
  void *v14; // r8
  char v15; // r12
  __int64 v16; // r13
  char *v17; // r14
  char v18; // cl
  __int64 v19; // r9
  _DWORD *v20; // rdx
  int v21; // eax
  unsigned int v22; // esi
  __int64 v24; // r11
  ULONG v25; // eax
  __int64 v26; // r12
  _DWORD *v27; // rbx
  char v28; // r9
  unsigned int v29; // esi
  int v30; // r8d
  unsigned __int16 *v31; // r14
  int v32; // eax
  _DWORD *v33; // rdx
  __int64 v34; // r8
  unsigned int v35; // r14d
  int *v36; // rsi
  unsigned int v37; // ebx
  unsigned __int16 *v38; // r12
  int v39; // eax
  unsigned int v40; // edi
  __int64 v41; // rax
  _WORD *v42; // rsi
  _WORD *PoolWithTag; // rax
  unsigned int v44; // r12d
  unsigned __int16 *v45; // r14
  const void *v46; // rdx
  int v47; // ebx
  __int16 v48; // di
  PVOID *v49; // rbx
  __int64 v50; // rdi
  int v51; // [rsp+28h] [rbp-D8h]
  int v52; // [rsp+40h] [rbp-C0h]
  int v53; // [rsp+48h] [rbp-B8h]
  int v54; // [rsp+50h] [rbp-B0h]
  unsigned int v56; // [rsp+64h] [rbp-9Ch]
  _BYTE v57[4]; // [rsp+68h] [rbp-98h] BYREF
  int v58; // [rsp+6Ch] [rbp-94h]
  _DWORD *v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h]
  char *v62; // [rsp+88h] [rbp-78h] BYREF
  __int64 v63; // [rsp+90h] [rbp-70h]
  void *v64; // [rsp+98h] [rbp-68h]
  __int64 v65; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-58h]
  void *v67; // [rsp+B0h] [rbp-50h]
  _BYTE *v68; // [rsp+B8h] [rbp-48h]
  _DWORD *v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  _DWORD *v71; // [rsp+D0h] [rbp-30h]
  _OWORD v72[32]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v9) = 0;
  v10 = 0LL;
  v70 = a7;
  v11 = 0;
  v12 = 0;
  v59 = a3;
  v14 = 0LL;
  v71 = a8;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v60 = a1;
  v18 = 1;
  v68 = a9;
  v61 = a2;
  v56 = 0;
  v58 = 0;
  v57[0] = 0;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( !*a3 )
  {
LABEL_6:
    if ( a6 )
      AdtpEtwBuildDashString(a6);
    v22 = 0;
    goto LABEL_9;
  }
  v69 = a3 + 1;
  v19 = 32LL;
  v20 = v69;
  do
  {
    v21 = *v20 & 0xFF0000;
    switch ( v21 )
    {
      case 0:
        goto LABEL_4;
      case 65536:
      case 131072:
        goto LABEL_19;
      case 196608:
      case 262144:
        goto LABEL_18;
      case 327680:
        goto LABEL_19;
      case 393216:
LABEL_18:
        v15 = 1;
LABEL_19:
        v12 = 1;
        break;
    }
    v18 = 0;
LABEL_4:
    ++v20;
    --v19;
  }
  while ( v19 );
  if ( v18 == 1 )
    goto LABEL_6;
  memset(v72, 0, sizeof(v72));
  v24 = 1LL;
  if ( v12 == 1 )
  {
    AdtpBuildContextFromSecurityDescriptor(v59 + 36, &v62);
    v17 = v62;
    v24 = 1LL;
  }
  if ( v15 == 1 )
  {
    v25 = RtlLengthSecurityDescriptor(v17);
    AdtpBuildContextFromSecurityDescriptor(&v17[v25], &v65);
    v24 = 1LL;
  }
  v26 = (__int64)v69;
  v27 = &AdtpStandardAccessTypes;
  v28 = a4;
  v9 = 0LL;
  v29 = 0;
  while ( 2 )
  {
    if ( v28 == (_BYTE)v24 )
    {
      if ( (int)v59[(unsigned __int8)AdtpPermissionBitPosition((unsigned int)*v27) + 1] < 0 )
      {
        v31 = (unsigned __int16 *)&v72[(unsigned int)v16];
        v32 = AdtpBuildStagingReasonAuditStringInternal(
                v60,
                v61,
                (unsigned int)&v62,
                (unsigned int)&v65,
                v30,
                v51,
                v26,
                (__int64)v31);
        goto LABEL_31;
      }
      goto LABEL_33;
    }
    v33 = v59;
    if ( (*v27 & *v59) != 0 )
    {
      v31 = (unsigned __int16 *)&v72[(unsigned int)v16];
      v32 = AdtpBuildAccessReasonAuditStringInternal(
              v60,
              v61,
              (unsigned int)&v62,
              (unsigned int)&v65,
              *v27 & *v59,
              v51,
              v26,
              (__int64)v31,
              v52,
              v53,
              v54,
              (__int64)v57);
LABEL_31:
      v9 = 0LL;
      v56 = v32;
      if ( v32 < 0 )
        goto LABEL_61;
      v24 = 1LL;
      v28 = a4;
      v11 += *v31;
      v16 = (unsigned int)(v16 + 1);
      v58 = v16;
LABEL_33:
      v33 = v59;
    }
    v29 += v24;
    ++v27;
    if ( v29 < 7 )
      continue;
    break;
  }
  if ( (unsigned __int16)*v33 )
  {
    v34 = (__int64)(v33 + 1);
    v35 = (unsigned int)v9;
    v36 = v33 + 1;
    v37 = v24;
    do
    {
      if ( v28 == (_BYTE)v24 )
      {
        if ( *v36 < 0 )
        {
          v38 = (unsigned __int16 *)&v72[(unsigned int)v16];
          v39 = AdtpBuildStagingReasonAuditStringInternal(
                  v60,
                  v61,
                  (unsigned int)&v62,
                  (unsigned int)&v65,
                  v37,
                  v51,
                  v34,
                  (__int64)v38);
LABEL_42:
          v9 = 0LL;
          v56 = v39;
          if ( v39 < 0 )
            goto LABEL_61;
          v24 = 1LL;
          v33 = v59;
          v11 += *v38;
          v34 = (__int64)v69;
          v16 = (unsigned int)(v16 + 1);
          v28 = a4;
          v58 = v16;
        }
      }
      else if ( (v37 & *v33) != 0 )
      {
        v38 = (unsigned __int16 *)&v72[(unsigned int)v16];
        v39 = AdtpBuildAccessReasonAuditStringInternal(
                v60,
                v61,
                (unsigned int)&v62,
                (unsigned int)&v65,
                v37 & *v33,
                v51,
                v34,
                (__int64)v38,
                v52,
                v53,
                v54,
                (__int64)v57);
        goto LABEL_42;
      }
      v35 += v24;
      ++v36;
      v37 *= 2;
    }
    while ( v35 < 0x10 );
  }
  v40 = v24 + (v11 >> 1);
  if ( v70 && v71 && (v41 = (unsigned int)*v71, (unsigned int)v41 + v40 < 0x400) )
  {
    v42 = (_WORD *)(v70 + 2 * v41);
    *v71 = v41 + v40;
    *v68 = (_BYTE)v9;
LABEL_52:
    v44 = (unsigned int)v9;
    if ( (_DWORD)v16 )
    {
      v45 = (unsigned __int16 *)v72;
      do
      {
        v46 = (const void *)*((_QWORD *)v45 + 1);
        if ( v46 )
        {
          v47 = *v45;
          memmove((char *)v42 + v44, v46, *v45);
          v44 += v47;
          v9 = 0LL;
          v24 = 1LL;
        }
        v45 += 8;
        v16 -= v24;
      }
      while ( v16 );
      LODWORD(v16) = v58;
    }
    v42[v40 - 1] = (_WORD)v9;
    if ( a6 )
    {
      *(_QWORD *)a6 = v42;
      *(_DWORD *)(a6 + 8) = 2 * v40;
      *(_DWORD *)(a6 + 12) = (_DWORD)v9;
    }
    else
    {
      MEMORY[8] = v42;
      v48 = 2 * (v40 - v24);
      *v9 = v48;
      MEMORY[2] = v48 + 2;
    }
LABEL_61:
    v22 = v56;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)v24, 2LL * v40, 0x6B416553u);
    v9 = 0LL;
    v42 = PoolWithTag;
    if ( PoolWithTag )
    {
      v24 = 1LL;
      *v68 = 1;
      goto LABEL_52;
    }
    v22 = -1073741801;
  }
  if ( (_DWORD)v16 )
  {
    v49 = (PVOID *)v72 + 1;
    v50 = (unsigned int)v16;
    do
    {
      if ( *v49 )
      {
        ExFreePoolWithTag(*v49, 0);
        LODWORD(v9) = 0;
      }
      v49 += 2;
      --v50;
    }
    while ( v50 );
  }
  v14 = v64;
  v10 = v67;
LABEL_9:
  if ( (_DWORD)v63 != (_DWORD)v9 && v14 )
  {
    ExFreePoolWithTag(v14, 0);
    LODWORD(v9) = 0;
  }
  if ( (_DWORD)v66 != (_DWORD)v9 && v10 )
    ExFreePoolWithTag(v10, 0);
  return v22;
}
