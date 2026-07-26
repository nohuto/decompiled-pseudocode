/*
 * XREFs of WPP_SF_l @ 0x1C003F3BC
 * Callers:
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003C190 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C003FCD8 (ndisIfDeregisterInterfaceEx.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C003FE34 (ndisIfReferenceCompartmentForUser.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_l(unsigned __int16 a1, __int64 a2, int a3)
{
  int v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, &v3, 4LL, 0LL);
}
