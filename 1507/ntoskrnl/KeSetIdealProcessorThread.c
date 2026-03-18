/*
 * XREFs of KeSetIdealProcessorThread @ 0x140043D40
 * Callers:
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 * Callees:
 *     KeSetIdealProcessorThreadEx @ 0x140118AF4 (KeSetIdealProcessorThreadEx.c)
 */

UCHAR __stdcall KeSetIdealProcessorThread(PKTHREAD Thread, UCHAR Processor)
{
  unsigned __int16 Group; // ax
  __int64 IdealProcessor; // rax
  int v4; // ecx
  __int64 v6; // rdx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( Thread == KeGetCurrentThread() )
    Group = Thread->Affinity.Group;
  else
    Group = Thread->UserAffinity.Group;
  if ( Group || Processor )
  {
    if ( Processor >= 0x40u
      || Group >= (unsigned __int16)KiMaximumGroups
      || (v6 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * Group + Processor], !(_DWORD)v6)
      || (_DWORD)v6 == -1 )
    {
      if ( Thread == KeGetCurrentThread() )
        IdealProcessor = Thread->IdealProcessor;
      else
        IdealProcessor = Thread->UserIdealProcessor;
    }
    else
    {
      KeSetIdealProcessorThreadEx(Thread, v6, &v7);
      IdealProcessor = v7;
    }
  }
  else
  {
    KeSetIdealProcessorThreadEx(Thread, 0LL, &v7);
    IdealProcessor = v7;
  }
  if ( !(_DWORD)IdealProcessor )
    return 0;
  if ( (unsigned int)IdealProcessor < 0x280 )
  {
    v4 = KiProcessorIndexToNumberMappingTable[IdealProcessor];
    if ( v4 )
      return v4 & 0x3F;
  }
  return BYTE2(v7);
}
