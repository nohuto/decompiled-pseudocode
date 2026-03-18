/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00C56C8
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0087BB4 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00C7EC4 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

unsigned int __fastcall DpiInternal::AdjustDesktopScaleFactorForOverride(
        DpiInternal *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  int v4; // esi
  int v6; // ebp
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+38h] [rbp+10h]

  v13 = a2;
  v4 = (int)a4;
  v6 = (int)this;
  if ( (unsigned int)((_DWORD)a4 + 11) > 0x16 )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_DWORD *)(*(_QWORD *)&a3 + 8LL);
  v9 = 0;
  if ( v8 )
  {
    this = *(DpiInternal **)(*(_QWORD *)&a3 + 16LL);
    do
    {
      if ( v6 == *(_DWORD *)this )
        break;
      ++v9;
      this = (DpiInternal *)((char *)this + 4);
    }
    while ( v9 < v8 );
  }
  if ( v9 >= v8 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  return DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)v9, v4, v13, a3, v12);
}
