/*
 * XREFs of ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180012800
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180001AE0 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000EBB0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::GetResourceSetInfo(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::_ResourceSetInfo **a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  int v6; // r8d
  _DWORD *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rcx
  char *v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  char *v13; // rax
  __int128 v14; // xmm0
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  _DWORD *v17; // rax

  v4 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a2 )
  {
    v5 = operator new(0x178uLL);
    v6 = 1;
    v7 = v5;
    v8 = 2LL;
    if ( v5 )
    {
      *v5 = -1;
      v9 = 3LL;
      v5[1] = 0;
      v5[2] = 101;
      v5[3] = 32;
      v5[12] = 0;
      *((_QWORD *)v5 + 8) = 0LL;
      *((_QWORD *)v5 + 9) = 0LL;
      v5[20] = 0;
      v10 = (char *)(v5 + 22);
      do
      {
        *(_DWORD *)v10 = -1;
        *((_QWORD *)v10 + 1) = 0LL;
        *((_DWORD *)v10 + 4) = 101;
        *((_WORD *)v10 + 10) = 0;
        v10 += 24;
        --v9;
      }
      while ( v9 );
      v7[88] = 0;
      v11 = v7 + 40;
      *((_QWORD *)v7 + 45) = 0LL;
      v7[28] = 1;
      v12 = 48LL;
      v7[22] = 0;
      v7[34] = 2;
      while ( v12 )
      {
        *v11++ = 101;
        --v12;
      }
      v7[93] = 0;
      *((_WORD *)v7 + 20) = 0;
      *((_BYTE *)v7 + 42) = 0;
      *((_QWORD *)v7 + 7) = 0LL;
      v7[11] = 1;
      v7[4] = 0;
      *((_QWORD *)v7 + 3) = 0LL;
      *((_QWORD *)v7 + 4) = 0LL;
      v7[8] = 101;
    }
    else
    {
      v7 = 0LL;
    }
    *a2 = (struct ExecutionModel::_ResourceSetInfo *)v7;
    if ( v7 )
    {
      v13 = (char *)this + 48;
      do
      {
        v7 += 32;
        v14 = *(_OWORD *)v13;
        v13 += 128;
        *((_OWORD *)v7 - 8) = v14;
        *((_OWORD *)v7 - 7) = *((_OWORD *)v13 - 7);
        *((_OWORD *)v7 - 6) = *((_OWORD *)v13 - 6);
        *((_OWORD *)v7 - 5) = *((_OWORD *)v13 - 5);
        *((_OWORD *)v7 - 4) = *((_OWORD *)v13 - 4);
        *((_OWORD *)v7 - 3) = *((_OWORD *)v13 - 3);
        *((_OWORD *)v7 - 2) = *((_OWORD *)v13 - 2);
        *((_OWORD *)v7 - 1) = *((_OWORD *)v13 - 1);
        --v8;
      }
      while ( v8 );
      *(_OWORD *)v7 = *(_OWORD *)v13;
      *((_OWORD *)v7 + 1) = *((_OWORD *)v13 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)v13 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)v13 + 3);
      *((_OWORD *)v7 + 4) = *((_OWORD *)v13 + 4);
      *((_OWORD *)v7 + 5) = *((_OWORD *)v13 + 5);
      *((_OWORD *)v7 + 6) = *((_OWORD *)v13 + 6);
      *((_QWORD *)v7 + 14) = *((_QWORD *)v13 + 14);
      v15 = *a2;
      *((_OWORD *)v15 + 7) = *((_OWORD *)this - 72);
      *((_QWORD *)v15 + 16) = *((_QWORD *)this - 142);
      v16 = *a2;
      *(_OWORD *)(v16 + 22) = *(_OWORD *)((char *)this - 1176);
      *((_QWORD *)v16 + 13) = *((_QWORD *)this - 145);
      v17 = *a2;
      *(_OWORD *)(v17 + 34) = *(_OWORD *)((char *)this - 1128);
      *((_QWORD *)v17 + 19) = *((_QWORD *)this - 139);
      if ( (*((_BYTE *)this + 44) & 2) == 0 )
        v6 = 0;
      *((_DWORD *)*a2 + 92) = v6;
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
