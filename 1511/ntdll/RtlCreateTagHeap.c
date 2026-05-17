/*
 * XREFs of RtlCreateTagHeap @ 0x18004EF00
 * Callers:
 *     TpInitializePackage @ 0x18004EE54 (TpInitializePackage.c)
 *     CsrClientConnectToServer @ 0x180051EF0 (CsrClientConnectToServer.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlDebugCreateTagHeap @ 0x1800EF078 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x18001C134 (RtlStringCbCopyW.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpAllocateTags @ 0x1800E08D4 (RtlpAllocateTags.c)
 *     RtlDebugCreateTagHeap @ 0x1800EF078 (RtlDebugCreateTagHeap.c)
 */

__int64 __fastcall RtlCreateTagHeap(void *Src, int a2, __int64 a3, _WORD *a4)
{
  int v6; // edx
  unsigned int TagHeap; // edi
  int v8; // edi
  int v9; // edx
  _WORD *v10; // rsi
  __int64 v11; // r15
  _WORD *v13; // rcx
  __int64 Tags; // rax
  __int64 v15; // rbx
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  _WORD *v19; // r12
  char v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+A0h] [rbp+8h]

  v21 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 664LL);
    if ( !RtlpGlobalTagHeap )
      return 0LL;
  }
  if ( Src && (*((_DWORD *)Src + 4) == -571548178 || (*((_DWORD *)Src + 29) & 0x1000000) != 0) )
    return 0LL;
  if ( !Src )
  {
LABEL_13:
    v8 = 0;
    v9 = 0;
    v10 = a4;
    if ( *a4 == 33 )
    {
      v11 = (__int64)(a4 + 1);
      while ( *v10++ )
        ;
    }
    else
    {
      v11 = 0LL;
    }
    v13 = v10;
    while ( *v13 )
    {
      while ( *v13++ )
        ;
      ++v9;
    }
    if ( !v9 || (Tags = RtlpAllocateTags(Src), (v15 = Tags) == 0) )
    {
LABEL_44:
      TagHeap = v8 << 18;
      goto LABEL_45;
    }
    v22 = 23LL;
    v8 = *(unsigned __int16 *)(Tags + 16);
    if ( *(_WORD *)(Tags + 16) )
    {
      if ( v8 != 2048 )
        goto LABEL_31;
      RtlStringCbCopyW((_WORD *)(Tags + 20), 0x2EuLL, (__int64)L"GlobalTags");
      v15 += 72LL;
    }
    else
    {
      if ( v11 )
        RtlStringCbCopyW((_WORD *)(Tags + 20), 0x2EuLL, v11);
      v15 += 72LL;
    }
    v8 = *(unsigned __int16 *)(v15 + 16);
LABEL_31:
    v17 = a3;
    if ( !a3 )
      goto LABEL_37;
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(a3 + 2 * v18) );
    if ( v18 && v18 < 0x13 )
    {
      v22 = 23 - v18;
    }
    else
    {
LABEL_37:
      v18 = 0LL;
      v17 = 0LL;
    }
    while ( *v10 )
    {
      v19 = (_WORD *)(v15 + 20);
      if ( v17 )
      {
        RtlStringCbCopyW((_WORD *)(v15 + 20), 2 * v22, v17);
        v19 += v18;
      }
      RtlStringCbCopyW(v19, 2 * (v22 - v18), (__int64)v10);
      while ( *v10++ )
        ;
      v15 += 72LL;
    }
    goto LABEL_44;
  }
  v6 = *((_DWORD *)Src + 29) | a2;
  if ( (v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v21 = 1;
    }
    goto LABEL_13;
  }
  TagHeap = RtlDebugCreateTagHeap(Src);
LABEL_45:
  if ( v21 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return TagHeap;
}
