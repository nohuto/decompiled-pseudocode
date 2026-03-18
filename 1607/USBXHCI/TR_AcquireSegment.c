/*
 * XREFs of TR_AcquireSegment @ 0x1C0028A2C
 * Callers:
 *     TR_Create @ 0x1C0053D8C (TR_Create.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall TR_AcquireSegment(__int64 a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rdx

  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v2 = (__int64 **)(a1 + 200);
  if ( *v2 == (__int64 *)v2 )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    v3[1] = (__int64)v3;
    *v3 = (__int64)v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return v3;
}
