/*
 * XREFs of ExpWin32OkayToCloseProcedure @ 0x1404217D8
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 */

char __fastcall ExpWin32OkayToCloseProcedure(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // r11
  POBJECT_TYPE *v5; // rax
  __int64 v6; // rcx
  char v7; // bl
  _QWORD v9[3]; // [rsp+20h] [rbp-20h] BYREF
  char v10; // [rsp+38h] [rbp-8h]

  v4 = *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8);
  v9[0] = a1;
  v9[1] = a2;
  v9[2] = a3;
  v10 = a4;
  v5 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v4];
  if ( v5 == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v6 = 28LL;
  }
  else if ( v5 == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v6 = 19LL;
  }
  else if ( v5 == ExDesktopObjectType )
  {
    v6 = 9LL;
  }
  else
  {
    if ( v5 != (POBJECT_TYPE *)ExWindowStationObjectType )
      return 0;
    v6 = 12LL;
  }
  v7 = 1;
  if ( (int)PsInvokeWin32Callout(v6, v9, 1LL) < 0 )
    return 0;
  return v7;
}
