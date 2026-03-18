/*
 * XREFs of ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18015E0D8
 * Callers:
 *     ?EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ @ 0x18014A474 (-EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?Initialize@CScrollPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18015FB0C (-Initialize@CScrollPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180088BC0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelM.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetPropertyHandle@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAI@Z @ 0x18014ABE4 (-GetPropertyHandle@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAI@Z.c)
 */

__int64 __fastcall CScrollAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  __int64 **v3; // r14
  int WeakReferenceBase; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int PropertyHandle; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  int v15; // xmm1_4
  __int64 v16; // rcx
  int v17; // xmm0_4
  __int64 v18; // rcx
  int v19; // eax
  int v21; // [rsp+70h] [rbp+8h] BYREF

  v3 = (__int64 **)(a1 + 432);
  WeakReferenceBase = CComposition::GetWeakReferenceBase(
                        *(CComposition **)(a1 + 16),
                        (struct CResource *)a2,
                        (struct CWeakReferenceBase **)(a1 + 432));
  v9 = WeakReferenceBase;
  if ( WeakReferenceBase < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x4Fu);
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 288) = a3;
  PropertyHandle = CInteractionTracker::GetPropertyHandle(v8, a3, &v21);
  v9 = PropertyHandle;
  if ( PropertyHandle < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PropertyHandle, 0x5Au);
    goto LABEL_17;
  }
  v11 = CBaseExpression::SetTarget(a1, a2[92], (struct CResource *)a2, a2[93], v21, 0x12u, 0, 0, 0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x64u);
LABEL_17:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 184LL))(a1);
    return v9;
  }
  v12 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 468) |= 4u;
  ++*(_DWORD *)(*(_QWORD *)(v12 + 168) + 96LL);
  v13 = *v3;
  if ( *v3 )
    v14 = *v13;
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(v14 + 628);
  if ( v13 )
    v16 = *v13;
  else
    v16 = 0LL;
  v17 = *(_DWORD *)(v16 + 624);
  if ( v13 )
    v18 = *v13;
  else
    v18 = 0LL;
  v19 = *(_DWORD *)(v18 + 620);
  v9 = 0;
  *(_DWORD *)(a1 + 360) = v17;
  *(_DWORD *)(a1 + 364) = v15;
  *(_DWORD *)(a1 + 356) = v19;
  return v9;
}
