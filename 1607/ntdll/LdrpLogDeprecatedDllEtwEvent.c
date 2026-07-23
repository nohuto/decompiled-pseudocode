/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x1800826B0
 * Callers:
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 * Callees:
 *     CompatCachepLookupCdb @ 0x180010758 (CompatCachepLookupCdb.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     EtwEventRegister @ 0x18002A3B0 (EtwEventRegister.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     EtwNotificationUnregister @ 0x1800596F0 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x18005AF10 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

int __fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  wchar_t *v3; // rbx
  wchar_t *Heap; // rax
  unsigned int v5; // eax
  ULONGLONG RegHandle; // [rsp+20h] [rbp-28h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-20h] BYREF

  v2 = *a1;
  if ( v2 + 2 > a1[1] || (v3 = (wchar_t *)*((_QWORD *)a1 + 1), v3[v2 >> 1]) )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v2 + 2);
    v3 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, *((const void **)a1 + 1), *a1);
    v3[(unsigned __int64)*a1 >> 1] = 0;
  }
  LODWORD(Heap) = CompatCachepLookupCdb(v3, 4);
  if ( (_DWORD)Heap )
  {
    LODWORD(Heap) = EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, &RegHandle);
    if ( !(_DWORD)Heap )
    {
      v5 = *a1 + 2;
      UserData.Ptr = (unsigned __int64)v3;
      UserData.Size = v5;
      UserData.Reserved = 0;
      EtwEventWrite(RegHandle, &DeprecatedDll, 1u, &UserData);
      LODWORD(Heap) = EtwNotificationUnregister(RegHandle, 0LL);
    }
    if ( v3 != *((wchar_t **)a1 + 1) )
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return (int)Heap;
}
