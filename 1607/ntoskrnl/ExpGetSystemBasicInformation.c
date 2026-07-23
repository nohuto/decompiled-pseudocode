/*
 * XREFs of ExpGetSystemBasicInformation @ 0x14000EEC4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140413488 (MmGetNumberOfPhysicalPages.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemBasicInformation(__int64 a1)
{
  int Group; // ecx
  unsigned __int64 v3; // rcx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  _DWORD *v5; // r8
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v9; // ecx

  Group = KeGetCurrentPrcb()->Group;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = 0x7FFFFFFEFFFFLL;
  if ( (unsigned __int16)Group >= (unsigned __int16)KeActiveProcessors )
    v3 = 0LL;
  else
    v3 = qword_1403AA618[Group];
  *(_QWORD *)(a1 + 48) = v3;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages();
  v7 = -1;
  v8 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v8 = NumberOfPhysicalPages;
  v5[3] = v8;
  v9 = -1;
  if ( *(_QWORD *)(*(_QWORD *)qword_140327038 + 6272LL) <= 0xFFFFFFFFuLL )
    v9 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6272LL);
  v5[4] = v9;
  if ( *(_QWORD *)(*(_QWORD *)qword_140327038 + 6280LL) <= 0xFFFFFFFFuLL )
    v7 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6280LL);
  v5[5] = v7;
  return v6;
}
