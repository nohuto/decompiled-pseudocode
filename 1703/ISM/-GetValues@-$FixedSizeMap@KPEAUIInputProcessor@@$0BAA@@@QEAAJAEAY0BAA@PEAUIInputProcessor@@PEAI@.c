/*
 * XREFs of ?GetValues@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEAY0BAA@PEAUIInputProcessor@@PEAI@Z @ 0x18000728C
 * Callers:
 *     ??1InputStateManager@@MEAA@XZ @ 0x180005BA4 (--1InputStateManager@@MEAA@XZ.c)
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180006190 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006A00 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<unsigned long,IInputProcessor *,256>::GetValues(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11

  v3 = a1;
  v4 = 0LL;
  v5 = 256LL;
  do
  {
    if ( *(_DWORD *)v3 != *(_DWORD *)(a1 + 4096) )
    {
      *(_QWORD *)(a2 + 8 * v4) = *(_QWORD *)(v3 + 8);
      v4 = (unsigned int)(v4 + 1);
    }
    v3 += 16LL;
    --v5;
  }
  while ( v5 );
  if ( a3 )
    *a3 = v4;
  return 0LL;
}
