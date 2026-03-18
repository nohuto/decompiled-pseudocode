/*
 * XREFs of ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0056800
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001370C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0055DC0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, int a6)
{
  __int64 v8; // rsi
  VIDMM_CPU_HOST_APERTURE *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  if ( (*(_DWORD *)(a2 + 84) & 0x20) == 0 || (*(_DWORD *)(a1 + 56) & 4) != 0 || *(_QWORD *)(a1 + 440) )
  {
    LODWORD(v8) = VIDMM_SEGMENT::ReserveResource(a1, a2, a3, a4, a5, a6);
    if ( (int)v8 >= 0 && (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
    {
      v10 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 440);
      if ( v10 )
      {
        v11 = VIDMM_CPU_HOST_APERTURE::AcquireRange(v10, (struct _VIDMM_GLOBAL_ALLOC *)a2);
        v8 = v11;
        if ( v11 < 0 )
        {
          v14 = WdLogNewEntry5_WdWarning(v12);
          *(_QWORD *)(v14 + 24) = a1;
          *(_QWORD *)(v14 + 32) = v8;
          WdLogEvent5_WdWarning(v14);
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
    return (unsigned int)v8;
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(a1);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdWarning(v13);
    return 3221225473LL;
  }
}
