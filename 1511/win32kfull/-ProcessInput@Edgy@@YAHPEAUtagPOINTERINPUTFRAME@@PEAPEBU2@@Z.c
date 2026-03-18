/*
 * XREFs of ?ProcessInput@Edgy@@YAHPEAUtagPOINTERINPUTFRAME@@PEAPEBU2@@Z @ 0x1C02296B0
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022A094 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall Edgy::ProcessInput(
        Edgy *this,
        struct tagPOINTERINPUTFRAME *a2,
        const struct tagPOINTERINPUTFRAME **a3)
{
  __int64 v4; // rdx
  int v6; // ebx
  __int128 *v7; // rax
  unsigned int v8; // ecx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
    *(_QWORD *)a2 = 0LL;
  v4 = *(_QWORD *)(grpdeskRitInput + 232LL);
  if ( !v4 )
    return 1LL;
  v6 = *(_DWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 232) = this;
  v7 = (__int128 *)Edgy::_OnInput(&v9, v4, this);
  v8 = 1;
  v9 = *v7;
  if ( v6 == 1 )
  {
    if ( (_DWORD)v9 == 1 )
      return 0;
    if ( a2 )
      *(_QWORD *)a2 = *((_QWORD *)&v9 + 1);
  }
  if ( (_DWORD)v9 == 1 )
    return 0;
  return v8;
}
