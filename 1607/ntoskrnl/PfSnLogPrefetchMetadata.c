/*
 * XREFs of PfSnLogPrefetchMetadata @ 0x1404EA15C
 * Callers:
 *     PfSnPrefetchMetadata @ 0x1404EB4C8 (PfSnPrefetchMetadata.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PfSnLogPrefetchMetadata(__int64 a1, int a2, char a3)
{
  REGHANDLE v3; // rdi
  const EVENT_DESCRIPTOR *v4; // rbx
  __int64 v6; // rax
  __int16 v7; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+50h] [rbp-9h]
  int v10; // [rsp+58h] [rbp-1h]
  int v11; // [rsp+5Ch] [rbp+3h]
  __int64 v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  __int64 v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+C8h] [rbp+6Fh] BYREF

  if ( a1 )
  {
    v18 = a2;
    v3 = RegHandle;
    v4 = &ThreadStart;
    if ( !a3 )
      v4 = &PfSnEvt_PrefetchMetadata_Stop;
    if ( RegHandle && EtwEventEnabled(RegHandle, v4) )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( *(_WORD *)(a1 + 16 + 2 * v6) );
      v7 = v6;
      UserData.Ptr = (ULONGLONG)&v7;
      v10 = 2 * (unsigned __int16)v6;
      v9 = a1 + 16;
      v12 = a1 + 76;
      *(_QWORD *)&UserData.Size = 2LL;
      v14 = a1 + 80;
      v11 = 0;
      v16 = &v18;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      EtwWrite(v3, v4, 0LL, 5u, &UserData);
    }
  }
}
