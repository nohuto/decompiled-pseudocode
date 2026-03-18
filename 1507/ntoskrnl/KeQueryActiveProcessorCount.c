/*
 * XREFs of KeQueryActiveProcessorCount @ 0x1402002E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCount(PKAFFINITY ActiveProcessors)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx

  if ( ActiveProcessors )
  {
    v1 = qword_1403D15E8[0];
    *ActiveProcessors = qword_1403D15E8[0];
    v2 = ((v1 - ((v1 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
       + (((v1 - ((v1 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    v3 = v2 >> 4;
  }
  else
  {
    if ( !KiActiveGroups )
    {
      LODWORD(v4) = 0;
      return v4;
    }
    v3 = ((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
       + (((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    v2 = v3 >> 4;
  }
  return (0x101010101010101LL * ((v2 + v3) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
}
