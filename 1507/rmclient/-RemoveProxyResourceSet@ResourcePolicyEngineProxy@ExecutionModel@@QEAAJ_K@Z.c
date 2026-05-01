/*
 * XREFs of ?RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z @ 0x1800043D0
 * Callers:
 *     ?Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ @ 0x180004DE0 (-Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ @ 0x180004F20 (-ReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ.c)
 *     ??_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z @ 0x1800054B0 (--_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z.c)
 *     ?DoReleaseResources@ResourceSetProxy@ExecutionModel@@IEAAJW4_ReleaseResourcesType@@@Z @ 0x18000B38C (-DoReleaseResources@ResourceSetProxy@ExecutionModel@@IEAAJW4_ReleaseResourcesType@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180008CB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::RemoveProxyResourceSet(
        ExecutionModel::ResourcePolicyEngineProxy *this,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // r14d
  char *v6; // rbp
  __int64 v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int16 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // cl
  char *v14; // rbx
  char *v15; // rcx
  unsigned __int64 v16; // rax
  char *v17; // rdi
  __int64 v18; // r15
  char *v19; // rcx
  char *v20; // rax
  _QWORD *v21; // rdx
  char **v22; // rax
  __int64 v24; // [rsp+48h] [rbp+10h] BYREF

  v24 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v6 = (char *)this + 184;
  v7 = *((_QWORD *)v6 + 2);
  if ( !v7 )
    goto LABEL_19;
  v8 = 0LL;
  v9 = (unsigned __int16 *)&v24;
  v10 = 4LL;
  do
  {
    v11 = *v9++;
    v8 = (1025 * (v8 + v11)) ^ ((1025 * (v8 + v11)) >> 6);
    --v10;
  }
  while ( v10 );
  v12 = 32769 * ((9 * v8) ^ ((9 * v8) >> 11));
  v13 = v6[32];
  v14 = *(char **)(v7 + 16 * (v12 & ((8LL << v13) - 1)));
  if ( v14 && (v15 = **(char ***)(v7 + 16 * (v12 & ((8LL << v13) - 1)) + 8), v14 != v15) )
  {
    while ( 1 )
    {
      v16 = *((_QWORD *)v14 + 2);
      if ( v16 >= v12 )
      {
        if ( v16 > v12 )
          goto LABEL_19;
        if ( a2 == *((_QWORD *)v14 + 3) )
          break;
      }
      v14 = *(char **)v14;
      if ( v14 == v15 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v14 = v6;
  }
  if ( v14 == v6 )
  {
    v5 = -2147023728;
  }
  else
  {
    v17 = *(char **)v14;
    v18 = (8LL << v6[32]) - 1;
    while ( v14 != v17 )
    {
      v19 = v14;
      v14 = *(char **)v14;
      v20 = *(char **)v19;
      v21 = (_QWORD *)*((_QWORD *)v19 + 1);
      *v21 = *(_QWORD *)v19;
      *((_QWORD *)v20 + 1) = v21;
      v22 = (char **)(*((_QWORD *)v6 + 2) + 16 * (v18 & *((_QWORD *)v19 + 2)));
      if ( *v22 == v19 )
      {
        if ( v22[1] == v19 )
        {
          *v22 = 0LL;
          v22[1] = 0LL;
        }
        else
        {
          *v22 = *(char **)v19;
        }
      }
      else if ( v22[1] == v19 )
      {
        v22[1] = (char *)*((_QWORD *)v19 + 1);
      }
      operator delete(v19);
      --*((_QWORD *)v6 + 3);
    }
  }
  LeaveCriticalSection(v2);
  return v5;
}
