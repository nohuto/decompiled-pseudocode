/*
 * XREFs of NtUserCloseClipboard @ 0x1401B0120
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCloseClipboard @ 0x1401B02A0 (xxxCloseClipboard.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401B03C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     UserGetLastError @ 0x1401B0B24 (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401B0F10 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8
  int v6; // eax
  bool v7; // sf
  signed int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  signed int LastError; // eax
  signed int v13; // [rsp+70h] [rbp+28h] BYREF
  __int64 v14; // [rsp+78h] [rbp+30h] BYREF
  const char *v15; // [rsp+80h] [rbp+38h] BYREF
  __int64 v16; // [rsp+88h] [rbp+40h] BYREF

  EnterCrit(0LL, 0LL);
  v1 = *((_QWORD *)PtiCurrent(v0) + 57) + 976LL;
  v3 = (int)xxxCloseClipboard(0LL);
  if ( (unsigned int)dword_1403AA9F8 > 5
    && (qword_1403AAA08 & 0x400000000000LL) != 0
    && (qword_1403AAA10 & 0x400000000000LL) == qword_1403AAA10 )
  {
    v14 = v1;
    if ( (_DWORD)v3 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v13 = LastError;
    v15 = "FunctionExit";
    v16 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v2,
      &unk_1403766D1,
      v4,
      &v16,
      &v15,
      &v13,
      &v14);
  }
  if ( !(_DWORD)v3 )
  {
    v6 = UserGetLastError();
    v7 = v6 < 0;
    if ( v6 > 0 )
      v7 = 1;
    if ( v7
      && (unsigned int)dword_1403AAA30 > 5
      && (qword_1403AAA40 & 1) != 0
      && (qword_1403AAA48 & 1) == qword_1403AAA48 )
    {
      v14 = v1;
      v8 = UserGetLastError();
      if ( v8 > 0 )
        v8 = (unsigned __int16)v8 | 0x80070000;
      v13 = v8;
      v15 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v9,
        (unsigned int)&unk_140376647,
        v10,
        v11,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v14);
    }
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
