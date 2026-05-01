/*
 * XREFs of ?CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAURmResourceSetInfo@@@Z @ 0x180034FD8
 * Callers:
 *     ?RmGetResourceSetTypePolicy@ResourceManager@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x1800389E0 (-RmGetResourceSetTypePolicy@ResourceManager@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAURmReso.c)
 *     ?CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBVBaseResourceSet@2@AEAURmResourceSetInfo@@@Z @ 0x18003E268 (-CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBVBaseResourceSet@2@AEAURmResourceSe.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CopyResourceSetInfo(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct RmResourceSetInfo *a3)
{
  *((_QWORD *)a3 + 264) = *((_QWORD *)a2 + 42);
  *((_QWORD *)a3 + 236) = *((_QWORD *)a2 + 5);
  *((_QWORD *)a3 + 237) = *((_QWORD *)a2 + 6);
  *((_DWORD *)a3 + 467) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a3 + 471) = *((_DWORD *)a2 + 8);
  *((_DWORD *)a3 + 476) = *((_DWORD *)a2 + 14);
  *((_DWORD *)a3 + 530) = *((_DWORD *)a2 + 86);
  *((_DWORD *)a3 + 466) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a3 + 464) = *(_DWORD *)a2;
  *((_DWORD *)a3 + 525) = *((_DWORD *)a2 + 82);
  *((_DWORD *)a3 + 531) = *((_DWORD *)a2 + 87);
  memcpy_s((char *)a3 + 1908, 0xC0uLL, (char *)a2 + 136, 0xC0uLL);
  memset_0((char *)a3 + 688, 0, 0x480uLL);
  memcpy_s((char *)a3 + 688, 0x480uLL, (char *)a2 + 64, 0x48uLL);
  return 0LL;
}
