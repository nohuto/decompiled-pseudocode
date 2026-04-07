/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18002F814
 * Callers:
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002F9F0 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001E15C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001E23C (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002B0D0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18003CE80 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowData **this, struct CWindowData *a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  CWindowData *v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rdx
  CWindowData *v9; // r8
  int v10; // eax
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // edi
  unsigned int v16; // [rsp+20h] [rbp-18h]
  CWindowData **v17; // [rsp+40h] [rbp+8h] BYREF
  CWindowData *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v17 = this;
  v3 = *((_QWORD *)a2 + 65);
  v4 = 0;
  v6 = a2;
  if ( (struct CWindowData *)v3 != a3 )
  {
    if ( v3 )
    {
      CWindowData::UpdateOwnerLists(a2, 0);
      v6 = v18;
    }
    *((_QWORD *)v6 + 65) = 0LL;
    if ( v3 )
    {
      DynArray<CWindowData *,0>::Remove(v3 + 528, &v18);
      v7 = *(_DWORD *)(v3 + 440);
      v8 = 0LL;
      if ( v7 )
      {
        v9 = v18;
        while ( *(CWindowData **)(*(_QWORD *)(*(_QWORD *)(v3 + 416) + 8 * v8) + 64LL) != v18 )
        {
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= v7 )
            goto LABEL_13;
        }
        v10 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
        v4 = v10;
        if ( v10 < 0 )
        {
          v16 = 3052;
LABEL_20:
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, v16);
          return (unsigned int)v4;
        }
      }
    }
    v9 = v18;
LABEL_13:
    *((_QWORD *)v9 + 65) = a3;
    if ( a3 )
    {
      v11 = (_QWORD *)((char *)a3 + 528);
      v12 = *((_DWORD *)a3 + 138);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        v4 = -2147024362;
LABEL_26:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xBF8u);
        return (unsigned int)v4;
      }
      if ( v13 > *((_DWORD *)a3 + 137) )
      {
        v17 = &v18;
        v4 = DynArrayImpl<0>::Grow((__int64)a3 + 528, 8u, 1, 0, (unsigned __int64 *)&v17);
        if ( v4 >= 0 )
          *(_QWORD *)(*v11 + (unsigned int)(8 * (*((_DWORD *)a3 + 138))++)) = *v17;
        v14 = v4;
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0xC0u);
          goto LABEL_26;
        }
      }
      else
      {
        *(_QWORD *)(*v11 + 8LL * *((unsigned int *)a3 + 138)) = v18;
        *((_DWORD *)a3 + 138) = v13;
      }
      CWindowData::CheckOwnedWindowEligibility(v18);
      v10 = CWindowData::NotifyRepresentationChanged(a3);
      v4 = v10;
      if ( v10 < 0 )
      {
        v16 = 3069;
        goto LABEL_20;
      }
    }
  }
  return (unsigned int)v4;
}
