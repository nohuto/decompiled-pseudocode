/*
 * XREFs of ExpGetSystemEmulationBasicInformation @ 0x14012705C
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x14040A5E8 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemEmulationBasicInformation(__int64 a1)
{
  __int64 Group; // r9
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  Group = KeGetCurrentPrcb()->Group;
  v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[17];
  if ( (unsigned __int16)Group >= LOWORD(KeActiveProcessors[0]) )
    v4 = 0LL;
  else
    v4 = qword_1403D15E8[Group];
  v5 = (unsigned int)v4 | HIDWORD(v4);
  *(_QWORD *)(a1 + 48) = v5;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 12) = *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5328LL);
  *(_DWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5312LL);
  *(_DWORD *)(a1 + 20) = *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5320LL);
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = v3 - 1;
  return 0LL;
}
