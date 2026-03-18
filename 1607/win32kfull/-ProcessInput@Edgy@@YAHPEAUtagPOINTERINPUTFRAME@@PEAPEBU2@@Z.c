/*
 * XREFs of ?ProcessInput@Edgy@@YAHPEAUtagPOINTERINPUTFRAME@@PEAPEBU2@@Z @ 0x1C021F7CC
 * Callers:
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 * Callees:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C02202EC (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall Edgy::ProcessInput(
        Edgy *this,
        struct tagPOINTERINPUTFRAME *a2,
        const struct tagPOINTERINPUTFRAME **a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbp
  int v7; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( a2 )
    *(_QWORD *)a2 = 0LL;
  v5 = *(_QWORD *)(grpdeskRitInput + 232LL);
  if ( !v5 )
    return 1LL;
  v7 = *(_DWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 232) = this;
  v8 = *(_OWORD *)Edgy::_OnInput(v9, v5, this);
  if ( v7 == 1 )
  {
    if ( (_DWORD)v8 == 1 )
      return v3;
    if ( a2 )
      *(_QWORD *)a2 = *((_QWORD *)&v8 + 1);
    *(_QWORD *)(v5 + 288) = 0LL;
  }
  else
  {
    if ( (_DWORD)v8 != 1 )
      return 1;
    *(_QWORD *)(v5 + 288) = gptiCurrent;
  }
  if ( (_DWORD)v8 != 1 )
    return 1;
  return v3;
}
