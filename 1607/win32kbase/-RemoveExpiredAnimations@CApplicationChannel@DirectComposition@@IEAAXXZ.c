/*
 * XREFs of ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003F888
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0041A44 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00030C8 (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z @ 0x1C000477C (-SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F590 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004C7F4 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?HasEnded@CAnimationMarshaler@DirectComposition@@QEAA_N_KPEAM@Z @ 0x1C004D584 (-HasEnded@CAnimationMarshaler@DirectComposition@@QEAA_N_KPEAM@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00E46F4 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::RemoveExpiredAnimations(
        DirectComposition::CApplicationChannel *this)
{
  char *v1; // rsi
  char *v3; // rbp
  LARGE_INTEGER PerformanceCounter; // r15
  DirectComposition::CAnimationMarshaler *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // eax
  bool v9; // [rsp+50h] [rbp+8h] BYREF
  float v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = (char *)this + 344;
  v3 = (char *)*((_QWORD *)this + 43);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  while ( v3 != v1 )
  {
    v5 = (DirectComposition::CAnimationMarshaler *)(v3 - 128);
    v3 = *(char **)v3;
    if ( DirectComposition::CAnimationMarshaler::HasEnded(v5, PerformanceCounter.QuadPart, &v10) )
    {
      v6 = *((_QWORD *)v5 + 1);
      if ( v6 )
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 40);
          v9 = 0;
          v8 = *(_DWORD *)(v6 + 8);
          if ( (v8 & 2) != 0 )
          {
            DirectComposition::CAnimationBinding::SetTargetProperty(
              (DirectComposition::CAnimationBinding *)v6,
              v10,
              &v9);
            if ( v9 )
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                this,
                *(struct DirectComposition::CResourceMarshaler **)(v6 + 16));
            DirectComposition::CApplicationChannel::DeleteAddingBinding(
              this,
              (struct DirectComposition::CAnimationBinding *)v6);
          }
          else
          {
            if ( (v8 & 4) != 0 )
              DirectComposition::CApplicationChannel::DiscardRemovingBinding(
                (struct DirectComposition::CAnimationBinding **)this,
                (struct DirectComposition::CAnimationBinding *)v6);
            else
              DirectComposition::CAnimationBinding::SetTargetProperty(
                (DirectComposition::CAnimationBinding *)v6,
                v10,
                &v9);
            DirectComposition::CAnimationBinding::DetachAndDelete((DirectComposition::CAnimationBinding *)v6, this);
          }
          v6 = v7;
        }
        while ( v7 );
      }
    }
  }
}
