/*
 * XREFs of ?GetSystemVisualHandle@CDuplicatedVisualMarshaler@DirectComposition@@QEAAIXZ @ 0x1C0013E48
 * Callers:
 *     ?EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013E70 (-EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z @ 0x1C001B670 (-LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDuplicatedVisualMarshaler::GetSystemVisualHandle(
        DirectComposition::CDuplicatedVisualMarshaler *this)
{
  if ( (*((_DWORD *)this + 4) & 0x2000000) != 0 )
    return *(unsigned int *)(*((_QWORD *)this + 28) + 8LL);
  else
    return *((unsigned int *)this + 56);
}
