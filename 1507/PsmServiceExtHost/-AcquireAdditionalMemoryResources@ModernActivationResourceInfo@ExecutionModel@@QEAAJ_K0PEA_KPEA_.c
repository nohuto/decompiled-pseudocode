/*
 * XREFs of ?AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_KPEA_N@Z @ 0x180034158
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036734 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002ED58 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?GetPriority@ModernActivationResourceInfo@ExecutionModel@@QEBA?AW4Enum@Priority@2@XZ @ 0x180035FE8 (-GetPriority@ModernActivationResourceInfo@ExecutionModel@@QEBA-AW4Enum@Priority@2@XZ.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18003FFB0 (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::AcquireAdditionalMemoryResources(
        ExecutionModel::ModernActivationResourceInfo *this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        bool *a5)
{
  char *v8; // r13
  unsigned __int64 v9; // rdx
  char *v10; // rbx
  __int64 v11; // r10
  char *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r12
  char v18; // r14
  _QWORD *v19; // r15
  bool v20; // di
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  signed int v25; // eax
  bool v26; // [rsp+20h] [rbp-1C8h] BYREF
  int Priority; // [rsp+24h] [rbp-1C4h]
  unsigned __int64 *v28; // [rsp+28h] [rbp-1C0h]
  bool *v29; // [rsp+30h] [rbp-1B8h]
  _BYTE v30[12]; // [rsp+40h] [rbp-1A8h] BYREF
  int v31; // [rsp+4Ch] [rbp-19Ch]
  unsigned __int64 v32; // [rsp+A0h] [rbp-148h]
  int v33; // [rsp+A8h] [rbp-140h]

  v29 = a5;
  v28 = a4;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v30);
  v8 = (char *)this + 24;
  v9 = 0LL;
  v10 = (char *)*((_QWORD *)this + 3);
  v11 = 0LL;
  v12 = v10;
  while ( v12 != v8 )
  {
    v13 = *((_QWORD *)v12 + 2);
    v12 = *(char **)v12;
    v9 += *(_QWORD *)(v13 + 1456);
    v11 += *(_QWORD *)(v13 + 224);
  }
  if ( a2 > v9 )
    return 2147746304LL;
  v15 = a2 - a3;
  v16 = 0LL;
  v17 = a3 - v11;
  v18 = 0;
  Priority = ExecutionModel::ModernActivationResourceInfo::GetPriority(this);
  while ( v10 != v8 && (v15 || v17) )
  {
    v19 = (_QWORD *)*((_QWORD *)v10 + 2);
    RtlEnterCriticalSection(&RmpGlobalLock);
    v20 = v19[226] != 0LL;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( v20 )
    {
      v18 = 1;
    }
    else
    {
      v21 = v17;
      v22 = v15;
      v23 = v19[182] - v19[230] - v19[188];
      if ( v23 < v17 )
        v21 = v19[182] - v19[230] - v19[188];
      v19[28] += v21;
      v24 = v23 - v21;
      v17 -= v21;
      v16 += v21;
      if ( v24 < v15 )
        v22 = v24;
      if ( v22 )
      {
        v31 = Priority;
        v33 = Priority;
        v32 = v22;
        v25 = ExecutionModel::ResourceSet::AcquireAdditionalResources(
                *((ExecutionModel::ResourceSet **)v10 + 2),
                (const struct ExecutionModel::_ResourceSetInfo *)v30,
                &v26);
        if ( v25 < 0 )
          __fastfail(v25);
        if ( v26 )
          v18 = 1;
        else
          v16 += v22;
      }
      v15 -= v22;
    }
    v10 = *(char **)v10;
  }
  *v28 = v16;
  *v29 = v18;
  return 0LL;
}
