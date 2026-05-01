/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@UEAAXPEBGK_K@Z @ 0x180037020
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 a4)
{
  (*(void (__fastcall **)(ExecutionModel::ResourceManager *, const unsigned __int16 *, _QWORD, _QWORD, int, __int64))(*(_QWORD *)this + 208LL))(
    this,
    a2,
    0LL,
    0LL,
    a3,
    a4);
}
