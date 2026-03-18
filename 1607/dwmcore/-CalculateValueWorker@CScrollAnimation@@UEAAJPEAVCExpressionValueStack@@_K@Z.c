/*
 * XREFs of ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18015D910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x1801128B0 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 *     ?GetActiveCenterPoint@CInteractionTracker@@QEBA?AUD2DVector3@@XZ @ 0x18014A680 (-GetActiveCenterPoint@CInteractionTracker@@QEBA-AUD2DVector3@@XZ.c)
 *     ?AnimationStateToString@CScrollAnimation@@IEAAPEBGW4AnimationState@1@@Z @ 0x18015D694 (-AnimationStateToString@CScrollAnimation@@IEAAPEBGW4AnimationState@1@@Z.c)
 *     ?CalculateDeltaForState@CScrollAnimation@@QEAAMW4ScrollState@@@Z @ 0x18015D8E4 (-CalculateDeltaForState@CScrollAnimation@@QEAAMW4ScrollState@@@Z.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18015E3B0 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateValueWorker(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  float v6; // xmm0_4
  int v7; // eax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  const WCHAR *v14; // rax
  __int64 v15; // rcx
  const WCHAR *v16; // rax
  __int64 *v17; // r9
  __int64 v18; // rcx
  __int64 ActiveCenterPoint; // rax
  __int64 *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  float v26; // [rsp+30h] [rbp-89h] BYREF
  CScrollAnimation *v27; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v28[16]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v29[16]; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  CScrollAnimation **v31; // [rsp+80h] [rbp-39h]
  int v32; // [rsp+88h] [rbp-31h]
  int v33; // [rsp+8Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A0h] [rbp-19h] BYREF
  float *v36; // [rsp+B0h] [rbp-9h]
  int v37; // [rsp+B8h] [rbp-1h]
  int v38; // [rsp+BCh] [rbp+3h]
  __int64 v39; // [rsp+C0h] [rbp+7h]
  int v40; // [rsp+C8h] [rbp+Fh]
  int v41; // [rsp+CCh] [rbp+13h]
  __int64 v42; // [rsp+D0h] [rbp+17h]
  int v43; // [rsp+D8h] [rbp+1Fh]
  int v44; // [rsp+DCh] [rbp+23h]
  char *v45; // [rsp+E0h] [rbp+27h]
  int v46; // [rsp+E8h] [rbp+2Fh]
  int v47; // [rsp+ECh] [rbp+33h]

  v6 = (*(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this);
  v7 = *((_DWORD *)this + 134);
  *((_QWORD *)this + 59) = a3;
  v8 = 0LL;
  v26 = v6;
  *((_QWORD *)this + 60) = a2;
  if ( v7 - 1 > 0 )
  {
    do
    {
      CScrollAnimation::CalculateDeltaForState(this, *(_DWORD *)(*((_QWORD *)this + 64) + 4 * v8));
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (int)v8 < *((_DWORD *)this + 134) - 1 );
  }
  *((_DWORD *)this + 134) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 512, 4u);
  v9 = (__int64 *)*((_QWORD *)this + 54);
  if ( v9 )
    v10 = *v9;
  else
    v10 = 0LL;
  v26 = CScrollAnimation::CalculateDeltaForState(this, *(_DWORD *)(v10 + 204));
  v11 = CExpressionValueStack::PushConstant(a2, v26);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xF9u);
  }
  else if ( (unsigned int)pRelatedActivityId > 4
         && (qword_1801EAA90 & 2) != 0
         && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v13 = *((unsigned int *)this + 72);
    v33 = 0;
    v31 = &v27;
    v27 = this;
    v32 = 8;
    v14 = (const WCHAR *)ScrollAxisToString(v13);
    TlgCreateWsz(&pDesc, v14);
    v16 = CScrollAnimation::AnimationStateToString(v15, *((_DWORD *)this + 106));
    TlgCreateWsz(&v35, v16);
    v17 = (__int64 *)*((_QWORD *)this + 54);
    v38 = 0;
    v36 = &v26;
    v37 = 4;
    if ( v17 )
      v18 = *v17;
    else
      v18 = 0LL;
    ActiveCenterPoint = CInteractionTracker::GetActiveCenterPoint(v18, (__int64)v28);
    v41 = 0;
    v39 = ActiveCenterPoint;
    v40 = 4;
    if ( v20 )
      v21 = *v20;
    else
      v21 = 0LL;
    v22 = CInteractionTracker::GetActiveCenterPoint(v21, (__int64)v29);
    v44 = 0;
    v47 = 0;
    v42 = v22 + 4;
    v45 = (char *)this + 416;
    v43 = 4;
    v46 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4D5C, v23, v24, 9u, &pData);
  }
  return v12;
}
