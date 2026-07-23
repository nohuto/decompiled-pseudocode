/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x14013713C
 * Callers:
 *     MiFreeInitializationCode @ 0x1403CDAD4 (MiFreeInitializationCode.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  unsigned __int8 v10; // r12
  char v11; // dl
  char v12; // al
  char v13; // al
  _SLIST_HEADER *v14; // rbx
  _SLIST_HEADER *v15; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 )
  {
    v2 = 0LL;
    v3 = 48 * a1 - 0x58000000000LL;
    v4 = 0LL;
    v5 = v3 + 48 * a2;
    v6 = 0LL;
    v7 = -1;
    do
    {
      if ( (_WORD)v7 != ((*(_QWORD *)(v3 + 40) >> 58) & 0x3F) )
      {
        if ( v6 )
        {
          v15 = &qword_1402FE6C0[26 * v7];
          KeAcquireInStackQueuedSpinLock(&v15[19].Region, &LockHandle);
          *v4 = v15[20].Alignment;
          v15[19].Alignment += v6;
          v15[20].Alignment = v2;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v6 = 0LL;
          v2 = 0LL;
          v4 = 0LL;
        }
        v7 = (unsigned __int8)HIBYTE(*(_QWORD *)(v3 + 40)) >> 2;
      }
      v8 = MiLockPageInline(v3);
      v9 = *(_QWORD *)(v3 + 24);
      v10 = v8;
      *(_BYTE *)(v3 + 34) &= 0xC7u;
      v11 = *(_BYTE *)(v3 + 34);
      v12 = *(_BYTE *)(v3 + 35) & 0xDF;
      *(_WORD *)(v3 + 32) = 1;
      *(_QWORD *)(v3 + 24) = v9 & 0xC000000000000000uLL | 1;
      *(_BYTE *)(v3 + 35) = v12 | 0x10;
      *(_QWORD *)(v3 + 16) = 128LL;
      *(_QWORD *)(v3 + 40) &= 0xFC3FFFF000000000uLL;
      if ( (v11 & 0xC0) != 0x40 )
        MiChangePageAttribute(v3, 1, 3u);
      v13 = *(_BYTE *)(v3 + 34) & 0xFE;
      *(_QWORD *)(v3 + 8) = -8LL;
      *(_BYTE *)(v3 + 34) = v13 | 6;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
      *(_QWORD *)v3 = v2;
      v2 = v3;
      if ( !v4 )
        v4 = (_QWORD *)v3;
      ++v6;
      v3 += 48LL;
    }
    while ( v3 < v5 );
    v14 = &qword_1402FE6C0[26 * v7];
    KeAcquireInStackQueuedSpinLock(&v14[19].Region, &LockHandle);
    *v4 = v14[20].Alignment;
    v14[19].Alignment += v6;
    v14[20].Alignment = v2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
