/*
 * XREFs of ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1C001B5F8
 * Callers:
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C001B424 (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 * Callees:
 *     <none>
 */

void __fastcall FillSimpleDevModeField(struct _devicemodeW *const a1, struct _DXGK_DIAG_SIMPLE_DEVMODE *a2)
{
  if ( a1 )
  {
    *(_DWORD *)a2 = a1->dmFields;
    *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)&a1->dmOrientation;
    *((_DWORD *)a2 + 3) = a1->dmBitsPerPel;
    *((_DWORD *)a2 + 4) = a1->dmPelsWidth;
    *((_DWORD *)a2 + 5) = a1->dmPelsHeight;
    *((_DWORD *)a2 + 6) = a1->dmDisplayFrequency;
    *((_DWORD *)a2 + 7) = a1->dmDriverExtra;
    *((_QWORD *)a2 + 4) = *(_QWORD *)&a1->dmDisplayOrientation;
    *((_DWORD *)a2 + 10) = a1->dmDisplayFlags;
  }
}
