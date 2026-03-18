/*
 * XREFs of ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x1C0012F30
 * Callers:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0012EE8 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0012BAC (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(VIDMM_MAPPED_VA_RANGE *this)
{
  char *v1; // rax
  __int64 v3; // rdx
  char **v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  char **v7; // rcx
  int v8; // ecx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v1 = (char *)this + 24;
  if ( *((_QWORD *)this + 3) )
  {
    v3 = *(_QWORD *)v1;
    v4 = (char **)*((_QWORD *)this + 4);
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || *v4 != v1 )
      __fastfail(3u);
    *v4 = (char *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)v1 = 0LL;
  }
  v5 = (char *)this + 8;
  if ( *((_QWORD *)this + 1) )
  {
    v6 = *(_QWORD *)v5;
    v7 = (char **)*((_QWORD *)this + 2);
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)v5 = 0LL;
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a)
      && (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_VARangeHoldReference_60869572_FeatureDescriptorDetails) )
    {
      --*(_DWORD *)(*(_QWORD *)this + 76LL);
    }
  }
  v8 = *((_DWORD *)this + 16);
  if ( (v8 & 0x1000) == 0 )
  {
    v9 = (_QWORD *)((char *)this + 40);
    if ( *((_QWORD *)this + 5) )
    {
      v10 = GetVidMmGlobalAllocFromOwner(v8 << 28 >> 28, *((_QWORD *)this + 7)) + 352;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10, 0LL);
      *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
      v11 = *v9;
      v12 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v12 != v9 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v9 = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
