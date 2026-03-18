/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x1405FE550
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IopIssueTrEERequest @ 0x1401BD5A0 (IopIssueTrEERequest.c)
 *     sub_1401BD68C @ 0x1401BD68C (sub_1401BD68C.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopEfiStatusToNTSTATUS @ 0x1405FE2D0 (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        _DWORD *a5)
{
  char v6; // bl
  unsigned int v7; // r13d
  _OWORD *v8; // r14
  _QWORD *v9; // rsi
  _DWORD *v10; // r15
  __int64 v11; // rcx
  _OWORD *v12; // r12
  int v13; // ebx
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  _OWORD *v19; // rbx
  unsigned __int64 v20; // r12
  void *v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _DWORD *v27; // rcx
  void *v28; // r15
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  int v31; // eax
  int v32; // [rsp+50h] [rbp-68h] BYREF
  _OWORD *v33; // [rsp+58h] [rbp-60h]
  unsigned __int64 v34; // [rsp+60h] [rbp-58h]
  unsigned __int64 v35; // [rsp+68h] [rbp-50h]
  void *i; // [rsp+70h] [rbp-48h]
  char v39; // [rsp+D0h] [rbp+18h]

  if ( a3 == 2 )
  {
    v6 = 1;
    v39 = 1;
  }
  else
  {
    v6 = 0;
    v39 = 0;
    if ( a3 != 1 )
      return 3221225485LL;
  }
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v12 = sub_1401BD68C(a1, 0x214uLL);
  v33 = v12;
  if ( v12 )
  {
    v16 = (__int64 *)sub_1401BD68C(v11, 0x220uLL);
    if ( v16
      && (!v6 || (v8 = sub_1401BD68C(v15, 0x214uLL)) != 0LL && (v7 = 288, (v9 = sub_1401BD68C(v17, 0x120uLL)) != 0LL)) )
    {
      v18 = (unsigned int)*a5;
      *a5 = 0;
      v35 = a4 + v18;
      memset(v16, 0, 0x220uLL);
      v19 = v33;
      v20 = a4;
      v34 = a4;
      v21 = v33 + 1;
      for ( i = v33 + 1; ; v21 = i )
      {
        *v19 = *(_OWORD *)(v16 + 1);
        memmove(v21, (char *)v16 + 28, *((unsigned int *)v16 + 6));
        *((_WORD *)v19 + ((unsigned __int64)*((unsigned int *)v16 + 6) >> 1) + 8) = 0;
        v22 = IopIssueTrEERequest(1, a1, a2, (__int64)v19, 0x214u, (__int64)v16, 0x220u, 0x1Cu, &v32);
        LODWORD(v23) = 0;
        v13 = v22;
        if ( v22 < 0 )
          break;
        if ( *v16 == 0x800000000000000EuLL )
        {
          v13 = 0;
          break;
        }
        if ( *v16 < 0 )
        {
          v13 = IopEfiStatusToNTSTATUS(*v16);
          break;
        }
        if ( v39 )
        {
          *v8 = *(_OWORD *)(v16 + 1);
          memmove(v8 + 1, (char *)v16 + 28, *((unsigned int *)v16 + 6));
          while ( 1 )
          {
            v24 = IopIssueTrEERequest(0, a1, a2, (__int64)v8, 0x214u, (__int64)v9, v7, 0x18u, &v32);
            v23 = 0LL;
            v13 = v24;
            if ( v24 < 0 )
              goto LABEL_42;
            if ( *v9 == 0x8000000000000005uLL )
            {
              if ( a4 )
              {
                v7 = *((_DWORD *)v9 + 4) + 32;
                ExFreePoolWithTag(v9, 0);
                v26 = sub_1401BD68C(v25, v7);
                v23 = 0LL;
                v9 = v26;
                if ( !v26 )
                {
                  v13 = -1073741670;
                  goto LABEL_42;
                }
                v13 = -1073741789;
              }
            }
            else if ( (__int64)*v9 < 0 )
            {
              v13 = IopEfiStatusToNTSTATUS(*v9);
LABEL_27:
              if ( v13 < 0 )
                goto LABEL_42;
              v27 = (_DWORD *)v34;
              v28 = (void *)((*((unsigned int *)v16 + 6) + v34 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
              v29 = ((unsigned __int64)v28 + v9[2] + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v29 > v35 )
                a4 = v23;
              if ( a4 )
              {
                *(_OWORD *)(v34 + 16) = *(_OWORD *)(v16 + 1);
                memmove(v27 + 8, (char *)v16 + 28, *((unsigned int *)v16 + 6));
                *(_DWORD *)(v34 + 4) = (_DWORD)v28 - v34;
                memmove(v28, v9 + 3, v9[2]);
                v27 = (_DWORD *)v34;
                *(_DWORD *)(v34 + 8) = *((_DWORD *)v9 + 4);
                v27[3] = *((_DWORD *)v9 + 2);
                *v27 = v29 - (_DWORD)v27;
              }
              v34 = v29;
              v10 = v27;
              *a5 += v29 - (_DWORD)v27;
              goto LABEL_38;
            }
            if ( v13 != -1073741789 )
              goto LABEL_27;
          }
        }
        v30 = (v20 + *((unsigned int *)v16 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v30 > v35 )
          a4 = 0LL;
        if ( a4 )
        {
          *(_OWORD *)(v20 + 4) = *(_OWORD *)(v16 + 1);
          memmove((void *)(v20 + 20), (char *)v16 + 28, *((unsigned int *)v16 + 6));
          *(_DWORD *)v20 = v30 - v20;
        }
        v31 = v30 - v20;
        v10 = (_DWORD *)v20;
        v20 = v30;
        *a5 += v31;
LABEL_38:
        v19 = v33;
      }
LABEL_42:
      v12 = v33;
      if ( v10 && a4 )
        *v10 = v23;
    }
    else
    {
      v13 = -1073741670;
    }
    ExFreePoolWithTag(v12, 0);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    v13 = -1073741670;
  }
  if ( !a4 )
    return (unsigned int)-1073741789;
  return (unsigned int)v13;
}
