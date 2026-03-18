/*
 * XREFs of ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1800396D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x1800AC748 (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B0464 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessSetPrimitives(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETPRIMITIVES *a3)
{
  struct CSharedSection *Resource; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct CSharedSectionAnimationPrimitiveBuffer *v12; // [rsp+50h] [rbp+18h] BYREF

  Resource = (struct CSharedSection *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 95LL);
  v6 = CSharedSectionAnimationPrimitiveBuffer::Create(Resource, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4), &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x160u);
  }
  else
  {
    v8 = *((_QWORD *)this + 23);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *((_QWORD *)this + 23) = 0LL;
    }
    *((_QWORD *)this + 23) = v12;
    v9 = *((_QWORD *)this + 26);
    if ( !v9 || *(_QWORD *)(v9 + 144) )
    {
      v10 = CBaseAnimation::RegisterAnimateResource(this);
      v7 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x16Au);
    }
  }
  return v7;
}
