/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x1404CDFEC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeRundownQueueEx @ 0x140112874 (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1404CED94 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x1404CEEAC (EtwpRundownNotifications.c)
 *     EtwpReleaseQueueEntry @ 0x1404D5B54 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1404D5C00 (EtwpUnreferenceDataBlock.c)
 *     EtwpQueueReply @ 0x140555B84 (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  ULONG_PTR v1; // r15
  ULONG_PTR v3; // r14
  __int64 *v4; // rdx
  __int64 **v5; // rax
  __int64 v6; // r8
  __int64 **v7; // rdx
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  volatile __int64 *v10; // rbp
  _QWORD *v11; // rsi
  __int64 result; // rax
  void *v13; // rbp
  __int64 v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  _DWORD v21[14]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v22; // [rsp+68h] [rbp-30h]

  v1 = BugCheckParameter2[4];
  v3 = BugCheckParameter2[5];
  KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
  v4 = (__int64 *)*BugCheckParameter2;
  v5 = (__int64 **)BugCheckParameter2[1];
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v5 != BugCheckParameter2 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (__int64)v5;
  v6 = BugCheckParameter2[2];
  v7 = (__int64 **)BugCheckParameter2[3];
  if ( *(__int64 **)(v6 + 8) != BugCheckParameter2 + 2 || *v7 != BugCheckParameter2 + 2 )
    __fastfail(3u);
  *v7 = (__int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseMutex(&EtwpNotificationMutex, 0);
  *((_BYTE *)BugCheckParameter2 + 98) &= ~0x80u;
  v8 = 4LL;
  v9 = *((_BYTE *)BugCheckParameter2 + 98);
  if ( (v9 & 2) != 0 )
  {
    v10 = BugCheckParameter2 + 6;
    do
    {
      v11 = (_QWORD *)_InterlockedExchange64(v10, 0LL);
      if ( v11 )
      {
        v17 = v11[4];
        if ( (*(_BYTE *)(v17 + 98) & 0x40) == 0 )
        {
          v18 = *(_OWORD *)(v1 + 24);
          v19 = *(_QWORD *)(v17 + 48);
          v21[1] = 72;
          v22 = v18;
          v21[0] = 1;
          EtwpQueueReply(v19, v21);
        }
        EtwpReleaseQueueEntry(v11);
      }
      ++v10;
      --v8;
    }
    while ( v8 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v9 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v9, 0LL);
    v13 = (void *)BugCheckParameter2[6];
    v14 = KeRundownQueueEx((unsigned __int64)v13, 1);
    v15 = (_QWORD *)v14;
    if ( v14 )
    {
      v16 = (_QWORD *)v14;
      do
      {
        v20 = v16;
        v16 = (_QWORD *)*v16;
        EtwpUnreferenceDataBlock(v20[2]);
        ExFreePoolWithTag(v20, 0);
      }
      while ( v15 != v16 );
    }
    ExFreePoolWithTag(v13, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v3 )
    return EtwpUnreferenceGuidEntry(v3);
  return result;
}
