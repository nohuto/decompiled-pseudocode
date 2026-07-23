/*
 * XREFs of CmpCaptureKeyValueArray @ 0x1401B2B70
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1404C0BFC (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     RtlULongLongAdd @ 0x14010D2A4 (RtlULongLongAdd.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpCaptureKeyValueArray(__int64 a1, unsigned int a2, char a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v7; // r13
  _QWORD *PoolWithQuotaTag; // rsi
  char *v9; // r14
  unsigned int v10; // ebx
  ULONGLONG v11; // rdx
  unsigned int v12; // eax
  unsigned __int64 v13; // r10
  __int64 v14; // r9
  unsigned __int16 *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  char *v18; // r15
  ULONGLONG v19; // rdx
  unsigned int i; // r12d
  const void **v21; // r13
  char *v22; // rbx
  int v24; // [rsp+20h] [rbp-98h]
  ULONGLONG ullAugend; // [rsp+28h] [rbp-90h] BYREF
  char *v26; // [rsp+30h] [rbp-88h]
  char *v27; // [rsp+38h] [rbp-80h]
  _QWORD *v28; // [rsp+40h] [rbp-78h]
  char *v29; // [rsp+48h] [rbp-70h]
  _QWORD *v30; // [rsp+50h] [rbp-68h]
  __int128 v31; // [rsp+58h] [rbp-60h]
  unsigned __int16 **v32; // [rsp+68h] [rbp-50h]
  unsigned __int16 *v33; // [rsp+70h] [rbp-48h]
  ULONGLONG v34; // [rsp+78h] [rbp-40h]

  v7 = a2;
  PoolWithQuotaTag = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  if ( !a2 )
    goto LABEL_2;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 24LL * a2, 0x34344D43u);
  v28 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    if ( !a3 || (v9 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 16 * v7, 0x34344D43u), (v26 = v9) != 0LL) )
    {
      v11 = 0LL;
      ullAugend = 0LL;
      v12 = 0;
      v24 = 0;
      v13 = 0x7FFFFFFF0000LL;
      v14 = a1;
      while ( v12 < (unsigned int)v7 )
      {
        v30 = &PoolWithQuotaTag[3 * v12];
        v32 = (unsigned __int16 **)(v14 + 24LL * v12);
        v15 = *v32;
        v33 = *v32;
        if ( a3 )
        {
          v29 = &v9[16 * v12];
          if ( (unsigned __int64)v15 >= v13 )
            v15 = (unsigned __int16 *)v13;
          LODWORD(v31) = *(_DWORD *)v15;
          *((_QWORD *)&v31 + 1) = *((_QWORD *)v15 + 1);
          v15 = (unsigned __int16 *)v29;
          *(_OWORD *)v29 = v31;
          if ( *v15 )
          {
            v16 = *((_QWORD *)v15 + 1);
            if ( (v16 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v17 = v16 + *v15;
            if ( v17 > v13 || v17 < v16 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( (*(_BYTE *)v15 & 1) != 0 )
          {
            v10 = -1073741811;
            goto LABEL_38;
          }
        }
        *v30 = v15;
        if ( *v15 )
        {
          if ( !a3 && RtlULongLongAdd(ullAugend, *v15, &ullAugend) < 0 )
          {
            v10 = -1073741670;
            goto LABEL_38;
          }
        }
        else
        {
          *((_QWORD *)v15 + 1) = 0LL;
          v15[1] = 0;
        }
        v12 = ++v24;
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
      v18 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v11, 0x34344D43u);
      v27 = v18;
      if ( v18 )
      {
        v19 = 0LL;
        ullAugend = 0LL;
        for ( i = 0; i < (unsigned int)v7; ++i )
        {
          v21 = (const void **)PoolWithQuotaTag[3 * i];
          if ( *(_WORD *)v21 && !a3 )
          {
            v22 = &v18[v19];
            memmove(&v18[v19], v21[1], *(unsigned __int16 *)v21);
            v21[1] = v22;
            *((_WORD *)v21 + 1) = *(_WORD *)v21;
            v19 = *(unsigned __int16 *)v21 + ullAugend;
            ullAugend = v19;
            v34 = v19;
          }
          LODWORD(v7) = a2;
        }
        *a4 = PoolWithQuotaTag;
        PoolWithQuotaTag = 0LL;
        *a5 = v9;
        v9 = 0LL;
        *a6 = v18;
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
