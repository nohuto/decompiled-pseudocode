/*
 * XREFs of KiIntSteerLogMask @ 0x1401DA510
 * Callers:
 *     KiIntSteerLogStatus @ 0x1401DA6E8 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     KiIntSteerEtwEventEnabled @ 0x14012DCE8 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall KiIntSteerLogMask(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-9h] BYREF
  int *v4; // [rsp+40h] [rbp+7h]
  int v5; // [rsp+48h] [rbp+Fh]
  int v6; // [rsp+4Ch] [rbp+13h]
  int *v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  int *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  __int64 *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  v1 = &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE;
  if ( a1 )
    v1 = &PPM_ETW_INTERRUPT_STEERING_MASK_RUNDOWN;
  result = KiIntSteerEtwEventEnabled(v1);
  if ( result )
  {
    UserData.Reserved = 0;
    v6 = 0;
    v9 = 0;
    v12 = 0;
    v15 = 0;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v4 = &KiIntTrackRootCount;
    v7 = &KiIntSteerMaskCount;
    v10 = &KiIntSteerMask;
    UserData.Size = 4;
    v5 = 4;
    v8 = 4;
    v13 = qword_1403079A8;
    v11 = 2;
    v14 = 160 * (unsigned __int16)KiIntSteerMask;
    return EtwWrite(KiIntSteerEtwHandle, v1, 0LL, 5u, &UserData);
  }
  return result;
}
