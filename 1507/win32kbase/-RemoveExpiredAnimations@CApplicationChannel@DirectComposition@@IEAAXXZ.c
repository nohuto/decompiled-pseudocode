/*
 * XREFs of ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002DFB0
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C002F754 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z @ 0x1C0003C88 (-SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0028E38 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C002DF2C (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00D509C (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::RemoveExpiredAnimations(
        DirectComposition::CApplicationChannel *this)
{
  char *v1; // rsi
  char *v2; // rbp
  LARGE_INTEGER PerformanceCounter; // r15
  char *v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rbx
  float v9; // xmm6_4
  __int64 v10; // r14
  int v11; // eax
  bool v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = (char *)this + 336;
  v2 = (char *)*((_QWORD *)this + 42);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  while ( v2 != v1 )
  {
    v5 = v2 - 128;
    v6 = *((_DWORD *)v2 - 24);
    v2 = *(char **)v2;
    if ( (v6 & 0x240) == 0x40 && (v5[208] & 2) == 0 )
    {
      v7 = *((_QWORD *)v5 + 14);
      if ( v7 )
      {
        if ( PerformanceCounter.QuadPart >= (unsigned __int64)(*((_QWORD *)v5 + 15) + v7) )
          *((_DWORD *)v5 + 8) = v6 | 0x200;
      }
    }
    if ( (*((_DWORD *)v5 + 8) & 0x200) != 0 )
    {
      v8 = *((_QWORD *)v5 + 1);
      v9 = *((float *)v5 + 40);
      if ( v8 )
      {
        do
        {
          v10 = *(_QWORD *)(v8 + 40);
          v12 = 0;
          v11 = *(_DWORD *)(v8 + 8);
          if ( (v11 & 2) != 0 )
          {
            DirectComposition::CAnimationBinding::SetTargetProperty(
              (DirectComposition::CAnimationBinding *)v8,
              v9,
              &v12);
            if ( v12 )
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                this,
                *(struct DirectComposition::CResourceMarshaler **)(v8 + 16));
            DirectComposition::CApplicationChannel::DeleteAddingBinding(
              this,
              (struct DirectComposition::CAnimationBinding *)v8);
          }
          else
          {
            if ( (v11 & 4) != 0 )
              DirectComposition::CApplicationChannel::DiscardRemovingBinding(
                (struct DirectComposition::CAnimationBinding ***)this,
                (struct DirectComposition::CAnimationBinding **)v8);
            else
              DirectComposition::CAnimationBinding::SetTargetProperty(
                (DirectComposition::CAnimationBinding *)v8,
                v9,
                &v12);
            DirectComposition::CAnimationBinding::DetachAndDelete((DirectComposition::CAnimationBinding *)v8, this);
          }
          v8 = v10;
        }
        while ( v10 );
      }
    }
  }
}
