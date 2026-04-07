/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180018C30
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180017C5C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18001886C (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003401C (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003B84C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 */

__int64 __fastcall CWindowData::AddSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  unsigned int v4; // ebx
  int v7; // ebp
  int v8; // ebp
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // esi
  int v15; // eax
  __int64 v16; // rsi
  char *v17; // rax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  CSecondaryWindowRepresentation *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  v4 = 0;
  if ( !a4 )
    goto LABEL_2;
  v12 = *(_DWORD *)(a1 + 424);
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v4 = -2147024362;
    goto LABEL_20;
  }
  if ( v13 <= *(_DWORD *)(a1 + 420) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 400) + 8LL * *(unsigned int *)(a1 + 424)) = v19;
    *(_DWORD *)(a1 + 424) = v13;
    goto LABEL_2;
  }
  v15 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 400, 8LL, 1LL, &v19);
  v14 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xC0u);
  v4 = v14;
  if ( v14 < 0 )
  {
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x1C16u);
    return v4;
  }
LABEL_2:
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        v4 = -2147418113;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147418113, 0x1C45u);
        return v4;
      }
      if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
      {
        v10 = *(_QWORD *)(a1 + 392);
        if ( v10 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        }
        else
        {
          v11 = CWindowIconic::Create((struct CWindowData *)a1, (struct CWindowIconic **)(a1 + 392), 0);
          v4 = v11;
          if ( v11 < 0 )
          {
            v18 = 7222;
            goto LABEL_22;
          }
        }
      }
    }
  }
  else
  {
    if ( ++*(_DWORD *)(a1 + 432) != 1 )
    {
      v16 = 0LL;
      if ( !*(_DWORD *)(a1 + 536) )
        return v4;
      while ( 1 )
      {
        v17 = *(char **)(*(_QWORD *)(a1 + 512) + 8 * v16);
        if ( v17[553] < 0 )
        {
          v11 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v19, (struct CWindowData *)v17, 1);
          v4 = v11;
          if ( v11 < 0 )
            break;
        }
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= *(_DWORD *)(a1 + 536) )
          return v4;
      }
      v18 = 7210;
LABEL_22:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, v18);
      return v4;
    }
    CWindowData::TrackOwnedWindows((CWindowData *)a1, 1);
  }
  return v4;
}
