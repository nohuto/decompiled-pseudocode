/*
 * XREFs of ?ndisMPeriodicPendingReceives@@YAEPEAXPEAU_NET_BUFFER_LIST@@KKKPEAPEAU1@@Z @ 0x1C006259C
 * Callers:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C00641AC (ndisMQueueReceiveNetBufferLists.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMPeriodicPendingReceives(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *Alignment,
        int a3,
        unsigned int a4,
        char a5,
        struct _NET_BUFFER_LIST **a6)
{
  struct _NET_BUFFER_LIST *v6; // r15
  __int64 v7; // r14
  KIRQL v8; // r13
  KSPIN_LOCK *v9; // rbp
  bool v10; // si
  KSPIN_LOCK *v13; // rcx
  char v14; // r12
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _NET_BUFFER_LIST *i; // rax
  bool result; // al

  v6 = 0LL;
  v7 = a4;
  v8 = 0;
  v9 = a1 + 402;
  v10 = 0;
  v13 = a1 + 402;
  if ( (a5 & 1) != 0 )
  {
    v14 = 1;
    KeAcquireSpinLockAtDpcLevel(v13);
  }
  else
  {
    v14 = 0;
    v8 = KeAcquireSpinLockRaiseToDpc(v13);
  }
  a1[403] = KeGetCurrentThread();
  *((_DWORD *)a1 + 808) = 2493540;
  v15 = v7 + *((int *)a1 + 809);
  if ( *((_DWORD *)a1 + 802) == 1 && v15 < 0x3E8 )
  {
    *((_DWORD *)a1 + 822) += v7;
    v10 = 1;
    v16 = (_QWORD *)a1[407];
    if ( v16 )
      *v16 = Alignment;
    else
      a1[406] = Alignment;
    for ( i = Alignment; Alignment; Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment )
    {
      i = Alignment;
      LODWORD(Alignment->ProtocolReserved[0]) = a3;
    }
    *((_DWORD *)a1 + 819) += v7;
    *((_DWORD *)a1 + 809) += v7;
    a1[407] = i;
  }
  else
  {
    if ( !HIDWORD(v15) )
      v10 = (unsigned int)v15 >= 0x3E8;
    v6 = Alignment;
  }
  a1[403] = 0LL;
  *((_DWORD *)a1 + 808) = 0;
  if ( v14 )
    KeReleaseSpinLockFromDpcLevel(v9);
  else
    KeReleaseSpinLock(v9, v8);
  result = v10;
  *a6 = v6;
  return result;
}
