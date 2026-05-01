/*
 * XREFs of ?AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_N@Z @ 0x18003B2E4
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800365C8 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?GetPriority@ModernActivationResourceInfo@ExecutionModel@@QEBA?AW4Enum@Priority@2@XZ @ 0x18003CB20 (-GetPriority@ModernActivationResourceInfo@ExecutionModel@@QEBA-AW4Enum@Priority@2@XZ.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18004511C (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::AcquireAdditionalMemoryResources(
        ExecutionModel::ModernActivationResourceInfo *this,
        unsigned __int64 a2,
        __int64 a3,
        bool *a4)
{
  char *v8; // r15
  unsigned __int64 v9; // rdx
  char *v10; // rbx
  __int64 v11; // r8
  char *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v15; // rsi
  bool v16; // bp
  unsigned __int64 v17; // r14
  _QWORD *v18; // r13
  bool v19; // di
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  signed int v24; // eax
  bool v25; // [rsp+20h] [rbp-1C8h] BYREF
  int Priority; // [rsp+24h] [rbp-1C4h]
  _BYTE v27[12]; // [rsp+30h] [rbp-1B8h] BYREF
  int v28; // [rsp+3Ch] [rbp-1ACh]
  unsigned __int64 v29; // [rsp+98h] [rbp-150h]
  int v30; // [rsp+A0h] [rbp-148h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v27);
  if ( a2 == a3 )
  {
    *a4 = 0;
  }
  else
  {
    v8 = (char *)this + 24;
    v9 = 0LL;
    v10 = (char *)*((_QWORD *)this + 3);
    v11 = 0LL;
    v12 = v10;
    while ( v12 != v8 )
    {
      v13 = *((_QWORD *)v12 + 2);
      v12 = *(char **)v12;
      v9 += *(_QWORD *)(v13 + 1464);
      v11 += *(_QWORD *)(v13 + 224);
    }
    if ( a2 > v9 )
      return 2147746304LL;
    v15 = a2 - a3;
    v16 = 0;
    v17 = a3 - v11;
    Priority = ExecutionModel::ModernActivationResourceInfo::GetPriority(this);
    while ( v10 != v8 && (v15 || v17) )
    {
      v18 = (_QWORD *)*((_QWORD *)v10 + 2);
      RtlEnterCriticalSection(&RmpGlobalLock);
      v19 = v18[227] != 0LL;
      RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( v19 )
      {
        v16 = 1;
      }
      else
      {
        v20 = v17;
        v21 = v15;
        v22 = v18[183] - v18[231] - v18[189];
        if ( v22 < v17 )
          v20 = v18[183] - v18[231] - v18[189];
        v18[28] += v20;
        v23 = v22 - v20;
        v17 -= v20;
        if ( v23 < v15 )
          v21 = v23;
        if ( v21 )
        {
          v28 = Priority;
          v30 = Priority;
          v29 = v21;
          v24 = ExecutionModel::ResourceSet::AcquireAdditionalResources(
                  *((ExecutionModel::ResourceSet **)v10 + 2),
                  (const struct ExecutionModel::_ResourceSetInfo *)v27,
                  &v25);
          if ( v24 < 0 )
            __fastfail(v24);
          if ( v25 )
            v16 = 1;
        }
        v15 -= v21;
      }
      v10 = *(char **)v10;
    }
    *a4 = v16;
  }
  return 0LL;
}
