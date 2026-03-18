/*
 * XREFs of TR_AcquireSegments @ 0x1C0001008
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000BE40 (Bulk_PrepareStage.c)
 *     Isoch_PrepareStage @ 0x1C000C2C0 (Isoch_PrepareStage.c)
 * Callees:
 *     TR_EnsureSegments @ 0x1C00010B0 (TR_EnsureSegments.c)
 */

__int64 __fastcall TR_AcquireSegments(__int64 a1, unsigned int a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  KIRQL v8; // al
  unsigned int v9; // edx
  __int64 **v10; // rcx
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8

  v6 = TR_EnsureSegments(a1);
  v7 = v6;
  if ( v6 >= 0 && v6 != 259 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v9 = 0;
    *(_BYTE *)(a1 + 96) = v8;
    if ( a2 )
    {
      v10 = (__int64 **)(a1 + 200);
      do
      {
        v12 = *v10;
        v13 = **v10;
        if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v13 + 8) != v12 )
          __fastfail(3u);
        *v10 = (__int64 *)v13;
        *(_QWORD *)(v13 + 8) = v10;
        v14 = *a3;
        if ( *(__int64 **)(*a3 + 8) != a3 )
          __fastfail(3u);
        *v12 = v14;
        ++v9;
        v12[1] = (__int64)a3;
        *(_QWORD *)(v14 + 8) = v12;
        *a3 = (__int64)v12;
      }
      while ( v9 < a2 );
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  }
  return v7;
}
