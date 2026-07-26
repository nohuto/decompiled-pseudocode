/*
 * XREFs of WPP_SF_l @ 0x1C003E314
 * Callers:
 *     ndisIfReferenceCompartmentForUser @ 0x1C0021CBC (ndisIfReferenceCompartmentForUser.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003B450 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C003E7CC (ndisIfDeregisterInterfaceEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_l(unsigned __int16 a1, __int64 a2, int a3)
{
  int v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, &v3, 4LL, 0LL);
}
