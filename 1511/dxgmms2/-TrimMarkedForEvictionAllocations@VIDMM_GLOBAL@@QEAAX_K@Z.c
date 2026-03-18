/*
 * XREFs of ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C007C2BC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(VIDMM_GLOBAL *this, unsigned __int64 a2, __int64 a3)
{
  __int64 i; // rsi
  __int64 v6; // r14
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-38h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * i);
    if ( (*(_DWORD *)(v6 + 56) & 0x1001) != 0 && *(_QWORD *)(v6 + 168) != v6 + 168 )
    {
      v7 = (_QWORD *)(v6 + 168);
      while ( (_QWORD *)*v7 != v7 )
      {
        v8 = (_QWORD *)*v7;
        LOBYTE(a3) = 1;
        LOBYTE(v10) = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v6 + 48LL))(
          v6,
          *v7 - 384LL,
          a3,
          0LL,
          v10,
          0LL);
        v9 = *(v8 - 46);
        if ( v9 >= a2 )
        {
          a2 = 0LL;
          break;
        }
        a2 -= v9;
      }
      if ( !a2 )
        break;
    }
  }
}
