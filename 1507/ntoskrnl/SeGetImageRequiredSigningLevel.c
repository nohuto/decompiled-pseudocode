/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1405090C8
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x14012AE2C (RtlIsUntrustedObject.c)
 *     SeCompareSigningLevels @ 0x140509298 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(PVOID Object, __int64 a2, __int64 a3, char a4, _BYTE *a5)
{
  NTSTATUS v5; // edi
  char v6; // bl
  PVOID v7; // rsi
  char v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+31h] [rbp-17h] BYREF
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  v6 = a3;
  v7 = Object;
  if ( qword_14032C190 )
  {
    return (unsigned int)qword_14032C190(Object, a2, a3);
  }
  else
  {
    LOBYTE(a2) = a3;
    LOBYTE(Object) = a4;
    if ( (unsigned int)SeCompareSigningLevels(Object, a2)
      || (unsigned __int8)SeILSigningPolicy > 4u
      || (BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 7) != 0
      || v6 != 6 )
    {
      *a5 = v6;
    }
    else if ( qword_14032C158 )
    {
      v5 = qword_14032C158(v7, &v9, &v10);
      if ( v5 >= 0 )
      {
        if ( v9 || v10 )
        {
          *a5 = 6;
        }
        else
        {
          v5 = RtlIsUntrustedObject(0LL, v7, IsUntrustedObject);
          if ( v5 >= 0 )
            *a5 = IsUntrustedObject[0] != 0 ? 6 : 0;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v5;
}
