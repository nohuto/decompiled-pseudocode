/*
 * XREFs of ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C004D66C
 * Callers:
 *     ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x1C003E96C (-CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCB.c)
 *     ?GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z @ 0x1C004D530 (-GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z.c)
 * Callees:
 *     ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x1C004CEDC (-CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
        DirectComposition::CAnimationMarshaler *this,
        bool *a2,
        __int64 *a3,
        unsigned __int64 *a4)
{
  char v8; // al
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  bool v11; // al
  LARGE_INTEGER PerformanceCounter; // rax
  struct DirectComposition::CAnimationTimeList *v13; // rdx
  unsigned __int64 QuadPart; // r8
  __int64 v15; // rdx
  bool v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)this + 9) + 24LL) & 3) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = (struct DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
    QuadPart = PerformanceCounter.QuadPart;
    while ( v13 )
    {
      DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(this, v13, QuadPart, &v19, &v16, &v18, &v17);
      v13 = *(struct DirectComposition::CAnimationTimeList **)(v15 + 16);
    }
    v9 = v17;
    v10 = v18;
    v11 = v16;
  }
  else
  {
    v8 = *((_BYTE *)this + 208);
    v9 = *((_QWORD *)this + 28);
    v10 = *((_QWORD *)this + 27);
    v11 = (v8 & 4) != 0;
  }
  *a3 = v10;
  *a4 = v9;
  *a2 = v11;
}
