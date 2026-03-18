/*
 * XREFs of KiIntSteerEnabled @ 0x140155E7C
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140155D28 (KiIntSteerChooseInitialTargetProcessors.c)
 * Callees:
 *     <none>
 */

bool KiIntSteerEnabled()
{
  unsigned __int64 v0; // rcx

  LODWORD(v0) = 0;
  if ( KiInterruptSteeringDisabled
    || (HvlpFlags & 4) != 0
    || (_BYTE)dword_1403D0108
    || (unsigned __int16)KiActiveGroups > 1u )
  {
    return 0;
  }
  if ( KiActiveGroups )
    v0 = (0x101010101010101LL
        * ((((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
          + ((((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  return (unsigned int)v0 <= 8;
}
