/*
 * XREFs of RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180070764
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044194 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpQueryValueKey @ 0x1800716D4 (LdrpQueryValueKey.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 */

__int64 __fastcall RtlpMuiRegLoadMachinePreferredUILanguages(__int64 a1, __int64 a2, _BYTE *a3, __int64 *a4)
{
  const WCHAR *Heap; // rsi
  int v8; // ebx
  int v9; // ecx
  int v11; // r8d
  HANDLE Handle; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  int v14; // [rsp+58h] [rbp-1h] BYREF
  __int64 v15; // [rsp+60h] [rbp+7h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+70h] [rbp+17h]
  __int128 v18; // [rsp+78h] [rbp+1Fh]
  unsigned int v19; // [rsp+C0h] [rbp+67h] BYREF
  int v20; // [rsp+C8h] [rbp+6Fh] BYREF

  Handle = 0LL;
  Heap = 0LL;
  v19 = 0;
  v20 = 7;
  if ( a1 && a3 && a4 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    Handle = 0LL;
    v15 = 0LL;
    p_DestinationString = &DestinationString;
    v14 = 48;
    v17 = 64;
    v18 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131097LL, &v14) < 0 )
      goto LABEL_6;
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v8 = -1073741772;
    v9 = LdrpQueryValueKey(Handle, &DestinationString, &v20, 0LL, &v19);
    if ( v9 == -1073741772 || !v19 )
      goto LABEL_6;
    if ( v9 != -2147483643 )
      goto LABEL_7;
    Heap = (const WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v19 + 2);
    if ( !Heap )
    {
      v8 = -1073741801;
      goto LABEL_7;
    }
    v8 = LdrpQueryValueKey(Handle, &DestinationString, &v20, Heap, &v19);
    if ( v8 >= 0 )
    {
      if ( v20 == 7 || v20 == 1 )
      {
        v11 = v19 >> 1;
        *a3 = 0;
        v8 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, Heap, v11, 8, 3, 1u, a4);
        goto LABEL_7;
      }
LABEL_6:
      v8 = 0;
      *a3 = 1;
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_7:
  if ( Handle )
    NtClose(Handle);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  return (unsigned int)v8;
}
