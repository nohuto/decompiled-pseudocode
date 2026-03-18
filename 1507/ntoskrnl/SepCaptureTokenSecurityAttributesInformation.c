/*
 * XREFs of SepCaptureTokenSecurityAttributesInformation @ 0x140547CC4
 * Callers:
 *     NtCreateTokenEx @ 0x14046EF1C (NtCreateTokenEx.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140547B70 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x140485B70 (SepCaptureUnicodeStringArray.c)
 *     SepCaptureInt64Array @ 0x140548108 (SepCaptureInt64Array.c)
 *     SepCaptureFqbnArray @ 0x1406D40A0 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1406D42D0 (SepCaptureOctetStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        unsigned __int64 a1,
        char a2,
        char a3,
        const void ***a4)
{
  int v6; // edi
  unsigned __int16 *v7; // rsi
  const void **PoolWithTag; // r14
  unsigned int v9; // eax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned int v12; // r15d
  unsigned __int16 v13; // ax
  PVOID v14; // r9
  unsigned __int16 v15; // ax
  ULONG64 v16; // rcx
  ULONG64 v17; // rdx
  unsigned int v18; // r12d
  unsigned int v19; // edx
  int v20; // eax
  int v21; // eax
  PVOID v23; // r12
  unsigned int j; // r15d
  unsigned int v25; // r15d
  unsigned int v26; // r14d
  PVOID v27; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v28; // [rsp+30h] [rbp-78h]
  unsigned int i; // [rsp+34h] [rbp-74h]
  PVOID P; // [rsp+38h] [rbp-70h]
  int v31; // [rsp+40h] [rbp-68h]
  int v32; // [rsp+44h] [rbp-64h]
  PVOID v33; // [rsp+48h] [rbp-60h]
  unsigned __int64 v34; // [rsp+50h] [rbp-58h]
  unsigned __int16 *v35; // [rsp+58h] [rbp-50h]
  const void **v36; // [rsp+60h] [rbp-48h]
  unsigned int v37; // [rsp+B8h] [rbp+10h]

  v6 = 0;
  v7 = 0LL;
  v35 = 0LL;
  P = 0LL;
  v33 = 0LL;
  LODWORD(v34) = 0;
  v37 = 0;
  v32 = 0;
  v28 = 0;
  v31 = 0;
  v27 = 0LL;
  i = 0;
  if ( !a2 )
    return 3221225659LL;
  PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74416553u);
  v36 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  if ( a2 != 1 )
  {
    v23 = 0LL;
    goto LABEL_62;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > MmUserProbeAddress || a1 + 16 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_WORD *)PoolWithTag = *(_WORD *)a1;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)(a1 + 2);
  v9 = *(_DWORD *)(a1 + 4);
  *((_DWORD *)PoolWithTag + 1) = v9;
  if ( !v9 )
  {
    *a4 = PoolWithTag;
    return 0LL;
  }
  PoolWithTag[1] = *(const void **)(a1 + 8);
  v10 = 40LL * *((unsigned int *)PoolWithTag + 1);
  v34 = v10;
  if ( v10 > 0xFFFFFFFF )
  {
    LODWORD(v10) = -1;
    LODWORD(v34) = -1;
    v6 = -1073741675;
  }
  else
  {
    LODWORD(v34) = v10;
    v6 = 0;
  }
  if ( v6 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v6;
  }
  v7 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x74416553u);
  v35 = v7;
  if ( !v7 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned __int64)PoolWithTag[1];
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 + (unsigned int)v10 > MmUserProbeAddress || v11 + (unsigned int)v10 < v11 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v7, PoolWithTag[1], (unsigned int)v10);
  v12 = 0;
  for ( i = 0; ; i = v12 )
  {
    if ( v12 >= *((_DWORD *)PoolWithTag + 1) )
    {
      v18 = 0;
      for ( i = 0; ; i = v18 )
      {
        if ( v18 >= *((_DWORD *)PoolWithTag + 1) )
        {
LABEL_36:
          PoolWithTag[1] = v7;
          goto LABEL_61;
        }
        v19 = *(_DWORD *)&v7[20 * v18 + 12];
        if ( !v19 )
        {
          if ( !a3 )
            goto LABEL_47;
          *(_QWORD *)&v7[20 * v18 + 16] = 0LL;
          goto LABEL_35;
        }
        v20 = v7[20 * v18 + 8];
        if ( v7[20 * v18 + 8] )
        {
          if ( v7[20 * v18 + 8] <= 2u )
            goto LABEL_30;
          switch ( v20 )
          {
            case 3:
              v21 = SepCaptureUnicodeStringArray(*(_QWORD *)&v7[20 * v18 + 16], v19, 1u, &v27);
              goto LABEL_31;
            case 4:
              v21 = SepCaptureFqbnArray(*(void **)&v7[20 * v18 + 16]);
LABEL_31:
              v6 = v21;
              if ( v21 >= 0 )
                *(_QWORD *)&v7[20 * v18 + 16] = v27;
              goto LABEL_33;
            case 5:
              goto LABEL_57;
            case 6:
LABEL_30:
              v21 = SepCaptureInt64Array(*(void **)&v7[20 * v18 + 16]);
              goto LABEL_31;
            case 16:
LABEL_57:
              v6 = SepCaptureOctetStringArray(*(void **)&v7[20 * v18 + 16]);
              if ( v6 >= 0 )
                *(_QWORD *)&v7[20 * v18 + 16] = v27;
              goto LABEL_33;
          }
        }
        v6 = -1073741637;
LABEL_33:
        if ( v6 < 0 )
          goto LABEL_36;
        v31 = ++v28;
        v27 = 0LL;
LABEL_35:
        ++v18;
      }
    }
    v13 = v7[20 * v12];
    if ( !v13 )
    {
LABEL_47:
      v6 = -1073741811;
      goto LABEL_61;
    }
    v14 = ExAllocatePoolWithTag(PagedPool, v13, 0x74416553u);
    P = v14;
    v33 = v14;
    if ( !v14 )
      break;
    v15 = v7[20 * v12];
    if ( v15 )
    {
      v16 = *(_QWORD *)&v7[20 * v12 + 4];
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = v16 + v15;
      if ( v17 > MmUserProbeAddress || v17 < v16 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v14, *(const void **)&v7[20 * v12 + 4], v7[20 * v12]);
    *(_QWORD *)&v7[20 * v12 + 4] = P;
    v32 = ++v37;
    P = 0LL;
    v33 = 0LL;
    ++v12;
  }
  v6 = -1073741670;
LABEL_61:
  v23 = P;
LABEL_62:
  if ( v6 < 0 )
  {
    if ( v7 )
    {
      for ( j = 0; j < v37; ++j )
        ExFreePoolWithTag(*(PVOID *)&v7[20 * j + 4], 0);
      v25 = 0;
      v23 = P;
      v26 = v28;
      while ( v25 < v26 )
        ExFreePoolWithTag(*(PVOID *)&v7[20 * v25++ + 16], 0);
      ExFreePoolWithTag(v7, 0);
      PoolWithTag = v36;
    }
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    *a4 = PoolWithTag;
  }
  return (unsigned int)v6;
}
