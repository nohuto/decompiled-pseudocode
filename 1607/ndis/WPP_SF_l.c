/*
 * XREFs of WPP_SF_l @ 0x1C0043094
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00119B4 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040174 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0043988 (ndisIfReferenceCompartmentForUser.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_l(unsigned __int16 a1, __int64 a2, int a3)
{
  int v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, &v3, 4LL, 0LL);
}
