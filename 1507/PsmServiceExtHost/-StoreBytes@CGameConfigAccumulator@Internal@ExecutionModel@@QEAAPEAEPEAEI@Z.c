/*
 * XREFs of ?StoreBytes@CGameConfigAccumulator@Internal@ExecutionModel@@QEAAPEAEPEAEI@Z @ 0x180045CD8
 * Callers:
 *     ?DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameConfig@2@PEAI@Z @ 0x180043AD8 (-DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameC.c)
 * Callees:
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 */

unsigned __int8 *__fastcall ExecutionModel::Internal::CGameConfigAccumulator::StoreBytes(
        ExecutionModel::Internal::CGameConfigAccumulator *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  void *v3; // rsi
  __int64 v4; // rbp
  bool v7; // al

  v3 = 0LL;
  v4 = a3;
  if ( !a3 )
    return 0LL;
  v7 = a3 <= *((_DWORD *)this + 4);
  *((_BYTE *)this + 24) = v7;
  if ( v7 )
  {
    v3 = (void *)*((_QWORD *)this + 1);
    memcpy_0(v3, a2, a3);
    *((_QWORD *)this + 1) += v4;
    *((_DWORD *)this + 4) -= v4;
  }
  else
  {
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 5) += v4;
  return (unsigned __int8 *)v3;
}
