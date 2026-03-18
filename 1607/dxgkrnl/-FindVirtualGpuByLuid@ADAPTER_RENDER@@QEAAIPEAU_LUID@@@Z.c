/*
 * XREFs of ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z @ 0x1C015A698
 * Callers:
 *     ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0159C40 (-DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?DdiVirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C0159E10 (-DdiVirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C015A92C (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::FindVirtualGpuByLuid(ADAPTER_RENDER *this, struct _LUID *a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  __int64 v5; // r9
  unsigned int v6; // r11d
  __int64 v7; // rax

  v3 = *((_QWORD *)this + 134);
  v4 = -1;
  v5 = *((unsigned int *)this + 267);
  if ( v3 )
  {
    v6 = *((_DWORD *)this + 266);
    a3 = 0LL;
    if ( v6 )
    {
      while ( (_DWORD)v5 )
      {
        this = *(ADAPTER_RENDER **)(v3 + 8 * a3);
        if ( this )
        {
          if ( a2->LowPart == *((_DWORD *)this + 1) && a2->HighPart == *((_DWORD *)this + 2) )
          {
            v4 = *(_DWORD *)this;
            if ( *(_DWORD *)this != -1 )
              return v4;
            break;
          }
          v5 = (unsigned int)(v5 - 1);
        }
        a3 = (unsigned int)(a3 + 1);
        if ( (unsigned int)a3 >= v6 )
          break;
      }
    }
  }
  v7 = WdLogNewEntry5_WdWarning(this, a2, a3, v5);
  *(_QWORD *)(v7 + 24) = 1353LL;
  WdLogEvent5_WdWarning(v7);
  return v4;
}
