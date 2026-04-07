/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18002C4A4
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002E510 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800066D0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x1800188DC (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x1800189BC (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowList *this, struct CWindowData *a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  CWindowData *v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rdx
  CWindowData *v9; // r8
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // edi
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]
  CWindowData *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v3 = *((_QWORD *)a2 + 63);
  v4 = 0;
  v6 = a2;
  if ( (struct CWindowData *)v3 != a3 )
  {
    if ( v3 )
    {
      CWindowData::UpdateOwnerLists(a2, 0);
      v6 = v17;
    }
    *((_QWORD *)v6 + 63) = 0LL;
    if ( v3 )
    {
      DynArray<CWindowData *,0>::Remove((__int64 *)(v3 + 512), (__int64 *)&v17);
      v7 = *(_DWORD *)(v3 + 424);
      v8 = 0LL;
      if ( v7 )
      {
        v9 = v17;
        while ( *(CWindowData **)(*(_QWORD *)(*(_QWORD *)(v3 + 400) + 8 * v8) + 64LL) != v17 )
        {
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= v7 )
            goto LABEL_13;
        }
        v10 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
        v4 = v10;
        if ( v10 < 0 )
        {
          v16 = 3064;
LABEL_20:
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, v16);
          return v4;
        }
      }
    }
    v9 = v17;
LABEL_13:
    *((_QWORD *)v9 + 63) = a3;
    if ( a3 )
    {
      v11 = *((_DWORD *)a3 + 134);
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
      {
        v13 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        v4 = -2147024362;
LABEL_25:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xC04u);
        return v4;
      }
      if ( v12 > *((_DWORD *)a3 + 133) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a3 + 512, 8u, 1, &v17);
        v13 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xC0u);
        v4 = v13;
        if ( v13 < 0 )
          goto LABEL_25;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)a3 + 64) + 8LL * *((unsigned int *)a3 + 134)) = v17;
        *((_DWORD *)a3 + 134) = v12;
      }
      CWindowData::CheckOwnedWindowEligibility(v17);
      v10 = CWindowData::NotifyRepresentationChanged(a3);
      v4 = v10;
      if ( v10 < 0 )
      {
        v16 = 3081;
        goto LABEL_20;
      }
    }
  }
  return v4;
}
