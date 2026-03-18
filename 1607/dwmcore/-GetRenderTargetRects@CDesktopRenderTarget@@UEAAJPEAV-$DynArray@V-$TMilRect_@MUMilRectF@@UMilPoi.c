/*
 * XREFs of ?GetRenderTargetRects@CDesktopRenderTarget@@UEAAJPEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18011DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009A468 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetRenderTargetRects(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // rax
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-48h]
  _DWORD v12[4]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3) + 152LL);
      if ( *(_QWORD *)(v6 + 136) == v6 )
      {
        v7 = *(_OWORD *)(v6 + 104);
        v8 = 0LL;
        v11 = v7;
        do
        {
          *(float *)&v12[v8] = (float)(int)v12[v8 - 4];
          ++v8;
        }
        while ( v8 < 4 );
        v9 = DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
               a2,
               v12,
               1u);
        v2 = v9;
        if ( v9 < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 32) )
        return v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5D5u);
  }
  return v2;
}
