/*
 * XREFs of ?ReadPriorityValue@ResourceManager@ExecutionModel@@SA_JPEAUHKEY__@@PEBGPEAW4Enum@Priority@2@@Z @ 0x18001C0B0
 * Callers:
 *     ?ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001BA14 (-ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::ReadPriorityValue(
        HKEY a1,
        const unsigned __int16 *a2,
        enum ExecutionModel::Priority::Enum *a3)
{
  __int64 result; // rax
  DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v5[0] = 4;
  result = RegGetValueW(a1, 0LL, a2, 0x10u, 0LL, &v6, v5);
  if ( !(_DWORD)result && v6 < 0x65 )
    *(_DWORD *)a3 = v6;
  return result;
}
