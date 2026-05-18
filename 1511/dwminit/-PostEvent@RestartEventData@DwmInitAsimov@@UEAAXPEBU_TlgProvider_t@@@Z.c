/*
 * XREFs of ?PostEvent@RestartEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180005800
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800067F0 (__security_check_cookie.c)
 */

void __fastcall DwmInitAsimov::RestartEventData::PostEvent(
        DwmInitAsimov::RestartEventData *this,
        const struct _TlgProvider_t *a2,
        __int64 a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-39h] BYREF
  char *v5; // [rsp+50h] [rbp-19h]
  __int64 v6; // [rsp+58h] [rbp-11h]
  char *v7; // [rsp+60h] [rbp-9h]
  __int64 v8; // [rsp+68h] [rbp-1h]
  char *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  char *v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  char *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  char *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  if ( *(_DWORD *)a2 > 5u
    && (*((_QWORD *)a2 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)a2 + 3) & 0x400000000000LL) == *((_QWORD *)a2 + 3) )
  {
    v6 = 16LL;
    v5 = (char *)this + 16;
    v7 = (char *)this + 32;
    v9 = (char *)this + 36;
    v11 = (char *)this + 40;
    v13 = (char *)this + 56;
    v15 = (char *)this + 58;
    v8 = 4LL;
    v10 = 4LL;
    v12 = 16LL;
    v14 = 2LL;
    v16 = 2LL;
    TlgWrite(a2, &unk_180009B8D, (LPCGUID)a2, a4, 8u, &pData);
  }
}
