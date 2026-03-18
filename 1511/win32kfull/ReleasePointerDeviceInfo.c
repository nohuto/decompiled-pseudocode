/*
 * XREFs of ReleasePointerDeviceInfo @ 0x1C01CE000
 * Callers:
 *     FreeDeviceInfo @ 0x1C01DA0F0 (FreeDeviceInfo.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     FreePointerDevice @ 0x1C01CC4B0 (FreePointerDevice.c)
 */

__int64 __fastcall ReleasePointerDeviceInfo(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  struct _LIST_ENTRY *v3; // rsi
  struct _LIST_ENTRY *v4; // rax

  v1 = *(_QWORD *)(a1 + 400);
  v2 = a1 + 416;
  v3 = *(struct _LIST_ENTRY **)(a1 + 416);
  v4 = (struct _LIST_ENTRY *)Win32AllocPoolZInit(*(unsigned int *)(v1 + 104), 1668313941LL);
  v3[96].Flink = v4;
  if ( v4 )
    memmove(v4, *(const void **)(v1 + 16), *(unsigned int *)(v1 + 104));
  FreePointerDevice(v3);
  return HMAssignmentUnlock(v2);
}
