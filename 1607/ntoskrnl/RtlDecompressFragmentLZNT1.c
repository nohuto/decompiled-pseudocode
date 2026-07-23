/*
 * XREFs of RtlDecompressFragmentLZNT1 @ 0x1404C4344
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400C4610 (LZNT1DecompressChunkNewThread.c)
 *     LZNT1DecompressChunk @ 0x140167D20 (LZNT1DecompressChunk.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall RtlDecompressFragmentLZNT1(
        char *a1,
        unsigned int a2,
        __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8)
{
  __int16 *v8; // rdi
  char *v9; // rsi
  unsigned __int64 v10; // r13
  int v11; // ebx
  __int16 v12; // ax
  __int16 v13; // cx
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int16 *v16; // rcx
  __int16 *v17; // r15
  _BYTE *v18; // r12
  unsigned int v19; // r8d
  unsigned int v20; // edx
  int v21; // r14d
  bool v22; // zf
  _BYTE *v24; // rdx
  size_t v25; // r8
  int v26; // eax
  struct _LIST_ENTRY *v27; // [rsp+30h] [rbp-38h]
  struct _KEVENT Event; // [rsp+38h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-18h] BYREF
  int v30; // [rsp+B0h] [rbp+48h]
  unsigned int v31; // [rsp+B8h] [rbp+50h]
  int v32; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  v31 = a2;
  v30 = (int)a1;
  v8 = a3;
  v27 = (struct _LIST_ENTRY *)&a1[a2];
  v9 = a1;
  v10 = (unsigned __int64)a3 + a4;
  v11 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = *v8;
  v29 = 1LL;
  v13 = v12;
  v14 = a5;
  while ( 1 )
  {
    v32 = 4096;
    v15 = (v13 & 0xFFFu) + 3;
    if ( v14 < 0x1000 )
      break;
    v16 = (__int16 *)((char *)v8 + v15);
    if ( (unsigned __int64)v16 > v10 )
      goto LABEL_41;
    v14 -= 4096;
    v8 = v16;
    if ( (unsigned __int64)v16 > v10 - 2 || (v12 = *v16) == 0 )
    {
      *a7 = 0;
      goto LABEL_23;
    }
    v13 = *v16;
  }
  v17 = (__int16 *)((char *)v8 + (unsigned int)v15);
  if ( (unsigned __int64)v17 > v10 )
  {
LABEL_41:
    v11 = -1073741246;
    *a7 = (_DWORD)v8;
    goto LABEL_23;
  }
  v18 = a8;
  v19 = v31;
  while ( 1 )
  {
    v20 = v19;
    if ( 4096 - v14 < v19 )
      v20 = 4096 - v14;
    LODWORD(Size) = v20;
    if ( v12 >= 0 )
    {
      v25 = v20;
      if ( (unsigned __int64)v8 + v14 + (unsigned __int64)v20 + 2 > v10 )
        goto LABEL_41;
      v24 = (char *)v8 + v14 + 2;
LABEL_32:
      memmove(v9, v24, v25);
      goto LABEL_17;
    }
    if ( v14 || v20 != 4096 )
      break;
    v21 = a6;
    if ( a6 )
    {
      v11 = LZNT1DecompressChunkNewThread(
              (__int64)&Event,
              (unsigned __int64)v9,
              v27,
              (unsigned __int64)(v8 + 1),
              (__int64)v17,
              a6);
      if ( v11 < 0 )
        goto LABEL_35;
      LODWORD(Size) = v21;
    }
    else
    {
      v11 = LZNT1DecompressChunk(v9, v27, (_BYTE *)v8 + 2, (__int64)v17, &Size);
      if ( v11 < 0 )
      {
LABEL_35:
        v26 = Size;
        goto LABEL_39;
      }
    }
LABEL_17:
    v14 = 0;
    v9 += (unsigned int)Size;
    v22 = v31 == (_DWORD)Size;
    v19 = v31 - Size;
    v31 -= Size;
    if ( v22 )
      goto LABEL_22;
    v8 = v17;
    if ( (unsigned __int64)v17 > v10 - 2 )
      goto LABEL_22;
    v12 = *v17;
    if ( !*v17 )
      goto LABEL_22;
    v32 = 4096;
    v17 = (__int16 *)((char *)v17 + (v12 & 0xFFFu) + 3);
    if ( (unsigned __int64)v17 > v10 )
      goto LABEL_41;
  }
  v11 = LZNT1DecompressChunk(v18, v18 + 4096, (_BYTE *)v8 + 2, (__int64)v17, &v32);
  if ( v11 >= 0 )
  {
    v24 = &v18[v14];
    if ( v32 - v14 < (unsigned int)Size )
    {
      memmove(v9, v24, v32 - v14);
      LODWORD(v9) = v32 - v14 + (_DWORD)v9;
LABEL_22:
      *a7 = (_DWORD)v9 - v30;
      goto LABEL_23;
    }
    v25 = (unsigned int)Size;
    goto LABEL_32;
  }
  v26 = v32;
LABEL_39:
  *a7 = v26;
LABEL_23:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v11 >= 0 && v29 < 0 )
    return (unsigned int)HIDWORD(v29);
  return (unsigned int)v11;
}
