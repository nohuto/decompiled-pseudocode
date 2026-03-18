/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C001EAC8 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C001EC8C (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C002DD1C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002E0A0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C002E150 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0036900 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  int v4; // r10d
  int v5; // r9d
  _QWORD *v6; // rbx
  BOOL v7; // r14d
  BOOL v8; // ebp
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax

  v4 = *(_DWORD *)(*(_QWORD *)this + 32LL);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  *(_DWORD *)(*(_QWORD *)a2 + 32LL) = v4;
  v5 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v5;
  v6 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v7 = *v6 == (_QWORD)v6;
  v8 = *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *(_QWORD *)a2 + 48LL;
  if ( *(_QWORD *)this != -48LL )
  {
    KeEnterCriticalRegion();
    v9 = *v6;
    v10 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v10 != v6 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v6[1] = v6;
    *v6 = v6;
    KeLeaveCriticalRegion();
  }
  v11 = (_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( *(_QWORD *)a2 != -48LL )
  {
    KeEnterCriticalRegion();
    v12 = *v11;
    v13 = (_QWORD *)v11[1];
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v13 != v11 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    v11[1] = v11;
    *v11 = v11;
    KeLeaveCriticalRegion();
  }
  v14 = *(_QWORD *)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v14;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    if ( !v7 )
      PushThreadGuardedObject(*(_QWORD *)this + 48LL, *(_QWORD *)this, CleanUpRegion);
    if ( !v8 )
    {
      v16 = *(_QWORD *)a2;
      v17 = (_QWORD *)(*(_QWORD *)a2 + 48LL);
      if ( *(_QWORD *)a2 != -48LL )
      {
        KeEnterCriticalRegion();
        v18 = 0LL;
        v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v19 )
          v18 = *v19;
        v17[2] = v16;
        v17[3] = CleanUpRegion;
        if ( v18 )
        {
          v20 = *(_QWORD *)(v18 + 88);
          v21 = (_QWORD *)(v18 + 88);
          if ( *(_QWORD *)(v20 + 8) != v18 + 88 )
            __fastfail(3u);
          *v17 = v20;
          v17[1] = v21;
          *(_QWORD *)(v20 + 8) = v17;
          *v21 = v17;
        }
        else
        {
          v17[1] = v17;
          *v17 = v17;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
}
