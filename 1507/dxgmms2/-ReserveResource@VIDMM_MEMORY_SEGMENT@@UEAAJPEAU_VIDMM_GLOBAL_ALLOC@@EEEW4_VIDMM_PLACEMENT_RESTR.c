/*
 * XREFs of ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C006F690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001133C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C003D820 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, int a6)
{
  __int64 v8; // rax
  __int64 v10; // rsi
  VIDMM_CPU_HOST_APERTURE *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax

  if ( (*(_DWORD *)(a2 + 84) & 0x20) == 0 || (*(_DWORD *)(a1 + 56) & 4) != 0 || *(_QWORD *)(a1 + 440) )
  {
    LODWORD(v10) = VIDMM_SEGMENT::ReserveResource(a1, a2, a3, a4, a5, a6);
    if ( (int)v10 >= 0 && (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
    {
      v11 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 440);
      if ( v11 )
      {
        v12 = VIDMM_CPU_HOST_APERTURE::AcquireRange(v11, (struct _VIDMM_GLOBAL_ALLOC *)a2);
        v10 = v12;
        if ( v12 < 0 )
        {
          v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v16 + 24) = a1;
          *(_QWORD *)(v16 + 32) = v10;
          WdLogEvent5_WdWarning(v16);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 24LL))(
            a1,
            a2,
            *(_QWORD *)(a2 + 200),
            *(_QWORD *)(a2 + 16));
          *(_QWORD *)(a2 + 216) = 0LL;
          *(_QWORD *)(a2 + 200) = 0LL;
        }
      }
    }
    return (unsigned int)v10;
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v8 + 24) = a1;
    WdLogEvent5_WdWarning(v8);
    return 3221225473LL;
  }
}
