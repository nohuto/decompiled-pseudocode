/*
 * XREFs of ?CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBVBaseResourceSet@2@AEAURmResourceSetInfo@@@Z @ 0x18003E268
 * Callers:
 *     ?RecursiveGetResourceSetInfos@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@KPEAURmResourceSetInfo@@PEAK@Z @ 0x18003EDC4 (-RecursiveGetResourceSetInfos@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@KPEAURm.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800190A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAURmResourceSetInfo@@@Z @ 0x180034FD8 (-CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAURmResourceS.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CopyResourceSetInfo(
        ExecutionModel::ResourceManager *this,
        char **a2,
        struct RmResourceSetInfo *a3)
{
  ExecutionModel::ResourceManager *v5; // rcx
  int v6; // esi
  int v7; // eax

  *((_DWORD *)a3 + 1) = *((unsigned __int8 *)a2 + 13);
  *((_DWORD *)a3 + 2) = *((unsigned __int8 *)a2 + 12);
  v6 = StringCchCopyW((char *)a3 + 12, 232LL, a2[4]);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147024774 )
    memset_0((char *)a3 + 12, 0, 0x1D0uLL);
  *((_DWORD *)a3 + 119) = *((_DWORD *)a2 + 34);
  *((_DWORD *)a3 + 461) = *((_DWORD *)a2 + 339) & 1;
  v7 = (*((_DWORD *)a2 + 339) >> 1) & 1;
  *((_DWORD *)a3 + 527) = (_DWORD)a2;
  *((_DWORD *)a3 + 462) = v7;
  *((_DWORD *)a3 + 171) = *((_DWORD *)a2 + 46);
  *(_DWORD *)a3 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a3 + 463) = *((_DWORD *)a2 + 340);
  *((_DWORD *)a3 + 460) = *((_DWORD *)a2 + 338);
  *((_DWORD *)a3 + 466) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a3 + 526) = 0;
  if ( !*((_DWORD *)a2 + 4)
    || !a2[23]
    || (v6 = ExecutionModel::ResourceManager::CopyResourceSetInfo(
               v5,
               (const struct ExecutionModel::_ResourceSetInfo *)(a2 + 176),
               a3),
        v6 >= 0) )
  {
    memcpy_s((char *)a3 + 688, 0x480uLL, a2 + 24, 0x480uLL);
  }
  return (unsigned int)v6;
}
