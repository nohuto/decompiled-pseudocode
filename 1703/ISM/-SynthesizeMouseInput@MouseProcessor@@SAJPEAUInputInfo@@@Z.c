/*
 * XREFs of ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x180059894
 * Callers:
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z @ 0x18004C694 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z.c)
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180059560 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall MouseProcessor::SynthesizeMouseInput(struct InputInfo *a1)
{
  unsigned int v2; // edi
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  _QWORD v8[6]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0;
  memset(v8, 0, 0x28uLL);
  v8[0] = *((unsigned int *)a1 + 1);
  LODWORD(v8[1]) = *((_DWORD *)a1 + 2);
  v8[2] = *((_QWORD *)a1 + 2);
  LODWORD(v8[3]) = *(_DWORD *)((char *)a1 + 706);
  WORD2(v8[3]) = *((_WORD *)a1 + 355);
  v8[4] = *(_QWORD *)((char *)a1 + 716);
  v3 = *((_BYTE *)a1 + 1883) != 0 ? 0x10 : 0;
  v9 = 0LL;
  v4 = *((_DWORD *)a1 + 170);
  v5 = v3 + 11;
  LODWORD(v9) = 2;
  v6 = v5 | 0x20;
  HIDWORD(v9) = v4;
  if ( !*((_BYTE *)a1 + 1880) )
    v6 = v5;
  if ( !(unsigned int)MITSynthesizeMouseInput(v8, v6, &v9) )
    return (unsigned int)-2147024809;
  return v2;
}
