/*
 * XREFs of sub_1C0133290 @ 0x1C0133290
 * Callers:
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0133290(__int64 a1)
{
  __int64 v1; // rax

  if ( (int)a1 < 21 )
    goto LABEL_9;
  if ( (int)a1 > 22 )
  {
    if ( (int)a1 <= 30 )
    {
LABEL_9:
      v1 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v1 + 24) = 5283LL;
      WdLogEvent5_WdAssertion(v1);
      return 0LL;
    }
    if ( (int)a1 > 33 && (_DWORD)a1 != 35 )
    {
      if ( (_DWORD)a1 == 36 || (_DWORD)a1 == 113 )
        return 8LL;
      if ( (_DWORD)a1 != 119 )
        goto LABEL_9;
    }
  }
  return 4LL;
}
