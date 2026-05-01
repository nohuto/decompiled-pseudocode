/*
 * XREFs of ?CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAURmResourceSetInfo@@@Z @ 0x18003C128
 * Callers:
 *     ?RmGetResourceSetTypePolicy@ResourceManager@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18003E1A0 (-RmGetResourceSetTypePolicy@ResourceManager@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAURmReso.c)
 *     ?CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBVBaseResourceSet@2@AEAURmResourceSetInfo@@@Z @ 0x180043714 (-CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBVBaseResourceSet@2@AEAURmResourceSe.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CopyResourceSetInfo(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct RmResourceSetInfo *a3)
{
  *((_QWORD *)a3 + 265) = *((_QWORD *)a2 + 43);
  *((_QWORD *)a3 + 237) = *((_QWORD *)a2 + 6);
  *((_QWORD *)a3 + 238) = *((_QWORD *)a2 + 7);
  *((_DWORD *)a3 + 467) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a3 + 471) = *((_DWORD *)a2 + 8);
  *((_DWORD *)a3 + 478) = *((_DWORD *)a2 + 16);
  *((_DWORD *)a3 + 532) = *((_DWORD *)a2 + 88);
  *((_DWORD *)a3 + 466) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a3 + 464) = *(_DWORD *)a2;
  *((_DWORD *)a3 + 527) = *((_DWORD *)a2 + 84);
  *((_DWORD *)a3 + 533) = *((_DWORD *)a2 + 89);
  memcpy_s((char *)a3 + 1916, 0xC0uLL, (char *)a2 + 144, 0xC0uLL);
  memset_0((char *)a3 + 688, 0, 0x480uLL);
  memcpy_s((char *)a3 + 688, 0x480uLL, (char *)a2 + 72, 0x48uLL);
  return 0LL;
}
