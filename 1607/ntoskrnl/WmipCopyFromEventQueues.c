/*
 * XREFs of WmipCopyFromEventQueues @ 0x140543F24
 * Callers:
 *     WmipReceiveNotifications @ 0x1400AD93C (WmipReceiveNotifications.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

LONG __fastcall WmipCopyFromEventQueues(
        struct _KEVENT **a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        char a7)
{
  __int64 v7; // rbp
  struct _KEVENT **v8; // rdi
  struct _KEVENT **v9; // r9
  __int64 i; // r10
  __int64 v11; // rdx
  __int64 v12; // rax
  int v14; // r15d
  _DWORD *v15; // r12
  unsigned int v16; // r8d
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r14
  unsigned int *v22; // rsi
  size_t v23; // r8
  unsigned int v24; // ebx
  __int64 v25; // rax
  struct _KEVENT *v26; // rsi
  LONG result; // eax
  struct _KEVENT *v28; // rsi
  __int64 p_WaitListHead; // rbx
  __int64 v30; // rax

  v7 = a2;
  v8 = a1;
  if ( a2 )
  {
    v9 = a1 + 1;
    for ( i = a2; i; --i )
    {
      v11 = (__int64)*(v9 - 1);
      if ( a7 )
      {
        v30 = *(_QWORD *)(v11 + 96);
        if ( v30 && *(_DWORD *)(v11 + 116) )
        {
          *v9 = (struct _KEVENT *)v30;
          *(_WORD *)(v30 + 10) = 0;
          LODWORD((*v9)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v11 + 120) << 16;
          *(_DWORD *)(v11 + 120) = 0;
          goto LABEL_6;
        }
      }
      else
      {
        v12 = *(_QWORD *)(v11 + 128);
        if ( v12 && *(_DWORD *)(v11 + 148) )
        {
          *v9 = (struct _KEVENT *)v12;
          *(_WORD *)(v12 + 10) = 0;
          LODWORD((*v9)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v11 + 152) << 16;
          *(_DWORD *)(v11 + 152) = 0;
          goto LABEL_6;
        }
      }
      *v9 = 0LL;
LABEL_6:
      v9 += 2;
    }
  }
  v14 = 0;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = -1;
    v17 = 0x7FFFFFFFFFFFFFFFLL;
    v18 = 0;
    if ( !(_DWORD)v7 )
      break;
    v19 = (__int64 *)(v8 + 1);
    do
    {
      v20 = *v19;
      if ( *v19 && *(_QWORD *)(v20 + 16) < v17 )
      {
        v17 = *(_QWORD *)(v20 + 16);
        v16 = v18;
      }
      ++v18;
      v19 += 2;
    }
    while ( v18 < (unsigned int)v7 );
    if ( v16 == -1 )
      break;
    v21 = 2LL * v16;
    v15 = a3;
    v22 = (unsigned int *)v8[2 * v16 + 1];
    v23 = *v22;
    v24 = (v23 + 7) & 0xFFFFFFF8;
    memmove(a3, v22, v23);
    v14 += v24;
    a3[3] = v24;
    a3 = (_DWORD *)((char *)a3 + v24);
    v25 = v22[3];
    if ( (_DWORD)v25 )
      v26 = (struct _KEVENT *)((char *)v22 + v25);
    else
      v26 = 0LL;
    v8[v21 + 1] = v26;
  }
  *a6 = v15;
  result = (int)a5;
  *a5 = v14;
  if ( (_DWORD)v7 )
  {
    do
    {
      v28 = *v8;
      p_WaitListHead = (__int64)&(*v8)[4];
      if ( !a7 )
        p_WaitListHead = (__int64)&v28[5].Header.WaitListHead;
      if ( *(_QWORD *)p_WaitListHead )
      {
        ExFreePoolWithTag(*(PVOID *)p_WaitListHead, 0);
        *(_QWORD *)p_WaitListHead = 0LL;
        *(_DWORD *)(p_WaitListHead + 20) = 0;
        *(_QWORD *)(p_WaitListHead + 8) = 0LL;
      }
      result = KeResetEvent(v28);
      v8 += 2;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
