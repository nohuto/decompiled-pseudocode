/*
 * XREFs of _RegisterPointerDeviceNotifications @ 0x1C00FC014
 * Callers:
 *     NtUserRegisterPointerDeviceNotifications @ 0x1C00FBF60 (NtUserRegisterPointerDeviceNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPointerDeviceNotifications(struct _LIST_ENTRY *a1, int a2)
{
  struct _LIST_ENTRY *Flink; // r8
  unsigned int v5; // ebx
  struct _LIST_ENTRY *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  struct _LIST_ENTRY **v9; // rcx

  Flink = gPointerDeviceClients.Flink;
  v5 = 0;
  while ( Flink != &gPointerDeviceClients )
  {
    v6 = Flink - 1;
    Flink = Flink->Flink;
    if ( v6->Flink == a1 )
      return v5;
  }
  v7 = (_QWORD *)Win32AllocPool(32LL, 2020635477LL);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0LL;
    HMAssignmentLock(v7, a1);
    *((_DWORD *)v8 + 2) = a2;
    v9 = (struct _LIST_ENTRY **)qword_1C03247B8;
    v8[2] = &gPointerDeviceClients;
    v8[3] = v9;
    if ( *v9 != &gPointerDeviceClients )
      __fastfail(3u);
    *v9 = (struct _LIST_ENTRY *)(v8 + 2);
    v5 = 1;
    qword_1C03247B8 = (__int64)(v8 + 2);
  }
  return v5;
}
