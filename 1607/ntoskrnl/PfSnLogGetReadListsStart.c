/*
 * XREFs of PfSnLogGetReadListsStart @ 0x1404E9DA8
 * Callers:
 *     PfSnPrefetchSections @ 0x1404E9EA4 (PfSnPrefetchSections.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PfSnLogGetReadListsStart(__int64 a1, int a2)
{
  REGHANDLE v2; // rbx
  __int64 v4; // rax
  __int16 v5; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+50h] [rbp+7h]
  int v8; // [rsp+58h] [rbp+Fh]
  int v9; // [rsp+5Ch] [rbp+13h]
  __int64 v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  __int64 v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  int *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( a1 )
  {
    v16 = a2;
    v2 = RegHandle;
    if ( RegHandle )
    {
      if ( EtwEventEnabled(RegHandle, &PfSnEvt_GetReadLists_Start) )
      {
        v4 = -1LL;
        do
          ++v4;
        while ( *(_WORD *)(a1 + 16 + 2 * v4) );
        v5 = v4;
        UserData.Ptr = (ULONGLONG)&v5;
        v8 = 2 * (unsigned __int16)v4;
        v7 = a1 + 16;
        v10 = a1 + 76;
        *(_QWORD *)&UserData.Size = 2LL;
        v12 = a1 + 80;
        v9 = 0;
        v14 = &v16;
        v11 = 4LL;
        v13 = 4LL;
        v15 = 4LL;
        EtwWrite(v2, &PfSnEvt_GetReadLists_Start, 0LL, 5u, &UserData);
      }
    }
  }
}
