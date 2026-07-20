/*
 * XREFs of sub_140012BFC @ 0x140012BFC
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 *     sub_1400038D0 @ 0x1400038D0 (sub_1400038D0.c)
 *     sub_14000BC10 @ 0x14000BC10 (sub_14000BC10.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_140012B6C @ 0x140012B6C (sub_140012B6C.c)
 */

__int64 __fastcall sub_140012BFC(int **a1)
{
  int *v3; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 Parameters[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 2LL) != 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Unhandled Exception in Session Manager");
    v3 = *a1;
    Parameters[0] = (unsigned __int64)&DestinationString;
    Parameters[1] = *v3;
    Parameters[2] = *((_QWORD *)v3 + 2);
    Parameters[3] = (unsigned __int64)a1[1];
    sub_140012B6C(Parameters, 1u, 4u);
    JUMPOUT(0x140012C84LL);
  }
  return 0LL;
}
