/*
 * XREFs of VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C0077B70
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C001E478 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0078B5C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchBlockUntilNoUnorderedWaitsInContext(__int64 a1)
{
  _DWORD *v1; // rdi
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD v7[21]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = (_DWORD *)(a1 + 772);
  v3 = *(_DWORD *)(a1 + 772);
  if ( v3 )
  {
    memset(v7, 0, 0xA0uLL);
    v4 = *(_QWORD *)(a1 + 104);
    LODWORD(v7[4]) |= 8u;
    LODWORD(v7[2]) = 1;
    v7[5] = v1;
    v5 = *(_QWORD *)(v4 + 32);
    VidSchRegisterCompletionEvent(v5, v7);
    if ( *v1 )
      VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v5);
    LOBYTE(v3) = VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v5 + 1888), v7, 0LL);
  }
  return v3;
}
