/*
 * XREFs of ObpLookupDirectoryEntryEx @ 0x1406AB994
 * Callers:
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x1404D3780 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x140551904 (ObpCreateSymbolicLinkName.c)
 *     ObpLookupDirectoryEntry @ 0x140595F30 (ObpLookupDirectoryEntry.c)
 *     ObCreateObjectTypeEx @ 0x140595F64 (ObCreateObjectTypeEx.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ObpLookupDirectoryUsingHash @ 0x140491B20 (ObpLookupDirectoryUsingHash.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     ObpGetShadowDirectory @ 0x140510DC0 (ObpGetShadowDirectory.c)
 */

void *__fastcall ObpLookupDirectoryEntryEx(
        unsigned __int64 *Object,
        const UNICODE_STRING *a2,
        char a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  wchar_t *Buffer; // r15
  char v7; // r14
  bool v8; // r12
  unsigned int v9; // esi
  const UNICODE_STRING *v10; // rbp
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int128 v16; // rt0
  unsigned int v17; // edi
  unsigned int v18; // edx
  int v19; // edi
  void *v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 *ShadowDirectory; // rdi
  __int64 v24; // rdx
  signed __int64 v25; // rax
  signed __int64 v26; // rcx
  unsigned __int64 v27; // rtt
  void *v28; // rcx
  __int64 v29; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v31; // ax
  struct _KTHREAD *v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r9
  char v37; // [rsp+78h] [rbp+20h]

  v37 = a4;
  Buffer = a2->Buffer;
  v7 = a4;
  v8 = (a3 & 0x40) != 0;
  v9 = a2->Length >> 1;
  v10 = a2;
  if ( v9 < 4 )
  {
    v17 = 0;
  }
  else
  {
    v12 = 0LL;
    do
    {
      v13 = *(_QWORD *)Buffer;
      if ( (*(_QWORD *)Buffer & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v14 = 4LL;
        do
        {
          v15 = (unsigned __int16)v13;
          if ( (unsigned __int16)v13 >= 0x61u )
          {
            if ( (unsigned __int16)v13 <= 0x7Au )
              v15 = (unsigned int)(unsigned __int16)v13 - 32;
            else
              v15 = RtlUpcaseUnicodeChar(v13);
          }
          *(_QWORD *)&v16 = v13;
          *((_QWORD *)&v16 + 1) = v15;
          v13 = v16 >> 16;
          --v14;
        }
        while ( v14 );
      }
      else
      {
        v13 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      Buffer += 4;
      v9 -= 4;
      v12 = v13 + (v12 >> 1) + 3 * v12;
    }
    while ( v9 >= 4 );
    v10 = a2;
    v17 = v12 + HIDWORD(v12);
    v7 = v37;
  }
  while ( v9 )
  {
    v18 = *Buffer++;
    v19 = (v17 >> 1) + 3 * v17;
    --v9;
    if ( v18 < 0x61 )
      goto LABEL_18;
    if ( v18 <= 0x7A )
    {
      v19 -= 32;
LABEL_18:
      v17 = v18 + v19;
    }
    else
    {
      v17 = RtlUpcaseUnicodeChar(v18) + v19;
    }
  }
  *(_DWORD *)(a6 + 24) = v17;
  LOBYTE(a4) = v8;
  *(_WORD *)(a6 + 28) = v17 % 0x25;
  v20 = ObpLookupDirectoryUsingHash(Object, v10, a6, a4);
  if ( !v20 && v7 )
  {
    do
    {
      ShadowDirectory = (unsigned __int64 *)ObpGetShadowDirectory((__int64)Object, a5, v21, v22);
      if ( ShadowDirectory )
      {
        if ( *(_BYTE *)(a6 + 30) )
        {
          ObfReferenceObject(Object);
          _m_prefetchw(Object + 37);
          v25 = Object[37];
          v26 = v25 - 16;
          if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v26 = 0LL;
          if ( (v25 & 2) != 0
            || (v27 = Object[37], v27 != _InterlockedCompareExchange64((volatile signed __int64 *)Object + 37, v26, v25)) )
          {
            ExfReleasePushLock(Object + 37, v24);
          }
          KeAbPostRelease((ULONG_PTR)(Object + 37));
          v28 = *(void **)a6;
          *(_DWORD *)(a6 + 32) = -286387660;
          ObfDereferenceObject(v28);
          *(_QWORD *)a6 = 0LL;
          *(_WORD *)(a6 + 30) = 0;
          CurrentThread = KeGetCurrentThread();
          v31 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v31;
          if ( !v31
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          *(_DWORD *)(a6 + 32) = -1145368012;
          v32 = KeGetCurrentThread();
          --v32->KernelApcDisable;
          v33 = KeAbPreAcquire((ULONG_PTR)(ShadowDirectory + 37), 0LL, 0LL, v29);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)ShadowDirectory + 37, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(ShadowDirectory + 37, v33, (ULONG_PTR)(ShadowDirectory + 37), v34);
          if ( v33 )
            *(_BYTE *)(v33 + 26) |= 1u;
          *(_DWORD *)(a6 + 32) = -572714444;
          ObfReferenceObject(ShadowDirectory);
          *(_QWORD *)a6 = ShadowDirectory;
          *(_WORD *)(a6 + 30) = 1;
          ObfDereferenceObject(Object);
        }
        LOBYTE(v22) = v8;
        v20 = ObpLookupDirectoryUsingHash(ShadowDirectory, a2, a6, v22);
      }
      Object = ShadowDirectory;
    }
    while ( !v20 && ShadowDirectory );
  }
  return v20;
}
