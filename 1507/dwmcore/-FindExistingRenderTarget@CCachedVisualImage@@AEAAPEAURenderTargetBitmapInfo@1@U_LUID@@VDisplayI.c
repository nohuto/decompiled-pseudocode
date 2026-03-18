/*
 * XREFs of ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180052DDC
 * Callers:
 *     ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18000EE8C (-UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z.c)
 *     ?FindExistingRenderTargetAndRemoveInvalid@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@II@Z @ 0x180052D9C (-FindExistingRenderTargetAndRemoveInvalid@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180056350 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::FindExistingRenderTarget(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // r12d
  __int64 v7; // r13
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+90h] [rbp+48h]
  int v15; // [rsp+A8h] [rbp+60h] BYREF

  v12 = a1;
  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 168) )
  {
    while ( 1 )
    {
      v9 = v4;
      v11 = v5;
      v7 = *(_QWORD *)(a1 + 144) + 48LL * v6;
      if ( (*(int (__fastcall **)(_QWORD, __int64 *, int *))(**(_QWORD **)(v7 + 8) + 104LL))(
             *(_QWORD *)(v7 + 8),
             &v10,
             &v15) >= 0
        && __PAIR64__(HIDWORD(v11), v5) == v10
        && (v4 == v15 || !*(_BYTE *)(v7 + 40) && DisplayId::IsSpecific((DisplayId *)&v9) && !*(_BYTE *)(v7 + 41)) )
      {
        break;
      }
      a1 = v12;
      if ( ++v6 >= *(_DWORD *)(v12 + 168) )
        return v3;
      v4 = a3;
      v5 = a2;
    }
    return v7;
  }
  return v3;
}
