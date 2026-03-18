/*
 * XREFs of ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A2334
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00A2378 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00A4B98 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     DxgkGetPathsModality @ 0x1C00A6630 (DxgkGetPathsModality.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FillPathsTargetFlags(CCD_TOPOLOGY *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v7; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback,
         (__int64)this,
         1);
  v5 = v3;
  if ( v3 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v7[3] = v5;
    v7[4] = this;
    v7[5] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v5;
}
