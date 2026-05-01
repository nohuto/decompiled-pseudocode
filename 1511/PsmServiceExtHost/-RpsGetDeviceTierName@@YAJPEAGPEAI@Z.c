/*
 * XREFs of ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180025EEC
 * Callers:
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z @ 0x180025954 (-CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z.c)
 * Callees:
 *     ?GetTierCount@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z @ 0x180024D8C (-GetTierCount@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z.c)
 *     ?GetAvailableMBCommit@Internal@ExecutionModel@@YAKXZ @ 0x180024DDC (-GetAvailableMBCommit@Internal@ExecutionModel@@YAKXZ.c)
 *     ?CopyTierName@Internal@ExecutionModel@@YAJPEAGPEAIPEBGI@Z @ 0x1800255BC (-CopyTierName@Internal@ExecutionModel@@YAJPEAGPEAIPEBGI@Z.c)
 *     ?GetTierNameMaxLength@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z @ 0x1800259E4 (-GetTierNameMaxLength@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@PEAI@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180025E3C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetTierInfo@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@IAEAVStringBuffer@4@PEAK2@Z @ 0x1800260A0 (-GetTierInfo@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@IAEAVStringBuffer@4@PEAK2@Z.c)
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x180027EF0 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18002807C (--1StringBuffer@Common@@QEAA@XZ.c)
 */

__int64 __fastcall RpsGetDeviceTierName(ExecutionModel::Internal *this, unsigned __int16 *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // rsi
  ExecutionModel::Internal *v5; // r14
  unsigned int *v6; // r8
  ExecutionModel::Internal *v7; // rcx
  int v8; // edi
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  DWORD v11; // edi
  unsigned int v12; // esi
  char v13; // r14
  bool v14; // zf
  unsigned __int16 *v16; // rax
  int v17; // r8d
  int v18; // edx
  unsigned int *v19; // [rsp+28h] [rbp-48h]
  DWORD v20; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v21[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v22; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 *v23; // [rsp+48h] [rbp-28h]
  int v24; // [rsp+50h] [rbp-20h]
  unsigned int v25; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int16 *v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+68h] [rbp-8h]
  unsigned int v30; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = this;
  if ( !a2 )
    return 2147942487LL;
  v31 = 0;
  *(_QWORD *)&v21[1] = 0LL;
  if ( !ExecutionModel::Internal::GetTierNameMaxLength((HKEY *)&v21[1], &v31, a3) )
    goto LABEL_33;
  if ( !v5 )
  {
    *(_DWORD *)v4 = v31;
    goto LABEL_19;
  }
  if ( *(_DWORD *)v4 < v31 )
  {
    v3 = -2147024662;
    goto LABEL_19;
  }
  v20 = 0;
  if ( !ExecutionModel::Internal::GetTierCount((HKEY *)&v21[1], &v20, v6) )
  {
LABEL_33:
    v3 = ExecutionModel::Internal::CopyTierName(v5, v4, L"Tier1", (const unsigned __int16 *)6);
    goto LABEL_19;
  }
  v21[0] = ExecutionModel::Internal::GetAvailableMBCommit(v7);
  v26 = 0LL;
  v25 = 0;
  v27 = 0;
  v8 = Common::StringBuffer::SetCapacity((Common::StringBuffer *)&v25, v31);
  if ( v8 < 0 )
    goto LABEL_18;
  v23 = 0LL;
  v22 = 0;
  v24 = 0;
  v8 = Common::StringBuffer::SetCapacity((Common::StringBuffer *)&v22, v31);
  if ( v8 < 0 )
    goto LABEL_17;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !v20 )
  {
LABEL_32:
    Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v22);
    Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v25);
    goto LABEL_33;
  }
  v12 = v21[0];
  v13 = 0;
  do
  {
    v21[0] = v31;
    v30 = 0;
    if ( !ExecutionModel::Internal::GetTierInfo(
            (ExecutionModel::Internal *)&v21[1],
            (struct Common::RegistryKey *)v11,
            (unsigned int)&v25,
            (struct Common::StringBuffer *)v21,
            &v30,
            v19) )
      goto LABEL_14;
    v14 = v30 == v10;
    if ( v30 > v10 )
    {
      if ( v30 <= v12 )
        goto LABEL_13;
      v14 = v30 == v10;
    }
    if ( v14 )
    {
      v16 = v26;
      do
      {
        v17 = *(unsigned __int16 *)((char *)v16 + (char *)v23 - (char *)v26);
        v18 = *v16 - v17;
        if ( v18 )
          break;
        ++v16;
      }
      while ( v17 );
      if ( v18 > 0 )
      {
LABEL_13:
        v9 = v21[0];
        v10 = v30;
        v13 = 1;
        StringCchCopyNW((char *)v23, v31, (char *)v26, v21[0]);
      }
    }
LABEL_14:
    ++v11;
  }
  while ( v11 < v20 );
  v4 = a2;
  v14 = v13 == 0;
  v5 = this;
  if ( v14 )
    goto LABEL_32;
  v8 = ExecutionModel::Internal::CopyTierName(this, a2, v23, (const unsigned __int16 *)v9);
LABEL_17:
  Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v22);
LABEL_18:
  Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v25);
  v3 = v8;
LABEL_19:
  if ( (unsigned __int64)(*(_QWORD *)&v21[1] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(*(HKEY *)&v21[1]);
  return v3;
}
