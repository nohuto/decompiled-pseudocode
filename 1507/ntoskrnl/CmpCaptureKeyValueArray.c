/*
 * XREFs of CmpCaptureKeyValueArray @ 0x1401DF5AC
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140542CE4 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     RtlULongLongAdd @ 0x1400F756C (RtlULongLongAdd.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpCaptureKeyValueArray(__int64 a1, unsigned int a2, char a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v7; // r13
  _QWORD *PoolWithQuotaTag; // rsi
  char *v9; // r14
  unsigned int v10; // ebx
  SIZE_T v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int16 *v14; // rcx
  ULONG64 v15; // rdx
  ULONG64 v16; // r8
  char *v17; // r15
  ULONGLONG v18; // rdx
  unsigned int i; // r12d
  const void **v20; // r13
  char *v21; // rbx
  int v23; // [rsp+20h] [rbp-98h]
  ULONGLONG ullAugend; // [rsp+28h] [rbp-90h] BYREF
  char *v25; // [rsp+30h] [rbp-88h]
  char *v26; // [rsp+38h] [rbp-80h]
  _QWORD *v27; // [rsp+40h] [rbp-78h]
  _QWORD *v28; // [rsp+48h] [rbp-70h]
  char *v29; // [rsp+50h] [rbp-68h]
  __int128 v30; // [rsp+58h] [rbp-60h]
  unsigned __int16 **v31; // [rsp+68h] [rbp-50h]
  ULONGLONG v32; // [rsp+70h] [rbp-48h]
  unsigned __int16 *v33; // [rsp+78h] [rbp-40h]

  v7 = a2;
  PoolWithQuotaTag = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  if ( !a2 )
    goto LABEL_2;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 24LL * a2, 0x34344D43u);
  v27 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    if ( !a3 || (v9 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 16 * v7, 0x34344D43u), (v25 = v9) != 0LL) )
    {
      v11 = 0LL;
      ullAugend = 0LL;
      v12 = 0;
      v23 = 0;
      v13 = a1;
      while ( v12 < (unsigned int)v7 )
      {
        v28 = &PoolWithQuotaTag[3 * v12];
        v31 = (unsigned __int16 **)(v13 + 24LL * v12);
        v14 = *v31;
        v33 = *v31;
        if ( a3 )
        {
          v29 = &v9[16 * v12];
          if ( (unsigned __int64)v14 >= MmUserProbeAddress )
            v14 = (unsigned __int16 *)MmUserProbeAddress;
          LODWORD(v30) = *(_DWORD *)v14;
          *((_QWORD *)&v30 + 1) = *((_QWORD *)v14 + 1);
          v14 = (unsigned __int16 *)v29;
          *(_OWORD *)v29 = v30;
          if ( *v14 )
          {
            v15 = *((_QWORD *)v14 + 1);
            if ( (v15 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v16 = v15 + *v14;
            if ( v16 > MmUserProbeAddress || v16 < v15 )
              *(_BYTE *)MmUserProbeAddress = 0;
          }
          if ( (*(_BYTE *)v14 & 1) != 0 )
          {
            v10 = -1073741811;
            goto LABEL_38;
          }
        }
        *v28 = v14;
        if ( *v14 )
        {
          if ( !a3 && RtlULongLongAdd(ullAugend, *v14, &ullAugend) < 0 )
          {
            v10 = -1073741670;
            goto LABEL_38;
          }
        }
        else
        {
          *((_QWORD *)v14 + 1) = 0LL;
          v14[1] = 0;
        }
        v12 = ++v23;
        v11 = ullAugend;
      }
      if ( !v11 )
      {
        *a4 = PoolWithQuotaTag;
        PoolWithQuotaTag = 0LL;
        *a5 = v9;
        v9 = 0LL;
LABEL_2:
        v10 = 0;
        goto LABEL_38;
      }
      v17 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v11, 0x34344D43u);
      v26 = v17;
      if ( v17 )
      {
        v18 = 0LL;
        ullAugend = 0LL;
        for ( i = 0; i < (unsigned int)v7; ++i )
        {
          v20 = (const void **)PoolWithQuotaTag[3 * i];
          if ( *(_WORD *)v20 && !a3 )
          {
            v21 = &v17[v18];
            memmove(&v17[v18], v20[1], *(unsigned __int16 *)v20);
            v20[1] = v21;
            *((_WORD *)v20 + 1) = *(_WORD *)v20;
            v18 = *(unsigned __int16 *)v20 + ullAugend;
            ullAugend = v18;
            v32 = v18;
          }
          LODWORD(v7) = a2;
        }
        *a4 = PoolWithQuotaTag;
        PoolWithQuotaTag = 0LL;
        *a5 = v9;
        v9 = 0LL;
        *a6 = v17;
        goto LABEL_2;
      }
    }
  }
  v10 = -1073741670;
LABEL_38:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v10;
}
