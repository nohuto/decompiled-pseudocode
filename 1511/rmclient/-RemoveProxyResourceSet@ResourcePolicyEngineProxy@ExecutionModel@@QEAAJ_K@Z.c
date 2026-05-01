/*
 * XREFs of ?RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z @ 0x180005550
 * Callers:
 *     ?Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ @ 0x180004720 (-Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ @ 0x180004860 (-ReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ.c)
 *     ??_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z @ 0x180004DE0 (--_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z.c)
 *     ?DoReleaseResources@ResourceSetProxy@ExecutionModel@@IEAAJW4_ReleaseResourcesType@@@Z @ 0x18000BEA8 (-DoReleaseResources@ResourceSetProxy@ExecutionModel@@IEAAJW4_ReleaseResourcesType@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::RemoveProxyResourceSet(
        ExecutionModel::ResourcePolicyEngineProxy *this,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // r14d
  char *v6; // rbp
  __int64 v7; // r10
  unsigned int v8; // edx
  unsigned __int16 *v9; // r8
  __int64 v10; // r9
  int v11; // eax
  char *v12; // rbx
  char *v13; // rdx
  unsigned __int64 v14; // rax
  char *v15; // rdi
  __int64 v16; // r15
  char *v17; // rcx
  char *v18; // rax
  _QWORD *v19; // rdx
  char **v20; // rax
  unsigned __int64 v22; // [rsp+50h] [rbp+8h]
  __int64 v23; // [rsp+58h] [rbp+10h] BYREF

  v23 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v6 = (char *)this + 184;
  v7 = *((_QWORD *)v6 + 2);
  if ( !v7 )
    goto LABEL_19;
  v8 = 0;
  v9 = (unsigned __int16 *)&v23;
  v10 = 4LL;
  do
  {
    v11 = *v9++;
    v8 = (1025 * (v8 + v11)) ^ ((1025 * (v8 + v11)) >> 6);
    --v10;
  }
  while ( v10 );
  v22 = v8;
  LODWORD(v22) = 32769 * (((9 * v8) >> 11) ^ (9 * v8));
  v12 = *(char **)(v7 + 16 * (v22 & ((8LL << v6[32]) - 1)));
  if ( v12 && (v13 = **(char ***)(v7 + 16 * (v22 & ((8LL << v6[32]) - 1)) + 8), v12 != v13) )
  {
    while ( 1 )
    {
      v14 = *((_QWORD *)v12 + 2);
      if ( v14 >= v22 )
      {
        if ( v14 > v22 )
          goto LABEL_19;
        if ( a2 == *((_QWORD *)v12 + 3) )
          break;
      }
      v12 = *(char **)v12;
      if ( v12 == v13 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v12 = v6;
  }
  if ( v12 == v6 )
  {
    v5 = -2147023728;
  }
  else
  {
    v15 = *(char **)v12;
    v16 = (8LL << v6[32]) - 1;
    while ( v12 != v15 )
    {
      v17 = v12;
      v12 = *(char **)v12;
      v18 = *(char **)v17;
      v19 = (_QWORD *)*((_QWORD *)v17 + 1);
      *v19 = *(_QWORD *)v17;
      *((_QWORD *)v18 + 1) = v19;
      v20 = (char **)(*((_QWORD *)v6 + 2) + 16 * (v16 & *((_QWORD *)v17 + 2)));
      if ( *v20 == v17 )
      {
        if ( v20[1] == v17 )
        {
          *v20 = 0LL;
          v20[1] = 0LL;
        }
        else
        {
          *v20 = *(char **)v17;
        }
      }
      else if ( v20[1] == v17 )
      {
        v20[1] = (char *)*((_QWORD *)v17 + 1);
      }
      operator delete(v17);
      --*((_QWORD *)v6 + 3);
    }
  }
  LeaveCriticalSection(v2);
  return v5;
}
