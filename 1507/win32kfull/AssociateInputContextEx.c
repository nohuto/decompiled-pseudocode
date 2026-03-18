/*
 * XREFs of AssociateInputContextEx @ 0x1C00F7494
 * Callers:
 *     NtUserAssociateInputContext @ 0x1C00F73F0 (NtUserAssociateInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     AssociateInputContext @ 0x1C00F7584 (AssociateInputContext.c)
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
  struct tagBWL *v15; // r15
  unsigned __int64 *v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v24; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v5 = (_QWORD *)a1[2];
  v6 = (__int64 *)a2;
  v7 = a1;
  v8 = (a3 >> 5) & 1;
  v9 = 0;
  v24 = *(_QWORD *)(v5[49] + 72LL);
  if ( (a3 & 0x10) != 0 )
  {
    v6 = (__int64 *)v5[89];
  }
  else if ( a2 && *(_QWORD **)(a2 + 16) != v5 )
  {
    goto LABEL_20;
  }
  if ( v5[48] != *(_QWORD *)(gptiCurrent + 384LL) || v6 && v6[3] != a1[3] )
  {
LABEL_20:
    UserSetLastError(5);
    return 2LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v13 = a1[12];
    if ( v13 )
    {
      v14 = BuildHwndList(v13, 3, (__int64)v5);
      v15 = v14;
      if ( v14 )
      {
        v16 = (unsigned __int64 *)((char *)v14 + 32);
        v17 = *((_QWORD *)v14 + 4);
        if ( v17 != 1 )
        {
          do
          {
            v18 = HMValidateHandleNoSecure(v17, 1);
            v19 = v18;
            if ( v18 )
            {
              v20 = 0LL;
              if ( v6 )
                v20 = *v6;
              v21 = *(_QWORD *)(v18 + 248);
              if ( v21 != v20 && (v21 || !v8) )
              {
                AssociateInputContext(v19, v6);
                if ( v22 == v24 )
                  v9 = 1;
              }
            }
            v17 = *++v16;
          }
          while ( *v16 != 1 );
          v7 = a1;
        }
        FreeHwndList(v15);
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
