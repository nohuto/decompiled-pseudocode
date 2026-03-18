/*
 * XREFs of ?ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z @ 0x18001EF98
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  int v8; // ebx
  __int64 v9; // rax
  int v11; // eax
  CAnimation *v12; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 96LL);
  *((_QWORD *)this + 26) = Resource;
  v5 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v6 = *(_DWORD *)(v5 + 136);
  v12 = this;
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v8 = 0;
    if ( v7 <= *(_DWORD *)(v5 + 132) )
    {
      *(_QWORD *)(*(_QWORD *)(v5 + 112) + 8LL * v6) = v12;
      *(_DWORD *)(v5 + 136) = v7;
      goto LABEL_6;
    }
    v11 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 112, 8LL, 1LL, &v12);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xDFu);
    return (unsigned int)v8;
  }
LABEL_6:
  v9 = *(_QWORD *)(v5 + 144);
  if ( v9 )
  {
    *((_QWORD *)this + 25) = v9;
    *((_QWORD *)this + 34) = v9;
  }
  return (unsigned int)v8;
}
