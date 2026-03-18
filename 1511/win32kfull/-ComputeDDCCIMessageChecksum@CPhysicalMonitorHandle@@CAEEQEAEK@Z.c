/*
 * XREFs of ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEQEAEK@Z @ 0x1C025B2E0
 * Callers:
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025BE9C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEQEAEK@Z @ 0x1C025C3EC (-VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEQEAEK@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(
        unsigned __int8 a1,
        unsigned __int8 *const a2,
        unsigned int a3)
{
  unsigned __int8 result; // al
  __int64 v4; // rcx

  result = a1;
  if ( a1 == 111 )
    result = 80;
  if ( a3 )
  {
    v4 = a3;
    do
    {
      result ^= *a2++;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
