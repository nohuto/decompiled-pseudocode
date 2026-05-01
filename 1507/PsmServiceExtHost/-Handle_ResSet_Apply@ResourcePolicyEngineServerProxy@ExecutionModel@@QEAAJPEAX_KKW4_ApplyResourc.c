/*
 * XREFs of ?Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourcesType@@@Z @ 0x180015500
 * Callers:
 *     Srv_ResSet_Apply @ 0x1800179C0 (Srv_ResSet_Apply.c)
 * Callees:
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x180014A00 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180015270 (-Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?ResourceSet_LegacyApply@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@K@Z @ 0x180047384 (-ResourceSet_LegacyApply@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_Apply(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v5; // rbp
  ExecutionModel::ResourceSetImpl *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // r11
  unsigned __int64 v12; // rdx
  unsigned __int16 *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  char v17; // cl
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r14
  ExecutionModel::ResourceSetImpl *v22; // r14
  struct _RTL_CRITICAL_SECTION *v23; // rdi
  __int64 (__fastcall *v24)(ExecutionModel::ResourceSetImpl *); // rbp
  unsigned int v25; // eax
  unsigned int v26; // ebp
  __int64 (__fastcall *v27)(ExecutionModel::ResourceSetImpl *); // rdi
  __int64 v29; // [rsp+58h] [rbp+10h] BYREF

  v29 = a2;
  v5 = g_pResourcePolicyEngineServerProxy;
  v7 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_pResourcePolicyEngineServerProxy + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( a3 )
  {
    v10 = a5;
    if ( a5 > 1 )
    {
      v26 = -2147467259;
    }
    else
    {
      v11 = *((_QWORD *)v5 + 9);
      v29 = a3;
      if ( !v11 )
        goto LABEL_23;
      v12 = 0LL;
      v13 = (unsigned __int16 *)&v29;
      v14 = 4LL;
      do
      {
        v15 = *v13++;
        v12 = (1025 * (v12 + v15)) ^ ((1025 * (v12 + v15)) >> 6);
        --v14;
      }
      while ( v14 );
      v16 = 32769 * ((9 * v12) ^ ((9 * v12) >> 11));
      v17 = *((_BYTE *)v5 + 88);
      v18 = *(_QWORD **)(v11 + 16 * (v16 & ((8LL << v17) - 1)));
      if ( v18 && (v19 = **(_QWORD ***)(v11 + 16 * (v16 & ((8LL << v17) - 1)) + 8), v18 != v19) )
      {
        while ( 1 )
        {
          v20 = v18[2];
          if ( v20 >= v16 )
          {
            if ( v20 > v16 )
              goto LABEL_23;
            if ( a3 == v18[3] )
              break;
          }
          v18 = (_QWORD *)*v18;
          if ( v18 == v19 )
            goto LABEL_23;
        }
      }
      else
      {
LABEL_23:
        v18 = (_QWORD *)((char *)v5 + 56);
      }
      if ( v18 == (_QWORD *)((char *)v5 + 56) )
      {
        v26 = -2147023728;
      }
      else
      {
        v21 = v18[4];
        if ( v21 )
        {
          v22 = *(ExecutionModel::ResourceSetImpl **)(v21 + 16);
          if ( v22 )
          {
            (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v22 + 8LL))(v22);
            v7 = v22;
            if ( v10 )
            {
              v23 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v5 + 12);
              EnterCriticalSection(v23 + 1);
              v24 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v22 + 24LL);
              if ( v24 == ExecutionModel::ResourceSetImpl::Apply )
                v25 = ExecutionModel::ResourceSetImpl::Apply(v22);
              else
                v25 = v24(v22);
              v26 = v25;
              LeaveCriticalSection(v23 + 1);
            }
            else if ( a4 )
            {
              v26 = ExecutionModel::ResourcePolicyEngine::ResourceSet_LegacyApply(
                      *((ExecutionModel::ResourcePolicyEngine **)v5 + 12),
                      v22,
                      a4);
            }
            else
            {
              v26 = -2147467259;
            }
          }
          else
          {
            v26 = -2147467259;
          }
        }
        else
        {
          v26 = -2147467259;
        }
      }
    }
  }
  else
  {
    v26 = -2147467259;
  }
  LeaveCriticalSection(v9);
  if ( v7 )
  {
    v27 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v7 + 16LL);
    if ( v27 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v7);
    else
      v27(v7);
  }
  return v26;
}
