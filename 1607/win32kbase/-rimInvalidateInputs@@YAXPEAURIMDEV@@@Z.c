/*
 * XREFs of ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C00D88E8
 * Callers:
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00D8720 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C00CE90C (RIMDoMobileKeyboardInvalidation.c)
 */

void __fastcall rimInvalidateInputs(struct RIMDEV *a1)
{
  _BYTE *v1; // rdi
  int v3; // eax

  v1 = (_BYTE *)*((_QWORD *)a1 + 44);
  RIMLockExclusive((__int64)(v1 + 696));
  if ( *((_DWORD *)a1 + 79) )
    RIMEndAllActiveContacts((__int64)v1, *((_QWORD *)a1 + 60), 0LL);
  v3 = *((_DWORD *)a1 + 46);
  if ( (v3 & 0x1000) != 0 && (v3 & 0x2000) != 0 )
    RIMDoMobileKeyboardInvalidation(v1, (__int64)a1);
  RIMUnlockExclusive((__int64)(v1 + 696));
}
