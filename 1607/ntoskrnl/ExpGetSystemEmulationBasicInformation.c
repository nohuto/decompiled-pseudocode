/*
 * XREFs of ExpGetSystemEmulationBasicInformation @ 0x1400A7798
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140413488 (MmGetNumberOfPhysicalPages.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemEmulationBasicInformation(__int64 a1)
{
  unsigned __int64 v2; // r10
  __int64 Group; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  _DWORD *v7; // r8
  unsigned int v8; // r9d
  int v9; // edx
  int v10; // eax
  int v11; // ecx

  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[18];
  Group = KeGetCurrentPrcb()->Group;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  if ( (unsigned __int16)Group >= (unsigned __int16)KeActiveProcessors )
    v4 = 0LL;
  else
    v4 = qword_1403AA618[Group];
  v5 = (unsigned int)v4 | HIDWORD(v4);
  *(_QWORD *)(a1 + 48) = v5;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = v2 - 1;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages();
  v9 = -1;
  v10 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v10 = NumberOfPhysicalPages;
  v7[3] = v10;
  v11 = -1;
  if ( *(_QWORD *)(*(_QWORD *)qword_140327038 + 6272LL) <= 0xFFFFFFFFuLL )
    v11 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6272LL);
  v7[4] = v11;
  if ( *(_QWORD *)(*(_QWORD *)qword_140327038 + 6280LL) <= 0xFFFFFFFFuLL )
    v9 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6280LL);
  v7[5] = v9;
  return v8;
}
