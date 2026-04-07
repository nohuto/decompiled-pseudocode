/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001B050
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001B7B8 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18001AC84 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034820 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x180039E58 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // esi
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  CSecondaryWindowRepresentation *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  v4 = 0;
  if ( !a4 )
    goto LABEL_2;
  v14 = *(_DWORD *)(a1 + 448);
  v15 = v14 + 1;
  if ( v14 + 1 < v14 )
  {
    v16 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v4 = -2147024362;
    goto LABEL_26;
  }
  if ( v15 <= *(_DWORD *)(a1 + 444) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 8LL * *(unsigned int *)(a1 + 448)) = v19;
    *(_DWORD *)(a1 + 448) = v15;
    goto LABEL_2;
  }
  v17 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 424, 8LL, 1LL, &v19);
  v16 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
  v4 = v16;
  if ( v16 < 0 )
  {
LABEL_26:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1876u);
    return v4;
  }
LABEL_2:
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( ++*(_DWORD *)(a1 + 456) == 1 )
    {
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 1);
      return v4;
    }
    v10 = 0LL;
    if ( !*(_DWORD *)(a1 + 560) )
      return v4;
    while ( 1 )
    {
      v11 = *(char **)(*(_QWORD *)(a1 + 536) + 8 * v10);
      if ( v11[577] < 0 )
      {
        v13 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v19, (struct CWindowData *)v11, 1);
        v4 = v13;
        if ( v13 < 0 )
          break;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 560) )
        return v4;
    }
    v18 = 6282;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v18);
    return v4;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v4 = -2147418113;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x18A5u);
      return v4;
    }
    if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
    {
      v12 = *(_QWORD *)(a1 + 416);
      if ( v12 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        return v4;
      }
      v13 = CWindowIconic::Create((struct CWindowData *)a1, (struct CWindowIconic **)(a1 + 416), 0);
      v4 = v13;
      if ( v13 < 0 )
      {
        v18 = 6294;
        goto LABEL_28;
      }
    }
  }
  return v4;
}
