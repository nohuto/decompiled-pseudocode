/*
 * XREFs of RtlDecompressBufferLZNT1 @ 0x1404E9BE0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400C4610 (LZNT1DecompressChunkNewThread.c)
 *     LZNT1DecompressChunk @ 0x140167D20 (LZNT1DecompressChunk.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RtlDecompressBufferLZNT1(
        struct _LIST_ENTRY *a1,
        unsigned int a2,
        __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int *a6)
{
  __int16 *v6; // rsi
  struct _LIST_ENTRY *v7; // r14
  struct _LIST_ENTRY *v8; // r15
  unsigned __int64 v9; // r13
  int v10; // edi
  __int16 v11; // bx
  __int16 v12; // ax
  int v13; // ebx
  unsigned int v14; // ecx
  int v15; // eax
  __int16 *v16; // r12
  unsigned int *v17; // rax
  unsigned int v19; // ecx
  size_t v20; // r8
  char *v21; // r12
  struct _KEVENT Event; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF
  int v24; // [rsp+90h] [rbp+40h]
  unsigned int v25; // [rsp+98h] [rbp+48h] BYREF

  v24 = (int)a1;
  v6 = a3;
  v7 = a1;
  v8 = (struct _LIST_ENTRY *)((char *)a1 + a2);
  v9 = (unsigned __int64)a3 + a4;
  v10 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v23 = 1LL;
  v11 = *v6;
  v12 = *v6;
  v25 = 0;
  while ( 1 )
  {
    v15 = (v12 & 0xFFF) + 3;
    v16 = (__int16 *)((char *)v6 + v15);
    if ( (unsigned __int64)v16 > v9 )
    {
LABEL_33:
      v17 = a6;
LABEL_21:
      v10 = -1073741246;
      *v17 = (unsigned int)v6;
      goto LABEL_15;
    }
    if ( v11 >= 0 )
    {
      if ( (unsigned __int64)v15 < 2 )
        goto LABEL_33;
      v19 = v15 - 2;
      v25 = v15 - 2;
      if ( (struct _LIST_ENTRY *)((char *)v7 + (unsigned int)(v15 - 2)) > v8 )
      {
        v19 = (_DWORD)v8 - (_DWORD)v7;
        v25 = (_DWORD)v8 - (_DWORD)v7;
      }
      if ( (unsigned __int64)v6 + v19 + 2 > v9 )
        goto LABEL_33;
      memmove(v7, v6 + 1, v19);
LABEL_29:
      v14 = v25;
      goto LABEL_6;
    }
    v13 = a5;
    if ( !a5 )
    {
      v10 = LZNT1DecompressChunk(v7, v8, (_BYTE *)v6 + 2, (__int64)v16, &v25);
      if ( v10 < 0 )
      {
        *a6 = v25;
        goto LABEL_15;
      }
      goto LABEL_29;
    }
    v10 = LZNT1DecompressChunkNewThread(
            (__int64)&Event,
            (unsigned __int64)v7,
            v8,
            (unsigned __int64)(v6 + 1),
            (__int64)v6 + v15,
            a5);
    if ( v10 < 0 )
      break;
    v14 = v13;
    v25 = v13;
LABEL_6:
    v6 = v16;
    v7 = (struct _LIST_ENTRY *)((char *)v7 + v14);
    if ( v7 == v8 || (unsigned __int64)v16 > v9 - 2 || (v11 = *v16) == 0 )
    {
LABEL_13:
      v17 = a6;
      if ( (unsigned __int64)v6 <= v9 )
      {
        *a6 = (_DWORD)v7 - v24;
        goto LABEL_15;
      }
      goto LABEL_21;
    }
    if ( v14 < 0x1000 )
    {
      v20 = (int)(4096 - v14);
      v21 = (char *)v7 + v20;
      if ( (struct _LIST_ENTRY *)((char *)v7 + v20) >= v8 )
        goto LABEL_13;
      memset(v7, 0, v20);
      v7 = (struct _LIST_ENTRY *)v21;
    }
    v12 = v11;
  }
  *a6 = v25;
LABEL_15:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v23, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v10 >= 0 && v23 < 0 )
    return (unsigned int)HIDWORD(v23);
  return (unsigned int)v10;
}
