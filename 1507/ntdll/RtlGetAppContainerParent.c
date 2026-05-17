/*
 * XREFs of RtlGetAppContainerParent @ 0x1800030B0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18003EE10 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlDefaultNpAcl @ 0x180050BE0 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlGetAppContainerSidType @ 0x18004AA20 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x18004EAE0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 */

__int64 __fastcall RtlGetAppContainerParent(__int64 a1, __int64 *a2)
{
  int v4; // ebx
  __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 Heap; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // edi
  _DWORD *v11; // rcx
  __int64 v12; // rsi
  int v14; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (int)RtlGetAppContainerSidType(a1, &v14) < 0 || v14 != 1 )
    return 3221225485LL;
  v4 = NtdllBaseTag;
  v5 = 8LL;
  v6 = RtlLengthRequiredSid(8LL);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(v4 + 1310720), v6);
  v9 = Heap;
  if ( !Heap )
    return 3221225626LL;
  LOBYTE(v8) = 8;
  v10 = RtlInitializeSid(Heap, &RtlpAppPackageAuthority, v8);
  if ( v10 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v9);
  }
  else
  {
    v11 = (_DWORD *)(v9 + 8);
    v12 = a1 - v9;
    do
    {
      *v11 = *(_DWORD *)((char *)v11 + v12);
      ++v11;
      --v5;
    }
    while ( v5 );
    *a2 = v9;
    return 0;
  }
  return (unsigned int)v10;
}
