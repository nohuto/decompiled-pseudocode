/*
 * XREFs of ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180022C40
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?HitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z @ 0x180023114 (-HitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z.c)
 *     ?EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ @ 0x180023210 (-EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ.c)
 *     ?Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAXPEAPEAV1@@Z @ 0x180023A6C (-Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAXPEAPEAV1@@Z.c)
 *     ?UpdateInputTarget@EdgeGestureTarget@@QEAAJIPEAX@Z @ 0x180023D80 (-UpdateInputTarget@EdgeGestureTarget@@QEAAJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgeGestureComponent::OnHitTest(
        struct EdgeGestureTarget **this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        __int64 a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  int v9; // ebp
  unsigned int v10; // r13d
  int v11; // r15d
  __int64 v12; // rbx
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rdx
  unsigned int v18; // r10d
  unsigned int v19; // r8d
  int v20; // edx
  int v21; // r9d
  int v22; // eax
  _QWORD *v23; // r14
  EdgeGestureTarget *v24; // rcx
  struct EdgeGestureTarget *v25; // r8
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v30; // [rsp+30h] [rbp-58h] BYREF
  int v31; // [rsp+34h] [rbp-54h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h]
  int v33; // [rsp+40h] [rbp-48h]
  __int64 v34; // [rsp+48h] [rbp-40h]
  int v35; // [rsp+50h] [rbp-38h]

  v32 = -2LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v33 = 0;
  v12 = 0LL;
  v34 = 0LL;
  EdgeGestureComponent::EnsureEdgeThresholds((EdgeGestureComponent *)this);
  v13 = 0;
  if ( (*(_DWORD *)a3 & 0x88) == 8 )
  {
    if ( a2 == this[9] )
      goto LABEL_40;
    v14 = (*(__int64 (__fastcall **)(struct IInputDisplay *, int *, int *))(*(_QWORD *)a2 + 32LL))(a2, &v31, &v30);
    v13 = v14;
    if ( v14 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_31;
      v16 = 167;
      goto LABEL_6;
    }
    if ( *((_DWORD *)this + 7) == v30 && *((_DWORD *)this + 6) == v31 )
    {
LABEL_40:
      v17 = 0LL;
      if ( *((_DWORD *)a3 + 12) )
      {
        do
        {
          if ( (*((_BYTE *)a3 + 48 * v17 + 56) & 2) != 0 )
          {
            if ( (unsigned int)++v9 > 1 )
              goto LABEL_31;
            v10 = v17;
          }
          v17 = (unsigned int)(v17 + 1);
        }
        while ( (unsigned int)v17 < *((_DWORD *)a3 + 12) );
        if ( v9 == 1 )
        {
          v18 = *((_DWORD *)a3 + 12 * v10 + 16);
          v19 = *((_DWORD *)a3 + 12 * v10 + 17);
          v20 = (v18 < *((_DWORD *)this + 11) ? 4 : 0) | 8;
          if ( v18 < *((_DWORD *)this + 6) - *((_DWORD *)this + 12) )
            v20 = v18 < *((_DWORD *)this + 11) ? 4 : 0;
          v21 = v20 | 1;
          if ( v19 >= *((_DWORD *)this + 9) )
            v21 = v20;
          v22 = v21 | 2;
          if ( v19 < *((_DWORD *)this + 7) - *((_DWORD *)this + 10) )
            v22 = v21;
          if ( v22 && EdgeGestureComponent::HitTest((EdgeGestureComponent *)this, v18, v19, 0LL) )
          {
            v23 = this + 10;
            v24 = this[10];
            v25 = this[12];
            v26 = *((_DWORD *)this + 22);
            if ( v24 )
            {
              EdgeGestureTarget::UpdateInputTarget(v24, v26, v25);
            }
            else
            {
              v14 = EdgeGestureTarget::Create((struct EdgeGestureComponent *)this, v26, v25, this + 10);
              v13 = v14;
              if ( v14 < 0 )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                {
                  v16 = 238;
LABEL_6:
                  Template_qqq(v15, &MinInput_Warning_CheckResult, 0, v16, v14);
                  goto LABEL_31;
                }
                goto LABEL_31;
              }
            }
            v11 = 2;
            v33 = 2;
            v27 = *v23 + 8LL;
            v12 = v27 & -(__int64)(*v23 != 0LL);
            if ( v12 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v27 & -(__int64)(*v23 != 0LL));
            v34 = v12;
          }
        }
      }
    }
  }
LABEL_31:
  *(_DWORD *)a6 = v11;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v28 = *((_QWORD *)a6 + 1);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  *((_QWORD *)a6 + 1) = v12;
  *((_DWORD *)a6 + 4) = v35;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v13;
}
