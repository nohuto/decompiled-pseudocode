/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1404A967C
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x1400E3F14 (RtlIsUntrustedObject.c)
 *     SeCompareSigningLevels @ 0x140448D98 (SeCompareSigningLevels.c)
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
  if ( qword_1402DBE30 )
    return (unsigned int)qword_1402DBE30(Object, a2, a3);
  if ( (unsigned int)SeCompareSigningLevels()
    || (unsigned __int8)SeILSigningPolicy >= 2u
    || (Process = KeGetCurrentThread()->ApcState.Process, (BYTE2(Process[2].SwapListEntry.Next) & 7) != 0)
    || v6 != 6 )
  {
    *a5 = v6;
    return (unsigned int)v5;
  }
  if ( (HIDWORD(Process[2].SwapListEntry.Next) & 0x2000) != 0 )
    goto LABEL_15;
  if ( !qword_1402DBDF8 )
    return (unsigned int)-1073741823;
  v5 = qword_1402DBDF8(Object, &v10, &v11);
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
