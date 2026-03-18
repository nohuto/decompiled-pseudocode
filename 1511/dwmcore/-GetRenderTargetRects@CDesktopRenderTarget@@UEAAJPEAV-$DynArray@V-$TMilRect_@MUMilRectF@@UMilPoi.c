/*
 * XREFs of ?GetRenderTargetRects@CDesktopRenderTarget@@UEAAJPEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x180107030
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetRenderTargetRects(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // ebx
  __int128 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 32) )
    return v2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3) + 80LL);
    if ( *(_QWORD *)(v6 + 136) != v6 )
      goto LABEL_11;
    v7 = *(_OWORD *)(v6 + 104);
    v8 = 0LL;
    v14 = v7;
    do
    {
      *(float *)((char *)&v15 + v8) = (float)*(int *)((char *)&v14 + v8);
      v8 += 4LL;
    }
    while ( v8 < 16 );
    v9 = *(unsigned int *)(a2 + 24);
    v10 = v9 + 1;
    if ( (int)v9 + 1 < (unsigned int)v9 )
      break;
    v2 = 0;
    if ( v10 > *(_DWORD *)(a2 + 20) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16, 1, &v15);
      v12 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      v2 = v12;
      if ( v12 < 0 )
        goto LABEL_14;
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16 * v9) = v15;
      *(_DWORD *)(a2 + 24) = v10;
    }
LABEL_11:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 32) )
      return v2;
  }
  v12 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v2 = -2147024362;
LABEL_14:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x54Cu);
  return v2;
}
