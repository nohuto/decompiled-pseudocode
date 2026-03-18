/*
 * XREFs of _SetClipboardData @ 0x1401B1CEC
 * Callers:
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 *     NtUserSetClipboardData @ 0x1402BC050 (NtUserSetClipboardData.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1401B1E8C (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1401B2074 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByV.c)
 */

__int64 __fastcall SetClipboardData(__int64 a1, char *a2, int a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct tagWINDOWSTATION *v9; // rsi
  unsigned int v10; // esi
  __int64 v12; // rax
  struct _KPROCESS *CurrentProcess; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  bool v17[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int CurrentProcessId; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h] BYREF
  LONGLONG v22[2]; // [rsp+70h] [rbp-10h] BYREF

  v7 = a1;
  v9 = CheckClipboardAccess(a1);
  if ( !v9 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x400000000000LL) != 0
    && (qword_1403AAA48 & 0x400000000000LL) == qword_1403AAA48 )
  {
    v12 = *((_QWORD *)v9 + 6);
    v20 = 0x2000000LL;
    v17[0] = a2 == 0LL;
    if ( v12 )
      v12 = *(_QWORD *)(v12 + 456) + 976LL;
    v21 = v12;
    v18 = v7;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v8);
    v22[0] = PsGetProcessCreateTimeQuadPart(CurrentProcess);
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v14,
      (unsigned int)&unk_140376A35,
      v15,
      v16,
      (__int64)&CurrentProcessId,
      (__int64)v22,
      (__int64)&v18,
      (__int64)&v21,
      (__int64)v17,
      (__int64)&v20);
  }
  v10 = InternalSetClipboardData(v9, v7, a2, a3, a4);
  if ( v10 )
  {
    if ( v7 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( v7 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v10;
}
