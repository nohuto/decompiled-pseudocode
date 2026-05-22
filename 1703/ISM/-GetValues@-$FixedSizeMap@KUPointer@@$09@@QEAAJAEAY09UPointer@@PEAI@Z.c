/*
 * XREFs of ?GetValues@?$FixedSizeMap@KUPointer@@$09@@QEAAJAEAY09UPointer@@PEAI@Z @ 0x18007F04C
 * Callers:
 *     ?SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z @ 0x18007EA94 (-SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<unsigned long,Pointer,10>::GetValues(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  _DWORD *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // rcx

  v3 = 0LL;
  v4 = (_DWORD *)(a1 + 520);
  v5 = a1;
  v6 = 10LL;
  do
  {
    if ( *(_DWORD *)v5 != *v4 )
    {
      v7 = 6 * v3;
      v3 = (unsigned int)(v3 + 1);
      *(_OWORD *)(a2 + 8 * v7) = *(_OWORD *)(v5 + 4);
      *(_OWORD *)(a2 + 8 * v7 + 16) = *(_OWORD *)(v5 + 20);
      *(_OWORD *)(a2 + 8 * v7 + 32) = *(_OWORD *)(v5 + 36);
    }
    v5 += 52LL;
    --v6;
  }
  while ( v6 );
  if ( a3 )
    *a3 = v3;
  return 0LL;
}
