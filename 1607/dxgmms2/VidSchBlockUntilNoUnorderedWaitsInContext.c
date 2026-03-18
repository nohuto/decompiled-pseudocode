/*
 * XREFs of VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C00A0A80
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E3F8 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0042420 (VidSchRegisterCompletionEvent.c)
 */

char __fastcall VidSchBlockUntilNoUnorderedWaitsInContext(__int64 a1)
{
  _DWORD *v1; // rdi
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD v7[21]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = (_DWORD *)(a1 + 796);
  v3 = *(_DWORD *)(a1 + 796);
  if ( v3 )
  {
    memset(v7, 0, 0xA0uLL);
    v4 = *(_QWORD *)(a1 + 104);
    LODWORD(v7[4]) |= 4u;
    LODWORD(v7[2]) = 1;
    v7[5] = v1;
    v5 = *(_QWORD *)(v4 + 32);
    VidSchRegisterCompletionEvent(v5, (__int64)v7);
    if ( *v1 )
      VidSchWaitForCompletionEvent(v5, (__int64)v7, 49LL);
    LOBYTE(v3) = VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v5 + 1872), v7, 0LL);
  }
  return v3;
}
