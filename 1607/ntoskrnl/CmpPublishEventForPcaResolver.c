/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x1404D32E0
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall CmpPublishEventForPcaResolver(unsigned __int16 *a1)
{
  int v2; // r8d
  unsigned __int16 *v3; // rdx
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  int v6; // ecx
  __int16 v7; // [rsp+30h] [rbp-9h] BYREF
  __int16 v8; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v10; // [rsp+50h] [rbp+17h]
  int v11; // [rsp+58h] [rbp+1Fh]
  int v12; // [rsp+5Ch] [rbp+23h]
  __int16 *v13; // [rsp+60h] [rbp+27h]
  int v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+6Ch] [rbp+33h]
  __int64 v16; // [rsp+70h] [rbp+37h]
  int v17; // [rsp+78h] [rbp+3Fh]
  int v18; // [rsp+7Ch] [rbp+43h]

  if ( EtwAppCompatProvRegHandle )
  {
    if ( EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED) )
    {
      v2 = *a1;
      v3 = (unsigned __int16 *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
      v4 = *v3;
      UserData.Reserved = 0;
      v7 = v4 >> 1;
      v8 = (unsigned __int16)v2 >> 1;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 2;
      v5 = *((_QWORD *)v3 + 1);
      v6 = *v3;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v10 = v5;
      v13 = &v8;
      v16 = *((_QWORD *)a1 + 1);
      v11 = v6;
      v14 = 2;
      v17 = v2;
      EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
    }
  }
}
