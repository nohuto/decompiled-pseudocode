/*
 * XREFs of BgkSetVirtualFrameBuffer @ 0x14014215C
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     BgSetFrameBufferAccessCounter @ 0x1406D9000 (BgSetFrameBufferAccessCounter.c)
 *     BgReleaseSpinLock @ 0x1406DCAC0 (BgReleaseSpinLock.c)
 *     BgAcquireSpinLock @ 0x1406DCAC8 (BgAcquireSpinLock.c)
 */

__int64 __fastcall BgkSetVirtualFrameBuffer(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  unsigned int v3; // eax
  __int64 v4; // rdi

  if ( a2 )
  {
    qword_140305D80 = a2;
  }
  else if ( !qword_140305D80 )
  {
    return 3221225712LL;
  }
  if ( (_DWORD)xmmword_1402D4B50 == 4 )
  {
    v3 = 24;
  }
  else
  {
    v3 = 1;
    if ( (_DWORD)xmmword_1402D4B50 == 5 )
      v3 = 32;
  }
  v4 = HIDWORD(BgInternal) * DWORD1(BgInternal) * (v3 >> 3);
  if ( v4 != *(_QWORD *)(a1 + 8) )
    return 3221225473LL;
  BgAcquireSpinLock();
  memmove(*(void **)a1, Src, (unsigned int)v4);
  Src = *(PVOID *)a1;
  *(__int128 *)((char *)&BgInternal + 4) = *(_OWORD *)(a1 + 24);
  BgSetFrameBufferAccessCounter(*(_QWORD *)(a1 + 16));
  byte_140305D98 = 1;
  BgReleaseSpinLock();
  return 0LL;
}
