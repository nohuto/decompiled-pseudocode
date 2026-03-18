/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x14056BEA0
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 */

void __fastcall CmpPublishEventForPcaResolver(__int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int16 *v3; // rax
  unsigned __int16 v4; // cx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int16 v9; // [rsp+30h] [rbp-9h] BYREF
  __int16 v10; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v12; // [rsp+50h] [rbp+17h]
  int v13; // [rsp+58h] [rbp+1Fh]
  int v14; // [rsp+5Ch] [rbp+23h]
  __int16 *v15; // [rsp+60h] [rbp+27h]
  int v16; // [rsp+68h] [rbp+2Fh]
  int v17; // [rsp+6Ch] [rbp+33h]
  __int64 v18; // [rsp+70h] [rbp+37h]
  int v19; // [rsp+78h] [rbp+3Fh]
  int v20; // [rsp+7Ch] [rbp+43h]

  if ( EtwAppCompatProvRegHandle && EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED) )
  {
    v2 = CmpConstructName(a1);
    if ( v2 )
    {
      v3 = (unsigned __int16 *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[14];
      v10 = *v3 >> 1;
      v4 = *(_WORD *)v2;
      UserData.Reserved = 0;
      v9 = v4 >> 1;
      UserData.Ptr = (ULONGLONG)&v10;
      UserData.Size = 2;
      v5 = *v3;
      v6 = *((_QWORD *)v3 + 1);
      v14 = 0;
      v17 = 0;
      v12 = v6;
      v15 = &v9;
      v13 = v5;
      v16 = 2;
      v7 = v2[1];
      v8 = *(unsigned __int16 *)v2;
      v20 = 0;
      v18 = v7;
      v19 = v8;
      EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
      ExFreePoolWithTag(v2, 0x624E4D43u);
    }
  }
}
