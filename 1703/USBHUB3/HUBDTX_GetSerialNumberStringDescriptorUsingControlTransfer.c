/*
 * XREFs of HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C0023534
 * Callers:
 *     HUBDSM_GettingSerialNumberStringDescriptorWhileRenuemrating @ 0x1C001ADB0 (HUBDSM_GettingSerialNumberStringDescriptorWhileRenuemrating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C00225AC (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer(__int64 a1)
{
  char v1; // al
  int Descriptor; // edx
  __int64 v4; // [rsp+28h] [rbp-20h]

  v1 = *(_BYTE *)(a1 + 1988);
  Descriptor = -1073741637;
  if ( !v1 || (Descriptor = HUBDTX_GetDescriptor(a1, a1 + 1716, 255, 3, v1, 1033), Descriptor < 0) )
  {
    LODWORD(v4) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x3Fu,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v4);
    HUBSM_AddEvent(a1 + 488, 4004);
  }
}
