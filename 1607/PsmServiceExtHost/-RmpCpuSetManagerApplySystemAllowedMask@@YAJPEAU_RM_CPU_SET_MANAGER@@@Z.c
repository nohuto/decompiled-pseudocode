/*
 * XREFs of ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180003408
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     RmpSystemSetSystemAllowedCpuSets @ 0x1800034D0 (RmpSystemSetSystemAllowedCpuSets.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerApplySystemAllowedMask(struct _RM_CPU_SET_MANAGER *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  _QWORD *v6; // rdx
  __int64 v7; // r9
  int v8; // ecx
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+6Ch] [rbp-94h]
  __int16 *v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  _QWORD *v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+8Ch] [rbp-74h]
  _QWORD SystemInformation[20]; // [rsp+90h] [rbp-70h] BYREF

  if ( (unsigned int)(*((_DWORD *)a1 + 158) + *((_DWORD *)a1 + 230)) >= *((_DWORD *)a1 + 237)
    && *((_DWORD *)a1 + 236) == -1 )
  {
    v13 = RmpSystemSetSystemAllowedCpuSets(0LL);
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v1, 1uLL) )
    {
      v18 = 0;
      v16 = &v13;
      v17 = 4;
      TlgWrite(v2, &unk_180041274, v3, v4, 3u, &pData);
    }
  }
  else
  {
    v6 = (_QWORD *)((char *)a1 + 472);
    v7 = 20LL;
    do
    {
      *(_QWORD *)((char *)v6 + (char *)SystemInformation - (char *)a1 - 472) = *v6 | v6[36];
      ++v6;
      --v7;
    }
    while ( v7 );
    v8 = *((_DWORD *)a1 + 236);
    if ( v8 != -1 )
      SystemInformation[(unsigned int)(v8 - 256) >> 16] &= ~(1LL << v8);
    v13 = RmpSystemSetSystemAllowedCpuSets(SystemInformation);
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v9, 1uLL) )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = &v13;
      v19 = &v14;
      v22 = SystemInformation;
      v17 = 4;
      v14 = 20;
      v20 = 2;
      v23 = 160;
      TlgWrite(v10, &unk_180041108, v11, v12, 5u, &pData);
    }
  }
  return v13;
}
