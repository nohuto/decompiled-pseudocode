/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1405090C8
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x14012AE2C (RtlIsUntrustedObject.c)
 *     SeCompareSigningLevels @ 0x140509298 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 a1, __int64 a2, __int64 a3, char a4, _BYTE *a5)
{
  NTSTATUS IsUntrustedObject; // edi
  char v6; // bl
  __int64 v7; // rsi
  char v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+31h] [rbp-17h] BYREF
  _BYTE v11[22]; // [rsp+32h] [rbp-16h] BYREF

  IsUntrustedObject = 0;
  v6 = a3;
  v7 = a1;
  if ( qword_14032C190 )
  {
    return (unsigned int)qword_14032C190(a1, a2, a3);
  }
  else
  {
    LOBYTE(a2) = a3;
    LOBYTE(a1) = a4;
    if ( (unsigned int)SeCompareSigningLevels(a1, a2)
      || (unsigned __int8)SeILSigningPolicy > 4u
      || (BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 7) != 0
      || v6 != 6 )
    {
      *a5 = v6;
    }
    else if ( qword_14032C158 )
    {
      IsUntrustedObject = qword_14032C158(v7, &v9, &v10);
      if ( IsUntrustedObject >= 0 )
      {
        if ( v9 || v10 )
        {
          *a5 = 6;
        }
        else
        {
          IsUntrustedObject = RtlIsUntrustedObject(0LL, v7, v11);
          if ( IsUntrustedObject >= 0 )
            *a5 = v11[0] != 0 ? 6 : 0;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)IsUntrustedObject;
}
