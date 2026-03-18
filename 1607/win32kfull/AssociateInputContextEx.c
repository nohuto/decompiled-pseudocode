/*
 * XREFs of AssociateInputContextEx @ 0x1C0122518
 * Callers:
 *     NtUserAssociateInputContext @ 0x1C0122470 (NtUserAssociateInputContext.c)
 * Callees:
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     AssociateInputContext @ 0x1C0122608 (AssociateInputContext.c)
 */

__int64 __fastcall AssociateInputContextEx(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // r8
  __int64 *v6; // rdi
  _QWORD *v7; // rbp
  int v8; // r12d
  unsigned int v9; // esi
  __int64 v10; // rax
  _QWORD *v11; // r10
  __int64 v13; // rcx
  struct tagBWL *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct tagBWL *v18; // r15
  unsigned __int64 *v19; // r14
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v5 = (_QWORD *)a1[2];
  v6 = (__int64 *)a2;
  v7 = a1;
  v8 = (a3 >> 5) & 1;
  v9 = 0;
  v25 = *(_QWORD *)(v5[48] + 80LL);
  if ( (a3 & 0x10) != 0 )
  {
    v6 = (__int64 *)v5[88];
  }
  else if ( a2 && *(_QWORD **)(a2 + 16) != v5 )
  {
    goto LABEL_20;
  }
  if ( v5[47] != *(_QWORD *)(gptiCurrent + 376LL) || v6 && v6[3] != a1[3] )
  {
LABEL_20:
    UserSetLastError(5LL);
    return 2LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v13 = a1[12];
    if ( v13 )
    {
      v14 = BuildHwndList(v13, (struct tagWND *)3, (__int64)v5);
      v18 = v14;
      if ( v14 )
      {
        v19 = (unsigned __int64 *)((char *)v14 + 32);
        v20 = *((_QWORD *)v14 + 4);
        if ( v20 != 1 )
        {
          do
          {
            LOBYTE(v15) = 1;
            v21 = HMValidateHandleNoSecure(v20, v15, v16, v17);
            v17 = v21;
            if ( v21 )
            {
              v22 = 0LL;
              if ( v6 )
                v22 = *v6;
              v23 = *(_QWORD *)(v21 + 248);
              if ( v23 != v22 && (v23 || !v8) )
              {
                AssociateInputContext(v17, v6);
                if ( v17 == v25 )
                  v9 = 1;
              }
            }
            v20 = *++v19;
          }
          while ( *v19 != 1 );
          v7 = a1;
        }
        FreeHwndList(v18);
      }
    }
  }
  v10 = v7[31];
  if ( v10 || !v8 )
  {
    if ( v6 )
      v4 = *v6;
    if ( v10 != v4 )
    {
      AssociateInputContext(v7, v6);
      if ( v7 == v11 )
        return 1;
    }
  }
  return v9;
}
