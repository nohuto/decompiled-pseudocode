/*
 * XREFs of ?GetSystemVisualHandle@CDuplicatedVisualMarshaler@DirectComposition@@QEAAIXZ @ 0x1C0023A58
 * Callers:
 *     ?EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0023A80 (-EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z @ 0x1C002E44C (-LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDuplicatedVisualMarshaler::GetSystemVisualHandle(
        DirectComposition::CDuplicatedVisualMarshaler *this)
{
  if ( (*((_DWORD *)this + 4) & 0x4000000) != 0 )
    return *(unsigned int *)(*((_QWORD *)this + 29) + 8LL);
  else
    return *((unsigned int *)this + 58);
}
