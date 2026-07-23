/*
 * XREFs of ExpWin32OkayToCloseProcedure @ 0x14042A3C0
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 */

char __fastcall ExpWin32OkayToCloseProcedure(__int64 a1, int *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // r11
  POBJECT_TYPE *v5; // rax
  int v6; // ecx
  char v7; // bl
  _QWORD v9[3]; // [rsp+20h] [rbp-20h] BYREF
  char v10; // [rsp+38h] [rbp-8h]
  int v11; // [rsp+68h] [rbp+28h] BYREF

  v11 = *a2;
  v4 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v9[0] = a1;
  v9[1] = a2;
  v9[2] = a3;
  v10 = a4;
  v5 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v4];
  if ( v5 == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v6 = 34;
  }
  else if ( v5 == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v6 = 28;
  }
  else if ( v5 == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v6 = 19;
  }
  else if ( v5 == ExDesktopObjectType )
  {
    v6 = 9;
  }
  else
  {
    if ( v5 != (POBJECT_TYPE *)ExWindowStationObjectType )
      return 0;
    v6 = 12;
  }
  v7 = 1;
  if ( (int)PsInvokeWin32Callout(v6, (__int64)v9, 1, (__int64)&v11) < 0 )
    return 0;
  return v7;
}
