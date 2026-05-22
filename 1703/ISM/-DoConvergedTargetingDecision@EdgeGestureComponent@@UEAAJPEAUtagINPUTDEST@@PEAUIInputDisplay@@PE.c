/*
 * XREFs of ?DoConvergedTargetingDecision@EdgeGestureComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PEAUInputInfo@@PEAW4InputTargetingResult@@@Z @ 0x180022F00
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ @ 0x180023210 (-EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ.c)
 *     ?CreateConverged@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAPEAV1@@Z @ 0x180023BB0 (-CreateConverged@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureComponent::DoConvergedTargetingDecision(
        struct EdgeGestureTarget **this,
        struct tagINPUTDEST *a2,
        struct IInputDisplay *a3,
        struct InputInfo *a4,
        enum InputTargetingResult *a5)
{
  int v5; // ebx
  int v7; // r14d
  unsigned int v8; // r12d
  unsigned int v12; // esi
  int Converged; // eax
  __int64 v14; // rcx
  int v15; // r9d
  unsigned int v16; // eax
  _BYTE *v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  int v20; // edx
  int v21; // r8d
  int v22; // eax
  struct EdgeGestureTarget *v23; // rcx
  int v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+34h] [rbp-34h] BYREF
  int v27; // [rsp+38h] [rbp-30h] BYREF

  v5 = 0;
  v7 = 0;
  v8 = 0;
  EdgeGestureComponent::EnsureEdgeThresholds((EdgeGestureComponent *)this);
  v12 = 0;
  if ( (*(_DWORD *)a4 & 0x88) != 8 )
    return v12;
  if ( a3 == this[9] )
    goto LABEL_9;
  Converged = (*(__int64 (__fastcall **)(struct IInputDisplay *, int *, int *))(*(_QWORD *)a3 + 32LL))(a3, &v27, &v26);
  v12 = Converged;
  if ( Converged >= 0 )
  {
    if ( *((_DWORD *)this + 7) != v26 || *((_DWORD *)this + 6) != v27 )
      return v12;
LABEL_9:
    v16 = 0;
    if ( !*((_DWORD *)a4 + 12) )
      return v12;
    v17 = (char *)a4 + 56;
    do
    {
      if ( (*v17 & 2) != 0 )
      {
        if ( (unsigned int)++v7 > 1 )
          return v12;
        v8 = v16;
      }
      ++v16;
      v17 += 48;
    }
    while ( v16 < *((_DWORD *)a4 + 12) );
    if ( v7 != 1 )
      return v12;
    v18 = *((_DWORD *)a4 + 12 * v8 + 16);
    v19 = *((_DWORD *)a4 + 12 * v8 + 17);
    v20 = (v18 < *((_DWORD *)this + 11) ? 4 : 0) | 8;
    if ( v18 < *((_DWORD *)this + 6) - *((_DWORD *)this + 12) )
      v20 = v18 < *((_DWORD *)this + 11) ? 4 : 0;
    v21 = v20 | 1;
    if ( v19 >= *((_DWORD *)this + 9) )
      v21 = v20;
    v22 = v21 | 2;
    if ( v19 < *((_DWORD *)this + 7) - *((_DWORD *)this + 10) )
      v22 = v21;
    if ( !v22 )
      return v12;
    *((_DWORD *)this + 13) = v18;
    *((_DWORD *)this + 14) = v19;
    *((_DWORD *)this + 22) = *((_DWORD *)a2 + 4);
    this[12] = 0LL;
    if ( !this[10] )
    {
      Converged = EdgeGestureTarget::CreateConverged(
                    (struct EdgeGestureComponent *)this,
                    *((_DWORD *)a2 + 44),
                    this + 10);
      v12 = Converged;
      if ( Converged < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v12;
        v15 = 389;
        goto LABEL_6;
      }
    }
    v23 = this[10];
    v25 = 0;
    Converged = (*(__int64 (__fastcall **)(struct EdgeGestureTarget *, struct InputInfo *, int *))(*(_QWORD *)v23 + 32LL))(
                  v23,
                  a4,
                  &v25);
    v12 = Converged;
    if ( Converged < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v12;
      v15 = 403;
      goto LABEL_6;
    }
    switch ( v25 )
    {
      case 0:
        goto LABEL_34;
      case 1:
      case 2:
        v5 = 2;
        break;
      case 3:
LABEL_34:
        v5 = 1;
        break;
    }
    *(_DWORD *)a5 = v5;
    return v12;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v15 = 312;
LABEL_6:
    Template_qqq(v14, &MinInput_Warning_CheckResult, 0, v15, Converged);
  }
  return v12;
}
