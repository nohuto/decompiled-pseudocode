/*
 * XREFs of ?DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01711B8
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C012E49C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     Template_pqqq @ 0x1C001C26C (Template_pqqq.c)
 */

void __fastcall DpiBrightnessReportState(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  _BYTE *DeviceExtension; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+28h] [rbp+20h]
  __int64 v9; // [rsp+28h] [rbp+20h]
  int v10; // [rsp+30h] [rbp+28h]
  __int64 v11; // [rsp+30h] [rbp+28h]
  int v12; // [rsp+38h] [rbp+30h]
  __int64 v13; // [rsp+38h] [rbp+30h]

  DeviceExtension = a1->DeviceExtension;
  v4 = a1;
  LOBYTE(a1) = DeviceExtension[2920];
  v5 = *((_DWORD *)DeviceExtension + 729);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v12 = 0;
    v10 = (unsigned __int8)a1;
    v8 = (unsigned __int8)a1;
    Template_pqqq((__int64)a1, &EventBrightness, a3, v4, v8, v10, v12);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v13) = 0;
      LODWORD(v11) = v5;
      LODWORD(v9) = v5;
      Template_pqqq(v6, &EventBacklightOptimizationLevel, v7, v4, v9, v11, v13);
    }
  }
}
