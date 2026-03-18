/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C007E814
 * Callers:
 *     rimCompleteReads @ 0x1C000F0AC (rimCompleteReads.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0010BF0 (WPP_RECORDER_SF_qq.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(__int64 a1)
{
  __int64 **v2; // rdi
  unsigned int v3; // esi
  __int64 *v4; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 *v8; // rcx

  v2 = (__int64 **)(a1 + 768);
  v3 = -1073741823;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 == (__int64 *)v2 )
      break;
    v6 = v4 - 22;
    v7 = *v4;
    v8 = (__int64 *)v4[1];
    if ( *(__int64 **)(*v4 + 8) != v4 || (__int64 *)*v8 != v4 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v4[1] = (__int64)v4;
    *v4 = (__int64)v4;
    if ( (v6[30] & 0x100) == 0 )
    {
      rimProcessDeviceBufferAndStartRead(a1, v6 + 8);
      if ( !*(_BYTE *)(a1 + 760) )
        return 0;
    }
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3u,
      0xCu,
      (__int64)&WPP_1792ef5d37ca7c4ae58820114973c564_Traceguids,
      v6,
      a1);
  }
  return v3;
}
