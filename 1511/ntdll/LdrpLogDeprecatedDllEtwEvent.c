/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x18007E788
 * Callers:
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     EtwNotificationUnregister @ 0x180047E50 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x180049CE0 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x1800541A0 (EtwEventRegister.c)
 *     CompatCachepLookupCdb @ 0x180075C80 (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
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
