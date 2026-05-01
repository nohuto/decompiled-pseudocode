/*
 * XREFs of ?UpdateAndGetCommitMemoryNotificationState@ResourceManager@ExecutionModel@@QEBAJPEAVResourceSet@2@_K1111PEA_K22PEAW4RmCommitLevel@@@Z @ 0x180011D20
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K@Z @ 0x18000C130 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateAndGetCommitMemoryNotificationState(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum RmCommitLevel *a11)
{
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbp
  ModernResourceEnforcer *v19; // r15
  unsigned __int64 v20; // r13
  __int64 (__fastcall *v21)(ModernResourceEnforcer *, const unsigned __int16 *, const SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *); // r12
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  int v25; // edx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // [rsp+98h] [rbp+20h]

  v12 = a4 + *((_QWORD *)a2 + 218);
  v13 = a3 + *((_QWORD *)a2 + 28);
  v14 = *((_QWORD *)a2 + 181) + a5;
  v15 = *((_QWORD *)a2 + 182) + a6;
  v16 = *((_QWORD *)a2 + 230) + a7;
  v17 = *((_QWORD *)a2 + 175);
  v31 = v13;
  if ( !v17 || (v18 = *(_QWORD *)(v17 + 600)) == 0 )
  {
    v28 = 0LL;
    v25 = 1;
    if ( v12 < v13 )
      v13 = v12;
    v30 = v13;
    goto LABEL_19;
  }
  v19 = (ModernResourceEnforcer *)*((_QWORD *)this + 15);
  v20 = *(_QWORD *)(v17 + 24);
  v21 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, const unsigned __int16 *, const SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *))(*(_QWORD *)v19 + 48LL);
  if ( v21 == ModernResourceEnforcer::QueryCurrentMemoryUsage )
    result = ModernResourceEnforcer::QueryCurrentMemoryUsage(
               v19,
               (const unsigned __int16 *)(v17 + 48),
               (const SID *)(v17 + 512),
               *(_DWORD *)(v17 + 580),
               *(_DWORD *)(v17 + 584),
               v20,
               &a7);
  else
    result = v21(
               v19,
               (const unsigned __int16 *)(v17 + 48),
               (const SID *)(v17 + 512),
               *(_DWORD *)(v17 + 580),
               *(_DWORD *)(v17 + 584),
               v20,
               &a7);
  if ( (int)result >= 0 )
  {
    v23 = a7;
    if ( *(_QWORD *)(v18 + 80) > a7 )
      v23 = *(_QWORD *)(v18 + 80);
    *(_QWORD *)(v18 + 80) = v23;
    v24 = v16 + a7;
    if ( v16 + a7 < v12 )
    {
      v25 = 1;
      v26 = 0LL;
    }
    else if ( v24 < v14 )
    {
      v26 = v12;
      v25 = 2;
      v12 = v14;
    }
    else
    {
      v25 = 3;
      v26 = v14;
      v12 = v15;
    }
    if ( v31 )
    {
      if ( v24 < v31 )
      {
        if ( v12 >= v31 )
          v12 = v31;
      }
      else if ( v26 <= v31 )
      {
        v26 = v31;
      }
    }
    if ( v26 < v16 )
      v27 = v26;
    else
      v27 = v16;
    v28 = v26 - v27;
    if ( v12 < v16 )
      v29 = v12;
    else
      v29 = v16;
    v30 = v12 - v29;
    if ( v15 < v16 )
      v16 = v15;
    v15 -= v16;
LABEL_19:
    *a8 = v28;
    result = 0LL;
    *a9 = v30;
    *a10 = v15;
    *(_DWORD *)a11 = v25;
  }
  return result;
}
