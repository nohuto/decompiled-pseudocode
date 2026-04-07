/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001E4B4
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001D478 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017048 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18001E0EC (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003AFAC (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
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
  __int64 v10; // rsi
  char *v11; // rax
  struct CWindowData *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // esi
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-18h]
  CSecondaryWindowRepresentation *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  v4 = 0;
  if ( !a4 )
    goto LABEL_2;
  v15 = *(_DWORD *)(a1 + 440);
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v17 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v4 = -2147024362;
    goto LABEL_26;
  }
  if ( v16 <= *(_DWORD *)(a1 + 436) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL * *(unsigned int *)(a1 + 440)) = v20;
    *(_DWORD *)(a1 + 440) = v16;
    goto LABEL_2;
  }
  v18 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 416, 8LL, 1LL, &v20);
  v17 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xC0u);
  v4 = v17;
  if ( v17 < 0 )
  {
LABEL_26:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x1C0Au);
    return v4;
  }
LABEL_2:
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( ++*(_DWORD *)(a1 + 448) == 1 )
    {
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 1);
      return v4;
    }
    v10 = 0LL;
    if ( !*(_DWORD *)(a1 + 552) )
      return v4;
    while ( 1 )
    {
      v11 = *(char **)(*(_QWORD *)(a1 + 528) + 8 * v10);
      if ( v11[569] < 0 )
      {
        v14 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v20, (struct CWindowData *)v11, 1);
        v4 = v14;
        if ( v14 < 0 )
          break;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 552) )
        return v4;
    }
    v19 = 7198;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, v19);
    return v4;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v4 = -2147418113;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147418113, 0x1C39u);
      return v4;
    }
    if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
    {
      v13 = *(_QWORD *)(a1 + 408);
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        return v4;
      }
      v14 = CWindowIconic::Create(v12, (struct CWindowIconic **)(a1 + 408), 0);
      v4 = v14;
      if ( v14 < 0 )
      {
        v19 = 7210;
        goto LABEL_28;
      }
    }
  }
  return v4;
}
