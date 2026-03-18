/*
 * XREFs of ?ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z @ 0x18001C074
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetTrigger(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETTRIGGER *a3)
{
  __int64 Resource; // rax
  __int64 v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v11; // eax
  CAnimation *v12; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 91LL);
  *((_QWORD *)this + 16) = Resource;
  v5 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v6 = *(_DWORD *)(v5 + 64);
  v12 = this;
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_12;
  }
  v8 = 0;
  if ( v7 <= *(_DWORD *)(v5 + 60) )
  {
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8LL * v6) = v12;
    *(_DWORD *)(v5 + 64) = v7;
    goto LABEL_6;
  }
  v11 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 40, 8LL, 1LL, &v12);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xDCu);
    return v8;
  }
LABEL_6:
  v9 = *(_QWORD *)(v5 + 72);
  if ( v9 )
  {
    *((_QWORD *)this + 15) = v9;
    *((_QWORD *)this + 24) = v9;
  }
  return v8;
}
