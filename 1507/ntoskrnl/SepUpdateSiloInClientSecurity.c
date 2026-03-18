/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x1406D5084
 * Callers:
 *     SeCreateClientSecurityEx @ 0x140481510 (SeCreateClientSecurityEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x14013A210 (PsIsHostSilo.c)
 *     SeQueryServerSiloToken @ 0x14054D97C (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1406D0D40 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x1406D5738 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepUpdateSiloInClientSecurity(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rbx
  int v6; // ebp
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  v2 = *(_QWORD **)(a1 + 16);
  v5 = v2[3];
  v10 = v5;
  v6 = SeQueryServerSiloToken((__int64)v2, &v9);
  if ( v6 >= 0 && PsIsHostSilo(v9) && (_DWORD)v5 == 999 && !HIDWORD(v10) )
  {
    v6 = SepCopyClientTokenAndSetSilo((__int64)v2, *(_DWORD *)(a1 + 4), a2, &v9);
    if ( v6 >= 0 )
    {
      v7 = v9;
      *(_QWORD *)(a1 + 16) = v9;
      *(_BYTE *)(a1 + 24) = 0;
      ObfDereferenceObject(v2);
      SeGetTokenControlInformation(v7, a1 + 28);
    }
  }
  return (unsigned int)v6;
}
