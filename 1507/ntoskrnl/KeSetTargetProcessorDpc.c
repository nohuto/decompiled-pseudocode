/*
 * XREFs of KeSetTargetProcessorDpc @ 0x140204098
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTargetProcessorDpcEx @ 0x140128F58 (KeSetTargetProcessorDpcEx.c)
 */

void __stdcall KeSetTargetProcessorDpc(PRKDPC Dpc, CCHAR Number)
{
  unsigned __int16 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  if ( KeForceGroupAwareness )
    v3 = KiActiveGroups - 1;
  else
    v3 = 0;
  if ( v3 == 0xFFFF )
  {
    LODWORD(v4) = KeNumberProcessors_0;
  }
  else if ( v3 >= (unsigned __int16)KiActiveGroups )
  {
    LODWORD(v4) = 0;
  }
  else
  {
    v5 = qword_1403D15E8[v3] - (((unsigned __int64)qword_1403D15E8[v3] >> 1) & 0x5555555555555555LL);
    v4 = (0x101010101010101LL
        * (((v5 & 0x3333333333333333LL)
          + ((v5 >> 2) & 0x3333333333333333LL)
          + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  if ( Number < (unsigned int)v4 )
  {
    ProcNumber.Number = Number;
    ProcNumber.Group = v3;
    ProcNumber.Reserved = 0;
    KeSetTargetProcessorDpcEx(Dpc, &ProcNumber);
  }
}
