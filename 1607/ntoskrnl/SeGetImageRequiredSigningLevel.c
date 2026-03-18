/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x140520A4C
 * Callers:
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     MiCreateNewSection @ 0x140522048 (MiCreateNewSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x1400FC880 (RtlIsUntrustedObject.c)
 *     SeCompareSigningLevels @ 0x14045D1E0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  NTSTATUS IsUntrustedObject; // edi
  char v6; // bl
  _KPROCESS *Process; // rcx
  char v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+31h] [rbp-17h] BYREF
  _BYTE v12[22]; // [rsp+32h] [rbp-16h] BYREF

  IsUntrustedObject = 0;
  v6 = a3;
  if ( qword_140301190 )
    return (unsigned int)qword_140301190(a1, a2, a3);
  if ( (unsigned int)SeCompareSigningLevels()
    || (unsigned __int8)SeILSigningPolicy >= 2u
    || (Process = KeGetCurrentThread()->ApcState.Process, (Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0)
    || v6 != 6 )
  {
    *a5 = v6;
    return (unsigned int)IsUntrustedObject;
  }
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x200000000000LL) != 0 )
    goto LABEL_15;
  if ( !qword_140301158 )
    return (unsigned int)-1073741823;
  IsUntrustedObject = qword_140301158(a1, &v10, &v11);
  if ( IsUntrustedObject >= 0 )
  {
    if ( !v10 && !v11 )
    {
      IsUntrustedObject = RtlIsUntrustedObject(0LL, a1, v12);
      if ( IsUntrustedObject >= 0 )
        *a5 = v12[0] != 0 ? 6 : 0;
      return (unsigned int)IsUntrustedObject;
    }
LABEL_15:
    *a5 = 6;
  }
  return (unsigned int)IsUntrustedObject;
}
