/*
 * XREFs of _OpenClipboard @ 0x1401AFF98
 * Callers:
 *     NtUserOpenClipboard @ 0x1401AF7E0 (NtUserOpenClipboard.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401B0E64 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall OpenClipboard(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v5; // rcx
  struct tagWINDOWSTATION *v6; // rdi
  struct tagTHREADINFO *v7; // rbp
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rax
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    v6 = CheckClipboardAccess(a1);
    if ( v6 )
    {
      v7 = PtiCurrent(v5);
      v8 = (struct tagTHREADINFO *)*((_QWORD *)v6 + 6);
      if ( a1 == *((_QWORD *)v6 + 8) )
      {
        if ( v7 == v8 )
          return 1LL;
LABEL_8:
        v14[0] = (char *)v6 + 64;
        v14[1] = a1;
        HMAssignmentLock(v14, 0LL);
        *((_QWORD *)v6 + 6) = v7;
        if ( a2 )
        {
          v9 = *((_QWORD *)v6 + 10);
          if ( !v9 || *((_QWORD *)v7 + 57) != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 456LL) )
            v2 = 1;
          *a2 = v2;
          *(_DWORD *)(*((_QWORD *)v7 + 57) + 696LL) = *((_DWORD *)v6 + 27);
        }
        return 1LL;
      }
      if ( !v8 )
        goto LABEL_8;
      UserSetLastError(5);
      if ( (unsigned int)dword_1403AAA30 > 5
        && (qword_1403AAA40 & 0x400000000000LL) != 0
        && (qword_1403AAA48 & 0x400000000000LL) == qword_1403AAA48 )
      {
        v11 = *(_QWORD *)(*((_QWORD *)v6 + 6) + 456LL);
        v16 = v11 + 976;
        v15 = *(_DWORD *)(v11 + 56);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v11,
          (unsigned int)&unk_140376AA8,
          v12,
          v13,
          (__int64)&v15,
          (__int64)&v16);
      }
    }
  }
  return 0LL;
}
