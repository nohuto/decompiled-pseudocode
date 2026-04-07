/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017048
 * Callers:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001E15C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001E3D0 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001E4B4 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180013244 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180016490 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180017904 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
        CSecondaryWindowRepresentation *this,
        struct CWindowData *a2,
        char a3)
{
  unsigned int v3; // edi
  unsigned int v6; // r8d
  __int64 v7; // rdx
  int inserted; // eax
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  int v13; // ebp
  unsigned int v14; // [rsp+20h] [rbp-18h]
  CBaseObject *v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v15 = 0LL;
  if ( !*((_QWORD *)this + 4) )
    return v3;
  if ( !a3 )
  {
    v6 = *((_DWORD *)this + 38);
    v7 = 0LL;
    if ( !v6 )
      return v3;
    while ( *(struct CWindowData **)(*(_QWORD *)(*((_QWORD *)this + 16) + 8 * v7) + 32LL) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        return v3;
    }
    CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, v7);
    goto LABEL_13;
  }
  inserted = CSecondaryWindowRepresentation::Create(1LL, (__int64)this + 16, (__int64)a2, 0, 100, &v15);
  v3 = inserted;
  if ( inserted >= 0 )
  {
    v10 = *((_DWORD *)this + 38);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v3 = -2147024362;
    }
    else
    {
      if ( v11 <= *((_DWORD *)this + 37) )
      {
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * *((unsigned int *)this + 38)) = v15;
        *((_DWORD *)this + 38) = v11;
        goto LABEL_11;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 128, 8LL, 1LL, &v15);
      v13 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xC0u);
      v3 = v13;
      if ( v13 >= 0 )
      {
LABEL_11:
        _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
        inserted = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v14 = 614;
        }
        else
        {
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
                       *((struct CVisual **)v15 + 6),
                       0LL,
                       0,
                       1);
          v3 = inserted;
          if ( inserted >= 0 )
            goto LABEL_13;
          v14 = 617;
        }
        goto LABEL_21;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x263u);
    goto LABEL_13;
  }
  v14 = 609;
LABEL_21:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, v14);
LABEL_13:
  if ( v15 )
    CBaseObject::Release(v15);
  return v3;
}
