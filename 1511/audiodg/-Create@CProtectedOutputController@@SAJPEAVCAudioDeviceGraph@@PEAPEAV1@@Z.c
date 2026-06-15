/*
 * XREFs of ?Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z @ 0x140017418
 * Callers:
 *     ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140006BE0 (-GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CProtectedOutputController::Create(
        struct CAudioDeviceGraph *a1,
        struct CProtectedOutputController **a2)
{
  _QWORD *v4; // rax

  v4 = operator new(0x48uLL);
  if ( v4 )
  {
    v4[1] = a1;
    *v4 = &CProtectedOutputController::`vftable';
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    *((_DWORD *)v4 + 14) = 10;
    *((_DWORD *)v4 + 16) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    return 2147942414LL;
  *a2 = (struct CProtectedOutputController *)v4;
  return 0LL;
}
