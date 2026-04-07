/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034820
 * Callers:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001ACF4 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001AF68 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001B050 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 * Callees:
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180008DF4 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800350AC (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800357F4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]
  CBaseObject *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0LL;
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
    goto LABEL_11;
  }
  inserted = CSecondaryWindowRepresentation::Create(1LL, (char *)this + 16, a2, 0LL, 100, &v16);
  v3 = inserted;
  if ( inserted >= 0 )
  {
    v10 = *((_DWORD *)this + 38);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
    }
    else
    {
      if ( v11 <= *((_DWORD *)this + 37) )
      {
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v10) = v16;
        *((_DWORD *)this + 38) = v11;
        goto LABEL_9;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 128, 8u, 1, &v16);
      v13 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      v3 = v13;
      if ( v13 >= 0 )
      {
LABEL_9:
        _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
        inserted = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v15 = 614;
        }
        else
        {
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
                       *((struct CVisual **)v16 + 6),
                       0LL,
                       0,
                       1);
          v3 = inserted;
          if ( inserted >= 0 )
            goto LABEL_11;
          v15 = 617;
        }
        goto LABEL_19;
      }
    }
    v15 = 611;
    v14 = v13;
    goto LABEL_22;
  }
  v15 = 609;
LABEL_19:
  v14 = inserted;
LABEL_22:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
LABEL_11:
  if ( v16 )
    CBaseObject::Release(v16);
  return v3;
}
