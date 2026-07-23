/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x140628630
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopIssueTrEERequest @ 0x1401CC048 (IopIssueTrEERequest.c)
 *     IopVerifierExAllocatePool_4 @ 0x1401CC134 (IopVerifierExAllocatePool_4.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopEfiStatusToNTSTATUS @ 0x1406283B0 (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        _DWORD *a5)
{
  char v6; // bl
  _OWORD *v7; // r14
  _QWORD *v8; // rsi
  _DWORD *v9; // r12
  __int64 v10; // rcx
  _OWORD *Pool_4; // r15
  int v12; // ebx
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _OWORD *v18; // rbx
  unsigned __int64 v19; // r15
  void *v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _DWORD *v27; // rcx
  void *v28; // r12
  unsigned __int64 v29; // rbx
  int v30; // eax
  unsigned __int64 v31; // rbx
  int v32; // [rsp+50h] [rbp-68h] BYREF
  _OWORD *v33; // [rsp+58h] [rbp-60h]
  unsigned __int64 v34; // [rsp+60h] [rbp-58h]
  __int64 v35; // [rsp+68h] [rbp-50h]
  unsigned __int64 v36; // [rsp+70h] [rbp-48h]
  void *i; // [rsp+78h] [rbp-40h]
  char v40; // [rsp+D0h] [rbp+18h]

  if ( a3 == 2 )
  {
    v6 = 1;
    v40 = 1;
  }
  else
  {
    v6 = 0;
    v40 = 0;
    if ( a3 != 1 )
      return 3221225485LL;
  }
  LODWORD(v35) = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Pool_4 = IopVerifierExAllocatePool_4(a1, 0x214uLL);
  v33 = Pool_4;
  if ( Pool_4 )
  {
    v15 = (__int64 *)IopVerifierExAllocatePool_4(v10, 0x220uLL);
    if ( v15
      && (!v6
       || (v7 = IopVerifierExAllocatePool_4(v14, 0x214uLL)) != 0LL
       && (v35 = 288LL, (v8 = IopVerifierExAllocatePool_4(v16, 0x120uLL)) != 0LL)) )
    {
      v17 = a4 + (unsigned int)*a5;
      *a5 = 0;
      v36 = v17;
      memset(v15, 0, 0x220uLL);
      v18 = v33;
      v19 = a4;
      v34 = a4;
      v20 = v33 + 1;
      for ( i = v33 + 1; ; v20 = i )
      {
        *v18 = *(_OWORD *)(v15 + 1);
        memmove(v20, (char *)v15 + 28, *((unsigned int *)v15 + 6));
        *((_WORD *)v18 + ((unsigned __int64)*((unsigned int *)v15 + 6) >> 1) + 8) = 0;
        v21 = IopIssueTrEERequest(1, a1, a2, (__int64)v18, 0x214u, (__int64)v15, 0x220u, 0x1Cu, &v32);
        LODWORD(v22) = 0;
        v12 = v21;
        if ( v21 < 0 )
          break;
        if ( *v15 == 0x800000000000000EuLL )
        {
          v12 = 0;
          break;
        }
        if ( *v15 < 0 )
        {
          v12 = IopEfiStatusToNTSTATUS(*v15);
          break;
        }
        if ( v40 )
        {
          *v7 = *(_OWORD *)(v15 + 1);
          memmove(v7 + 1, (char *)v15 + 28, *((unsigned int *)v15 + 6));
          while ( 1 )
          {
            v23 = IopIssueTrEERequest(0, a1, a2, (__int64)v7, 0x214u, (__int64)v8, v35, 0x18u, &v32);
            v22 = 0LL;
            v12 = v23;
            if ( v23 < 0 )
              goto LABEL_42;
            if ( *v8 == 0x8000000000000005uLL )
            {
              if ( a4 )
              {
                v24 = *((_DWORD *)v8 + 4) + 32;
                v35 = v24;
                ExFreePoolWithTag(v8, 0);
                v26 = IopVerifierExAllocatePool_4(v25, v24);
                v22 = 0LL;
                v8 = v26;
                if ( !v26 )
                {
                  v12 = -1073741670;
                  goto LABEL_42;
                }
                v12 = -1073741789;
              }
            }
            else if ( (__int64)*v8 < 0 )
            {
              v12 = IopEfiStatusToNTSTATUS(*v8);
LABEL_27:
              if ( v12 < 0 )
                goto LABEL_42;
              v27 = (_DWORD *)v34;
              v28 = (void *)((*((unsigned int *)v15 + 6) + v34 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
              v29 = ((unsigned __int64)v28 + v8[2] + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v29 > v36 )
                a4 = v22;
              if ( a4 )
              {
                *(_OWORD *)(v34 + 16) = *(_OWORD *)(v15 + 1);
                memmove(v27 + 8, (char *)v15 + 28, *((unsigned int *)v15 + 6));
                *(_DWORD *)(v34 + 4) = (_DWORD)v28 - v34;
                memmove(v28, v8 + 3, v8[2]);
                v27 = (_DWORD *)v34;
                *(_DWORD *)(v34 + 8) = *((_DWORD *)v8 + 4);
                v27[3] = *((_DWORD *)v8 + 2);
                *v27 = v29 - (_DWORD)v27;
              }
              v34 = v29;
              v30 = v29 - (_DWORD)v27;
              v9 = v27;
              goto LABEL_38;
            }
            if ( v12 != -1073741789 )
              goto LABEL_27;
          }
        }
        v31 = (v19 + *((unsigned int *)v15 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v31 > v36 )
          a4 = 0LL;
        if ( a4 )
        {
          *(_OWORD *)(v19 + 4) = *(_OWORD *)(v15 + 1);
          memmove((void *)(v19 + 20), (char *)v15 + 28, *((unsigned int *)v15 + 6));
          *(_DWORD *)v19 = v31 - v19;
        }
        v9 = (_DWORD *)v19;
        v30 = v31 - v19;
        v19 = v31;
LABEL_38:
        *a5 += v30;
        v18 = v33;
      }
LABEL_42:
      Pool_4 = v33;
      if ( v9 && a4 )
        *v9 = v22;
    }
    else
    {
      v12 = -1073741670;
    }
    ExFreePoolWithTag(Pool_4, 0);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v12 = -1073741670;
  }
  if ( !a4 )
  {
    if ( *a5 )
      return (unsigned int)-1073741789;
  }
  return (unsigned int)v12;
}
