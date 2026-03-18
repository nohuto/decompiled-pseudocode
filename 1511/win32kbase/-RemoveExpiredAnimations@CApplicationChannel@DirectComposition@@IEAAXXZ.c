/*
 * XREFs of ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001B228
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C94C (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z @ 0x1C00044E4 (-SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z.c)
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0004630 (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0004668 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0071DDC (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
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
    v5 = v2 - 120;
    v6 = *((_DWORD *)v2 - 22);
    v2 = *(char **)v2;
    if ( (v6 & 0x240) == 0x40 && (v5[200] & 2) == 0 )
    {
      v7 = *((_QWORD *)v5 + 13);
      if ( v7 )
      {
        if ( PerformanceCounter.QuadPart >= (unsigned __int64)(*((_QWORD *)v5 + 14) + v7) )
          *((_DWORD *)v5 + 8) = v6 | 0x200;
      }
    }
    if ( (*((_DWORD *)v5 + 8) & 0x200) != 0 )
    {
      v8 = *((_QWORD *)v5 + 1);
      v9 = *((float *)v5 + 38);
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
              (struct DirectComposition::CAnimationBinding ***)this,
              (struct DirectComposition::CAnimationBinding **)v8);
          }
          else
          {
            if ( (v11 & 4) != 0 )
              DirectComposition::CApplicationChannel::DiscardRemovingBinding(
                (struct DirectComposition::CAnimationBinding **)this,
                (struct DirectComposition::CAnimationBinding *)v8);
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
