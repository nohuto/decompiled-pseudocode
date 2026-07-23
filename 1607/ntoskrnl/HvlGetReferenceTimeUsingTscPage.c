/*
 * XREFs of HvlGetReferenceTimeUsingTscPage @ 0x1401BCC3C
 * Callers:
 *     HvlGetReferenceTime @ 0x1401BCC08 (HvlGetReferenceTime.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x1401C12A0 (HvlpGetRegister64.c)
 *     RtlUnsignedMultiplyHigh @ 0x140216220 (RtlUnsignedMultiplyHigh.c)
 */

__int64 HvlGetReferenceTimeUsingTscPage()
{
  int v0; // edi
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v0 = *(_DWORD *)HvlpReferenceTscPage;
    if ( !*(_DWORD *)HvlpReferenceTscPage )
      break;
    v1 = *(_QWORD *)(HvlpReferenceTscPage + 16);
    v3 = v1 + RtlUnsignedMultiplyHigh(__rdtsc(), *(_QWORD *)(HvlpReferenceTscPage + 8));
    if ( *(_DWORD *)HvlpReferenceTscPage == v0 )
      return v3;
  }
  HvlpGetRegister64(589828LL, &v3);
  return v3;
}
