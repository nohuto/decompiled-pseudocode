/*
 * XREFs of ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x18000EAC0
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000F6F0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800103D0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSet::GetResourceSetInfo(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::_ResourceSetInfo **a2)
{
  unsigned int v4; // ebx
  char *v5; // rax
  __int64 v6; // r9
  int v7; // r8d
  char *v8; // rcx
  int v9; // edx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  char *v12; // rcx
  __int128 v13; // xmm0
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rax

  v4 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a2 )
  {
    v5 = (char *)malloc(0x168uLL);
    v6 = 2LL;
    v7 = 1;
    if ( v5 )
    {
      *(_DWORD *)v5 = -1;
      v8 = v5 + 72;
      *((_DWORD *)v5 + 1) = 0;
      v9 = 2;
      *((_DWORD *)v5 + 2) = -1;
      *((_DWORD *)v5 + 3) = 101;
      *((_DWORD *)v5 + 4) = 32;
      *((_DWORD *)v5 + 8) = 0;
      *((_QWORD *)v5 + 6) = 0LL;
      *((_QWORD *)v5 + 7) = 0LL;
      *((_DWORD *)v5 + 16) = 0;
      do
      {
        --v9;
        *(_DWORD *)v8 = -1;
        *((_QWORD *)v8 + 1) = 0LL;
        *((_DWORD *)v8 + 4) = 101;
        *((_WORD *)v8 + 10) = 0;
        v8 += 24;
      }
      while ( v9 >= 0 );
      *((_QWORD *)v5 + 42) = 0LL;
      v10 = v5 + 144;
      *((_QWORD *)v5 + 43) = 0LL;
      v11 = 3LL;
      *((_DWORD *)v5 + 24) = 1;
      *((_DWORD *)v5 + 18) = 0;
      *((_DWORD *)v5 + 30) = 2;
      do
      {
        *v10 = 0x6500000065LL;
        v10[1] = 0x6500000065LL;
        v10[2] = 0x6500000065LL;
        v10 += 8;
        *(v10 - 5) = 0x6500000065LL;
        *(v10 - 4) = 0x6500000065LL;
        *(v10 - 3) = 0x6500000065LL;
        *(v10 - 2) = 0x6500000065LL;
        *(v10 - 1) = 0x6500000065LL;
        --v11;
      }
      while ( v11 );
      *((_DWORD *)v5 + 89) = 0;
      *((_WORD *)v5 + 12) = 0;
      v5[26] = 0;
      *((_QWORD *)v5 + 5) = 0LL;
      *((_DWORD *)v5 + 7) = 1;
      *((_DWORD *)v5 + 5) = 0;
    }
    else
    {
      v5 = 0LL;
    }
    *a2 = (struct ExecutionModel::_ResourceSetInfo *)v5;
    if ( v5 )
    {
      v12 = (char *)this + 40;
      do
      {
        v5 += 128;
        v13 = *(_OWORD *)v12;
        v12 += 128;
        *((_OWORD *)v5 - 8) = v13;
        *((_OWORD *)v5 - 7) = *((_OWORD *)v12 - 7);
        *((_OWORD *)v5 - 6) = *((_OWORD *)v12 - 6);
        *((_OWORD *)v5 - 5) = *((_OWORD *)v12 - 5);
        *((_OWORD *)v5 - 4) = *((_OWORD *)v12 - 4);
        *((_OWORD *)v5 - 3) = *((_OWORD *)v12 - 3);
        *((_OWORD *)v5 - 2) = *((_OWORD *)v12 - 2);
        *((_OWORD *)v5 - 1) = *((_OWORD *)v12 - 1);
        --v6;
      }
      while ( v6 );
      *(_OWORD *)v5 = *(_OWORD *)v12;
      *((_OWORD *)v5 + 1) = *((_OWORD *)v12 + 1);
      *((_OWORD *)v5 + 2) = *((_OWORD *)v12 + 2);
      *((_OWORD *)v5 + 3) = *((_OWORD *)v12 + 3);
      *((_OWORD *)v5 + 4) = *((_OWORD *)v12 + 4);
      *((_OWORD *)v5 + 5) = *((_OWORD *)v12 + 5);
      *((_QWORD *)v5 + 12) = *((_QWORD *)v12 + 12);
      v14 = *a2;
      *((_OWORD *)v14 + 6) = *((_OWORD *)this - 72);
      *((_QWORD *)v14 + 14) = *((_QWORD *)this - 142);
      v15 = *a2;
      *(_OWORD *)(v15 + 18) = *(_OWORD *)((char *)this - 1176);
      *((_QWORD *)v15 + 11) = *((_QWORD *)this - 145);
      v16 = *a2;
      *(_OWORD *)(v16 + 30) = *(_OWORD *)((char *)this - 1128);
      *((_QWORD *)v16 + 17) = *((_QWORD *)this - 139);
      if ( (*((_BYTE *)this + 552) & 2) == 0 )
        v7 = 0;
      *((_DWORD *)*a2 + 88) = v7;
    }
    else
    {
      v4 = -2147024882;
    }
  }
  else
  {
    v4 = -2147024809;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v4;
}
