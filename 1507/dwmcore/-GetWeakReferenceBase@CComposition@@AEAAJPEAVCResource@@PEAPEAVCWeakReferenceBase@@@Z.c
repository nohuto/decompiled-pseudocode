/*
 * XREFs of ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180067FF4
 * Callers:
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800355CC (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18005A6A8 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComposition::GetWeakReferenceBase(
        CComposition *this,
        struct CResource *a2,
        struct CWeakReferenceBase **a3)
{
  unsigned int v3; // r15d
  struct CWeakReferenceBase *v4; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  PVOID inserted; // rax
  struct CWeakReferenceBase **v12; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD Buffer[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 NewElement; // [rsp+88h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
  {
    v13[0] = 0LL;
    v13[1] = a2;
    v12 = (struct CWeakReferenceBase **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 960), v13);
    v4 = *v12;
    ++*((_DWORD *)*v12 + 4);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           24LL);
    v9 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)v8 = a2;
      *(_DWORD *)(v8 + 16) = 1;
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      Buffer[0] = v9;
      Buffer[1] = a2;
      NewElement = 0;
      inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 960), Buffer, 0x10u, &NewElement);
      *(_QWORD *)(v9 + 8) = inserted;
      if ( inserted )
      {
        v4 = (struct CWeakReferenceBase *)v9;
        v9 = 0LL;
        *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x124Au);
      }
      if ( v9 )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v9);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1242u);
    }
  }
  *a3 = v4;
  return v3;
}
