/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x140503AB4
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x1400FA600 (RtlIsUntrustedObject.c)
 *     SeCompareSigningLevels @ 0x14045C0B0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(PVOID Object, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  NTSTATUS v5; // edi
  char v6; // bl
  _KPROCESS *Process; // rcx
  char v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+31h] [rbp-17h] BYREF
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  v6 = a3;
  if ( qword_140301190 )
    return (unsigned int)qword_140301190(Object, a2, a3);
  if ( (unsigned int)SeCompareSigningLevels()
    || (unsigned __int8)SeILSigningPolicy >= 2u
    || (Process = KeGetCurrentThread()->ApcState.Process, (Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0)
    || v6 != 6 )
  {
    *a5 = v6;
    return (unsigned int)v5;
  }
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x200000000000LL) != 0 )
    goto LABEL_15;
  if ( !qword_140301158 )
    return (unsigned int)-1073741823;
  v5 = qword_140301158(Object, &v10, &v11);
  if ( v5 >= 0 )
  {
    if ( !v10 && !v11 )
    {
      v5 = RtlIsUntrustedObject(0LL, Object, IsUntrustedObject);
      if ( v5 >= 0 )
        *a5 = IsUntrustedObject[0] != 0 ? 6 : 0;
      return (unsigned int)v5;
    }
LABEL_15:
    *a5 = 6;
  }
  return (unsigned int)v5;
}
