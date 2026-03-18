/*
 * XREFs of ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C0078EBC
 * Callers:
 *     ?DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z @ 0x1C0078E90 (-DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DmmGetAllHMDTargetIdForAdapter @ 0x1C0078F94 (DmmGetAllHMDTargetIdForAdapter.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkHMDDisplayEnumInternal(const struct _LUID *a1, unsigned int *a2, unsigned int *a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rbx
  unsigned int AllHMDTargetIdForAdapter; // ebx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v17; // [rsp+28h] [rbp-20h]
  char v18; // [rsp+30h] [rbp-18h]
  unsigned __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v19);
  v9 = v7;
  if ( v7 )
  {
    v17 = v7;
    v18 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v9 + 2), v9);
    if ( *((_DWORD *)v9 + 44) == 1 )
    {
      if ( *((_QWORD *)v9 + 266) )
      {
        AllHMDTargetIdForAdapter = DmmGetAllHMDTargetIdForAdapter(v9, a2, a3);
        if ( AllHMDTargetIdForAdapter == -1073741789 )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v14[3] = a1->HighPart;
          v14[4] = a1->LowPart;
          v14[5] = -1073741789LL;
          WdLogEvent5_WdError(v14);
        }
        if ( *a2 > 0x10 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v12);
          *(_QWORD *)(v15 + 24) = 7399LL;
          WdLogEvent5_WdAssertion(v15);
        }
      }
      else
      {
        *a2 = 0;
        AllHMDTargetIdForAdapter = 0;
      }
    }
    else
    {
      AllHMDTargetIdForAdapter = -1073741130;
    }
    if ( v18 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    AllHMDTargetIdForAdapter = -1073741811;
    v13[3] = a1->HighPart;
    v13[4] = a1->LowPart;
    v13[5] = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  return AllHMDTargetIdForAdapter;
}
