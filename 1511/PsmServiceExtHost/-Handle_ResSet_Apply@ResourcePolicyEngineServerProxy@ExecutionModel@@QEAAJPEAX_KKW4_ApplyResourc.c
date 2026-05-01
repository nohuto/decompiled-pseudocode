/*
 * XREFs of ?Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourcesType@@@Z @ 0x180014EE0
 * Callers:
 *     Srv_ResSet_Apply @ 0x180018AC0 (Srv_ResSet_Apply.c)
 * Callees:
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014250 (-Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?ResourceSet_LegacyApply@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@K@Z @ 0x18004CE54 (-ResourceSet_LegacyApply@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_Apply(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v8; // r15
  ExecutionModel::ResourceSetImpl *v9; // rdi
  unsigned int v10; // r12d
  __int64 v11; // r10
  unsigned __int16 *v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  int v15; // ecx
  char v16; // cl
  _QWORD *v17; // rax
  _QWORD *v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // r14
  ExecutionModel::HostResourceInfo **v21; // r14
  struct _RTL_CRITICAL_SECTION *v22; // rbx
  __int64 (__fastcall *v23)(ExecutionModel::HostResourceInfo **); // rbp
  unsigned int v24; // eax
  unsigned int v25; // ebp
  unsigned int v26; // edx
  __int64 (__fastcall *v27)(ExecutionModel::ResourceSetImpl *, unsigned int); // rbx
  unsigned __int64 v29; // [rsp+58h] [rbp+10h] BYREF

  v29 = a2;
  v5 = 0;
  v8 = g_pResourcePolicyEngineServerProxy;
  v9 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( a3 )
  {
    v10 = a5;
    if ( a5 > 1 )
    {
      v25 = -2147467259;
    }
    else
    {
      v11 = *((_QWORD *)v8 + 9);
      v29 = a3;
      if ( !v11 )
        goto LABEL_23;
      v12 = (unsigned __int16 *)&v29;
      v13 = 4LL;
      do
      {
        v14 = *v12++;
        v15 = v5 + v14;
        v5 = (1025 * v15) ^ ((unsigned int)(1025 * v15) >> 6);
        --v13;
      }
      while ( v13 );
      v29 = (1025 * v15) ^ ((unsigned int)(1025 * v15) >> 6);
      v16 = *((_BYTE *)v8 + 88);
      LODWORD(v29) = 32769 * (((9 * v5) >> 11) ^ (9 * v5));
      v17 = *(_QWORD **)(v11 + 16 * (v29 & ((8LL << v16) - 1)));
      if ( v17 && (v18 = **(_QWORD ***)(v11 + 16 * (v29 & ((8LL << v16) - 1)) + 8), v17 != v18) )
      {
        while ( 1 )
        {
          v19 = v17[2];
          if ( v19 >= v29 )
          {
            if ( v19 > v29 )
              goto LABEL_23;
            if ( a3 == v17[3] )
              break;
          }
          v17 = (_QWORD *)*v17;
          if ( v17 == v18 )
            goto LABEL_23;
        }
      }
      else
      {
LABEL_23:
        v17 = (_QWORD *)((char *)v8 + 56);
      }
      if ( v17 == (_QWORD *)((char *)v8 + 56) )
      {
        v25 = -2147023728;
      }
      else
      {
        v20 = v17[4];
        if ( v20 )
        {
          v21 = *(ExecutionModel::HostResourceInfo ***)(v20 + 16);
          if ( v21 )
          {
            (*((void (__fastcall **)(ExecutionModel::HostResourceInfo **))*v21 + 1))(v21);
            v9 = (ExecutionModel::ResourceSetImpl *)v21;
            if ( v10 )
            {
              v22 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v8 + 12);
              EnterCriticalSection(v22 + 1);
              v23 = (__int64 (__fastcall *)(ExecutionModel::HostResourceInfo **))*((_QWORD *)*v21 + 3);
              if ( v23 == ExecutionModel::ResourceSetImpl::Apply )
                v24 = ExecutionModel::ResourceSetImpl::Apply(v21);
              else
                v24 = v23(v21);
              v25 = v24;
              LeaveCriticalSection(v22 + 1);
            }
            else if ( a4 )
            {
              v25 = ExecutionModel::ResourcePolicyEngine::ResourceSet_LegacyApply(
                      *((ExecutionModel::ResourcePolicyEngine **)v8 + 12),
                      (struct ExecutionModel::IResourceSet *)v21,
                      a4);
            }
            else
            {
              v25 = -2147467259;
            }
          }
          else
          {
            v25 = -2147467259;
          }
        }
        else
        {
          v25 = -2147467259;
        }
      }
    }
  }
  else
  {
    v25 = -2147467259;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 16));
  if ( v9 )
  {
    v27 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)v9 + 16LL);
    if ( v27 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v9, v26);
    else
      ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v27)(v9);
  }
  return v25;
}
